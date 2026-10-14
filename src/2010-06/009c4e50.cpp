// roc 2010-06 009c4e50  unit: seg_009c0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4e50
//
// 009c4e50  6a10                 push 0x10
// 009c4e52  6a28                 push 0x28
// 009c4e54  e8478ab8ff           call 0x54d8a0
// 009c4e59  8b0ddc70b800         mov ecx, dword ptr [0xb870dc]
// 009c4e5f  8d148d00000000       lea edx, [ecx*4]
// 009c4e66  52                   push edx
// 009c4e67  6a00                 push 0
// 009c4e69  50                   push eax
// 009c4e6a  a3d870b800           mov dword ptr [0xb870d8], eax
// 009c4e6f  e82c97b8ff           call 0x54e5a0
// 009c4e74  6810c19d00           push 0x9dc110
// 009c4e79  e8e53bdeff           call 0x7a8a63
// 009c4e7e  83c418               add esp, 0x18
// 009c4e81  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
