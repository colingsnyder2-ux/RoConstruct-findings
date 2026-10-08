// from server: 100% by auto
// roc 2010-06 0054e3f0  unit: G3D::Shader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e3f0
//
// 0054e3f0  e8abfaffff           call 0x54dea0
// 0054e3f5  a1d4b1b900           mov eax, dword ptr [0xb9b1d4]
// 0054e3fa  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?machineEndian@System@G3D@@SA?AW4G3DEndian@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
