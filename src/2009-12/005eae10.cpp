// roc 2009-12 005eae10  unit: G3D::Shader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eae10
//
// 005eae10  e8abfaffff           call 0x5ea8c0
// 005eae15  a1946bb200           mov eax, dword ptr [0xb26b94]
// 005eae1a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?machineEndian@System@G3D@@SA?AW4G3DEndian@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
