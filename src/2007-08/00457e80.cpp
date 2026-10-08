// roc 2007-08 00457e80  unit: G3D::TextureManager::TextureArgs  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457e80
//
// 00457e80  56                   push esi
// 00457e81  8bf1                 mov esi, ecx
// 00457e83  83467801             add dword ptr [esi + 0x78], 1
// 00457e87  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 00457e8e  7521                 jne 0x457eb1
// 00457e90  83467001             add dword ptr [esi + 0x70], 1
// 00457e94  33c0                 xor eax, eax
// 00457e96  3886e2030000         cmp byte ptr [esi + 0x3e2], al
// 00457e9c  6a01                 push 1
// 00457e9e  0f95c0               setne al
// 00457ea1  50                   push eax
// 00457ea2  50                   push eax
// 00457ea3  50                   push eax
// 00457ea4  ff15a4eb7700         call dword ptr [0x77eba4]
// 00457eaa  c686e303000001       mov byte ptr [esi + 0x3e3], 1
// 00457eb1  5e                   pop esi
// 00457eb2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableAlphaWrite@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
