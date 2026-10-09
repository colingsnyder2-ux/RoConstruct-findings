// roc 2009-12 004d0cd0  unit: G3D::PBVTextureFormat::?$Table  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d0cd0
//
// 004d0cd0  8b8184080000         mov eax, dword ptr [ecx + 0x884]
// 004d0cd6  8b9180080000         mov edx, dword ptr [ecx + 0x880]
// 004d0cdc  69c060070000         imul eax, eax, 0x760
// 004d0ce2  56                   push esi
// 004d0ce3  8db180080000         lea esi, [ecx + 0x880]
// 004d0ce9  8d8410a0f8ffff       lea eax, [eax + edx - 0x760]
// 004d0cf0  50                   push eax
// 004d0cf1  e80ad7ffff           call 0x4ce400
// 004d0cf6  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d0cf9  49                   dec ecx
// 004d0cfa  6a00                 push 0
// 004d0cfc  51                   push ecx
// 004d0cfd  8bce                 mov ecx, esi
// 004d0cff  e8dceeffff           call 0x4cfbe0
// 004d0d04  5e                   pop esi
// 004d0d05  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?popState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
