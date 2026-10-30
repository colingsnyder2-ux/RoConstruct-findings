// roc 2009-12 00805ed0  unit: CXTPControlComboBoxPopupBar  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805ed0
//
// 00805ed0  6aff                 push -1
// 00805ed2  687d969500           push 0x95967d
// 00805ed7  64a100000000         mov eax, dword ptr fs:[0]
// 00805edd  50                   push eax
// 00805ede  83ec14               sub esp, 0x14
// 00805ee1  53                   push ebx
// 00805ee2  56                   push esi
// 00805ee3  a10052b600           mov eax, dword ptr [0xb65200]
// 00805ee8  33c4                 xor eax, esp
// 00805eea  50                   push eax
// 00805eeb  8d442420             lea eax, [esp + 0x20]
// 00805eef  64a300000000         mov dword ptr fs:[0], eax
// 00805ef5  8bf1                 mov esi, ecx
// 00805ef7  8d442430             lea eax, [esp + 0x30]
// 00805efb  50                   push eax
// 00805efc  e89f5a0300           call 0x83b9a0
// 00805f01  8bd0                 mov edx, eax
// 00805f03  85d2                 test edx, edx
// 00805f05  0f840e010000         je 0x806019
// 00805f0b  83faff               cmp edx, -1
// 00805f0e  0f8405010000         je 0x806019
// 00805f14  85d2                 test edx, edx
// 00805f16  0f8ee4000000         jle 0x806000
// 00805f1c  8d4ea4               lea ecx, [esi - 0x5c]
// 00805f1f  e82cf3ffff           call 0x805250
// 00805f24  3bd0                 cmp edx, eax
// 00805f26  0f8fd4000000         jg 0x806000
// 00805f2c  4a                   dec edx
// 00805f2d  52                   push edx
// 00805f2e  e82df3ffff           call 0x805260
// 00805f33  8bf0                 mov esi, eax
// 00805f35  8b16                 mov edx, dword ptr [esi]
// 00805f37  8b5258               mov edx, dword ptr [edx + 0x58]
// 00805f3a  8d44240c             lea eax, [esp + 0xc]
// 00805f3e  50                   push eax
// 00805f3f  8bce                 mov ecx, esi
// 00805f41  ffd2                 call edx
// 00805f43  8d44240c             lea eax, [esp + 0xc]
// 00805f47  50                   push eax
// 00805f48  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00805f50  e87b79ffff           call 0x7fd8d0
// 00805f55  83c404               add esp, 4
// 00805f58  8d4c2410             lea ecx, [esp + 0x10]
// 00805f5c  51                   push ecx
// 00805f5d  8bce                 mov ecx, esi
// 00805f5f  e81cfbfeff           call 0x7f5a80
// 00805f64  8bc8                 mov ecx, eax
// 00805f66  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00805f6c  84c0                 test al, al
// 00805f6e  8d4c2410             lea ecx, [esp + 0x10]
// 00805f72  0f94c3               sete bl
// 00805f75  ff15c0de9800         call dword ptr [0x98dec0]
// 00805f7b  84db                 test bl, bl
// 00805f7d  746b                 je 0x805fea
// 00805f7f  8d54241c             lea edx, [esp + 0x1c]
// 00805f83  52                   push edx
// 00805f84  8bce                 mov ecx, esi
// 00805f86  e8f5fafeff           call 0x7f5a80
// 00805f8b  8bf0                 mov esi, eax
// 00805f8d  6a09                 push 9
// 00805f8f  8d442410             lea eax, [esp + 0x10]
// 00805f93  50                   push eax
// 00805f94  8d4c2420             lea ecx, [esp + 0x20]
// 00805f98  51                   push ecx
// 00805f99  c644243402           mov byte ptr [esp + 0x34], 2
// 00805f9e  e84d04ffff           call 0x7f63f0
// 00805fa3  56                   push esi
// 00805fa4  50                   push eax
// 00805fa5  8d542428             lea edx, [esp + 0x28]
// 00805fa9  52                   push edx
// 00805faa  c644244003           mov byte ptr [esp + 0x40], 3
// 00805faf  e88c5dc5ff           call 0x45bd40
// 00805fb4  83c418               add esp, 0x18
// 00805fb7  50                   push eax
// 00805fb8  8d4c2410             lea ecx, [esp + 0x10]
// 00805fbc  c644242c04           mov byte ptr [esp + 0x2c], 4
// 00805fc1  ff1538d59800         call dword ptr [0x98d538]
// 00805fc7  8d4c2414             lea ecx, [esp + 0x14]
// 00805fcb  ff15c0de9800         call dword ptr [0x98dec0]
// 00805fd1  8d4c2418             lea ecx, [esp + 0x18]
// 00805fd5  ff15c0de9800         call dword ptr [0x98dec0]
// 00805fdb  8d4c241c             lea ecx, [esp + 0x1c]
// 00805fdf  c644242801           mov byte ptr [esp + 0x28], 1
// 00805fe4  ff15c0de9800         call dword ptr [0x98dec0]
// 00805fea  8d4c240c             lea ecx, [esp + 0xc]
// 00805fee  ff156cd69800         call dword ptr [0x98d66c]
// 00805ff4  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00805ff8  8901                 mov dword ptr [ecx], eax
// 00805ffa  8d4c240c             lea ecx, [esp + 0xc]
// 00805ffe  eb42                 jmp 0x806042
// 00806000  b857000780           mov eax, 0x80070057
// 00806005  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00806009  64890d00000000       mov dword ptr fs:[0], ecx
// 00806010  59                   pop ecx
// 00806011  5e                   pop esi
// 00806012  5b                   pop ebx
// 00806013  83c420               add esp, 0x20
// 00806016  c21400               ret 0x14
// 00806019  8d542410             lea edx, [esp + 0x10]
// 0080601d  52                   push edx
// 0080601e  8d4ea4               lea ecx, [esi - 0x5c]
// 00806021  e85a75ffff           call 0x7fd580
// 00806026  8d4c2410             lea ecx, [esp + 0x10]
// 0080602a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00806032  ff156cd69800         call dword ptr [0x98d66c]
// 00806038  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080603c  8901                 mov dword ptr [ecx], eax
// 0080603e  8d4c2410             lea ecx, [esp + 0x10]
// 00806042  ff15c0de9800         call dword ptr [0x98dec0]
// 00806048  33c0                 xor eax, eax
// 0080604a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080604e  64890d00000000       mov dword ptr fs:[0], ecx
// 00806055  59                   pop ecx
// 00806056  5e                   pop esi
// 00806057  5b                   pop ebx
// 00806058  83c420               add esp, 0x20
// 0080605b  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleName@CXTPCommandBar@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals-string-calls Source\CommandBars\XTPCommandBar.cpp