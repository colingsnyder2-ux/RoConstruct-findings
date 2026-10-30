// roc 2009-06 007d7150  unit: CXTPDockingPaneTabbedContainer  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d7150
//
// 007d7150  6aff                 push -1
// 007d7152  68e9ee8700           push 0x87eee9
// 007d7157  64a100000000         mov eax, dword ptr fs:[0]
// 007d715d  50                   push eax
// 007d715e  53                   push ebx
// 007d715f  55                   push ebp
// 007d7160  56                   push esi
// 007d7161  57                   push edi
// 007d7162  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007d7167  33c4                 xor eax, esp
// 007d7169  50                   push eax
// 007d716a  8d442414             lea eax, [esp + 0x14]
// 007d716e  64a300000000         mov dword ptr fs:[0], eax
// 007d7174  8bf9                 mov edi, ecx
// 007d7176  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007d717a  8b442428             mov eax, dword ptr [esp + 0x28]
// 007d717e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007d7182  55                   push ebp
// 007d7183  50                   push eax
// 007d7184  51                   push ecx
// 007d7185  8bcf                 mov ecx, edi
// 007d7187  e84819f4ff           call 0x718ad4
// 007d718c  83f8ff               cmp eax, -1
// 007d718f  0f85bd000000         jne 0x7d7252
// 007d7195  8b542428             mov edx, dword ptr [esp + 0x28]
// 007d7199  8b442424             mov eax, dword ptr [esp + 0x24]
// 007d719d  52                   push edx
// 007d719e  50                   push eax
// 007d719f  8bcf                 mov ecx, edi
// 007d71a1  e82affffff           call 0x7d70d0
// 007d71a6  8bf0                 mov esi, eax
// 007d71a8  85f6                 test esi, esi
// 007d71aa  0f8482000000         je 0x7d7232
// 007d71b0  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 007d71b3  8d4c242c             lea ecx, [esp + 0x2c]
// 007d71b7  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007d71bd  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007d71c5  e8763ffcff           call 0x79b140
// 007d71ca  8b10                 mov edx, dword ptr [eax]
// 007d71cc  8b5208               mov edx, dword ptr [edx + 8]
// 007d71cf  53                   push ebx
// 007d71d0  8d4c2430             lea ecx, [esp + 0x30]
// 007d71d4  51                   push ecx
// 007d71d5  8bc8                 mov ecx, eax
// 007d71d7  ffd2                 call edx
// 007d71d9  8d4c242c             lea ecx, [esp + 0x2c]
// 007d71dd  ff1554fb8900         call dword ptr [0x89fb54]
// 007d71e3  85c0                 test eax, eax
// 007d71e5  750f                 jne 0x7d71f6
// 007d71e7  8d4c242c             lea ecx, [esp + 0x2c]
// 007d71eb  ff1510fd8900         call dword ptr [0x89fd10]
// 007d71f1  83c8ff               or eax, 0xffffffff
// 007d71f4  eb5c                 jmp 0x7d7252
// 007d71f6  8b0e                 mov ecx, dword ptr [esi]
// 007d71f8  8b5604               mov edx, dword ptr [esi + 4]
// 007d71fb  8d44242c             lea eax, [esp + 0x2c]
// 007d71ff  50                   push eax
// 007d7200  53                   push ebx
// 007d7201  83ec10               sub esp, 0x10
// 007d7204  8bc4                 mov eax, esp
// 007d7206  8908                 mov dword ptr [eax], ecx
// 007d7208  8b4e08               mov ecx, dword ptr [esi + 8]
// 007d720b  895004               mov dword ptr [eax + 4], edx
// 007d720e  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d7211  894808               mov dword ptr [eax + 8], ecx
// 007d7214  89500c               mov dword ptr [eax + 0xc], edx
// 007d7217  8b4720               mov eax, dword ptr [edi + 0x20]
// 007d721a  50                   push eax
// 007d721b  55                   push ebp
// 007d721c  e8efddfaff           call 0x785010
// 007d7221  83c420               add esp, 0x20
// 007d7224  8d4c242c             lea ecx, [esp + 0x2c]
// 007d7228  ff1510fd8900         call dword ptr [0x89fd10]
// 007d722e  8bc3                 mov eax, ebx
// 007d7230  eb20                 jmp 0x7d7252
// 007d7232  8b442428             mov eax, dword ptr [esp + 0x28]
// 007d7236  8b97a8000000         mov edx, dword ptr [edi + 0xa8]
// 007d723c  8b5250               mov edx, dword ptr [edx + 0x50]
// 007d723f  55                   push ebp
// 007d7240  50                   push eax
// 007d7241  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007d7245  8d8fa8000000         lea ecx, [edi + 0xa8]
// 007d724b  50                   push eax
// 007d724c  8b4720               mov eax, dword ptr [edi + 0x20]
// 007d724f  50                   push eax
// 007d7250  ffd2                 call edx
// 007d7252  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d7256  64890d00000000       mov dword ptr fs:[0], ecx
// 007d725d  59                   pop ecx
// 007d725e  5f                   pop edi
// 007d725f  5e                   pop esi
// 007d7260  5d                   pop ebp
// 007d7261  5b                   pop ebx
// 007d7262  83c40c               add esp, 0xc
// 007d7265  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneTabbedContainer@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneTabbedContainer.cpp