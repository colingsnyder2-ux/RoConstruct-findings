// from server: 100% by auto
// roc 2012-06 00771230  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00771230
//
// 00771230  64a100000000         mov eax, dword ptr fs:[0]
// 00771236  6aff                 push -1
// 00771238  68be3dac00           push 0xac3dbe
// 0077123d  50                   push eax
// 0077123e  b801000000           mov eax, 1
// 00771243  64892500000000       mov dword ptr fs:[0], esp
// 0077124a  84052c97e300         test byte ptr [0xe3972c], al
// 00771250  7525                 jne 0x771277
// 00771252  09052c97e300         or dword ptr [0xe3972c], eax
// 00771258  b98096e300           mov ecx, 0xe39680
// 0077125d  c744240800000000     mov dword ptr [esp + 8], 0
// 00771265  e896751500           call 0x8c8800
// 0077126a  6870a9b100           push 0xb1a970
// 0077126f  e8811f2100           call 0x9831f5
// 00771274  83c404               add esp, 4
// 00771277  8b0c24               mov ecx, dword ptr [esp]
// 0077127a  b88096e300           mov eax, 0xe39680
// 0077127f  64890d00000000       mov dword ptr fs:[0], ecx
// 00771286  83c40c               add esp, 0xc
// 00771289  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
