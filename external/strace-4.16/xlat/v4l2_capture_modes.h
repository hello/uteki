/* Generated by ./xlat/gen.sh from ./xlat/v4l2_capture_modes.in; do not edit. */

#ifdef IN_MPERS

extern const struct xlat v4l2_capture_modes[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat v4l2_capture_modes[] = {
#if defined(V4L2_MODE_HIGHQUALITY) || (defined(HAVE_DECL_V4L2_MODE_HIGHQUALITY) && HAVE_DECL_V4L2_MODE_HIGHQUALITY)
  XLAT(V4L2_MODE_HIGHQUALITY),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
