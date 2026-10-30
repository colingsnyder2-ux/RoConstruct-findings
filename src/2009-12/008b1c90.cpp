// roc 2009-12 008b1c90  unit: CXTPDockingPaneTabbedContainer  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1c90
//
// 008b1c90  6aff                 push -1
// 008b1c92  68592f9600           push 0x962f59
// 008b1c97  64a100000000         mov eax, dword ptr fs:[0]
// 008b1c9d  50                   push eax
// 008b1c9e  53                   push ebx
// 008b1c9f  55                   push ebp
// 008b1ca0  56                   push esi
// 008b1ca1  57                   push edi
// 008b1ca2  a10052b600           mov eax, dword ptr [0xb65200]
// 008b1ca7  33c4                 xor eax, esp
// 008b1ca9  50                   push eax
// 008b1caa  8d442414             lea eax, [esp + 0x14]
// 008b1cae  64a300000000         mov dword ptr fs:[0], eax
// 008b1cb4  8bf9                 mov edi, ecx
// 008b1cb6  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008b1cba  8b442428             mov eax, dword ptr [esp + 0x28]
// 008b1cbe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b1cc2  55                   push ebp
// 008b1cc3  50                   push eax
// 008b1cc4  51                   push ecx
// 008b1cc5  8bcf                 mov ecx, edi
// 008b1cc7  e8301cf4ff           call 0x7f38fc
// 008b1ccc  83f8ff               cmp eax, -1
// 008b1ccf  0f85bd000000         jne 0x8b1d92
// 008b1cd5  8b542428             mov edx, dword ptr [esp + 0x28]
// 008b1cd9  8b442424             mov eax, dword ptr [esp + 0x24]
// 008b1cdd  52                   push edx
// 008b1cde  50                   push eax
// 008b1cdf  8bcf                 mov ecx, edi
// 008b1ce1  e82affffff           call 0x8b1c10
// 008b1ce6  8bf0                 mov esi, eax
// 008b1ce8  85f6                 test esi, esi
// 008b1cea  0f8482000000         je 0x8b1d72
// 008b1cf0  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008b1cf3  8d4c242c             lea ecx, [esp + 0x2c]
// 008b1cf7  ff1574de9800         call dword ptr [0x98de74]
// 008b1cfd  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008b1d05  e896cbfbff           call 0x86e8a0
// 008b1d0a  8b10                 mov edx, dword ptr [eax]
// 008b1d0c  8b5208               mov edx, dword ptr [edx + 8]
// 008b1d0f  53                   push ebx
// 008b1d10  8d4c2430             lea ecx, [esp + 0x30]
// 008b1d14  51                   push ecx
// 008b1d15  8bc8                 mov ecx, eax
// 008b1d17  ffd2                 call edx
// 008b1d19  8d4c242c             lea ecx, [esp + 0x2c]
// 008b1d1d  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008b1d23  85c0                 test eax, eax
// 008b1d25  750f                 jne 0x8b1d36
// 008b1d27  8d4c242c             lea ecx, [esp + 0x2c]
// 008b1d2b  ff15c0de9800         call dword ptr [0x98dec0]
// 008b1d31  83c8ff               or eax, 0xffffffff
// 008b1d34  eb5c                 jmp 0x8b1d92
// 008b1d36  8b0e                 mov ecx, dword ptr [esi]
// 008b1d38  8b5604               mov edx, dword ptr [esi + 4]
// 008b1d3b  8d44242c             lea eax, [esp + 0x2c]
// 008b1d3f  50                   push eax
// 008b1d40  53                   push ebx
// 008b1d41  83ec10               sub esp, 0x10
// 008b1d44  8bc4                 mov eax, esp
// 008b1d46  8908                 mov dword ptr [eax], ecx
// 008b1d48  8b4e08               mov ecx, dword ptr [esi + 8]
// 008b1d4b  895004               mov dword ptr [eax + 4], edx
// 008b1d4e  8b560c               mov edx, dword ptr [esi + 0xc]
// 008b1d51  894808               mov dword ptr [eax + 8], ecx
// 008b1d54  89500c               mov dword ptr [eax + 0xc], edx
// 008b1d57  8b4720               mov eax, dword ptr [edi + 0x20]
// 008b1d5a  50                   push eax
// 008b1d5b  55                   push ebp
// 008b1d5c  e8cfe2faff           call 0x860030
// 008b1d61  83c420               add esp, 0x20
// 008b1d64  8d4c242c             lea ecx, [esp + 0x2c]
// 008b1d68  ff15c0de9800         call dword ptr [0x98dec0]
// 008b1d6e  8bc3                 mov eax, ebx
// 008b1d70  eb20                 jmp 0x8b1d92
// 008b1d72  8b442428             mov eax, dword ptr [esp + 0x28]
// 008b1d76  8b97a8000000         mov edx, dword ptr [edi + 0xa8]
// 008b1d7c  8b5250               mov edx, dword ptr [edx + 0x50]
// 008b1d7f  55                   push ebp
// 008b1d80  50                   push eax
// 008b1d81  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b1d85  8d8fa8000000         lea ecx, [edi + 0xa8]
// 008b1d8b  50                   push eax
// 008b1d8c  8b4720               mov eax, dword ptr [edi + 0x20]
// 008b1d8f  50                   push eax
// 008b1d90  ffd2                 call edx
// 008b1d92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b1d96  64890d00000000       mov dword ptr fs:[0], ecx
// 008b1d9d  59                   pop ecx
// 008b1d9e  5f                   pop edi
// 008b1d9f  5e                   pop esi
// 008b1da0  5d                   pop ebp
// 008b1da1  5b                   pop ebx
// 008b1da2  83c40c               add esp, 0xc
// 008b1da5  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneTabbedContainer@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneTabbedContainer.cpp