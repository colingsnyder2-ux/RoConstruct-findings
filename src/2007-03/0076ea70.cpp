// roc 2007-03 0076ea70  unit: seg_00760000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076ea70
//
// 0076ea70  6a10                 push 0x10
// 0076ea72  6a28                 push 0x28
// 0076ea74  e85751d8ff           call 0x4f3bd0
// 0076ea79  8b0d7c9c8800         mov ecx, dword ptr [0x889c7c]
// 0076ea7f  8d148d00000000       lea edx, [ecx*4]
// 0076ea86  52                   push edx
// 0076ea87  6a00                 push 0
// 0076ea89  50                   push eax
// 0076ea8a  a3789c8800           mov dword ptr [0x889c78], eax
// 0076ea8f  e85c56d8ff           call 0x4f40f0
// 0076ea94  68f07f7700           push 0x777ff0
// 0076ea99  e81507ebff           call 0x61f1b3
// 0076ea9e  83c418               add esp, 0x18
// 0076eaa1  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
