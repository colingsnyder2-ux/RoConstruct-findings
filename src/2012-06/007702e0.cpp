// roc 2012-06 007702e0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007702e0
//
// 007702e0  64a100000000         mov eax, dword ptr fs:[0]
// 007702e6  6aff                 push -1
// 007702e8  685e39ac00           push 0xac395e
// 007702ed  50                   push eax
// 007702ee  b801000000           mov eax, 1
// 007702f3  64892500000000       mov dword ptr fs:[0], esp
// 007702fa  84051c7fe300         test byte ptr [0xe37f1c], al
// 00770300  7525                 jne 0x770327
// 00770302  09051c7fe300         or dword ptr [0xe37f1c], eax
// 00770308  b9707ee300           mov ecx, 0xe37e70
// 0077030d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770315  e8b60c0300           call 0x7a0fd0
// 0077031a  68a0abb100           push 0xb1aba0
// 0077031f  e8d12e2100           call 0x9831f5
// 00770324  83c404               add esp, 4
// 00770327  8b0c24               mov ecx, dword ptr [esp]
// 0077032a  b8707ee300           mov eax, 0xe37e70
// 0077032f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770336  83c40c               add esp, 0xc
// 00770339  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
