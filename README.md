# AvatarVt-x
A lightweight, open-source hypervisor leveraging Intel VT-x for full hardware virtualization. Features include memory virtualization, I/O emulation, and fundamental support for virtualized environments. Ideal for learning and experimentation in virtualization technology.


Project Layout
-----------------------------------------------------------------------

```
AvatarVt-x/
├── build/                      # Compiled files and build artifacts
├── docs/                       # Documentation and specifications
│   ├── design.md               # High-level system design
│   ├── architecture.md         # Hypervisor architecture details
│   └── implementation_notes.md # Notes on specific implementations
├── include/                    # Shared header files
│   ├── hypervisor.h            # Main header file
│   ├── virtualization.h        # Virtualization-related constants and macros
│   ├── memory.h                # Memory virtualization structures
│   ├── io.h                    # I/O virtualization definitions
│   ├── vmcs.h                  # Intel VMCS definitions
├── src/                        # Source code
│   ├── main.c                  # Entry point for the hypervisor module
│   ├── cpu/                    # CPU-specific virtualization logic
│   │   ├── vmx.c               # Intel VT-x (VMX) initialization and handling
│   │   ├── features.c          # CPU feature detection
│   │   └── cpu_common.c        # Shared CPU utilities
│   ├── memory/                 # Memory virtualization
│   │   ├── ept.c               # Extended Page Tables (Intel)
│   │   └── mmu.c               # General memory management
│   ├── io/                     # I/O emulation and virtualization
│   │   ├── io_emulation.c      # General I/O emulation
│   │   ├── pci_emulation.c     # PCI device emulation
│   │   └── io_ports.c          # Port I/O handling
│   ├── vm/                     # VM lifecycle management
│   │   ├── vm_entry.c          # VM entry and guest execution
│   │   ├── vm_exit.c           # VM exit handling (trap and emulate)
│   │   ├── vm_creation.c       # Guest VM creation and configuration
│   │   └── vm_teardown.c       # Guest VM destruction and cleanup
│   ├── common/                 # Shared utilities and helpers
│   │   ├── logging.c           # Logging and debugging
│   │   ├── errors.c            # Error handling utilities
│   │   └── helpers.c           # Common utility functions
├── tests/                      # Testing and validation
│   ├── unit/                   # Unit tests for individual modules
│   │   ├── test_vmx.c          # Test cases for Intel VT-x features
│   │   ├── test_memory.c       # Test cases for memory management
│   │   └── test_vm_exit.c      # Test cases for VM exit handling
│   ├── integration/            # Integration tests for overall functionality
│   │   ├── test_guest_execution.c # Test guest VM execution
│   │   ├── test_io_emulation.c    # Test I/O emulation
│   └── tools/                  # Tools for testing
│       ├── test_guest_code.c   # Example guest code for testing
│       ├── test_vm_loader.c    # Loader for guest VMs
│       └── guest_vm.img        # Prebuilt guest VM image
├── scripts/                    # Automation and helper scripts
│   ├── build.sh                # Script to compile the project
│   ├── load.sh                 # Script to load the kernel module
│   ├── unload.sh               # Script to unload the kernel module
│   ├── run_tests.sh            # Run tests and validate functionality
│   └── debug.sh                # Attach GDB for debugging
├── Kconfig                     # Kernel configuration file (optional)
├── LICENSE                     # License file
├── Makefile                    # Build instructions for the kernel module
├── README.md                   # Project overview and setup instructions
```
