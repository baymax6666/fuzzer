#include <sys/types.h>

struct SNAPSHOT_MEMORY {
    long long unsigned maps_offset[8];
    long long unsigned snapshot_buf_offset[8];
    long long unsigned rdwr_length[8];
};

unsigned char* create_snapshot(pid_t child_pid);

void restore_snapshot(unsigned char* snapshot_buf, pid_t child_pid);
