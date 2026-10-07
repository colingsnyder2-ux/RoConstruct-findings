// roc 2012-06 007705f0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007705f0
//
// 007705f0  64a100000000         mov eax, dword ptr fs:[0]
// 007705f6  6aff                 push -1
// 007705f8  683e3aac00           push 0xac3a3e
// 007705fd  50                   push eax
// 007705fe  b801000000           mov eax, 1
// 00770603  64892500000000       mov dword ptr fs:[0], esp
// 0077060a  8405ec83e300         test byte ptr [0xe383ec], al
// 00770610  7525                 jne 0x770637
// 00770612  0905ec83e300         or dword ptr [0xe383ec], eax
// 00770618  b94083e300           mov ecx, 0xe38340
// 0077061d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770625  e8f6b4f0ff           call 0x67bb20
// 0077062a  6830abb100           push 0xb1ab30
// 0077062f  e8c12b2100           call 0x9831f5
// 00770634  83c404               add esp, 4
// 00770637  8b0c24               mov ecx, dword ptr [esp]
// 0077063a  b84083e300           mov eax, 0xe38340
// 0077063f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770646  83c40c               add esp, 0xc
// 00770649  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
