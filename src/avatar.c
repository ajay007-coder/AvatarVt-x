#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/err.h>
#include "cpufeatures.h"


static int __init init_avatar(void)
{
    int ret;
    pr_info("[AvatarVt-x] Module initializing...\n");

    // Vt-x CPU feature detection
    ret = cpu_has_vmx();
    if(ret) {
        pr_err("VMX not supported. Exiting...\n");
        return ret;
    }

    // Check if VMX is enabled in IA32_FEATURE_CONTROL MSR


    return 0;
}

void __exit exit_avatar(void)
{
    pr_info("[AvatarVt-x] Cleaning up Module...\n");


}

module_init(init_avatar);
module_exit(exit_avatar);

MODULE_LICENSE("GPLv2");
MODULE_AUTHOR("Ajay Rangisetti");
MODULE_DESCRIPTION("light-weight Hypervisor for x86 platforms");