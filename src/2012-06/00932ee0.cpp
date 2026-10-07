// roc 2012-06 00932ee0  unit: RBX::BallCellContact  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00932ee0
//
// 00932ee0  56                   push esi
// 00932ee1  8b742408             mov esi, dword ptr [esp + 8]
// 00932ee5  8b4610               mov eax, dword ptr [esi + 0x10]
// 00932ee8  83783000             cmp dword ptr [eax + 0x30], 0
// 00932eec  7410                 je 0x932efe
// 00932eee  8bff                 mov edi, edi
// 00932ef0  e81bffffff           call 0x932e10
// 00932ef5  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00932ef8  83793000             cmp dword ptr [ecx + 0x30], 0
// 00932efc  75f2                 jne 0x932ef0
// 00932efe  5e                   pop esi
// 00932eff  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_callGCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
