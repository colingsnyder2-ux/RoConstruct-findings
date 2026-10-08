// roc 2009-12 005eaf70  unit: G3D::Shader  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eaf70
//
// 005eaf70  e84bf9ffff           call 0x5ea8c0
// 005eaf75  803d833db80000       cmp byte ptr [0xb83d83], 0
// 005eaf7c  7413                 je 0x5eaf91
// 005eaf7e  e83df9ffff           call 0x5ea8c0
// 005eaf83  803d813db80000       cmp byte ptr [0xb83d81], 0
// 005eaf8a  7405                 je 0x5eaf91
// 005eaf8c  e9bff1ffff           jmp 0x5ea150
// 005eaf91  e82af9ffff           call 0x5ea8c0
// 005eaf96  803d823db80000       cmp byte ptr [0xb83d82], 0
// 005eaf9d  7413                 je 0x5eafb2
// 005eaf9f  e81cf9ffff           call 0x5ea8c0
// 005eafa4  803d813db80000       cmp byte ptr [0xb83d81], 0
// 005eafab  7405                 je 0x5eafb2
// 005eafad  e99ef1ffff           jmp 0x5ea150
// 005eafb2  e92f9d2000           jmp 0x7f4ce6
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpy@System@G3D@@SAXPAXPBXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
