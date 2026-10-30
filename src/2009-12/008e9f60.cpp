// roc 2009-12 008e9f60  unit: CXTPRibbonGroup  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9f60
//
// 008e9f60  6aff                 push -1
// 008e9f62  68a3649600           push 0x9664a3
// 008e9f67  64a100000000         mov eax, dword ptr fs:[0]
// 008e9f6d  50                   push eax
// 008e9f6e  83ec08               sub esp, 8
// 008e9f71  55                   push ebp
// 008e9f72  56                   push esi
// 008e9f73  57                   push edi
// 008e9f74  a10052b600           mov eax, dword ptr [0xb65200]
// 008e9f79  33c4                 xor eax, esp
// 008e9f7b  50                   push eax
// 008e9f7c  8d442418             lea eax, [esp + 0x18]
// 008e9f80  64a300000000         mov dword ptr fs:[0], eax
// 008e9f86  8bf1                 mov esi, ecx
// 008e9f88  89742410             mov dword ptr [esp + 0x10], esi
// 008e9f8c  e8b1c40300           call 0x926442
// 008e9f91  33ff                 xor edi, edi
// 008e9f93  8d4e28               lea ecx, [esi + 0x28]
// 008e9f96  897c2420             mov dword ptr [esp + 0x20], edi
// 008e9f9a  c706dccfa000         mov dword ptr [esi], 0xa0cfdc
// 008e9fa0  ff1574de9800         call dword ptr [0x98de74]
// 008e9fa6  8d4e44               lea ecx, [esi + 0x44]
// 008e9fa9  e8d2d8f0ff           call 0x7f7880
// 008e9fae  8d4634               lea eax, [esi + 0x34]
// 008e9fb1  83cdff               or ebp, 0xffffffff
// 008e9fb4  50                   push eax
// 008e9fb5  c644242402           mov byte ptr [esp + 0x24], 2
// 008e9fba  896e2c               mov dword ptr [esi + 0x2c], ebp
// 008e9fbd  897e30               mov dword ptr [esi + 0x30], edi
// 008e9fc0  897e58               mov dword ptr [esi + 0x58], edi
// 008e9fc3  897e5c               mov dword ptr [esi + 0x5c], edi
// 008e9fc6  ff159cca9800         call dword ptr [0x98ca9c]
// 008e9fcc  6874010000           push 0x174
// 008e9fd1  896e60               mov dword ptr [esi + 0x60], ebp
// 008e9fd4  896e64               mov dword ptr [esi + 0x64], ebp
// 008e9fd7  897e70               mov dword ptr [esi + 0x70], edi
// 008e9fda  c7467801000000       mov dword ptr [esi + 0x78], 1
// 008e9fe1  897e20               mov dword ptr [esi + 0x20], edi
// 008e9fe4  e87798f0ff           call 0x7f3860
// 008e9fe9  8be8                 mov ebp, eax
// 008e9feb  83c404               add esp, 4
// 008e9fee  896c2414             mov dword ptr [esp + 0x14], ebp
// 008e9ff2  c644242003           mov byte ptr [esp + 0x20], 3
// 008e9ff7  3bef                 cmp ebp, edi
// 008e9ff9  7417                 je 0x8ea012
// 008e9ffb  8bcd                 mov ecx, ebp
// 008e9ffd  e85e61faff           call 0x890160
// 008ea002  c745008ccea000       mov dword ptr [ebp], 0xa0ce8c
// 008ea009  c745202ccea000       mov dword ptr [ebp + 0x20], 0xa0ce2c
// 008ea010  eb02                 jmp 0x8ea014
// 008ea012  33ed                 xor ebp, ebp
// 008ea014  896e68               mov dword ptr [esi + 0x68], ebp
// 008ea017  6888010000           push 0x188
// 008ea01c  c644242402           mov byte ptr [esp + 0x24], 2
// 008ea021  89b558010000         mov dword ptr [ebp + 0x158], esi
// 008ea027  e83498f0ff           call 0x7f3860
// 008ea02c  83c404               add esp, 4
// 008ea02f  89442414             mov dword ptr [esp + 0x14], eax
// 008ea033  c644242004           mov byte ptr [esp + 0x20], 4
// 008ea038  3bc7                 cmp eax, edi
// 008ea03a  740a                 je 0x8ea046
// 008ea03c  56                   push esi
// 008ea03d  8bc8                 mov ecx, eax
// 008ea03f  e83cf2ffff           call 0x8e9280
// 008ea044  eb02                 jmp 0x8ea048
// 008ea046  33c0                 xor eax, eax
// 008ea048  89466c               mov dword ptr [esi + 0x6c], eax
// 008ea04b  c7805001000004000000 mov dword ptr [eax + 0x150], 4
// 008ea055  897e74               mov dword ptr [esi + 0x74], edi
// 008ea058  89be80000000         mov dword ptr [esi + 0x80], edi
// 008ea05e  c7467c02000000       mov dword ptr [esi + 0x7c], 2
// 008ea065  897e24               mov dword ptr [esi + 0x24], edi
// 008ea068  8bc6                 mov eax, esi
// 008ea06a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ea06e  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea075  59                   pop ecx
// 008ea076  5f                   pop edi
// 008ea077  5e                   pop esi
// 008ea078  5d                   pop ebp
// 008ea079  83c414               add esp, 0x14
// 008ea07c  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonGroup@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp