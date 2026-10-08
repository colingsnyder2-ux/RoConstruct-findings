// roc 2007-03 00480600  unit: seg_00480000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480600
//
// 00480600  803d34768b0000       cmp byte ptr [0x8b7634], 0
// 00480607  7418                 je 0x480621
// 00480609  803d35768b0000       cmp byte ptr [0x8b7635], 0
// 00480610  740f                 je 0x480621
// 00480612  803d36768b0000       cmp byte ptr [0x8b7636], 0
// 00480619  7406                 je 0x480621
// 0048061b  b801000000           mov eax, 1
// 00480620  c3                   ret 
// 00480621  33c0                 xor eax, eax
// 00480623  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?supportsPixelShaders@Shader@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
