// roc 2008-06 0047e400  unit: G3D::TextureManager::TextureArgs  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047e400
//
// 0047e400  56                   push esi
// 0047e401  8bf1                 mov esi, ecx
// 0047e403  6a10                 push 0x10
// 0047e405  6a28                 push 0x28
// 0047e407  c706d89c8100         mov dword ptr [esi], 0x819cd8
// 0047e40d  c7460c0a000000       mov dword ptr [esi + 0xc], 0xa
// 0047e414  c7460400000000       mov dword ptr [esi + 4], 0
// 0047e41b  e860a10800           call 0x508580
// 0047e420  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0047e423  03c9                 add ecx, ecx
// 0047e425  03c9                 add ecx, ecx
// 0047e427  51                   push ecx
// 0047e428  6a00                 push 0
// 0047e42a  50                   push eax
// 0047e42b  894608               mov dword ptr [esi + 8], eax
// 0047e42e  e8fda50800           call 0x508a30
// 0047e433  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0047e437  83c414               add esp, 0x14
// 0047e43a  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0047e441  895614               mov dword ptr [esi + 0x14], edx
// 0047e444  8bc6                 mov eax, esi
// 0047e446  5e                   pop esi
// 0047e447  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureManager@G3D@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
