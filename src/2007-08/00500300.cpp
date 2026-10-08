// from server: 100% by auto
// roc 2007-08 00500300  unit: G3D::Shader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00500300
//
// 00500300  e82bf9ffff           call 0x4ffc30
// 00500305  a09b088c00           mov al, byte ptr [0x8c089b]
// 0050030a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?hasCPUID@System@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
