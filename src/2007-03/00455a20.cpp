// roc 2007-03 00455a20  unit: seg_00450000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455a20
//
// 00455a20  56                   push esi
// 00455a21  8bf1                 mov esi, ecx
// 00455a23  83467801             add dword ptr [esi + 0x78], 1
// 00455a27  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 00455a2e  7521                 jne 0x455a51
// 00455a30  83467001             add dword ptr [esi + 0x70], 1
// 00455a34  33c0                 xor eax, eax
// 00455a36  3886e2030000         cmp byte ptr [esi + 0x3e2], al
// 00455a3c  6a01                 push 1
// 00455a3e  0f95c0               setne al
// 00455a41  50                   push eax
// 00455a42  50                   push eax
// 00455a43  50                   push eax
// 00455a44  ff151ceb7700         call dword ptr [0x77eb1c]
// 00455a4a  c686e303000001       mov byte ptr [esi + 0x3e3], 1
// 00455a51  5e                   pop esi
// 00455a52  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableAlphaWrite@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
