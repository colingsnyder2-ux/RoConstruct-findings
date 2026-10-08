// from server: 100% by auto
// roc 2012-06 007707b0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007707b0
//
// 007707b0  64a100000000         mov eax, dword ptr fs:[0]
// 007707b6  6aff                 push -1
// 007707b8  68be3aac00           push 0xac3abe
// 007707bd  50                   push eax
// 007707be  b801000000           mov eax, 1
// 007707c3  64892500000000       mov dword ptr fs:[0], esp
// 007707ca  8405ac86e300         test byte ptr [0xe386ac], al
// 007707d0  7525                 jne 0x7707f7
// 007707d2  0905ac86e300         or dword ptr [0xe386ac], eax
// 007707d8  b90086e300           mov ecx, 0xe38600
// 007707dd  c744240800000000     mov dword ptr [esp + 8], 0
// 007707e5  e826221800           call 0x8f2a10
// 007707ea  68f0aab100           push 0xb1aaf0
// 007707ef  e8012a2100           call 0x9831f5
// 007707f4  83c404               add esp, 4
// 007707f7  8b0c24               mov ecx, dword ptr [esp]
// 007707fa  b80086e300           mov eax, 0xe38600
// 007707ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00770806  83c40c               add esp, 0xc
// 00770809  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
