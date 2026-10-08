// roc 2007-03 004808c0  unit: seg_00480000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004808c0
//
// 004808c0  8b442404             mov eax, dword ptr [esp + 4]
// 004808c4  3d5d8b0000           cmp eax, 0x8b5d
// 004808c9  7434                 je 0x4808ff
// 004808cb  3d5e8b0000           cmp eax, 0x8b5e
// 004808d0  742d                 je 0x4808ff
// 004808d2  3d638b0000           cmp eax, 0x8b63
// 004808d7  7426                 je 0x4808ff
// 004808d9  3d5f8b0000           cmp eax, 0x8b5f
// 004808de  741f                 je 0x4808ff
// 004808e0  3d608b0000           cmp eax, 0x8b60
// 004808e5  7418                 je 0x4808ff
// 004808e7  3d618b0000           cmp eax, 0x8b61
// 004808ec  7411                 je 0x4808ff
// 004808ee  3d628b0000           cmp eax, 0x8b62
// 004808f3  740a                 je 0x4808ff
// 004808f5  3d648b0000           cmp eax, 0x8b64
// 004808fa  7403                 je 0x4808ff
// 004808fc  33c0                 xor eax, eax
// 004808fe  c3                   ret 
// 004808ff  b801000000           mov eax, 1
// 00480904  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?isSamplerType@VertexAndPixelShader@G3D@@KA_NI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
