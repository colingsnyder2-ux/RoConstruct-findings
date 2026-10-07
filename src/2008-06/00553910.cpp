// roc 2008-06 00553910  unit: RBX::RenderBase::AggregateChunk  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553910
//
// 00553910  64a100000000         mov eax, dword ptr fs:[0]
// 00553916  6aff                 push -1
// 00553918  68bedb7c00           push 0x7cdbbe
// 0055391d  50                   push eax
// 0055391e  b801000000           mov eax, 1
// 00553923  64892500000000       mov dword ptr fs:[0], esp
// 0055392a  8405e0399700         test byte ptr [0x9739e0], al
// 00553930  7525                 jne 0x553957
// 00553932  0905e0399700         or dword ptr [0x9739e0], eax
// 00553938  b9d8399700           mov ecx, 0x9739d8
// 0055393d  c744240800000000     mov dword ptr [esp + 8], 0
// 00553945  e846130400           call 0x594c90
// 0055394a  6810c77f00           push 0x7fc710
// 0055394f  e85bde1400           call 0x6a17af
// 00553954  83c404               add esp, 4
// 00553957  8b0c24               mov ecx, dword ptr [esp]
// 0055395a  b8d8399700           mov eax, 0x9739d8
// 0055395f  64890d00000000       mov dword ptr fs:[0], ecx
// 00553966  83c40c               add esp, 0xc
// 00553969  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
