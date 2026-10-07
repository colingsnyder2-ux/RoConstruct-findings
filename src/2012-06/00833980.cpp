// roc 2012-06 00833980  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833980
//
// 00833980  56                   push esi
// 00833981  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00833985  57                   push edi
// 00833986  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0083398a  56                   push esi
// 0083398b  57                   push edi
// 0083398c  e84fe3ffff           call 0x831ce0
// 00833991  83c408               add esp, 8
// 00833994  85c0                 test eax, eax
// 00833996  7f2d                 jg 0x8339c5
// 00833998  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0083399c  8b442414             mov eax, dword ptr [esp + 0x14]
// 008339a0  85ff                 test edi, edi
// 008339a2  7430                 je 0x8339d4
// 008339a4  85c0                 test eax, eax
// 008339a6  7416                 je 0x8339be
// 008339a8  8bc8                 mov ecx, eax
// 008339aa  8d7101               lea esi, [ecx + 1]
// 008339ad  8d4900               lea ecx, [ecx]
// 008339b0  8a11                 mov dl, byte ptr [ecx]
// 008339b2  41                   inc ecx
// 008339b3  84d2                 test dl, dl
// 008339b5  75f9                 jne 0x8339b0
// 008339b7  2bce                 sub ecx, esi
// 008339b9  890f                 mov dword ptr [edi], ecx
// 008339bb  5f                   pop edi
// 008339bc  5e                   pop esi
// 008339bd  c3                   ret 
// 008339be  33c9                 xor ecx, ecx
// 008339c0  890f                 mov dword ptr [edi], ecx
// 008339c2  5f                   pop edi
// 008339c3  5e                   pop esi
// 008339c4  c3                   ret 
// 008339c5  8b442418             mov eax, dword ptr [esp + 0x18]
// 008339c9  50                   push eax
// 008339ca  56                   push esi
// 008339cb  57                   push edi
// 008339cc  e84fffffff           call 0x833920
// 008339d1  83c40c               add esp, 0xc
// 008339d4  5f                   pop edi
// 008339d5  5e                   pop esi
// 008339d6  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
