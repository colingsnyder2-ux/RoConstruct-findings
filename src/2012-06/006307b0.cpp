// roc 2012-06 006307b0  unit: G3D::BinaryInput  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006307b0
//
// 006307b0  8a442404             mov al, byte ptr [esp + 4]
// 006307b4  3c5c                 cmp al, 0x5c
// 006307b6  7407                 je 0x6307bf
// 006307b8  3c2f                 cmp al, 0x2f
// 006307ba  7403                 je 0x6307bf
// 006307bc  33c0                 xor eax, eax
// 006307be  c3                   ret 
// 006307bf  b801000000           mov eax, 1
// 006307c4  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?isSlash@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
