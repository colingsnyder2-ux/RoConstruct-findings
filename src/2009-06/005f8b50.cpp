// roc 2009-06 005f8b50  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8b50
//
// 005f8b50  64a100000000         mov eax, dword ptr fs:[0]
// 005f8b56  6aff                 push -1
// 005f8b58  68ce618600           push 0x8661ce
// 005f8b5d  50                   push eax
// 005f8b5e  b801000000           mov eax, 1
// 005f8b63  64892500000000       mov dword ptr fs:[0], esp
// 005f8b6a  840544a8a400         test byte ptr [0xa4a844], al
// 005f8b70  7525                 jne 0x5f8b97
// 005f8b72  090544a8a400         or dword ptr [0xa4a844], eax
// 005f8b78  b92ca8a400           mov ecx, 0xa4a82c
// 005f8b7d  c744240800000000     mov dword ptr [esp + 8], 0
// 005f8b85  e8861a0600           call 0x65a610
// 005f8b8a  68a0948900           push 0x8994a0
// 005f8b8f  e8670f1200           call 0x719afb
// 005f8b94  83c404               add esp, 4
// 005f8b97  8b0c24               mov ecx, dword ptr [esp]
// 005f8b9a  b82ca8a400           mov eax, 0xa4a82c
// 005f8b9f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8ba6  83c40c               add esp, 0xc
// 005f8ba9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
