// from server: 100% by auto
// roc 2009-06 0051f980  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f980
//
// 0051f980  64a100000000         mov eax, dword ptr fs:[0]
// 0051f986  6aff                 push -1
// 0051f988  68cee38500           push 0x85e3ce
// 0051f98d  50                   push eax
// 0051f98e  b801000000           mov eax, 1
// 0051f993  64892500000000       mov dword ptr fs:[0], esp
// 0051f99a  8405ec18a400         test byte ptr [0xa418ec], al
// 0051f9a0  7525                 jne 0x51f9c7
// 0051f9a2  0905ec18a400         or dword ptr [0xa418ec], eax
// 0051f9a8  b98818a400           mov ecx, 0xa41888
// 0051f9ad  c744240800000000     mov dword ptr [esp + 8], 0
// 0051f9b5  e8b6f8ffff           call 0x51f270
// 0051f9ba  6830668900           push 0x896630
// 0051f9bf  e837a11f00           call 0x719afb
// 0051f9c4  83c404               add esp, 4
// 0051f9c7  8b0c24               mov ecx, dword ptr [esp]
// 0051f9ca  b88818a400           mov eax, 0xa41888
// 0051f9cf  64890d00000000       mov dword ptr fs:[0], ecx
// 0051f9d6  83c40c               add esp, 0xc
// 0051f9d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
