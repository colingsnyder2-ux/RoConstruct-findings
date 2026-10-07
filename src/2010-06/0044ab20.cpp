// roc 2010-06 0044ab20  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ab20
//
// 0044ab20  64a100000000         mov eax, dword ptr fs:[0]
// 0044ab26  6aff                 push -1
// 0044ab28  685e169800           push 0x98165e
// 0044ab2d  50                   push eax
// 0044ab2e  b801000000           mov eax, 1
// 0044ab33  64892500000000       mov dword ptr fs:[0], esp
// 0044ab3a  84050c10c000         test byte ptr [0xc0100c], al
// 0044ab40  7525                 jne 0x44ab67
// 0044ab42  09050c10c000         or dword ptr [0xc0100c], eax
// 0044ab48  b9200fc000           mov ecx, 0xc00f20
// 0044ab4d  c744240800000000     mov dword ptr [esp + 8], 0
// 0044ab55  e8f6f2ffff           call 0x449e50
// 0044ab5a  6800b89d00           push 0x9db800
// 0044ab5f  e8ffde3500           call 0x7a8a63
// 0044ab64  83c404               add esp, 4
// 0044ab67  8b0c24               mov ecx, dword ptr [esp]
// 0044ab6a  b8200fc000           mov eax, 0xc00f20
// 0044ab6f  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ab76  83c40c               add esp, 0xc
// 0044ab79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
