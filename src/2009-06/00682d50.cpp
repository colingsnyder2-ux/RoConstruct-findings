// roc 2009-06 00682d50  unit: RBX::Sky  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00682d50
//
// 00682d50  8b442404             mov eax, dword ptr [esp + 4]
// 00682d54  83c003               add eax, 3
// 00682d57  99                   cdq 
// 00682d58  b906000000           mov ecx, 6
// 00682d5d  f7f9                 idiv ecx
// 00682d5f  8bc2                 mov eax, edx
// 00682d61  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?normalIdOpposite@RBX@@YA?AW4NormalId@1@W421@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
