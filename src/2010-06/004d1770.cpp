// roc 2010-06 004d1770  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d1770
//
// 004d1770  64a100000000         mov eax, dword ptr fs:[0]
// 004d1776  6aff                 push -1
// 004d1778  686eae9800           push 0x98ae6e
// 004d177d  50                   push eax
// 004d177e  b801000000           mov eax, 1
// 004d1783  64892500000000       mov dword ptr fs:[0], esp
// 004d178a  84051c5cc000         test byte ptr [0xc05c1c], al
// 004d1790  7525                 jne 0x4d17b7
// 004d1792  09051c5cc000         or dword ptr [0xc05c1c], eax
// 004d1798  b9305bc000           mov ecx, 0xc05b30
// 004d179d  c744240800000000     mov dword ptr [esp + 8], 0
// 004d17a5  e8965a0000           call 0x4d7240
// 004d17aa  68e0cf9d00           push 0x9dcfe0
// 004d17af  e8af722d00           call 0x7a8a63
// 004d17b4  83c404               add esp, 4
// 004d17b7  8b0c24               mov ecx, dword ptr [esp]
// 004d17ba  b8305bc000           mov eax, 0xc05b30
// 004d17bf  64890d00000000       mov dword ptr fs:[0], ecx
// 004d17c6  83c40c               add esp, 0xc
// 004d17c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
