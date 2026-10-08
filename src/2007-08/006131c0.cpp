// from server: 100% by auto
// roc 2007-08 006131c0  unit: seg_00610000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006131c0
//
// 006131c0  56                   push esi
// 006131c1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006131c5  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006131c8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006131cb  57                   push edi
// 006131cc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006131d0  03c0                 add eax, eax
// 006131d2  6a00                 push 0
// 006131d4  03c0                 add eax, eax
// 006131d6  50                   push eax
// 006131d7  51                   push ecx
// 006131d8  57                   push edi
// 006131d9  e812080000           call 0x6139f0
// 006131de  8b5634               mov edx, dword ptr [esi + 0x34]
// 006131e1  8b4610               mov eax, dword ptr [esi + 0x10]
// 006131e4  03d2                 add edx, edx
// 006131e6  6a00                 push 0
// 006131e8  03d2                 add edx, edx
// 006131ea  52                   push edx
// 006131eb  50                   push eax
// 006131ec  57                   push edi
// 006131ed  e8fe070000           call 0x6139f0
// 006131f2  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006131f5  8b5608               mov edx, dword ptr [esi + 8]
// 006131f8  6a00                 push 0
// 006131fa  c1e104               shl ecx, 4
// 006131fd  51                   push ecx
// 006131fe  52                   push edx
// 006131ff  57                   push edi
// 00613200  e8eb070000           call 0x6139f0
// 00613205  8b4630               mov eax, dword ptr [esi + 0x30]
// 00613208  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0061320b  03c0                 add eax, eax
// 0061320d  6a00                 push 0
// 0061320f  03c0                 add eax, eax
// 00613211  50                   push eax
// 00613212  51                   push ecx
// 00613213  57                   push edi
// 00613214  e8d7070000           call 0x6139f0
// 00613219  8b4638               mov eax, dword ptr [esi + 0x38]
// 0061321c  8d1440               lea edx, [eax + eax*2]
// 0061321f  8b4618               mov eax, dword ptr [esi + 0x18]
// 00613222  83c440               add esp, 0x40
// 00613225  03d2                 add edx, edx
// 00613227  6a00                 push 0
// 00613229  03d2                 add edx, edx
// 0061322b  52                   push edx
// 0061322c  50                   push eax
// 0061322d  57                   push edi
// 0061322e  e8bd070000           call 0x6139f0
// 00613233  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00613236  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00613239  03c9                 add ecx, ecx
// 0061323b  6a00                 push 0
// 0061323d  03c9                 add ecx, ecx
// 0061323f  51                   push ecx
// 00613240  52                   push edx
// 00613241  57                   push edi
// 00613242  e8a9070000           call 0x6139f0
// 00613247  6a00                 push 0
// 00613249  6a4c                 push 0x4c
// 0061324b  56                   push esi
// 0061324c  57                   push edi
// 0061324d  e89e070000           call 0x6139f0
// 00613252  83c430               add esp, 0x30
// 00613255  5f                   pop edi
// 00613256  5e                   pop esi
// 00613257  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
