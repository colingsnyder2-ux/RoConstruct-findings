// roc 2008-06 005089e0  unit: G3D::Shader  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005089e0
//
// 005089e0  e82bf7ffff           call 0x508110
// 005089e5  803d0335970000       cmp byte ptr [0x973503], 0
// 005089ec  7413                 je 0x508a01
// 005089ee  e81df7ffff           call 0x508110
// 005089f3  803d0135970000       cmp byte ptr [0x973501], 0
// 005089fa  7405                 je 0x508a01
// 005089fc  e9afeeffff           jmp 0x5078b0
// 00508a01  e80af7ffff           call 0x508110
// 00508a06  803d0235970000       cmp byte ptr [0x973502], 0
// 00508a0d  7413                 je 0x508a22
// 00508a0f  e8fcf6ffff           call 0x508110
// 00508a14  803d0135970000       cmp byte ptr [0x973501], 0
// 00508a1b  7405                 je 0x508a22
// 00508a1d  e98eeeffff           jmp 0x5078b0
// 00508a22  e9b98d1900           jmp 0x6a17e0
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpy@System@G3D@@SAXPAXPBXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
