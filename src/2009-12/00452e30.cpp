// roc 2009-12 00452e30  unit: CRobloxControlColorSelector  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452e30
//
// 00452e30  53                   push ebx
// 00452e31  8bd9                 mov ebx, ecx
// 00452e33  56                   push esi
// 00452e34  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00452e37  85f6                 test esi, esi
// 00452e39  7425                 je 0x452e60
// 00452e3b  57                   push edi
// 00452e3c  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00452e3f  3bf7                 cmp esi, edi
// 00452e41  7410                 je 0x452e53
// 00452e43  8d4e08               lea ecx, [esi + 8]
// 00452e46  ff15c0de9800         call dword ptr [0x98dec0]
// 00452e4c  83c60c               add esi, 0xc
// 00452e4f  3bf7                 cmp esi, edi
// 00452e51  75f0                 jne 0x452e43
// 00452e53  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00452e56  50                   push eax
// 00452e57  e8fe093a00           call 0x7f385a
// 00452e5c  83c404               add esp, 4
// 00452e5f  5f                   pop edi
// 00452e60  5e                   pop esi
// 00452e61  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 00452e68  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 00452e6f  c7431400000000       mov dword ptr [ebx + 0x14], 0
// 00452e76  5b                   pop ebx
// 00452e77  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$vector@UColorEntry@@V?$allocator@UColorEntry@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp