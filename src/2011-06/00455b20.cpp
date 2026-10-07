// roc 2011-06 00455b20  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455b20
//
// 00455b20  64a100000000         mov eax, dword ptr fs:[0]
// 00455b26  6aff                 push -1
// 00455b28  684e1f9d00           push 0x9d1f4e
// 00455b2d  50                   push eax
// 00455b2e  b801000000           mov eax, 1
// 00455b33  64892500000000       mov dword ptr fs:[0], esp
// 00455b3a  8405142dcb00         test byte ptr [0xcb2d14], al
// 00455b40  7525                 jne 0x455b67
// 00455b42  0905142dcb00         or dword ptr [0xcb2d14], eax
// 00455b48  b9702ccb00           mov ecx, 0xcb2c70
// 00455b4d  c744240800000000     mov dword ptr [esp + 8], 0
// 00455b55  e8f6f1ffff           call 0x454d50
// 00455b5a  684016a300           push 0xa31640
// 00455b5f  e8f9553b00           call 0x80b15d
// 00455b64  83c404               add esp, 4
// 00455b67  8b0c24               mov ecx, dword ptr [esp]
// 00455b6a  b8702ccb00           mov eax, 0xcb2c70
// 00455b6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00455b76  83c40c               add esp, 0xc
// 00455b79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
