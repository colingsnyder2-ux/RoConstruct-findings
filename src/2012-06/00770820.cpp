// roc 2012-06 00770820  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770820
//
// 00770820  64a100000000         mov eax, dword ptr fs:[0]
// 00770826  6aff                 push -1
// 00770828  68de3aac00           push 0xac3ade
// 0077082d  50                   push eax
// 0077082e  b801000000           mov eax, 1
// 00770833  64892500000000       mov dword ptr fs:[0], esp
// 0077083a  84055c87e300         test byte ptr [0xe3875c], al
// 00770840  7525                 jne 0x770867
// 00770842  09055c87e300         or dword ptr [0xe3875c], eax
// 00770848  b9b086e300           mov ecx, 0xe386b0
// 0077084d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770855  e816231800           call 0x8f2b70
// 0077085a  68e0aab100           push 0xb1aae0
// 0077085f  e891292100           call 0x9831f5
// 00770864  83c404               add esp, 4
// 00770867  8b0c24               mov ecx, dword ptr [esp]
// 0077086a  b8b086e300           mov eax, 0xe386b0
// 0077086f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770876  83c40c               add esp, 0xc
// 00770879  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
