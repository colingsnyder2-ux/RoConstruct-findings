// roc 2010-06 0077aa90  unit: RBX::PartDropTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077aa90
//
// 0077aa90  56                   push esi
// 0077aa91  8b742408             mov esi, dword ptr [esp + 8]
// 0077aa95  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077aa98  83783000             cmp dword ptr [eax + 0x30], 0
// 0077aa9c  7410                 je 0x77aaae
// 0077aa9e  8bff                 mov edi, edi
// 0077aaa0  e82bffffff           call 0x77a9d0
// 0077aaa5  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077aaa8  83793000             cmp dword ptr [ecx + 0x30], 0
// 0077aaac  75f2                 jne 0x77aaa0
// 0077aaae  5e                   pop esi
// 0077aaaf  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_callGCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
