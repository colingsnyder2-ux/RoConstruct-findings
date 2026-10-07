// roc 2008-06 0056be10  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056be10
//
// 0056be10  64a100000000         mov eax, dword ptr fs:[0]
// 0056be16  6aff                 push -1
// 0056be18  688efb7c00           push 0x7cfb8e
// 0056be1d  50                   push eax
// 0056be1e  b801000000           mov eax, 1
// 0056be23  64892500000000       mov dword ptr fs:[0], esp
// 0056be2a  8405004b9700         test byte ptr [0x974b00], al
// 0056be30  7525                 jne 0x56be57
// 0056be32  0905004b9700         or dword ptr [0x974b00], eax
// 0056be38  b9f44a9700           mov ecx, 0x974af4
// 0056be3d  c744240800000000     mov dword ptr [esp + 8], 0
// 0056be45  e82672ffff           call 0x563070
// 0056be4a  68a0d17f00           push 0x7fd1a0
// 0056be4f  e85b591300           call 0x6a17af
// 0056be54  83c404               add esp, 4
// 0056be57  8b0c24               mov ecx, dword ptr [esp]
// 0056be5a  b8f44a9700           mov eax, 0x974af4
// 0056be5f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056be66  83c40c               add esp, 0xc
// 0056be69  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
