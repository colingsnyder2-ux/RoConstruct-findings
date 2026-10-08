// roc 2008-06 005ec310  unit: RBX::Sky  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec310
//
// 005ec310  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ec314  83ec0c               sub esp, 0xc
// 005ec317  6a02                 push 2
// 005ec319  8d442404             lea eax, [esp + 4]
// 005ec31d  50                   push eax
// 005ec31e  e81d6ff2ff           call 0x513240
// 005ec323  50                   push eax
// 005ec324  e867ffffff           call 0x5ec290
// 005ec329  83c410               add esp, 0x10
// 005ec32c  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?Matrix3ToNormalId@RBX@@YA?AW4NormalId@1@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
