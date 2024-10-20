#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init beef_init(void) {
  printk(KERN_INFO "hi\n");
  return 0;
}

static void __exit beef_exit(void) {
  printk(KERN_INFO "bye\n");
}

module_init(beef_init);
module_exit(beef_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("BEEF");
MODULE_DESCRIPTION("a module which does nothing...");
