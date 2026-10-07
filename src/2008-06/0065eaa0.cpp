// roc 2008-06 0065eaa0  unit: seg_00650000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065eaa0
//
// 0065eaa0  83ec08               sub esp, 8
// 0065eaa3  57                   push edi
// 0065eaa4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0065eaa8  8b4708               mov eax, dword ptr [edi + 8]
// 0065eaab  83e800               sub eax, 0
// 0065eaae  0f8487000000         je 0x65eb3b
// 0065eab4  83e803               sub eax, 3
// 0065eab7  7414                 je 0x65eacd
// 0065eab9  83e801               sub eax, 1
// 0065eabc  7541                 jne 0x65eaff
// 0065eabe  8b07                 mov eax, dword ptr [edi]
// 0065eac0  5f                   pop edi
// 0065eac1  83c408               add esp, 8
// 0065eac4  89442408             mov dword ptr [esp + 8], eax
// 0065eac8  e993ffffff           jmp 0x65ea60
// 0065eacd  dd07                 fld qword ptr [edi]
// 0065eacf  dd5c2404             fstp qword ptr [esp + 4]
// 0065ead3  dd442404             fld qword ptr [esp + 4]
// 0065ead7  db5c2414             fistp dword ptr [esp + 0x14]
// 0065eadb  db442414             fild dword ptr [esp + 0x14]
// 0065eadf  dc1f                 fcomp qword ptr [edi]
// 0065eae1  dfe0                 fnstsw ax
// 0065eae3  f6c444               test ah, 0x44
// 0065eae6  7a17                 jp 0x65eaff
// 0065eae8  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065eaec  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065eaf0  52                   push edx
// 0065eaf1  50                   push eax
// 0065eaf2  e8d9feffff           call 0x65e9d0
// 0065eaf7  83c408               add esp, 8
// 0065eafa  5f                   pop edi
// 0065eafb  83c408               add esp, 8
// 0065eafe  c3                   ret 
// 0065eaff  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065eb03  56                   push esi
// 0065eb04  8bd7                 mov edx, edi
// 0065eb06  e815f9ffff           call 0x65e420
// 0065eb0b  8bf0                 mov esi, eax
// 0065eb0d  8d4900               lea ecx, [ecx]
// 0065eb10  8d4e10               lea ecx, [esi + 0x10]
// 0065eb13  57                   push edi
// 0065eb14  51                   push ecx
// 0065eb15  e8563bfcff           call 0x622670
// 0065eb1a  83c408               add esp, 8
// 0065eb1d  85c0                 test eax, eax
// 0065eb1f  7512                 jne 0x65eb33
// 0065eb21  8b761c               mov esi, dword ptr [esi + 0x1c]
// 0065eb24  85f6                 test esi, esi
// 0065eb26  75e8                 jne 0x65eb10
// 0065eb28  5e                   pop esi
// 0065eb29  b880488400           mov eax, 0x844880
// 0065eb2e  5f                   pop edi
// 0065eb2f  83c408               add esp, 8
// 0065eb32  c3                   ret 
// 0065eb33  8bc6                 mov eax, esi
// 0065eb35  5e                   pop esi
// 0065eb36  5f                   pop edi
// 0065eb37  83c408               add esp, 8
// 0065eb3a  c3                   ret 
// 0065eb3b  b880488400           mov eax, 0x844880
// 0065eb40  5f                   pop edi
// 0065eb41  83c408               add esp, 8
// 0065eb44  c3                   ret 
// library lua-5.1.4/ltable.c (function _luaH_get)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
