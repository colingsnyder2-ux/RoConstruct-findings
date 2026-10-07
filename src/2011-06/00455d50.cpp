// roc 2011-06 00455d50  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455d50
//
// 00455d50  64a100000000         mov eax, dword ptr fs:[0]
// 00455d56  6aff                 push -1
// 00455d58  68ee1f9d00           push 0x9d1fee
// 00455d5d  50                   push eax
// 00455d5e  b801000000           mov eax, 1
// 00455d63  64892500000000       mov dword ptr fs:[0], esp
// 00455d6a  84055c30cb00         test byte ptr [0xcb305c], al
// 00455d70  7525                 jne 0x455d97
// 00455d72  09055c30cb00         or dword ptr [0xcb305c], eax
// 00455d78  b9b82fcb00           mov ecx, 0xcb2fb8
// 00455d7d  c744240800000000     mov dword ptr [esp + 8], 0
// 00455d85  e886f5ffff           call 0x455310
// 00455d8a  68f015a300           push 0xa315f0
// 00455d8f  e8c9533b00           call 0x80b15d
// 00455d94  83c404               add esp, 4
// 00455d97  8b0c24               mov ecx, dword ptr [esp]
// 00455d9a  b8b82fcb00           mov eax, 0xcb2fb8
// 00455d9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00455da6  83c40c               add esp, 0xc
// 00455da9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
