// from server: 100% by auto
// roc 2007-08 00612510  unit: seg_00610000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612510
//
// 00612510  83ec08               sub esp, 8
// 00612513  57                   push edi
// 00612514  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00612518  8b4708               mov eax, dword ptr [edi + 8]
// 0061251b  83e800               sub eax, 0
// 0061251e  0f8487000000         je 0x6125ab
// 00612524  83e803               sub eax, 3
// 00612527  7414                 je 0x61253d
// 00612529  83e801               sub eax, 1
// 0061252c  7541                 jne 0x61256f
// 0061252e  8b07                 mov eax, dword ptr [edi]
// 00612530  5f                   pop edi
// 00612531  83c408               add esp, 8
// 00612534  89442408             mov dword ptr [esp + 8], eax
// 00612538  e993ffffff           jmp 0x6124d0
// 0061253d  dd07                 fld qword ptr [edi]
// 0061253f  dd5c2404             fstp qword ptr [esp + 4]
// 00612543  dd442404             fld qword ptr [esp + 4]
// 00612547  db5c2414             fistp dword ptr [esp + 0x14]
// 0061254b  db442414             fild dword ptr [esp + 0x14]
// 0061254f  dc1f                 fcomp qword ptr [edi]
// 00612551  dfe0                 fnstsw ax
// 00612553  f6c444               test ah, 0x44
// 00612556  7a17                 jp 0x61256f
// 00612558  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061255c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00612560  52                   push edx
// 00612561  50                   push eax
// 00612562  e8d9feffff           call 0x612440
// 00612567  83c408               add esp, 8
// 0061256a  5f                   pop edi
// 0061256b  83c408               add esp, 8
// 0061256e  c3                   ret 
// 0061256f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00612573  56                   push esi
// 00612574  8bd7                 mov edx, edi
// 00612576  e805f9ffff           call 0x611e80
// 0061257b  8bf0                 mov esi, eax
// 0061257d  8d4900               lea ecx, [ecx]
// 00612580  8d4e10               lea ecx, [esi + 0x10]
// 00612583  57                   push edi
// 00612584  51                   push ecx
// 00612585  e8f6c4ffff           call 0x60ea80
// 0061258a  83c408               add esp, 8
// 0061258d  85c0                 test eax, eax
// 0061258f  7512                 jne 0x6125a3
// 00612591  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00612594  85f6                 test esi, esi
// 00612596  75e8                 jne 0x612580
// 00612598  5e                   pop esi
// 00612599  b8e82f7c00           mov eax, 0x7c2fe8
// 0061259e  5f                   pop edi
// 0061259f  83c408               add esp, 8
// 006125a2  c3                   ret 
// 006125a3  8bc6                 mov eax, esi
// 006125a5  5e                   pop esi
// 006125a6  5f                   pop edi
// 006125a7  83c408               add esp, 8
// 006125aa  c3                   ret 
// 006125ab  b8e82f7c00           mov eax, 0x7c2fe8
// 006125b0  5f                   pop edi
// 006125b1  83c408               add esp, 8
// 006125b4  c3                   ret 
// library lua-5.1.4/ltable.c (function _luaH_get)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
