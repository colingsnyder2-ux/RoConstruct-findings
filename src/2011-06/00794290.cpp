// roc 2011-06 00794290  unit: seg_00790000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00794290
//
// 00794290  8b442404             mov eax, dword ptr [esp + 4]
// 00794294  83c003               add eax, 3
// 00794297  99                   cdq 
// 00794298  b906000000           mov ecx, 6
// 0079429d  f7f9                 idiv ecx
// 0079429f  8bc2                 mov eax, edx
// 007942a1  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?normalIdOpposite@RBX@@YA?AW4NormalId@1@W421@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
