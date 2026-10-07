// roc 2012-06 007713f0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007713f0
//
// 007713f0  64a100000000         mov eax, dword ptr fs:[0]
// 007713f6  6aff                 push -1
// 007713f8  683e3eac00           push 0xac3e3e
// 007713fd  50                   push eax
// 007713fe  b801000000           mov eax, 1
// 00771403  64892500000000       mov dword ptr fs:[0], esp
// 0077140a  8405ec99e300         test byte ptr [0xe399ec], al
// 00771410  7525                 jne 0x771437
// 00771412  0905ec99e300         or dword ptr [0xe399ec], eax
// 00771418  b94099e300           mov ecx, 0xe39940
// 0077141d  c744240800000000     mov dword ptr [esp + 8], 0
// 00771425  e8a6510500           call 0x7c65d0
// 0077142a  6830a9b100           push 0xb1a930
// 0077142f  e8c11d2100           call 0x9831f5
// 00771434  83c404               add esp, 4
// 00771437  8b0c24               mov ecx, dword ptr [esp]
// 0077143a  b84099e300           mov eax, 0xe39940
// 0077143f  64890d00000000       mov dword ptr fs:[0], ecx
// 00771446  83c40c               add esp, 0xc
// 00771449  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
