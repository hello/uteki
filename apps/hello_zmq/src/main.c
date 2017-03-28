#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

void receiver(void)
{
    void *context = zmq_ctx_new();
    void * subscriber = zmq_socket(context, ZMQ_SUB);
    assert(0 == zmq_connect(subscriber, "ipc:///tmp/test"));
    assert(0 == zmq_setsockopt(subscriber, ZMQ_SUBSCRIBE, "topic", 5));
    while(1) {
        char buffer[32] = {0};
        if (zmq_recv(subscriber, buffer, sizeof(buffer), 0) >= 0) {
            printf("receiver msg %s\n", buffer);
        } else {
            printf("receiver error\n");
        }
        /*
         *printf("sub\n");
         *sleep(1);
         */
    }
}

void transmitter(void)
{
    void *context = zmq_ctx_new();
    void * publisher = zmq_socket(context, ZMQ_PUB);
    assert(0 == zmq_bind(publisher, "ipc:///tmp/test"));
    while(1) {
        printf("pub\r\n");
        char message[] = "topic message";
        int err = zmq_send(publisher, message,sizeof(message), 0);
        if (err == -1 ){
            printf("error is %d", errno);
            break;
        }
        sleep(1);
    }
}

int main(int argc, char * argv[])
{
    printf("Hello zmq!\r\n");
    pid_t pid = fork();
    if(0 == pid){
        sleep(3);
        printf("receiver");
        receiver();
    } else {
        printf("transmiter");
        transmitter();
    }

    return 0;
}
