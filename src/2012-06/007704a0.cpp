// from server: 100% by auto
// roc 2012-06 007704a0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007704a0
//
// 007704a0  64a100000000         mov eax, dword ptr fs:[0]
// 007704a6  6aff                 push -1
// 007704a8  68de39ac00           push 0xac39de
// 007704ad  50                   push eax
// 007704ae  b801000000           mov eax, 1
// 007704b3  64892500000000       mov dword ptr fs:[0], esp
// 007704ba  8405dc81e300         test byte ptr [0xe381dc], al
// 007704c0  7525                 jne 0x7704e7
// 007704c2  0905dc81e300         or dword ptr [0xe381dc], eax
// 007704c8  b93081e300           mov ecx, 0xe38130
// 007704cd  c744240800000000     mov dword ptr [esp + 8], 0
// 007704d5  e856a80700           call 0x7ead30
// 007704da  6860abb100           push 0xb1ab60
// 007704df  e8112d2100           call 0x9831f5
// 007704e4  83c404               add esp, 4
// 007704e7  8b0c24               mov ecx, dword ptr [esp]
// 007704ea  b83081e300           mov eax, 0xe38130
// 007704ef  64890d00000000       mov dword ptr fs:[0], ecx
// 007704f6  83c40c               add esp, 0xc
// 007704f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
