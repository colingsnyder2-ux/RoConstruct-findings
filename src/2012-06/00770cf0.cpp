// roc 2012-06 00770cf0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770cf0
//
// 00770cf0  64a100000000         mov eax, dword ptr fs:[0]
// 00770cf6  6aff                 push -1
// 00770cf8  683e3cac00           push 0xac3c3e
// 00770cfd  50                   push eax
// 00770cfe  b801000000           mov eax, 1
// 00770d03  64892500000000       mov dword ptr fs:[0], esp
// 00770d0a  8405ec8ee300         test byte ptr [0xe38eec], al
// 00770d10  7525                 jne 0x770d37
// 00770d12  0905ec8ee300         or dword ptr [0xe38eec], eax
// 00770d18  b9408ee300           mov ecx, 0xe38e40
// 00770d1d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770d25  e876f61700           call 0x8f03a0
// 00770d2a  6830aab100           push 0xb1aa30
// 00770d2f  e8c1242100           call 0x9831f5
// 00770d34  83c404               add esp, 4
// 00770d37  8b0c24               mov ecx, dword ptr [esp]
// 00770d3a  b8408ee300           mov eax, 0xe38e40
// 00770d3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770d46  83c40c               add esp, 0xc
// 00770d49  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
