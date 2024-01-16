/* 
 * @brief: basic linux kernel device driver
 * @author: NghiaPham
 * @ver: v0.1
 * 
*/

/* 
 * printk: Kernel-space print function. 
 * When this function runs, messages are buffered in kernel ring buffer (kernel log).
 * When "dmesg" command is called, those messages are displayed.
*/ 

#include <linux/module.h>

static int __init helloworld_init(void) {
    printk("Hello World\n");
    return 0;
}

static void __exit helloworld_exit(void) {
    printk("Bye World\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("NghiaPham");
MODULE_DESCRIPTION("Simple hello world kernel module");
MODULE_INFO(board,"Beaglebone black rev.c");
