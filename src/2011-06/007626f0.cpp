// from server: 100% by auto
// roc 2011-06 007626f0  unit: seg_00760000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007626f0
//
// 007626f0  8b442408             mov eax, dword ptr [esp + 8]
// 007626f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007626f8  83ec1c               sub esp, 0x1c
// 007626fb  e8b0faffff           call 0x7621b0
// 00762700  83780803             cmp dword ptr [eax + 8], 3
// 00762704  7416                 je 0x76271c
// 00762706  8d4c240c             lea ecx, [esp + 0xc]
// 0076270a  51                   push ecx
// 0076270b  50                   push eax
// 0076270c  e85f4d0700           call 0x7d7470
// 00762711  83c408               add esp, 8
// 00762714  85c0                 test eax, eax
// 00762716  7504                 jne 0x76271c
// 00762718  83c41c               add esp, 0x1c
// 0076271b  c3                   ret 
// 0076271c  dd00                 fld qword ptr [eax]
// 0076271e  dd5c2404             fstp qword ptr [esp + 4]
// 00762722  dd442404             fld qword ptr [esp + 4]
// 00762726  db1c24               fistp dword ptr [esp]
// 00762729  8b0424               mov eax, dword ptr [esp]
// 0076272c  83c41c               add esp, 0x1c
// 0076272f  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_tointeger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
