// roc 2012-06 0070d380  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070d380
//
// 0070d380  64a100000000         mov eax, dword ptr fs:[0]
// 0070d386  6aff                 push -1
// 0070d388  68dee0ab00           push 0xabe0de
// 0070d38d  50                   push eax
// 0070d38e  b801000000           mov eax, 1
// 0070d393  64892500000000       mov dword ptr fs:[0], esp
// 0070d39a  84056414e300         test byte ptr [0xe31464], al
// 0070d3a0  7525                 jne 0x70d3c7
// 0070d3a2  09056414e300         or dword ptr [0xe31464], eax
// 0070d3a8  b9b813e300           mov ecx, 0xe313b8
// 0070d3ad  c744240800000000     mov dword ptr [esp + 8], 0
// 0070d3b5  e8b6fdffff           call 0x70d170
// 0070d3ba  68e073b100           push 0xb173e0
// 0070d3bf  e8315e2700           call 0x9831f5
// 0070d3c4  83c404               add esp, 4
// 0070d3c7  8b0c24               mov ecx, dword ptr [esp]
// 0070d3ca  b8b813e300           mov eax, 0xe313b8
// 0070d3cf  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d3d6  83c40c               add esp, 0xc
// 0070d3d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
