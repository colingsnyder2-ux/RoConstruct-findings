// roc 2012-06 007706d0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007706d0
//
// 007706d0  64a100000000         mov eax, dword ptr fs:[0]
// 007706d6  6aff                 push -1
// 007706d8  687e3aac00           push 0xac3a7e
// 007706dd  50                   push eax
// 007706de  b801000000           mov eax, 1
// 007706e3  64892500000000       mov dword ptr fs:[0], esp
// 007706ea  84054c85e300         test byte ptr [0xe3854c], al
// 007706f0  7525                 jne 0x770717
// 007706f2  09054c85e300         or dword ptr [0xe3854c], eax
// 007706f8  b9a084e300           mov ecx, 0xe384a0
// 007706fd  c744240800000000     mov dword ptr [esp + 8], 0
// 00770705  e8a6901200           call 0x8997b0
// 0077070a  6810abb100           push 0xb1ab10
// 0077070f  e8e12a2100           call 0x9831f5
// 00770714  83c404               add esp, 4
// 00770717  8b0c24               mov ecx, dword ptr [esp]
// 0077071a  b8a084e300           mov eax, 0xe384a0
// 0077071f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770726  83c40c               add esp, 0xc
// 00770729  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
