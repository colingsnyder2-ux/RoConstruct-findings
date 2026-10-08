// from server: 100% by auto
// roc 2010-06 0054e550  unit: G3D::Shader  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e550
//
// 0054e550  e84bf9ffff           call 0x54dea0
// 0054e555  803d4b9ec00000       cmp byte ptr [0xc09e4b], 0
// 0054e55c  7413                 je 0x54e571
// 0054e55e  e83df9ffff           call 0x54dea0
// 0054e563  803d499ec00000       cmp byte ptr [0xc09e49], 0
// 0054e56a  7405                 je 0x54e571
// 0054e56c  e9bff1ffff           jmp 0x54d730
// 0054e571  e82af9ffff           call 0x54dea0
// 0054e576  803d4a9ec00000       cmp byte ptr [0xc09e4a], 0
// 0054e57d  7413                 je 0x54e592
// 0054e57f  e81cf9ffff           call 0x54dea0
// 0054e584  803d499ec00000       cmp byte ptr [0xc09e49], 0
// 0054e58b  7405                 je 0x54e592
// 0054e58d  e99ef1ffff           jmp 0x54d730
// 0054e592  e98fa82500           jmp 0x7a8e26
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpy@System@G3D@@SAXPAXPBXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
