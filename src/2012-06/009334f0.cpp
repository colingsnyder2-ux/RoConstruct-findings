// roc 2012-06 009334f0  unit: RBX::BallCellContact  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009334f0
//
// 009334f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009334f4  56                   push esi
// 009334f5  8b742408             mov esi, dword ptr [esp + 8]
// 009334f9  50                   push eax
// 009334fa  56                   push esi
// 009334fb  e880250000           call 0x935a80
// 00933500  83c408               add esp, 8
// 00933503  83780800             cmp dword ptr [eax + 8], 0
// 00933507  750d                 jne 0x933516
// 00933509  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0093350d  b201                 mov dl, 1
// 0093350f  d2e2                 shl dl, cl
// 00933511  085606               or byte ptr [esi + 6], dl
// 00933514  33c0                 xor eax, eax
// 00933516  5e                   pop esi
// 00933517  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_gettm)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
