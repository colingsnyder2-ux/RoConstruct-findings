// from server: 100% by auto
// roc 2010-06 0090d380  unit: G3D::TextureManager::TextureArgs  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090d380
//
// 0090d380  56                   push esi
// 0090d381  8bf1                 mov esi, ecx
// 0090d383  6a10                 push 0x10
// 0090d385  6a28                 push 0x28
// 0090d387  c706d8e9a100         mov dword ptr [esi], 0xa1e9d8
// 0090d38d  c7460c0a000000       mov dword ptr [esi + 0xc], 0xa
// 0090d394  c7460400000000       mov dword ptr [esi + 4], 0
// 0090d39b  e80005c4ff           call 0x54d8a0
// 0090d3a0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0090d3a3  03c9                 add ecx, ecx
// 0090d3a5  03c9                 add ecx, ecx
// 0090d3a7  51                   push ecx
// 0090d3a8  6a00                 push 0
// 0090d3aa  50                   push eax
// 0090d3ab  894608               mov dword ptr [esi + 8], eax
// 0090d3ae  e8ed11c4ff           call 0x54e5a0
// 0090d3b3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0090d3b7  83c414               add esp, 0x14
// 0090d3ba  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0090d3c1  895614               mov dword ptr [esi + 0x14], edx
// 0090d3c4  8bc6                 mov eax, esi
// 0090d3c6  5e                   pop esi
// 0090d3c7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureManager@G3D@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
