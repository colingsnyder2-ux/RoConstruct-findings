// roc 2009-06 005f8150  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8150
//
// 005f8150  64a100000000         mov eax, dword ptr fs:[0]
// 005f8156  6aff                 push -1
// 005f8158  68be608600           push 0x8660be
// 005f815d  50                   push eax
// 005f815e  b801000000           mov eax, 1
// 005f8163  64892500000000       mov dword ptr fs:[0], esp
// 005f816a  8405d0a7a400         test byte ptr [0xa4a7d0], al
// 005f8170  7525                 jne 0x5f8197
// 005f8172  0905d0a7a400         or dword ptr [0xa4a7d0], eax
// 005f8178  b9b8a7a400           mov ecx, 0xa4a7b8
// 005f817d  c744240800000000     mov dword ptr [esp + 8], 0
// 005f8185  e886240600           call 0x65a610
// 005f818a  68d0938900           push 0x8993d0
// 005f818f  e867191200           call 0x719afb
// 005f8194  83c404               add esp, 4
// 005f8197  8b0c24               mov ecx, dword ptr [esp]
// 005f819a  b8b8a7a400           mov eax, 0xa4a7b8
// 005f819f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f81a6  83c40c               add esp, 0xc
// 005f81a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
