// roc 2008-06 00794590  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794590
//
// 00794590  83ec10               sub esp, 0x10
// 00794593  56                   push esi
// 00794594  57                   push edi
// 00794595  8bf1                 mov esi, ecx
// 00794597  33c9                 xor ecx, ecx
// 00794599  6a37                 push 0x37
// 0079459b  51                   push ecx
// 0079459c  51                   push ecx
// 0079459d  51                   push ecx
// 0079459e  33c0                 xor eax, eax
// 007945a0  51                   push ecx
// 007945a1  89461c               mov dword ptr [esi + 0x1c], eax
// 007945a4  8b4608               mov eax, dword ptr [esi + 8]
// 007945a7  51                   push ecx
// 007945a8  50                   push eax
// 007945a9  c7462400000000       mov dword ptr [esi + 0x24], 0
// 007945b0  894e20               mov dword ptr [esi + 0x20], ecx
// 007945b3  ff15b02b8000         call dword ptr [0x802bb0]
// 007945b9  8b4e08               mov ecx, dword ptr [esi + 8]
// 007945bc  51                   push ecx
// 007945bd  e81cc6f0ff           call 0x6a0bde
// 007945c2  8bf8                 mov edi, eax
// 007945c4  8b17                 mov edx, dword ptr [edi]
// 007945c6  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 007945cc  8bcf                 mov ecx, edi
// 007945ce  ffd0                 call eax
// 007945d0  f7d8                 neg eax
// 007945d2  1bc0                 sbb eax, eax
// 007945d4  23c7                 and eax, edi
// 007945d6  7410                 je 0x7945e8
// 007945d8  8b10                 mov edx, dword ptr [eax]
// 007945da  8bc8                 mov ecx, eax
// 007945dc  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 007945e2  6a00                 push 0
// 007945e4  ffd0                 call eax
// 007945e6  eb34                 jmp 0x79461c
// 007945e8  57                   push edi
// 007945e9  8d4c240c             lea ecx, [esp + 0xc]
// 007945ed  e83e35f6ff           call 0x6f7b30
// 007945f2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007945f6  2b4c240c             sub ecx, dword ptr [esp + 0xc]
// 007945fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 007945fe  2b442408             sub eax, dword ptr [esp + 8]
// 00794602  0fb7d1               movzx edx, cx
// 00794605  0fb7c8               movzx ecx, ax
// 00794608  c1e210               shl edx, 0x10
// 0079460b  0bd1                 or edx, ecx
// 0079460d  52                   push edx
// 0079460e  8b5720               mov edx, dword ptr [edi + 0x20]
// 00794611  6a00                 push 0
// 00794613  6a05                 push 5
// 00794615  52                   push edx
// 00794616  ff15142e8000         call dword ptr [0x802e14]
// 0079461c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0079461f  5f                   pop edi
// 00794620  5e                   pop esi
// 00794621  85c9                 test ecx, ecx
// 00794623  740e                 je 0x794633
// 00794625  8b01                 mov eax, dword ptr [ecx]
// 00794627  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0079462d  6a01                 push 1
// 0079462f  6a00                 push 0
// 00794631  ffd2                 call edx
// 00794633  83c410               add esp, 0x10
// 00794636  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?RecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2007FrameHook.cpp
