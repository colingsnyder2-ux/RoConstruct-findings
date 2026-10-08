// roc 2008-06 005ec9d0  unit: RBX::Sky  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec9d0
//
// 005ec9d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ec9d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec9d8  8b542404             mov edx, dword ptr [esp + 4]
// 005ec9dc  50                   push eax
// 005ec9dd  51                   push ecx
// 005ec9de  52                   push edx
// 005ec9df  e84cf9ffff           call 0x5ec330
// 005ec9e4  83c40c               add esp, 0xc
// 005ec9e7  8bc2                 mov eax, edx
// 005ec9e9  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?mapToUvw_Legacy@RBX@@YA?AVVector3@G3D@@ABV23@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
