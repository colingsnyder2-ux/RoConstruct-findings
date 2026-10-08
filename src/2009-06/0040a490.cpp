// from server: 100% by auto
// roc 2009-06 0040a490  unit: RBX::Reflection::ClassDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040a490
//
// 0040a490  64a100000000         mov eax, dword ptr fs:[0]
// 0040a496  6aff                 push -1
// 0040a498  684ed08400           push 0x84d04e
// 0040a49d  50                   push eax
// 0040a49e  b801000000           mov eax, 1
// 0040a4a3  64892500000000       mov dword ptr fs:[0], esp
// 0040a4aa  8405f898a300         test byte ptr [0xa398f8], al
// 0040a4b0  7525                 jne 0x40a4d7
// 0040a4b2  0905f898a300         or dword ptr [0xa398f8], eax
// 0040a4b8  b93898a300           mov ecx, 0xa39838
// 0040a4bd  c744240800000000     mov dword ptr [esp + 8], 0
// 0040a4c5  e856f21e00           call 0x5f9720
// 0040a4ca  68a03b8900           push 0x893ba0
// 0040a4cf  e827f63000           call 0x719afb
// 0040a4d4  83c404               add esp, 4
// 0040a4d7  8b0c24               mov ecx, dword ptr [esp]
// 0040a4da  b83898a300           mov eax, 0xa39838
// 0040a4df  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a4e6  83c40c               add esp, 0xc
// 0040a4e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
