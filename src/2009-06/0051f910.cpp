// from server: 100% by auto
// roc 2009-06 0051f910  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f910
//
// 0051f910  64a100000000         mov eax, dword ptr fs:[0]
// 0051f916  6aff                 push -1
// 0051f918  68aee38500           push 0x85e3ae
// 0051f91d  50                   push eax
// 0051f91e  b801000000           mov eax, 1
// 0051f923  64892500000000       mov dword ptr fs:[0], esp
// 0051f92a  84058418a400         test byte ptr [0xa41884], al
// 0051f930  7525                 jne 0x51f957
// 0051f932  09058418a400         or dword ptr [0xa41884], eax
// 0051f938  b92018a400           mov ecx, 0xa41820
// 0051f93d  c744240800000000     mov dword ptr [esp + 8], 0
// 0051f945  e876f8ffff           call 0x51f1c0
// 0051f94a  6840668900           push 0x896640
// 0051f94f  e8a7a11f00           call 0x719afb
// 0051f954  83c404               add esp, 4
// 0051f957  8b0c24               mov ecx, dword ptr [esp]
// 0051f95a  b82018a400           mov eax, 0xa41820
// 0051f95f  64890d00000000       mov dword ptr fs:[0], ecx
// 0051f966  83c40c               add esp, 0xc
// 0051f969  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
