// from server: 100% by auto
// roc 2012-06 00771310  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00771310
//
// 00771310  64a100000000         mov eax, dword ptr fs:[0]
// 00771316  6aff                 push -1
// 00771318  68fe3dac00           push 0xac3dfe
// 0077131d  50                   push eax
// 0077131e  b801000000           mov eax, 1
// 00771323  64892500000000       mov dword ptr fs:[0], esp
// 0077132a  84058c98e300         test byte ptr [0xe3988c], al
// 00771330  7525                 jne 0x771357
// 00771332  09058c98e300         or dword ptr [0xe3988c], eax
// 00771338  b9e097e300           mov ecx, 0xe397e0
// 0077133d  c744240800000000     mov dword ptr [esp + 8], 0
// 00771345  e816500500           call 0x7c6360
// 0077134a  6850a9b100           push 0xb1a950
// 0077134f  e8a11e2100           call 0x9831f5
// 00771354  83c404               add esp, 4
// 00771357  8b0c24               mov ecx, dword ptr [esp]
// 0077135a  b8e097e300           mov eax, 0xe397e0
// 0077135f  64890d00000000       mov dword ptr fs:[0], ecx
// 00771366  83c40c               add esp, 0xc
// 00771369  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
