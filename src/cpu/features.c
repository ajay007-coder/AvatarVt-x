
#include <linux/err.h>
#include <linux/printk.h>

int cpu_has_vmx(void) {
    int eax, ebx, ecx, edx;

    asm volatile (
        "cpuid"
        : "=a"(eax), "=b"(ebx), "=c"(ecx), "=d"(edx)     // Output operands.
        : "a"(1)                                        // Input operands.
    );

    if( ecx & ( 1 << 5 )) {                             // check ecx 5th bit. if 1 VMX supported, 0 VMX not supported.
        pr_info("VMX is supported on this platform\n");
        return 0;
    }

    return -1;
}