// roc 2010-06 0048c350  unit: G3D::Win32Window  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048c350
//
// 0048c350  803dc038c00000       cmp byte ptr [0xc038c0], 0
// 0048c357  750c                 jne 0x48c365
// 0048c359  803dbf38c00000       cmp byte ptr [0xc038bf], 0
// 0048c360  7503                 jne 0x48c365
// 0048c362  33c0                 xor eax, eax
// 0048c364  c3                   ret 
// 0048c365  b801000000           mov eax, 1
// 0048c36a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?supports_two_sided_stencil@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
