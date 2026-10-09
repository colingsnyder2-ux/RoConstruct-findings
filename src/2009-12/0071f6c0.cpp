// roc 2009-12 0071f6c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071f6c0
//
// 0071f6c0  8b442404             mov eax, dword ptr [esp + 4]
// 0071f6c4  83c003               add eax, 3
// 0071f6c7  99                   cdq 
// 0071f6c8  b906000000           mov ecx, 6
// 0071f6cd  f7f9                 idiv ecx
// 0071f6cf  8bc2                 mov eax, edx
// 0071f6d1  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?normalIdOpposite@RBX@@YA?AW4NormalId@1@W421@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
