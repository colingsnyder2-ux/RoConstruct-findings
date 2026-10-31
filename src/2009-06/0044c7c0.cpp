// roc 2009-06 0044c7c0  unit: CRobloxControlColorSelector  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c7c0
//
// 0044c7c0  53                   push ebx
// 0044c7c1  8bd9                 mov ebx, ecx
// 0044c7c3  56                   push esi
// 0044c7c4  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0044c7c7  85f6                 test esi, esi
// 0044c7c9  7425                 je 0x44c7f0
// 0044c7cb  57                   push edi
// 0044c7cc  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0044c7cf  3bf7                 cmp esi, edi
// 0044c7d1  7410                 je 0x44c7e3
// 0044c7d3  8d4e08               lea ecx, [esi + 8]
// 0044c7d6  ff1510fd8900         call dword ptr [0x89fd10]
// 0044c7dc  83c60c               add esi, 0xc
// 0044c7df  3bf7                 cmp esi, edi
// 0044c7e1  75f0                 jne 0x44c7d3
// 0044c7e3  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0044c7e6  50                   push eax
// 0044c7e7  e846c22c00           call 0x718a32
// 0044c7ec  83c404               add esp, 4
// 0044c7ef  5f                   pop edi
// 0044c7f0  5e                   pop esi
// 0044c7f1  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 0044c7f8  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 0044c7ff  c7431400000000       mov dword ptr [ebx + 0x14], 0
// 0044c806  5b                   pop ebx
// 0044c807  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$vector@UColorEntry@@V?$allocator@UColorEntry@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp