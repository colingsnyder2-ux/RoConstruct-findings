// from server: 100% by auto
// roc 2008-06 00508880  unit: G3D::Shader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508880
//
// 00508880  e88bf8ffff           call 0x508110
// 00508885  a14c239400           mov eax, dword ptr [0x94234c]
// 0050888a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?machineEndian@System@G3D@@SA?AW4G3DEndian@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
