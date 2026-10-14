// roc 2010-06 009c4e10  unit: seg_009c0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4e10
//
// 009c4e10  6a10                 push 0x10
// 009c4e12  6a28                 push 0x28
// 009c4e14  e8878ab8ff           call 0x54d8a0
// 009c4e19  8b0dc870b800         mov ecx, dword ptr [0xb870c8]
// 009c4e1f  8d148d00000000       lea edx, [ecx*4]
// 009c4e26  52                   push edx
// 009c4e27  6a00                 push 0
// 009c4e29  50                   push eax
// 009c4e2a  a3c470b800           mov dword ptr [0xb870c4], eax
// 009c4e2f  e86c97b8ff           call 0x54e5a0
// 009c4e34  68f0c09d00           push 0x9dc0f0
// 009c4e39  e8253cdeff           call 0x7a8a63
// 009c4e3e  83c418               add esp, 0x18
// 009c4e41  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
