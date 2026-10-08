// roc 2007-03 005b4750  unit: seg_005b0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b4750
//
// 005b4750  8b442404             mov eax, dword ptr [esp + 4]
// 005b4754  83c003               add eax, 3
// 005b4757  99                   cdq 
// 005b4758  b906000000           mov ecx, 6
// 005b475d  f7f9                 idiv ecx
// 005b475f  8bc2                 mov eax, edx
// 005b4761  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?normalIdOpposite@RBX@@YA?AW4NormalId@1@W421@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
