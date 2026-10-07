// roc 2009-06 0051f780  unit: RBX::VBlockMesh::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f780
//
// 0051f780  64a100000000         mov eax, dword ptr fs:[0]
// 0051f786  6aff                 push -1
// 0051f788  686ee38500           push 0x85e36e
// 0051f78d  50                   push eax
// 0051f78e  b801000000           mov eax, 1
// 0051f793  64892500000000       mov dword ptr fs:[0], esp
// 0051f79a  84059c17a400         test byte ptr [0xa4179c], al
// 0051f7a0  7525                 jne 0x51f7c7
// 0051f7a2  09059c17a400         or dword ptr [0xa4179c], eax
// 0051f7a8  b93817a400           mov ecx, 0xa41738
// 0051f7ad  c744240800000000     mov dword ptr [esp + 8], 0
// 0051f7b5  e826f2ffff           call 0x51e9e0
// 0051f7ba  68e0658900           push 0x8965e0
// 0051f7bf  e837a31f00           call 0x719afb
// 0051f7c4  83c404               add esp, 4
// 0051f7c7  8b0c24               mov ecx, dword ptr [esp]
// 0051f7ca  b83817a400           mov eax, 0xa41738
// 0051f7cf  64890d00000000       mov dword ptr fs:[0], ecx
// 0051f7d6  83c40c               add esp, 0xc
// 0051f7d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
