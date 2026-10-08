// roc 2009-12 004d21b0  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d21b0
//
// 004d21b0  6aff                 push -1
// 004d21b2  68d9349300           push 0x9334d9
// 004d21b7  64a100000000         mov eax, dword ptr fs:[0]
// 004d21bd  50                   push eax
// 004d21be  64892500000000       mov dword ptr fs:[0], esp
// 004d21c5  51                   push ecx
// 004d21c6  56                   push esi
// 004d21c7  8bf1                 mov esi, ecx
// 004d21c9  c744240400000000     mov dword ptr [esp + 4], 0
// 004d21d1  8b4604               mov eax, dword ptr [esi + 4]
// 004d21d4  8b16                 mov edx, dword ptr [esi]
// 004d21d6  8d0cc500000000       lea ecx, [eax*8]
// 004d21dd  2bc8                 sub ecx, eax
// 004d21df  57                   push edi
// 004d21e0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d21e4  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 004d21e8  50                   push eax
// 004d21e9  8bcf                 mov ecx, edi
// 004d21eb  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004d21f3  e818f6ffff           call 0x4d1810
// 004d21f8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d21fc  8b5604               mov edx, dword ptr [esi + 4]
// 004d21ff  51                   push ecx
// 004d2200  4a                   dec edx
// 004d2201  52                   push edx
// 004d2202  8bce                 mov ecx, esi
// 004d2204  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004d220c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004d2214  e8e7f9ffff           call 0x4d1c00
// 004d2219  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d221d  8bc7                 mov eax, edi
// 004d221f  5f                   pop edi
// 004d2220  5e                   pop esi
// 004d2221  64890d00000000       mov dword ptr fs:[0], ecx
// 004d2228  83c410               add esp, 0x10
// 004d222b  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?pop@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE?AVTextureArgs@TextureManager@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
