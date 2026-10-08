// roc 2009-06 0045a190  unit: G3D::TextureManager::TextureArgs  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a190
//
// 0045a190  56                   push esi
// 0045a191  8bf1                 mov esi, ecx
// 0045a193  ff4678               inc dword ptr [esi + 0x78]
// 0045a196  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 0045a19d  7520                 jne 0x45a1bf
// 0045a19f  ff4670               inc dword ptr [esi + 0x70]
// 0045a1a2  33c0                 xor eax, eax
// 0045a1a4  3886e2030000         cmp byte ptr [esi + 0x3e2], al
// 0045a1aa  6a01                 push 1
// 0045a1ac  0f95c0               setne al
// 0045a1af  50                   push eax
// 0045a1b0  50                   push eax
// 0045a1b1  50                   push eax
// 0045a1b2  ff159cea8900         call dword ptr [0x89ea9c]
// 0045a1b8  c686e303000001       mov byte ptr [esi + 0x3e3], 1
// 0045a1bf  5e                   pop esi
// 0045a1c0  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableAlphaWrite@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
