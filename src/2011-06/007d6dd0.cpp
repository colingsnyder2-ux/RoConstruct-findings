// from server: 100% by auto
// roc 2011-06 007d6dd0  unit: RBX::EquationDisplay  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6dd0
//
// 007d6dd0  56                   push esi
// 007d6dd1  8b742408             mov esi, dword ptr [esp + 8]
// 007d6dd5  8b4610               mov eax, dword ptr [esi + 0x10]
// 007d6dd8  83783000             cmp dword ptr [eax + 0x30], 0
// 007d6ddc  7410                 je 0x7d6dee
// 007d6dde  8bff                 mov edi, edi
// 007d6de0  e82bffffff           call 0x7d6d10
// 007d6de5  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007d6de8  83793000             cmp dword ptr [ecx + 0x30], 0
// 007d6dec  75f2                 jne 0x7d6de0
// 007d6dee  5e                   pop esi
// 007d6def  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_callGCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
