// roc 2010-06 004e3780  unit: RBX::Network::IdSerializer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e3780
//
// 004e3780  64a100000000         mov eax, dword ptr fs:[0]
// 004e3786  6aff                 push -1
// 004e3788  684ebb9800           push 0x98bb4e
// 004e378d  50                   push eax
// 004e378e  b801000000           mov eax, 1
// 004e3793  64892500000000       mov dword ptr fs:[0], esp
// 004e379a  8405cc65c000         test byte ptr [0xc065cc], al
// 004e37a0  7525                 jne 0x4e37c7
// 004e37a2  0905cc65c000         or dword ptr [0xc065cc], eax
// 004e37a8  b9b465c000           mov ecx, 0xc065b4
// 004e37ad  c744240800000000     mov dword ptr [esp + 8], 0
// 004e37b5  e836560e00           call 0x5c8df0
// 004e37ba  68c0d59d00           push 0x9dd5c0
// 004e37bf  e89f522c00           call 0x7a8a63
// 004e37c4  83c404               add esp, 4
// 004e37c7  8b0c24               mov ecx, dword ptr [esp]
// 004e37ca  b8b465c000           mov eax, 0xc065b4
// 004e37cf  64890d00000000       mov dword ptr fs:[0], ecx
// 004e37d6  83c40c               add esp, 0xc
// 004e37d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
