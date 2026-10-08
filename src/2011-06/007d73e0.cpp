// from server: 100% by auto
// roc 2011-06 007d73e0  unit: RBX::EquationDisplay  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d73e0
//
// 007d73e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d73e4  56                   push esi
// 007d73e5  8b742408             mov esi, dword ptr [esp + 8]
// 007d73e9  50                   push eax
// 007d73ea  56                   push esi
// 007d73eb  e880250000           call 0x7d9970
// 007d73f0  83c408               add esp, 8
// 007d73f3  83780800             cmp dword ptr [eax + 8], 0
// 007d73f7  750d                 jne 0x7d7406
// 007d73f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d73fd  b201                 mov dl, 1
// 007d73ff  d2e2                 shl dl, cl
// 007d7401  085606               or byte ptr [esi + 6], dl
// 007d7404  33c0                 xor eax, eax
// 007d7406  5e                   pop esi
// 007d7407  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_gettm)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
