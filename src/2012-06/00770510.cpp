// from server: 100% by auto
// roc 2012-06 00770510  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770510
//
// 00770510  64a100000000         mov eax, dword ptr fs:[0]
// 00770516  6aff                 push -1
// 00770518  68fe39ac00           push 0xac39fe
// 0077051d  50                   push eax
// 0077051e  b801000000           mov eax, 1
// 00770523  64892500000000       mov dword ptr fs:[0], esp
// 0077052a  84058c82e300         test byte ptr [0xe3828c], al
// 00770530  7525                 jne 0x770557
// 00770532  09058c82e300         or dword ptr [0xe3828c], eax
// 00770538  b9e081e300           mov ecx, 0xe381e0
// 0077053d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770545  e8e6011800           call 0x8f0730
// 0077054a  6850abb100           push 0xb1ab50
// 0077054f  e8a12c2100           call 0x9831f5
// 00770554  83c404               add esp, 4
// 00770557  8b0c24               mov ecx, dword ptr [esp]
// 0077055a  b8e081e300           mov eax, 0xe381e0
// 0077055f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770566  83c40c               add esp, 0xc
// 00770569  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
