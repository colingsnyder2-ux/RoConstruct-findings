// roc 2009-06 00885d80  unit: seg_00880000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885d80
//
// 00885d80  6a10                 push 0x10
// 00885d82  6a28                 push 0x28
// 00885d84  e8e753ceff           call 0x56b170
// 00885d89  8b0d50ae9e00         mov ecx, dword ptr [0x9eae50]
// 00885d8f  8d148d00000000       lea edx, [ecx*4]
// 00885d96  52                   push edx
// 00885d97  6a00                 push 0
// 00885d99  50                   push eax
// 00885d9a  a34cae9e00           mov dword ptr [0x9eae4c], eax
// 00885d9f  e8ec60ceff           call 0x56be90
// 00885da4  68504f8900           push 0x894f50
// 00885da9  e84d3de9ff           call 0x719afb
// 00885dae  83c418               add esp, 0x18
// 00885db1  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
