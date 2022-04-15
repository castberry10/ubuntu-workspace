#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

struct num_t {short n1; long n2;};

main()
{
        int fd;
        struct num_t nums[2] = {{5, 20}, {7,28}};

        fd = creat("two.nums", 0644);
        write(fd, (char *)&nums[0], sizeof(struct num_t));

        lseek(fd, sizeof(struct num_t), SEEK_CUR);
        write(fd, (char *)&nums[1], sizeof(struct num_t));
        close(fd);
}
