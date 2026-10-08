// roc 2008-06 0045ae70  unit: G3D::TextureManager::TextureArgs  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ae70
//
// 0045ae70  56                   push esi
// 0045ae71  8bf1                 mov esi, ecx
// 0045ae73  ff4678               inc dword ptr [esi + 0x78]
// 0045ae76  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 0045ae7d  7520                 jne 0x45ae9f
// 0045ae7f  ff4670               inc dword ptr [esi + 0x70]
// 0045ae82  33c0                 xor eax, eax
// 0045ae84  3886e2030000         cmp byte ptr [esi + 0x3e2], al
// 0045ae8a  6a01                 push 1
// 0045ae8c  0f95c0               setne al
// 0045ae8f  50                   push eax
// 0045ae90  50                   push eax
// 0045ae91  50                   push eax
// 0045ae92  ff1598298000         call dword ptr [0x802998]
// 0045ae98  c686e303000001       mov byte ptr [esi + 0x3e3], 1
// 0045ae9f  5e                   pop esi
// 0045aea0  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableAlphaWrite@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
