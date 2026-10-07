// roc 2007-08 005002d0  unit: G3D::Shader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005002d0
//
// 005002d0  e85bf9ffff           call 0x4ffc30
// 005002d5  a09d088c00           mov al, byte ptr [0x8c089d]
// 005002da  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?hasCPUID@System@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
