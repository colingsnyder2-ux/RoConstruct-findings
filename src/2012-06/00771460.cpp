// roc 2012-06 00771460  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00771460
//
// 00771460  64a100000000         mov eax, dword ptr fs:[0]
// 00771466  6aff                 push -1
// 00771468  685e3eac00           push 0xac3e5e
// 0077146d  50                   push eax
// 0077146e  b801000000           mov eax, 1
// 00771473  64892500000000       mov dword ptr fs:[0], esp
// 0077147a  84059c9ae300         test byte ptr [0xe39a9c], al
// 00771480  7525                 jne 0x7714a7
// 00771482  09059c9ae300         or dword ptr [0xe39a9c], eax
// 00771488  b9f099e300           mov ecx, 0xe399f0
// 0077148d  c744240800000000     mov dword ptr [esp + 8], 0
// 00771495  e876520500           call 0x7c6710
// 0077149a  6820a9b100           push 0xb1a920
// 0077149f  e8511d2100           call 0x9831f5
// 007714a4  83c404               add esp, 4
// 007714a7  8b0c24               mov ecx, dword ptr [esp]
// 007714aa  b8f099e300           mov eax, 0xe399f0
// 007714af  64890d00000000       mov dword ptr fs:[0], ecx
// 007714b6  83c40c               add esp, 0xc
// 007714b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
