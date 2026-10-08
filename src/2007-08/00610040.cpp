// from server: 100% by auto
// roc 2007-08 00610040  unit: RBX::Ball  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00610040
//
// 00610040  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00610044  56                   push esi
// 00610045  8b742408             mov esi, dword ptr [esp + 8]
// 00610049  50                   push eax
// 0061004a  56                   push esi
// 0061004b  e880240000           call 0x6124d0
// 00610050  83c408               add esp, 8
// 00610053  83780800             cmp dword ptr [eax + 8], 0
// 00610057  750d                 jne 0x610066
// 00610059  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061005d  b201                 mov dl, 1
// 0061005f  d2e2                 shl dl, cl
// 00610061  085606               or byte ptr [esi + 6], dl
// 00610064  33c0                 xor eax, eax
// 00610066  5e                   pop esi
// 00610067  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_gettm)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
