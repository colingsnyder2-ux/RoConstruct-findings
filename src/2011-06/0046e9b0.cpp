// from server: 100% by auto
// roc 2011-06 0046e9b0  unit: RBX::PartInstance::W4Material::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046e9b0
//
// 0046e9b0  64a100000000         mov eax, dword ptr fs:[0]
// 0046e9b6  6aff                 push -1
// 0046e9b8  68fe389d00           push 0x9d38fe
// 0046e9bd  50                   push eax
// 0046e9be  b801000000           mov eax, 1
// 0046e9c3  64892500000000       mov dword ptr fs:[0], esp
// 0046e9ca  8405d43dcb00         test byte ptr [0xcb3dd4], al
// 0046e9d0  7525                 jne 0x46e9f7
// 0046e9d2  0905d43dcb00         or dword ptr [0xcb3dd4], eax
// 0046e9d8  b9303dcb00           mov ecx, 0xcb3d30
// 0046e9dd  c744240800000000     mov dword ptr [esp + 8], 0
// 0046e9e5  e836122000           call 0x66fc20
// 0046e9ea  68a01aa300           push 0xa31aa0
// 0046e9ef  e869c73900           call 0x80b15d
// 0046e9f4  83c404               add esp, 4
// 0046e9f7  8b0c24               mov ecx, dword ptr [esp]
// 0046e9fa  b8303dcb00           mov eax, 0xcb3d30
// 0046e9ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0046ea06  83c40c               add esp, 0xc
// 0046ea09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
