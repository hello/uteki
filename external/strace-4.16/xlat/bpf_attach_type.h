/* Generated by ./xlat/gen.sh from ./xlat/bpf_attach_type.in; do not edit. */
#if !(defined(BPF_CGROUP_INET_INGRESS) || (defined(HAVE_DECL_BPF_CGROUP_INET_INGRESS) && HAVE_DECL_BPF_CGROUP_INET_INGRESS))
# define BPF_CGROUP_INET_INGRESS 0
#endif
#if !(defined(BPF_CGROUP_INET_EGRESS) || (defined(HAVE_DECL_BPF_CGROUP_INET_EGRESS) && HAVE_DECL_BPF_CGROUP_INET_EGRESS))
# define BPF_CGROUP_INET_EGRESS 1
#endif
#if !(defined(BPF_CGROUP_INET_SOCK_CREATE) || (defined(HAVE_DECL_BPF_CGROUP_INET_SOCK_CREATE) && HAVE_DECL_BPF_CGROUP_INET_SOCK_CREATE))
# define BPF_CGROUP_INET_SOCK_CREATE 2
#endif

#ifdef IN_MPERS

# error static const struct xlat bpf_attach_type in mpers mode

#else

static
const struct xlat bpf_attach_type[] = {
 XLAT(BPF_CGROUP_INET_INGRESS),
 XLAT(BPF_CGROUP_INET_EGRESS),
 XLAT(BPF_CGROUP_INET_SOCK_CREATE),
 XLAT_END
};

#endif /* !IN_MPERS */
