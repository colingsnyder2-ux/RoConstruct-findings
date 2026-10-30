// roc 2010-06 00865d70  unit: CXTPDockingPaneTabbedContainer  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865d70
//
// 00865d70  6aff                 push -1
// 00865d72  68b98f9b00           push 0x9b8fb9
// 00865d77  64a100000000         mov eax, dword ptr fs:[0]
// 00865d7d  50                   push eax
// 00865d7e  53                   push ebx
// 00865d7f  55                   push ebp
// 00865d80  56                   push esi
// 00865d81  57                   push edi
// 00865d82  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00865d87  33c4                 xor eax, esp
// 00865d89  50                   push eax
// 00865d8a  8d442414             lea eax, [esp + 0x14]
// 00865d8e  64a300000000         mov dword ptr fs:[0], eax
// 00865d94  8bf9                 mov edi, ecx
// 00865d96  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00865d9a  8b442428             mov eax, dword ptr [esp + 0x28]
// 00865d9e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00865da2  55                   push ebp
// 00865da3  50                   push eax
// 00865da4  51                   push ecx
// 00865da5  8bcf                 mov ecx, edi
// 00865da7  e8901cf4ff           call 0x7a7a3c
// 00865dac  83f8ff               cmp eax, -1
// 00865daf  0f85bd000000         jne 0x865e72
// 00865db5  8b542428             mov edx, dword ptr [esp + 0x28]
// 00865db9  8b442424             mov eax, dword ptr [esp + 0x24]
// 00865dbd  52                   push edx
// 00865dbe  50                   push eax
// 00865dbf  8bcf                 mov ecx, edi
// 00865dc1  e82affffff           call 0x865cf0
// 00865dc6  8bf0                 mov esi, eax
// 00865dc8  85f6                 test esi, esi
// 00865dca  0f8482000000         je 0x865e52
// 00865dd0  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 00865dd3  8d4c242c             lea ecx, [esp + 0x2c]
// 00865dd7  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00865ddd  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00865de5  e8c6cafbff           call 0x8228b0
// 00865dea  8b10                 mov edx, dword ptr [eax]
// 00865dec  8b5208               mov edx, dword ptr [edx + 8]
// 00865def  53                   push ebx
// 00865df0  8d4c2430             lea ecx, [esp + 0x30]
// 00865df4  51                   push ecx
// 00865df5  8bc8                 mov ecx, eax
// 00865df7  ffd2                 call edx
// 00865df9  8d4c242c             lea ecx, [esp + 0x2c]
// 00865dfd  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00865e03  85c0                 test eax, eax
// 00865e05  750f                 jne 0x865e16
// 00865e07  8d4c242c             lea ecx, [esp + 0x2c]
// 00865e0b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00865e11  83c8ff               or eax, 0xffffffff
// 00865e14  eb5c                 jmp 0x865e72
// 00865e16  8b0e                 mov ecx, dword ptr [esi]
// 00865e18  8b5604               mov edx, dword ptr [esi + 4]
// 00865e1b  8d44242c             lea eax, [esp + 0x2c]
// 00865e1f  50                   push eax
// 00865e20  53                   push ebx
// 00865e21  83ec10               sub esp, 0x10
// 00865e24  8bc4                 mov eax, esp
// 00865e26  8908                 mov dword ptr [eax], ecx
// 00865e28  8b4e08               mov ecx, dword ptr [esi + 8]
// 00865e2b  895004               mov dword ptr [eax + 4], edx
// 00865e2e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00865e31  894808               mov dword ptr [eax + 8], ecx
// 00865e34  89500c               mov dword ptr [eax + 0xc], edx
// 00865e37  8b4720               mov eax, dword ptr [edi + 0x20]
// 00865e3a  50                   push eax
// 00865e3b  55                   push ebp
// 00865e3c  e8cfe1faff           call 0x814010
// 00865e41  83c420               add esp, 0x20
// 00865e44  8d4c242c             lea ecx, [esp + 0x2c]
// 00865e48  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00865e4e  8bc3                 mov eax, ebx
// 00865e50  eb20                 jmp 0x865e72
// 00865e52  8b442428             mov eax, dword ptr [esp + 0x28]
// 00865e56  8b97a8000000         mov edx, dword ptr [edi + 0xa8]
// 00865e5c  8b5250               mov edx, dword ptr [edx + 0x50]
// 00865e5f  55                   push ebp
// 00865e60  50                   push eax
// 00865e61  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00865e65  8d8fa8000000         lea ecx, [edi + 0xa8]
// 00865e6b  50                   push eax
// 00865e6c  8b4720               mov eax, dword ptr [edi + 0x20]
// 00865e6f  50                   push eax
// 00865e70  ffd2                 call edx
// 00865e72  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00865e76  64890d00000000       mov dword ptr fs:[0], ecx
// 00865e7d  59                   pop ecx
// 00865e7e  5f                   pop edi
// 00865e7f  5e                   pop esi
// 00865e80  5d                   pop ebp
// 00865e81  5b                   pop ebx
// 00865e82  83c40c               add esp, 0xc
// 00865e85  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneTabbedContainer@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneTabbedContainer.cpp