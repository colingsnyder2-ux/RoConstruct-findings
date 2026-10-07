// roc 2008-06 00508a30  unit: G3D::Shader  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508a30
//
// 00508a30  e8dbf6ffff           call 0x508110
// 00508a35  803d0235970000       cmp byte ptr [0x973502], 0
// 00508a3c  7422                 je 0x508a60
// 00508a3e  e8cdf6ffff           call 0x508110
// 00508a43  803d0135970000       cmp byte ptr [0x973501], 0
// 00508a4a  7414                 je 0x508a60
// 00508a4c  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 00508a51  69c901010101         imul ecx, ecx, 0x1010101
// 00508a57  894c2408             mov dword ptr [esp + 8], ecx
// 00508a5b  e9e0eeffff           jmp 0x507940
// 00508a60  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 00508a65  894c2408             mov dword ptr [esp + 8], ecx
// 00508a69  e9968c1900           jmp 0x6a1704
// library g3d-6.09/G3Dcpp\System.cpp (function ?memset@System@G3D@@SAXPAXEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
