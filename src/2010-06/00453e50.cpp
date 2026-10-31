// roc 2010-06 00453e50  unit: CRobloxControlColorSelector  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00453e50
//
// 00453e50  53                   push ebx
// 00453e51  8bd9                 mov ebx, ecx
// 00453e53  56                   push esi
// 00453e54  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00453e57  85f6                 test esi, esi
// 00453e59  7425                 je 0x453e80
// 00453e5b  57                   push edi
// 00453e5c  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00453e5f  3bf7                 cmp esi, edi
// 00453e61  7410                 je 0x453e73
// 00453e63  8d4e08               lea ecx, [esi + 8]
// 00453e66  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00453e6c  83c60c               add esi, 0xc
// 00453e6f  3bf7                 cmp esi, edi
// 00453e71  75f0                 jne 0x453e63
// 00453e73  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00453e76  50                   push eax
// 00453e77  e81e3b3500           call 0x7a799a
// 00453e7c  83c404               add esp, 4
// 00453e7f  5f                   pop edi
// 00453e80  5e                   pop esi
// 00453e81  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 00453e88  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 00453e8f  c7431400000000       mov dword ptr [ebx + 0x14], 0
// 00453e96  5b                   pop ebx
// 00453e97  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$vector@UColorEntry@@V?$allocator@UColorEntry@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp