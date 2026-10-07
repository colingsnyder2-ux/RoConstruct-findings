// roc 2007-08 005003b0  unit: G3D::Shader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005003b0
//
// 005003b0  e87bf8ffff           call 0x4ffc30
// 005003b5  a1bc7c8900           mov eax, dword ptr [0x897cbc]
// 005003ba  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?machineEndian@System@G3D@@SA?AW4G3DEndian@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
