// roc 2007-08 005b9950  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9950
//
// 005b9950  8b442404             mov eax, dword ptr [esp + 4]
// 005b9954  83c003               add eax, 3
// 005b9957  99                   cdq 
// 005b9958  b906000000           mov ecx, 6
// 005b995d  f7f9                 idiv ecx
// 005b995f  8bc2                 mov eax, edx
// 005b9961  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?normalIdOpposite@RBX@@YA?AW4NormalId@1@W421@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
