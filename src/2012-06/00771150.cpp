// from server: 100% by auto
// roc 2012-06 00771150  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00771150
//
// 00771150  64a100000000         mov eax, dword ptr fs:[0]
// 00771156  6aff                 push -1
// 00771158  687e3dac00           push 0xac3d7e
// 0077115d  50                   push eax
// 0077115e  b801000000           mov eax, 1
// 00771163  64892500000000       mov dword ptr fs:[0], esp
// 0077116a  8405cc95e300         test byte ptr [0xe395cc], al
// 00771170  7525                 jne 0x771197
// 00771172  0905cc95e300         or dword ptr [0xe395cc], eax
// 00771178  b92095e300           mov ecx, 0xe39520
// 0077117d  c744240800000000     mov dword ptr [esp + 8], 0
// 00771185  e8469f0700           call 0x7eb0d0
// 0077118a  6890a9b100           push 0xb1a990
// 0077118f  e861202100           call 0x9831f5
// 00771194  83c404               add esp, 4
// 00771197  8b0c24               mov ecx, dword ptr [esp]
// 0077119a  b82095e300           mov eax, 0xe39520
// 0077119f  64890d00000000       mov dword ptr fs:[0], ecx
// 007711a6  83c40c               add esp, 0xc
// 007711a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
