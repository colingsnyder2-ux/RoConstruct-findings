// from server: 100% by auto
// roc 2009-06 0051f5c0  unit: RBX::VBlockMesh::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f5c0
//
// 0051f5c0  64a100000000         mov eax, dword ptr fs:[0]
// 0051f5c6  6aff                 push -1
// 0051f5c8  68eee28500           push 0x85e2ee
// 0051f5cd  50                   push eax
// 0051f5ce  b801000000           mov eax, 1
// 0051f5d3  64892500000000       mov dword ptr fs:[0], esp
// 0051f5da  8405fc15a400         test byte ptr [0xa415fc], al
// 0051f5e0  7525                 jne 0x51f607
// 0051f5e2  0905fc15a400         or dword ptr [0xa415fc], eax
// 0051f5e8  b99815a400           mov ecx, 0xa41598
// 0051f5ed  c744240800000000     mov dword ptr [esp + 8], 0
// 0051f5f5  e836f3ffff           call 0x51e930
// 0051f5fa  6820668900           push 0x896620
// 0051f5ff  e8f7a41f00           call 0x719afb
// 0051f604  83c404               add esp, 4
// 0051f607  8b0c24               mov ecx, dword ptr [esp]
// 0051f60a  b89815a400           mov eax, 0xa41598
// 0051f60f  64890d00000000       mov dword ptr fs:[0], ecx
// 0051f616  83c40c               add esp, 0xc
// 0051f619  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
