// roc 2009-12 00461a60  unit: G3D::TextureManager::TextureArgs  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00461a60
//
// 00461a60  56                   push esi
// 00461a61  8bf1                 mov esi, ecx
// 00461a63  ff4678               inc dword ptr [esi + 0x78]
// 00461a66  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 00461a6d  7520                 jne 0x461a8f
// 00461a6f  ff4670               inc dword ptr [esi + 0x70]
// 00461a72  33c0                 xor eax, eax
// 00461a74  3886e2030000         cmp byte ptr [esi + 0x3e2], al
// 00461a7a  6a01                 push 1
// 00461a7c  0f95c0               setne al
// 00461a7f  50                   push eax
// 00461a80  50                   push eax
// 00461a81  50                   push eax
// 00461a82  ff15a0bb9800         call dword ptr [0x98bba0]
// 00461a88  c686e303000001       mov byte ptr [esi + 0x3e3], 1
// 00461a8f  5e                   pop esi
// 00461a90  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableAlphaWrite@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
