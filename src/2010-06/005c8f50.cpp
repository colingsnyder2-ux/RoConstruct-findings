// roc 2010-06 005c8f50  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c8f50
//
// 005c8f50  64a100000000         mov eax, dword ptr fs:[0]
// 005c8f56  6aff                 push -1
// 005c8f58  680e5f9900           push 0x995f0e
// 005c8f5d  50                   push eax
// 005c8f5e  b801000000           mov eax, 1
// 005c8f63  64892500000000       mov dword ptr fs:[0], esp
// 005c8f6a  8405f487c100         test byte ptr [0xc187f4], al
// 005c8f70  7525                 jne 0x5c8f97
// 005c8f72  0905f487c100         or dword ptr [0xc187f4], eax
// 005c8f78  b9dc87c100           mov ecx, 0xc187dc
// 005c8f7d  c744240800000000     mov dword ptr [esp + 8], 0
// 005c8f85  e866feffff           call 0x5c8df0
// 005c8f8a  68b01f9e00           push 0x9e1fb0
// 005c8f8f  e8cffa1d00           call 0x7a8a63
// 005c8f94  83c404               add esp, 4
// 005c8f97  8b0c24               mov ecx, dword ptr [esp]
// 005c8f9a  b8dc87c100           mov eax, 0xc187dc
// 005c8f9f  64890d00000000       mov dword ptr fs:[0], ecx
// 005c8fa6  83c40c               add esp, 0xc
// 005c8fa9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
