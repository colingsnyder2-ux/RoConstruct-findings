// roc 2008-06 0065c5d0  unit: RBX::BallBallContact  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c5d0
//
// 0065c5d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065c5d4  56                   push esi
// 0065c5d5  8b742408             mov esi, dword ptr [esp + 8]
// 0065c5d9  50                   push eax
// 0065c5da  56                   push esi
// 0065c5db  e880240000           call 0x65ea60
// 0065c5e0  83c408               add esp, 8
// 0065c5e3  83780800             cmp dword ptr [eax + 8], 0
// 0065c5e7  750d                 jne 0x65c5f6
// 0065c5e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065c5ed  b201                 mov dl, 1
// 0065c5ef  d2e2                 shl dl, cl
// 0065c5f1  085606               or byte ptr [esi + 6], dl
// 0065c5f4  33c0                 xor eax, eax
// 0065c5f6  5e                   pop esi
// 0065c5f7  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_gettm)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
