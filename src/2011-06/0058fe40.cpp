// roc 2011-06 0058fe40  unit: RBX::VBlockMesh::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058fe40
//
// 0058fe40  64a100000000         mov eax, dword ptr fs:[0]
// 0058fe46  6aff                 push -1
// 0058fe48  680e059e00           push 0x9e050e
// 0058fe4d  50                   push eax
// 0058fe4e  b801000000           mov eax, 1
// 0058fe53  64892500000000       mov dword ptr fs:[0], esp
// 0058fe5a  8405b4accb00         test byte ptr [0xcbacb4], al
// 0058fe60  7525                 jne 0x58fe87
// 0058fe62  0905b4accb00         or dword ptr [0xcbacb4], eax
// 0058fe68  b910accb00           mov ecx, 0xcbac10
// 0058fe6d  c744240800000000     mov dword ptr [esp + 8], 0
// 0058fe75  e8763b0c00           call 0x6539f0
// 0058fe7a  68d04ca300           push 0xa34cd0
// 0058fe7f  e8d9b22700           call 0x80b15d
// 0058fe84  83c404               add esp, 4
// 0058fe87  8b0c24               mov ecx, dword ptr [esp]
// 0058fe8a  b810accb00           mov eax, 0xcbac10
// 0058fe8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0058fe96  83c40c               add esp, 0xc
// 0058fe99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
