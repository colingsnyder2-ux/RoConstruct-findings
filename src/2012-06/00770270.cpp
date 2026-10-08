// from server: 100% by auto
// roc 2012-06 00770270  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770270
//
// 00770270  64a100000000         mov eax, dword ptr fs:[0]
// 00770276  6aff                 push -1
// 00770278  683e39ac00           push 0xac393e
// 0077027d  50                   push eax
// 0077027e  b801000000           mov eax, 1
// 00770283  64892500000000       mov dword ptr fs:[0], esp
// 0077028a  84056c7ee300         test byte ptr [0xe37e6c], al
// 00770290  7525                 jne 0x7702b7
// 00770292  09056c7ee300         or dword ptr [0xe37e6c], eax
// 00770298  b9c07de300           mov ecx, 0xe37dc0
// 0077029d  c744240800000000     mov dword ptr [esp + 8], 0
// 007702a5  e866fb1700           call 0x8efe10
// 007702aa  68b0abb100           push 0xb1abb0
// 007702af  e8412f2100           call 0x9831f5
// 007702b4  83c404               add esp, 4
// 007702b7  8b0c24               mov ecx, dword ptr [esp]
// 007702ba  b8c07de300           mov eax, 0xe37dc0
// 007702bf  64890d00000000       mov dword ptr fs:[0], ecx
// 007702c6  83c40c               add esp, 0xc
// 007702c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
