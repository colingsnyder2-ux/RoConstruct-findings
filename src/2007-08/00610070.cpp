// from server: 100% by auto
// roc 2007-08 00610070  unit: RBX::Ball  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00610070
//
// 00610070  8b542408             mov edx, dword ptr [esp + 8]
// 00610074  8b4208               mov eax, dword ptr [edx + 8]
// 00610077  8bc8                 mov ecx, eax
// 00610079  83e905               sub ecx, 5
// 0061007c  56                   push esi
// 0061007d  8b742408             mov esi, dword ptr [esp + 8]
// 00610081  7418                 je 0x61009b
// 00610083  83e902               sub ecx, 2
// 00610086  740c                 je 0x610094
// 00610088  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0061008b  8b848198000000       mov eax, dword ptr [ecx + eax*4 + 0x98]
// 00610092  eb0c                 jmp 0x6100a0
// 00610094  8b12                 mov edx, dword ptr [edx]
// 00610096  8b4208               mov eax, dword ptr [edx + 8]
// 00610099  eb05                 jmp 0x6100a0
// 0061009b  8b02                 mov eax, dword ptr [edx]
// 0061009d  8b4008               mov eax, dword ptr [eax + 8]
// 006100a0  85c0                 test eax, eax
// 006100a2  741a                 je 0x6100be
// 006100a4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006100a7  8b542410             mov edx, dword ptr [esp + 0x10]
// 006100ab  8b8c91bc000000       mov ecx, dword ptr [ecx + edx*4 + 0xbc]
// 006100b2  51                   push ecx
// 006100b3  50                   push eax
// 006100b4  e817240000           call 0x6124d0
// 006100b9  83c408               add esp, 8
// 006100bc  5e                   pop esi
// 006100bd  c3                   ret 
// 006100be  b8e82f7c00           mov eax, 0x7c2fe8
// 006100c3  5e                   pop esi
// 006100c4  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_gettmbyobj)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
