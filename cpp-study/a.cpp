#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <fcntl.h>

struct num_t {short n1; long n2;};

int main(){
   int fd;
   struct num_t nums[2] = {{5, 20}, {7,28}}; short s = 0;
             long l = 0;
                                                fd = creat("two.nums", 0644);
                                                        std::cout << "fd: " << fd << std::endl;
                                                                std::cout << "(char *)&nums[0]" << sizeof((char *)&nums[0]) << std::endl;
                                                                        std::cout << "(char *)&nums[1]" << sizeof((char *)&nums[1]) << std::endl;
                                                                                std::cout << "&nums[0]" << sizeof(&nums[0]) << std::endl;
                                                                                        std::cout << "nums[0]" << sizeof(nums[0]) << std::endl;
                                                                                                std::cout << "R&nums[0]" << &nums[0] << std::endl;
                                                                                                        std::cout << "(char *)&nums[1]" << (char *)&nums[1] << std::endl;
                                                                                                                std::cout << "sizeof(struct num_t)" << sizeof(struct num_t) << std::endl;
                                                                                                                        std::cout << "short long " << sizeof(s) << " "<< sizeof(l) << std::endl;
                                                                                                                          
                                                                                                                                write(fd, (char *)&nums[0], sizeof(struct num_t));
                                                                                                                                  
                                                                                                                                        std::cout << lseek(fd, sizeof(struct num_t), SEEK_CUR);
                                                                                                                                                
                                                                                                                                                write(fd, (char *)&nums[1], sizeof(struct num_t));
                                                                                                                                                        
                                                                                                                                                        close(fd);
                                                                                                                                                          
}
