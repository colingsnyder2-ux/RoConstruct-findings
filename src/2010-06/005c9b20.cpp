// roc 2010-06 005c9b20  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c9b20
//
// 005c9b20  64a100000000         mov eax, dword ptr fs:[0]
// 005c9b26  6aff                 push -1
// 005c9b28  681e609900           push 0x99601e
// 005c9b2d  50                   push eax
// 005c9b2e  b801000000           mov eax, 1
// 005c9b33  64892500000000       mov dword ptr fs:[0], esp
// 005c9b3a  84056c88c100         test byte ptr [0xc1886c], al
// 005c9b40  7525                 jne 0x5c9b67
// 005c9b42  09056c88c100         or dword ptr [0xc1886c], eax
// 005c9b48  b95488c100           mov ecx, 0xc18854
// 005c9b4d  c744240800000000     mov dword ptr [esp + 8], 0
// 005c9b55  e896f2ffff           call 0x5c8df0
// 005c9b5a  6810209e00           push 0x9e2010
// 005c9b5f  e8ffee1d00           call 0x7a8a63
// 005c9b64  83c404               add esp, 4
// 005c9b67  8b0c24               mov ecx, dword ptr [esp]
// 005c9b6a  b85488c100           mov eax, 0xc18854
// 005c9b6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9b76  83c40c               add esp, 0xc
// 005c9b79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
