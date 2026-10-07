// roc 2012-06 00770580  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770580
//
// 00770580  64a100000000         mov eax, dword ptr fs:[0]
// 00770586  6aff                 push -1
// 00770588  681e3aac00           push 0xac3a1e
// 0077058d  50                   push eax
// 0077058e  b801000000           mov eax, 1
// 00770593  64892500000000       mov dword ptr fs:[0], esp
// 0077059a  84053c83e300         test byte ptr [0xe3833c], al
// 007705a0  7525                 jne 0x7705c7
// 007705a2  09053c83e300         or dword ptr [0xe3833c], eax
// 007705a8  b99082e300           mov ecx, 0xe38290
// 007705ad  c744240800000000     mov dword ptr [esp + 8], 0
// 007705b5  e836530700           call 0x7e58f0
// 007705ba  6840abb100           push 0xb1ab40
// 007705bf  e8312c2100           call 0x9831f5
// 007705c4  83c404               add esp, 4
// 007705c7  8b0c24               mov ecx, dword ptr [esp]
// 007705ca  b89082e300           mov eax, 0xe38290
// 007705cf  64890d00000000       mov dword ptr fs:[0], ecx
// 007705d6  83c40c               add esp, 0xc
// 007705d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
