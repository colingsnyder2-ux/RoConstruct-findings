// from server: 100% by auto
// roc 2007-08 006133c0  unit: seg_00610000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006133c0
//
// 006133c0  53                   push ebx
// 006133c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006133c5  85db                 test ebx, ebx
// 006133c7  55                   push ebp
// 006133c8  56                   push esi
// 006133c9  57                   push edi
// 006133ca  7478                 je 0x613444
// 006133cc  8b742414             mov esi, dword ptr [esp + 0x14]
// 006133d0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006133d4  833e00               cmp dword ptr [esi], 0
// 006133d7  7542                 jne 0x61341b
// 006133d9  8b560c               mov edx, dword ptr [esi + 0xc]
// 006133dc  8b4610               mov eax, dword ptr [esi + 0x10]
// 006133df  8d4c241c             lea ecx, [esp + 0x1c]
// 006133e3  51                   push ecx
// 006133e4  52                   push edx
// 006133e5  50                   push eax
// 006133e6  8b4608               mov eax, dword ptr [esi + 8]
// 006133e9  ffd0                 call eax
// 006133eb  83c40c               add esp, 0xc
// 006133ee  85c0                 test eax, eax
// 006133f0  7459                 je 0x61344b
// 006133f2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006133f6  85c9                 test ecx, ecx
// 006133f8  7451                 je 0x61344b
// 006133fa  83c1ff               add ecx, -1
// 006133fd  894604               mov dword ptr [esi + 4], eax
// 00613400  890e                 mov dword ptr [esi], ecx
// 00613402  0fb610               movzx edx, byte ptr [eax]
// 00613405  83c001               add eax, 1
// 00613408  83faff               cmp edx, -1
// 0061340b  894604               mov dword ptr [esi + 4], eax
// 0061340e  743b                 je 0x61344b
// 00613410  83c101               add ecx, 1
// 00613413  83c0ff               add eax, -1
// 00613416  890e                 mov dword ptr [esi], ecx
// 00613418  894604               mov dword ptr [esi + 4], eax
// 0061341b  8b4604               mov eax, dword ptr [esi + 4]
// 0061341e  0fb608               movzx ecx, byte ptr [eax]
// 00613421  83f9ff               cmp ecx, -1
// 00613424  7425                 je 0x61344b
// 00613426  8b3e                 mov edi, dword ptr [esi]
// 00613428  3bdf                 cmp ebx, edi
// 0061342a  7702                 ja 0x61342e
// 0061342c  8bfb                 mov edi, ebx
// 0061342e  57                   push edi
// 0061342f  50                   push eax
// 00613430  55                   push ebp
// 00613431  e816d90100           call 0x630d4c
// 00613436  293e                 sub dword ptr [esi], edi
// 00613438  017e04               add dword ptr [esi + 4], edi
// 0061343b  83c40c               add esp, 0xc
// 0061343e  03ef                 add ebp, edi
// 00613440  2bdf                 sub ebx, edi
// 00613442  7590                 jne 0x6133d4
// 00613444  5f                   pop edi
// 00613445  5e                   pop esi
// 00613446  5d                   pop ebp
// 00613447  33c0                 xor eax, eax
// 00613449  5b                   pop ebx
// 0061344a  c3                   ret 
// 0061344b  5f                   pop edi
// 0061344c  5e                   pop esi
// 0061344d  5d                   pop ebp
// 0061344e  8bc3                 mov eax, ebx
// 00613450  5b                   pop ebx
// 00613451  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_read)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
