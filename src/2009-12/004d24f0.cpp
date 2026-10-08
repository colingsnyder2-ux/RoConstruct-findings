// roc 2009-12 004d24f0  unit: G3D::TextureManager::TextureArgs  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d24f0
//
// 004d24f0  56                   push esi
// 004d24f1  8bf1                 mov esi, ecx
// 004d24f3  6a10                 push 0x10
// 004d24f5  6a28                 push 0x28
// 004d24f7  c70620ea9a00         mov dword ptr [esi], 0x9aea20
// 004d24fd  c7460c0a000000       mov dword ptr [esi + 0xc], 0xa
// 004d2504  c7460400000000       mov dword ptr [esi + 4], 0
// 004d250b  e8b07d1100           call 0x5ea2c0
// 004d2510  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d2513  03c9                 add ecx, ecx
// 004d2515  03c9                 add ecx, ecx
// 004d2517  51                   push ecx
// 004d2518  6a00                 push 0
// 004d251a  50                   push eax
// 004d251b  894608               mov dword ptr [esi + 8], eax
// 004d251e  e89d8a1100           call 0x5eafc0
// 004d2523  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004d2527  83c414               add esp, 0x14
// 004d252a  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004d2531  895614               mov dword ptr [esi + 0x14], edx
// 004d2534  8bc6                 mov eax, esi
// 004d2536  5e                   pop esi
// 004d2537  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureManager@G3D@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
