// roc 2009-12 00890fc0  unit: ATL::CRegObject  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890fc0
//
// 00890fc0  6aff                 push -1
// 00890fc2  68a9129600           push 0x9612a9
// 00890fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00890fcd  50                   push eax
// 00890fce  83ec10               sub esp, 0x10
// 00890fd1  56                   push esi
// 00890fd2  57                   push edi
// 00890fd3  a10052b600           mov eax, dword ptr [0xb65200]
// 00890fd8  33c4                 xor eax, esp
// 00890fda  50                   push eax
// 00890fdb  8d44241c             lea eax, [esp + 0x1c]
// 00890fdf  64a300000000         mov dword ptr fs:[0], eax
// 00890fe5  8bf1                 mov esi, ecx
// 00890fe7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00890feb  8bc7                 mov eax, edi
// 00890fed  25ffff4000           and eax, 0x40ffff
// 00890ff2  894654               mov dword ptr [esi + 0x54], eax
// 00890ff5  e856ffffff           call 0x890f50
// 00890ffa  85c0                 test eax, eax
// 00890ffc  7507                 jne 0x891005
// 00890ffe  b8703aa000           mov eax, 0xa03a70
// 00891003  eb1b                 jmp 0x891020
// 00891005  83f802               cmp eax, 2
// 00891008  7507                 jne 0x891011
// 0089100a  b8643aa000           mov eax, 0xa03a64
// 0089100f  eb0f                 jmp 0x891020
// 00891011  83f801               cmp eax, 1
// 00891014  b8543aa000           mov eax, 0xa03a54
// 00891019  7405                 je 0x891020
// 0089101b  b8483aa000           mov eax, 0xa03a48
// 00891020  50                   push eax
// 00891021  8d4c2434             lea ecx, [esp + 0x34]
// 00891025  ff15b8de9800         call dword ptr [0x98deb8]
// 0089102b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089102f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00891033  6a00                 push 0
// 00891035  51                   push ecx
// 00891036  52                   push edx
// 00891037  8d4c2418             lea ecx, [esp + 0x18]
// 0089103b  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00891043  e8e8a1fbff           call 0x84b230
// 00891048  50                   push eax
// 00891049  57                   push edi
// 0089104a  8d4c2444             lea ecx, [esp + 0x44]
// 0089104e  ff1580de9800         call dword ptr [0x98de80]
// 00891054  50                   push eax
// 00891055  683c3aa000           push 0xa03a3c
// 0089105a  8bce                 mov ecx, esi
// 0089105c  e86b28f6ff           call 0x7f38cc
// 00891061  8d4c2430             lea ecx, [esp + 0x30]
// 00891065  8bf0                 mov esi, eax
// 00891067  ff15c0de9800         call dword ptr [0x98dec0]
// 0089106d  8bc6                 mov eax, esi
// 0089106f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00891073  64890d00000000       mov dword ptr fs:[0], ecx
// 0089107a  59                   pop ecx
// 0089107b  5f                   pop edi
// 0089107c  5e                   pop esi
// 0089107d  83c41c               add esp, 0x1c
// 00891080  c20c00               ret 0xc
// copied from an identical function in another client (function ?Create@CXTPDockBar@@IAEHPAVCWnd@@KI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp