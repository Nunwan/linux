/**@file	/home/nunwan/Linux/kernels/linux/me/hello.c
 * @author	nunwan
 * @version	801
 * @date
 * 	Created:	14th Aug 2019
 * 	Last Update:	14th Aug 2019
 */

/*===========================================================================*/
/*===============================[include]===============================*/
/*===========================================================================*/
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");
KERNEL_VERSION(5,2,8);
static int hello_init(void){
	printk(KERN_ALERT	"Hello world \n");
	return 0;
}

static void hello_exit(void){
	printk(KERN_ALERT	"Goodbye cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);

