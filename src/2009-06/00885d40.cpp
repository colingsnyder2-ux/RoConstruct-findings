// roc 2009-06 00885d40  unit: seg_00880000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885d40
//
// 00885d40  6a10                 push 0x10
// 00885d42  6a28                 push 0x28
// 00885d44  e82754ceff           call 0x56b170
// 00885d49  8b0d3cae9e00         mov ecx, dword ptr [0x9eae3c]
// 00885d4f  8d148d00000000       lea edx, [ecx*4]
// 00885d56  52                   push edx
// 00885d57  6a00                 push 0
// 00885d59  50                   push eax
// 00885d5a  a338ae9e00           mov dword ptr [0x9eae38], eax
// 00885d5f  e82c61ceff           call 0x56be90
// 00885d64  68304f8900           push 0x894f30
// 00885d69  e88d3de9ff           call 0x719afb
// 00885d6e  83c418               add esp, 0x18
// 00885d71  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
