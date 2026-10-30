// roc 2009-12 0085c260  unit: CXTPStatusBar  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c260
//
// 0085c260  6aff                 push -1
// 0085c262  6849e49500           push 0x95e449
// 0085c267  64a100000000         mov eax, dword ptr fs:[0]
// 0085c26d  50                   push eax
// 0085c26e  83ec10               sub esp, 0x10
// 0085c271  53                   push ebx
// 0085c272  56                   push esi
// 0085c273  57                   push edi
// 0085c274  a10052b600           mov eax, dword ptr [0xb65200]
// 0085c279  33c4                 xor eax, esp
// 0085c27b  50                   push eax
// 0085c27c  8d442420             lea eax, [esp + 0x20]
// 0085c280  64a300000000         mov dword ptr fs:[0], eax
// 0085c286  8bf1                 mov esi, ecx
// 0085c288  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0085c28c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0085c290  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085c294  53                   push ebx
// 0085c295  50                   push eax
// 0085c296  51                   push ecx
// 0085c297  8bce                 mov ecx, esi
// 0085c299  e85e76f9ff           call 0x7f38fc
// 0085c29e  83f8ff               cmp eax, -1
// 0085c2a1  7550                 jne 0x85c2f3
// 0085c2a3  8b442434             mov eax, dword ptr [esp + 0x34]
// 0085c2a7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085c2ab  8d542410             lea edx, [esp + 0x10]
// 0085c2af  52                   push edx
// 0085c2b0  50                   push eax
// 0085c2b1  51                   push ecx
// 0085c2b2  8bce                 mov ecx, esi
// 0085c2b4  e837faffff           call 0x85bcf0
// 0085c2b9  8bc8                 mov ecx, eax
// 0085c2bb  85c9                 test ecx, ecx
// 0085c2bd  7431                 je 0x85c2f0
// 0085c2bf  e8fc9f0600           call 0x8c62c0
// 0085c2c4  8d542438             lea edx, [esp + 0x38]
// 0085c2c8  52                   push edx
// 0085c2c9  8bf8                 mov edi, eax
// 0085c2cb  e8e0e8bbff           call 0x41abb0
// 0085c2d0  8d4c2438             lea ecx, [esp + 0x38]
// 0085c2d4  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0085c2dc  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0085c2e2  84c0                 test al, al
// 0085c2e4  7422                 je 0x85c308
// 0085c2e6  8d4c2438             lea ecx, [esp + 0x38]
// 0085c2ea  ff15c0de9800         call dword ptr [0x98dec0]
// 0085c2f0  83c8ff               or eax, 0xffffffff
// 0085c2f3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085c2f7  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c2fe  59                   pop ecx
// 0085c2ff  5f                   pop edi
// 0085c300  5e                   pop esi
// 0085c301  5b                   pop ebx
// 0085c302  83c41c               add esp, 0x1c
// 0085c305  c20c00               ret 0xc
// 0085c308  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085c30c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085c310  8d442438             lea eax, [esp + 0x38]
// 0085c314  50                   push eax
// 0085c315  57                   push edi
// 0085c316  83ec10               sub esp, 0x10
// 0085c319  8bc4                 mov eax, esp
// 0085c31b  8908                 mov dword ptr [eax], ecx
// 0085c31d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085c321  895004               mov dword ptr [eax + 4], edx
// 0085c324  8b542434             mov edx, dword ptr [esp + 0x34]
// 0085c328  894808               mov dword ptr [eax + 8], ecx
// 0085c32b  89500c               mov dword ptr [eax + 0xc], edx
// 0085c32e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085c331  50                   push eax
// 0085c332  53                   push ebx
// 0085c333  e8f83c0000           call 0x860030
// 0085c338  83c420               add esp, 0x20
// 0085c33b  8d4c2438             lea ecx, [esp + 0x38]
// 0085c33f  ff15c0de9800         call dword ptr [0x98dec0]
// 0085c345  8bc7                 mov eax, edi
// 0085c347  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085c34b  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c352  59                   pop ecx
// 0085c353  5f                   pop edi
// 0085c354  5e                   pop esi
// 0085c355  5b                   pop ebx
// 0085c356  83c41c               add esp, 0x1c
// 0085c359  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPStatusBar@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp