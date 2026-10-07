// roc 2009-06 0051f630  unit: RBX::VBlockMesh::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f630
//
// 0051f630  64a100000000         mov eax, dword ptr fs:[0]
// 0051f636  6aff                 push -1
// 0051f638  680ee38500           push 0x85e30e
// 0051f63d  50                   push eax
// 0051f63e  b801000000           mov eax, 1
// 0051f643  64892500000000       mov dword ptr fs:[0], esp
// 0051f64a  84056416a400         test byte ptr [0xa41664], al
// 0051f650  7525                 jne 0x51f677
// 0051f652  09056416a400         or dword ptr [0xa41664], eax
// 0051f658  b90016a400           mov ecx, 0xa41600
// 0051f65d  c744240800000000     mov dword ptr [esp + 8], 0
// 0051f665  e886f5ffff           call 0x51ebf0
// 0051f66a  6810668900           push 0x896610
// 0051f66f  e887a41f00           call 0x719afb
// 0051f674  83c404               add esp, 4
// 0051f677  8b0c24               mov ecx, dword ptr [esp]
// 0051f67a  b80016a400           mov eax, 0xa41600
// 0051f67f  64890d00000000       mov dword ptr fs:[0], ecx
// 0051f686  83c40c               add esp, 0xc
// 0051f689  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
