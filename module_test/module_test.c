#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init lkm_init(void){
    printk("Hello,World!\n");
    return 0;
}

static void __exit lkm_exit(void){
    printk("Goodbye...\n");
}

module_init(lkm_init);
module_exit(lkm_exit);

MODULE_LICENSE("GPL");
