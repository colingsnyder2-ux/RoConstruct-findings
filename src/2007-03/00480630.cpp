// roc 2007-03 00480630  unit: seg_00480000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480630
//
// 00480630  803d34768b0000       cmp byte ptr [0x8b7634], 0
// 00480637  7418                 je 0x480651
// 00480639  803d35768b0000       cmp byte ptr [0x8b7635], 0
// 00480640  740f                 je 0x480651
// 00480642  803d37768b0000       cmp byte ptr [0x8b7637], 0
// 00480649  7406                 je 0x480651
// 0048064b  b801000000           mov eax, 1
// 00480650  c3                   ret 
// 00480651  33c0                 xor eax, eax
// 00480653  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?supportsPixelShaders@Shader@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
