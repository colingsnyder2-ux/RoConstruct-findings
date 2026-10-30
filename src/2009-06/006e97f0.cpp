// from server: 100% by auto
// roc 2009-06 006e97f0  unit: RBX::PartDropTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e97f0
//
// 006e97f0  56                   push esi
// 006e97f1  8b742408             mov esi, dword ptr [esp + 8]
// 006e97f5  8b4610               mov eax, dword ptr [esi + 0x10]
// 006e97f8  83783000             cmp dword ptr [eax + 0x30], 0
// 006e97fc  7410                 je 0x6e980e
// 006e97fe  8bff                 mov edi, edi
// 006e9800  e82bffffff           call 0x6e9730
// 006e9805  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006e9808  83793000             cmp dword ptr [ecx + 0x30], 0
// 006e980c  75f2                 jne 0x6e9800
// 006e980e  5e                   pop esi
// 006e980f  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_callGCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
