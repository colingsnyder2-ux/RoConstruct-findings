// roc 2011-06 00548dc0  unit: G3D::TextInput::TokenException  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00548dc0
//
// 00548dc0  8a442404             mov al, byte ptr [esp + 4]
// 00548dc4  3c5c                 cmp al, 0x5c
// 00548dc6  7407                 je 0x548dcf
// 00548dc8  3c2f                 cmp al, 0x2f
// 00548dca  7403                 je 0x548dcf
// 00548dcc  33c0                 xor eax, eax
// 00548dce  c3                   ret 
// 00548dcf  b801000000           mov eax, 1
// 00548dd4  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?isSlash@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
