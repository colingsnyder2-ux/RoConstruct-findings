// roc 2012-06 00770d60  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770d60
//
// 00770d60  64a100000000         mov eax, dword ptr fs:[0]
// 00770d66  6aff                 push -1
// 00770d68  685e3cac00           push 0xac3c5e
// 00770d6d  50                   push eax
// 00770d6e  b801000000           mov eax, 1
// 00770d73  64892500000000       mov dword ptr fs:[0], esp
// 00770d7a  84059c8fe300         test byte ptr [0xe38f9c], al
// 00770d80  7525                 jne 0x770da7
// 00770d82  09059c8fe300         or dword ptr [0xe38f9c], eax
// 00770d88  b9f08ee300           mov ecx, 0xe38ef0
// 00770d8d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770d95  e866f71700           call 0x8f0500
// 00770d9a  6820aab100           push 0xb1aa20
// 00770d9f  e851242100           call 0x9831f5
// 00770da4  83c404               add esp, 4
// 00770da7  8b0c24               mov ecx, dword ptr [esp]
// 00770daa  b8f08ee300           mov eax, 0xe38ef0
// 00770daf  64890d00000000       mov dword ptr fs:[0], ecx
// 00770db6  83c40c               add esp, 0xc
// 00770db9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
