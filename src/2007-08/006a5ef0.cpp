// roc 2007-08 006a5ef0  unit: CXTPMenuBar::CControlMDIButton  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5ef0
//
// 006a5ef0  6aff                 push -1
// 006a5ef2  6868217600           push 0x762168
// 006a5ef7  64a100000000         mov eax, dword ptr fs:[0]
// 006a5efd  50                   push eax
// 006a5efe  83ec08               sub esp, 8
// 006a5f01  53                   push ebx
// 006a5f02  55                   push ebp
// 006a5f03  56                   push esi
// 006a5f04  57                   push edi
// 006a5f05  a188518b00           mov eax, dword ptr [0x8b5188]
// 006a5f0a  33c4                 xor eax, esp
// 006a5f0c  50                   push eax
// 006a5f0d  8d44241c             lea eax, [esp + 0x1c]
// 006a5f11  64a300000000         mov dword ptr fs:[0], eax
// 006a5f17  8bf9                 mov edi, ecx
// 006a5f19  33db                 xor ebx, ebx
// 006a5f1b  895c2418             mov dword ptr [esp + 0x18], ebx
// 006a5f1f  c7442414084a7900     mov dword ptr [esp + 0x14], 0x794a08
// 006a5f27  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006a5f2b  8b4608               mov eax, dword ptr [esi + 8]
// 006a5f2e  6a58                 push 0x58
// 006a5f30  50                   push eax
// 006a5f31  895c242c             mov dword ptr [esp + 0x2c], ebx
// 006a5f35  ff15c0d07700         call dword ptr [0x77d0c0]
// 006a5f3b  53                   push ebx
// 006a5f3c  68b8667c00           push 0x7c66b8
// 006a5f41  50                   push eax
// 006a5f42  6a60                 push 0x60
// 006a5f44  6a50                 push 0x50
// 006a5f46  ff154cd27700         call dword ptr [0x77d24c]
// 006a5f4c  50                   push eax
// 006a5f4d  8d4c2420             lea ecx, [esp + 0x20]
// 006a5f51  e880240900           call 0x7383d6
// 006a5f56  8b16                 mov edx, dword ptr [esi]
// 006a5f58  8b5230               mov edx, dword ptr [edx + 0x30]
// 006a5f5b  8d442414             lea eax, [esp + 0x14]
// 006a5f5f  50                   push eax
// 006a5f60  8bce                 mov ecx, esi
// 006a5f62  ffd2                 call edx
// 006a5f64  8bcf                 mov ecx, edi
// 006a5f66  8be8                 mov ebp, eax
// 006a5f68  e89340f9ff           call 0x63a000
// 006a5f6d  8b10                 mov edx, dword ptr [eax]
// 006a5f6f  57                   push edi
// 006a5f70  8bc8                 mov ecx, eax
// 006a5f72  8b4278               mov eax, dword ptr [edx + 0x78]
// 006a5f75  56                   push esi
// 006a5f76  ffd0                 call eax
// 006a5f78  8bcf                 mov ecx, edi
// 006a5f7a  e88140f9ff           call 0x63a000
// 006a5f7f  8b10                 mov edx, dword ptr [eax]
// 006a5f81  8b1e                 mov ebx, dword ptr [esi]
// 006a5f83  8bc8                 mov ecx, eax
// 006a5f85  8b427c               mov eax, dword ptr [edx + 0x7c]
// 006a5f88  57                   push edi
// 006a5f89  ffd0                 call eax
// 006a5f8b  8b5338               mov edx, dword ptr [ebx + 0x38]
// 006a5f8e  50                   push eax
// 006a5f8f  8bce                 mov ecx, esi
// 006a5f91  ffd2                 call edx
// 006a5f93  8b06                 mov eax, dword ptr [esi]
// 006a5f95  8d9ff0000000         lea ebx, [edi + 0xf0]
// 006a5f9b  6a25                 push 0x25
// 006a5f9d  81c7c0000000         add edi, 0xc0
// 006a5fa3  57                   push edi
// 006a5fa4  8bcb                 mov ecx, ebx
// 006a5fa6  89442434             mov dword ptr [esp + 0x34], eax
// 006a5faa  ff15c8dc7700         call dword ptr [0x77dcc8]
// 006a5fb0  50                   push eax
// 006a5fb1  8bcb                 mov ecx, ebx
// 006a5fb3  ff1598dd7700         call dword ptr [0x77dd98]
// 006a5fb9  8b542438             mov edx, dword ptr [esp + 0x38]
// 006a5fbd  50                   push eax
// 006a5fbe  8b4270               mov eax, dword ptr [edx + 0x70]
// 006a5fc1  8bce                 mov ecx, esi
// 006a5fc3  ffd0                 call eax
// 006a5fc5  8b16                 mov edx, dword ptr [esi]
// 006a5fc7  8b4230               mov eax, dword ptr [edx + 0x30]
// 006a5fca  55                   push ebp
// 006a5fcb  8bce                 mov ecx, esi
// 006a5fcd  ffd0                 call eax
// 006a5fcf  8d4c2414             lea ecx, [esp + 0x14]
// 006a5fd3  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 006a5fdb  c7442414084a7900     mov dword ptr [esp + 0x14], 0x794a08
// 006a5fe3  e89896d7ff           call 0x41f680
// 006a5fe8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a5fec  64890d00000000       mov dword ptr fs:[0], ecx
// 006a5ff3  59                   pop ecx
// 006a5ff4  5f                   pop edi
// 006a5ff5  5e                   pop esi
// 006a5ff6  5d                   pop ebp
// 006a5ff7  5b                   pop ebx
// 006a5ff8  83c414               add esp, 0x14
// 006a5ffb  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlMDIButton@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPMenuBar.cpp