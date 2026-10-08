// roc 2008-06 005ec180  unit: RBX::Sky  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec180
//
// 005ec180  8b442404             mov eax, dword ptr [esp + 4]
// 005ec184  83c003               add eax, 3
// 005ec187  99                   cdq 
// 005ec188  b906000000           mov ecx, 6
// 005ec18d  f7f9                 idiv ecx
// 005ec18f  8bc2                 mov eax, edx
// 005ec191  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?normalIdOpposite@RBX@@YA?AW4NormalId@1@W421@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
