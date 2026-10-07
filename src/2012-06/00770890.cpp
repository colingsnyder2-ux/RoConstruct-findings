// roc 2012-06 00770890  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770890
//
// 00770890  64a100000000         mov eax, dword ptr fs:[0]
// 00770896  6aff                 push -1
// 00770898  68fe3aac00           push 0xac3afe
// 0077089d  50                   push eax
// 0077089e  b801000000           mov eax, 1
// 007708a3  64892500000000       mov dword ptr fs:[0], esp
// 007708aa  84050c88e300         test byte ptr [0xe3880c], al
// 007708b0  7525                 jne 0x7708d7
// 007708b2  09050c88e300         or dword ptr [0xe3880c], eax
// 007708b8  b96087e300           mov ecx, 0xe38760
// 007708bd  c744240800000000     mov dword ptr [esp + 8], 0
// 007708c5  e8f6231800           call 0x8f2cc0
// 007708ca  68d0aab100           push 0xb1aad0
// 007708cf  e821292100           call 0x9831f5
// 007708d4  83c404               add esp, 4
// 007708d7  8b0c24               mov ecx, dword ptr [esp]
// 007708da  b86087e300           mov eax, 0xe38760
// 007708df  64890d00000000       mov dword ptr fs:[0], ecx
// 007708e6  83c40c               add esp, 0xc
// 007708e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
