// roc 2007-08 0060fa20  unit: RBX::Ball  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fa20
//
// 0060fa20  56                   push esi
// 0060fa21  8b742408             mov esi, dword ptr [esp + 8]
// 0060fa25  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060fa28  83783000             cmp dword ptr [eax + 0x30], 0
// 0060fa2c  7410                 je 0x60fa3e
// 0060fa2e  8bff                 mov edi, edi
// 0060fa30  e82bffffff           call 0x60f960
// 0060fa35  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0060fa38  83793000             cmp dword ptr [ecx + 0x30], 0
// 0060fa3c  75f2                 jne 0x60fa30
// 0060fa3e  5e                   pop esi
// 0060fa3f  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_callGCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
