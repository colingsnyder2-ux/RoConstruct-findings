// from server: 100% by auto
// roc 2010-06 005c9c20  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c9c20
//
// 005c9c20  64a100000000         mov eax, dword ptr fs:[0]
// 005c9c26  6aff                 push -1
// 005c9c28  685e609900           push 0x99605e
// 005c9c2d  50                   push eax
// 005c9c2e  b801000000           mov eax, 1
// 005c9c33  64892500000000       mov dword ptr fs:[0], esp
// 005c9c3a  8405a888c100         test byte ptr [0xc188a8], al
// 005c9c40  7525                 jne 0x5c9c67
// 005c9c42  0905a888c100         or dword ptr [0xc188a8], eax
// 005c9c48  b99088c100           mov ecx, 0xc18890
// 005c9c4d  c744240800000000     mov dword ptr [esp + 8], 0
// 005c9c55  e896f1ffff           call 0x5c8df0
// 005c9c5a  6850209e00           push 0x9e2050
// 005c9c5f  e8ffed1d00           call 0x7a8a63
// 005c9c64  83c404               add esp, 4
// 005c9c67  8b0c24               mov ecx, dword ptr [esp]
// 005c9c6a  b89088c100           mov eax, 0xc18890
// 005c9c6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9c76  83c40c               add esp, 0xc
// 005c9c79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
