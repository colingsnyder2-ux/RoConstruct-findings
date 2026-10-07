// roc 2009-06 0056bce0  unit: G3D::Shader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056bce0
//
// 0056bce0  e8abfaffff           call 0x56b790
// 0056bce5  a1b4c39f00           mov eax, dword ptr [0x9fc3b4]
// 0056bcea  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?machineEndian@System@G3D@@SA?AW4G3DEndian@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
