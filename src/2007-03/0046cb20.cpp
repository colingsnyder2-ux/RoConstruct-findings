// roc 2007-03 0046cb20  unit: seg_00460000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046cb20
//
// 0046cb20  803d30768b0000       cmp byte ptr [0x8b7630], 0
// 0046cb27  750c                 jne 0x46cb35
// 0046cb29  803d2f768b0000       cmp byte ptr [0x8b762f], 0
// 0046cb30  7503                 jne 0x46cb35
// 0046cb32  33c0                 xor eax, eax
// 0046cb34  c3                   ret 
// 0046cb35  b801000000           mov eax, 1
// 0046cb3a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GLCaps.cpp (function ?supports_two_sided_stencil@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GLCaps.cpp
