// from server: 100% by auto
// roc 2009-06 0051f710  unit: RBX::VBlockMesh::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f710
//
// 0051f710  64a100000000         mov eax, dword ptr fs:[0]
// 0051f716  6aff                 push -1
// 0051f718  684ee38500           push 0x85e34e
// 0051f71d  50                   push eax
// 0051f71e  b801000000           mov eax, 1
// 0051f723  64892500000000       mov dword ptr fs:[0], esp
// 0051f72a  84053417a400         test byte ptr [0xa41734], al
// 0051f730  7525                 jne 0x51f757
// 0051f732  09053417a400         or dword ptr [0xa41734], eax
// 0051f738  b9d016a400           mov ecx, 0xa416d0
// 0051f73d  c744240800000000     mov dword ptr [esp + 8], 0
// 0051f745  e856f5ffff           call 0x51eca0
// 0051f74a  68f0658900           push 0x8965f0
// 0051f74f  e8a7a31f00           call 0x719afb
// 0051f754  83c404               add esp, 4
// 0051f757  8b0c24               mov ecx, dword ptr [esp]
// 0051f75a  b8d016a400           mov eax, 0xa416d0
// 0051f75f  64890d00000000       mov dword ptr fs:[0], ecx
// 0051f766  83c40c               add esp, 0xc
// 0051f769  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
