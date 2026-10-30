// roc 2012-06 00a3b5f0  unit: CXTPDockingPaneTabbedContainer  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b5f0
//
// 00a3b5f0  6aff                 push -1
// 00a3b5f2  68395dae00           push 0xae5d39
// 00a3b5f7  64a100000000         mov eax, dword ptr fs:[0]
// 00a3b5fd  50                   push eax
// 00a3b5fe  53                   push ebx
// 00a3b5ff  55                   push ebp
// 00a3b600  56                   push esi
// 00a3b601  57                   push edi
// 00a3b602  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a3b607  33c4                 xor eax, esp
// 00a3b609  50                   push eax
// 00a3b60a  8d442414             lea eax, [esp + 0x14]
// 00a3b60e  64a300000000         mov dword ptr fs:[0], eax
// 00a3b614  8bf9                 mov edi, ecx
// 00a3b616  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a3b61a  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a3b61e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a3b622  55                   push ebp
// 00a3b623  50                   push eax
// 00a3b624  51                   push ecx
// 00a3b625  8bcf                 mov ecx, edi
// 00a3b627  e88a6bf4ff           call 0x9821b6
// 00a3b62c  83f8ff               cmp eax, -1
// 00a3b62f  0f85bd000000         jne 0xa3b6f2
// 00a3b635  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a3b639  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a3b63d  52                   push edx
// 00a3b63e  50                   push eax
// 00a3b63f  8bcf                 mov ecx, edi
// 00a3b641  e82affffff           call 0xa3b570
// 00a3b646  8bf0                 mov esi, eax
// 00a3b648  85f6                 test esi, esi
// 00a3b64a  0f8482000000         je 0xa3b6d2
// 00a3b650  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 00a3b653  8d4c242c             lea ecx, [esp + 0x2c]
// 00a3b657  ff158447b200         call dword ptr [0xb24784]
// 00a3b65d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a3b665  e886cefbff           call 0x9f84f0
// 00a3b66a  8b10                 mov edx, dword ptr [eax]
// 00a3b66c  8b5208               mov edx, dword ptr [edx + 8]
// 00a3b66f  53                   push ebx
// 00a3b670  8d4c2430             lea ecx, [esp + 0x30]
// 00a3b674  51                   push ecx
// 00a3b675  8bc8                 mov ecx, eax
// 00a3b677  ffd2                 call edx
// 00a3b679  8d4c242c             lea ecx, [esp + 0x2c]
// 00a3b67d  ff155846b200         call dword ptr [0xb24658]
// 00a3b683  85c0                 test eax, eax
// 00a3b685  750f                 jne 0xa3b696
// 00a3b687  8d4c242c             lea ecx, [esp + 0x2c]
// 00a3b68b  ff15d047b200         call dword ptr [0xb247d0]
// 00a3b691  83c8ff               or eax, 0xffffffff
// 00a3b694  eb5c                 jmp 0xa3b6f2
// 00a3b696  8b0e                 mov ecx, dword ptr [esi]
// 00a3b698  8b5604               mov edx, dword ptr [esi + 4]
// 00a3b69b  8d44242c             lea eax, [esp + 0x2c]
// 00a3b69f  50                   push eax
// 00a3b6a0  53                   push ebx
// 00a3b6a1  83ec10               sub esp, 0x10
// 00a3b6a4  8bc4                 mov eax, esp
// 00a3b6a6  8908                 mov dword ptr [eax], ecx
// 00a3b6a8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a3b6ab  895004               mov dword ptr [eax + 4], edx
// 00a3b6ae  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a3b6b1  894808               mov dword ptr [eax + 8], ecx
// 00a3b6b4  89500c               mov dword ptr [eax + 0xc], edx
// 00a3b6b7  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a3b6ba  50                   push eax
// 00a3b6bb  55                   push ebp
// 00a3b6bc  e81fe7faff           call 0x9e9de0
// 00a3b6c1  83c420               add esp, 0x20
// 00a3b6c4  8d4c242c             lea ecx, [esp + 0x2c]
// 00a3b6c8  ff15d047b200         call dword ptr [0xb247d0]
// 00a3b6ce  8bc3                 mov eax, ebx
// 00a3b6d0  eb20                 jmp 0xa3b6f2
// 00a3b6d2  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a3b6d6  8b97a8000000         mov edx, dword ptr [edi + 0xa8]
// 00a3b6dc  8b5250               mov edx, dword ptr [edx + 0x50]
// 00a3b6df  55                   push ebp
// 00a3b6e0  50                   push eax
// 00a3b6e1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a3b6e5  8d8fa8000000         lea ecx, [edi + 0xa8]
// 00a3b6eb  50                   push eax
// 00a3b6ec  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a3b6ef  50                   push eax
// 00a3b6f0  ffd2                 call edx
// 00a3b6f2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3b6f6  64890d00000000       mov dword ptr fs:[0], ecx
// 00a3b6fd  59                   pop ecx
// 00a3b6fe  5f                   pop edi
// 00a3b6ff  5e                   pop esi
// 00a3b700  5d                   pop ebp
// 00a3b701  5b                   pop ebx
// 00a3b702  83c40c               add esp, 0xc
// 00a3b705  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneTabbedContainer@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneTabbedContainer.cpp