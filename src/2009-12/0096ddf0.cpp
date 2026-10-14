// roc 2009-12 0096ddf0  unit: seg_00960000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ddf0
//
// 0096ddf0  6a10                 push 0x10
// 0096ddf2  6a28                 push 0x28
// 0096ddf4  e8c7c4c7ff           call 0x5ea2c0
// 0096ddf9  8b0d6472b200         mov ecx, dword ptr [0xb27264]
// 0096ddff  8d148d00000000       lea edx, [ecx*4]
// 0096de06  52                   push edx
// 0096de07  6a00                 push 0
// 0096de09  50                   push eax
// 0096de0a  a36072b200           mov dword ptr [0xb27260], eax
// 0096de0f  e8acd1c7ff           call 0x5eafc0
// 0096de14  68100f9800           push 0x980f10
// 0096de19  e80b6be8ff           call 0x7f4929
// 0096de1e  83c418               add esp, 0x18
// 0096de21  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
