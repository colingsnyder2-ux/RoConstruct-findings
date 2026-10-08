// roc 2010-06 00738e20  unit: seg_00730000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00738e20
//
// 00738e20  8b442404             mov eax, dword ptr [esp + 4]
// 00738e24  83c003               add eax, 3
// 00738e27  99                   cdq 
// 00738e28  b906000000           mov ecx, 6
// 00738e2d  f7f9                 idiv ecx
// 00738e2f  8bc2                 mov eax, edx
// 00738e31  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?normalIdOpposite@RBX@@YA?AW4NormalId@1@W421@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
