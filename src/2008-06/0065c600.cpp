// from server: 100% by auto
// roc 2008-06 0065c600  unit: RBX::BallBallContact  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c600
//
// 0065c600  8b542408             mov edx, dword ptr [esp + 8]
// 0065c604  8b4208               mov eax, dword ptr [edx + 8]
// 0065c607  8bc8                 mov ecx, eax
// 0065c609  83e905               sub ecx, 5
// 0065c60c  56                   push esi
// 0065c60d  8b742408             mov esi, dword ptr [esp + 8]
// 0065c611  7418                 je 0x65c62b
// 0065c613  83e902               sub ecx, 2
// 0065c616  740c                 je 0x65c624
// 0065c618  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065c61b  8b848198000000       mov eax, dword ptr [ecx + eax*4 + 0x98]
// 0065c622  eb0c                 jmp 0x65c630
// 0065c624  8b12                 mov edx, dword ptr [edx]
// 0065c626  8b4208               mov eax, dword ptr [edx + 8]
// 0065c629  eb05                 jmp 0x65c630
// 0065c62b  8b02                 mov eax, dword ptr [edx]
// 0065c62d  8b4008               mov eax, dword ptr [eax + 8]
// 0065c630  85c0                 test eax, eax
// 0065c632  741a                 je 0x65c64e
// 0065c634  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065c637  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065c63b  8b8c91bc000000       mov ecx, dword ptr [ecx + edx*4 + 0xbc]
// 0065c642  51                   push ecx
// 0065c643  50                   push eax
// 0065c644  e817240000           call 0x65ea60
// 0065c649  83c408               add esp, 8
// 0065c64c  5e                   pop esi
// 0065c64d  c3                   ret 
// 0065c64e  b880488400           mov eax, 0x844880
// 0065c653  5e                   pop esi
// 0065c654  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_gettmbyobj)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
