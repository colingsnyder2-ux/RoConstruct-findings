// roc 2010-06 0077b0a0  unit: RBX::PartDropTool  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077b0a0
//
// 0077b0a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077b0a4  56                   push esi
// 0077b0a5  8b742408             mov esi, dword ptr [esp + 8]
// 0077b0a9  50                   push eax
// 0077b0aa  56                   push esi
// 0077b0ab  e890240000           call 0x77d540
// 0077b0b0  83c408               add esp, 8
// 0077b0b3  83780800             cmp dword ptr [eax + 8], 0
// 0077b0b7  750d                 jne 0x77b0c6
// 0077b0b9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077b0bd  b201                 mov dl, 1
// 0077b0bf  d2e2                 shl dl, cl
// 0077b0c1  085606               or byte ptr [esi + 6], dl
// 0077b0c4  33c0                 xor eax, eax
// 0077b0c6  5e                   pop esi
// 0077b0c7  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_gettm)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
