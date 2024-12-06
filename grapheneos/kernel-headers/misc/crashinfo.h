/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _MISC_CRASHINFO_H
#define _MISC_CRASHINFO_H
#include <linux/types.h>
#define CRASHINFO_MAGIC "crashnfo"
#define CRASHINFO_MAGIC_SIZE 8
#define CRASHINFO_REASON_SIZE 256
struct crashinfo_img_hdr {
  __u8 magic[CRASHINFO_MAGIC_SIZE];
  __le32 header_version;
  __le32 header_size;
  __le32 flags;
  __le32 crc;
  __le64 coredump_size;
  char crashinfo[CRASHINFO_REASON_SIZE];
} __attribute__((packed));
#endif
