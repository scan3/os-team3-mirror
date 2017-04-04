#include <linux/unistd.h>
#include <linux/kernel.h>
#include <linux/rotation.h>
#include <asm-generic/errno-base.h>



asmlinkage int sys_set_rotation(int degree){
	printk("Hello from set_rotation\n");
	return 0;
}

asmlinkage int sys_rotlock_read(int degree, int range){	
	/* 0 <= degree < 360 , 0 < range < 180 */
	printk("Hello from rotlock_read\n");
	return 0;
}

asmlinkage int sys_rotlock_write(int degree, int range){
	/* degree - range <= LOCK RANGE <= degree + range */
	printk("Hello from rotlock_write\n");
	return 0;
}

asmlinkage int sys_rotunlock_read(int degree, int range){
	/* 0 <= degree < 360 , 0 < range < 180 */
	printk("Hello from rotunlock_read\n");
	return 0;
}

asmlinkage int sys_rotunlock_write(int degree, int range){
	/* degree - range <= LOCK RANGE <= degree + range */
	printk("Hello from rotunlock_write\n");
	return 0;
}