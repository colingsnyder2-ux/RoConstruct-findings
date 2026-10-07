// roc 2008-06 0059c780  unit: RBX::PartInstance  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c780
//
// 0059c780  64a100000000         mov eax, dword ptr fs:[0]
// 0059c786  6aff                 push -1
// 0059c788  686e267d00           push 0x7d266e
// 0059c78d  50                   push eax
// 0059c78e  b801000000           mov eax, 1
// 0059c793  64892500000000       mov dword ptr fs:[0], esp
// 0059c79a  840578659700         test byte ptr [0x976578], al
// 0059c7a0  7525                 jne 0x59c7c7
// 0059c7a2  090578659700         or dword ptr [0x976578], eax
// 0059c7a8  b990649700           mov ecx, 0x976490
// 0059c7ad  c744240800000000     mov dword ptr [esp + 8], 0
// 0059c7b5  e8e6fcffff           call 0x59c4a0
// 0059c7ba  6880de7f00           push 0x7fde80
// 0059c7bf  e8eb4f1000           call 0x6a17af
// 0059c7c4  83c404               add esp, 4
// 0059c7c7  8b0c24               mov ecx, dword ptr [esp]
// 0059c7ca  b890649700           mov eax, 0x976490
// 0059c7cf  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c7d6  83c40c               add esp, 0xc
// 0059c7d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
