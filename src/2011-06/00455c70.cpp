// from server: 100% by auto
// roc 2011-06 00455c70  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455c70
//
// 00455c70  64a100000000         mov eax, dword ptr fs:[0]
// 00455c76  6aff                 push -1
// 00455c78  68ae1f9d00           push 0x9d1fae
// 00455c7d  50                   push eax
// 00455c7e  b801000000           mov eax, 1
// 00455c83  64892500000000       mov dword ptr fs:[0], esp
// 00455c8a  84050c2fcb00         test byte ptr [0xcb2f0c], al
// 00455c90  7525                 jne 0x455cb7
// 00455c92  09050c2fcb00         or dword ptr [0xcb2f0c], eax
// 00455c98  b9682ecb00           mov ecx, 0xcb2e68
// 00455c9d  c744240800000000     mov dword ptr [esp + 8], 0
// 00455ca5  e806f4ffff           call 0x4550b0
// 00455caa  681016a300           push 0xa31610
// 00455caf  e8a9543b00           call 0x80b15d
// 00455cb4  83c404               add esp, 4
// 00455cb7  8b0c24               mov ecx, dword ptr [esp]
// 00455cba  b8682ecb00           mov eax, 0xcb2e68
// 00455cbf  64890d00000000       mov dword ptr fs:[0], ecx
// 00455cc6  83c40c               add esp, 0xc
// 00455cc9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
