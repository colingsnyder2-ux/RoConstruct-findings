// roc 2010-06 009c8820  unit: seg_009c0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8820
//
// 009c8820  6a10                 push 0x10
// 009c8822  6a28                 push 0x28
// 009c8824  e87750b8ff           call 0x54d8a0
// 009c8829  8b0db0b8b900         mov ecx, dword ptr [0xb9b8b0]
// 009c882f  8d148d00000000       lea edx, [ecx*4]
// 009c8836  52                   push edx
// 009c8837  6a00                 push 0
// 009c8839  50                   push eax
// 009c883a  a3acb8b900           mov dword ptr [0xb9b8ac], eax
// 009c883f  e85c5db8ff           call 0x54e5a0
// 009c8844  68f0e09d00           push 0x9de0f0
// 009c8849  e81502deff           call 0x7a8a63
// 009c884e  83c418               add esp, 0x18
// 009c8851  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
