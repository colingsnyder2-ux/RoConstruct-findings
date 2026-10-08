// from server: 100% by auto
// roc 2009-06 004a5920  unit: G3D::TextureManager::TextureArgs  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a5920
//
// 004a5920  56                   push esi
// 004a5921  8bf1                 mov esi, ecx
// 004a5923  6a10                 push 0x10
// 004a5925  6a28                 push 0x28
// 004a5927  c70608a58b00         mov dword ptr [esi], 0x8ba508
// 004a592d  c7460c0a000000       mov dword ptr [esi + 0xc], 0xa
// 004a5934  c7460400000000       mov dword ptr [esi + 4], 0
// 004a593b  e830580c00           call 0x56b170
// 004a5940  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5943  03c9                 add ecx, ecx
// 004a5945  03c9                 add ecx, ecx
// 004a5947  51                   push ecx
// 004a5948  6a00                 push 0
// 004a594a  50                   push eax
// 004a594b  894608               mov dword ptr [esi + 8], eax
// 004a594e  e83d650c00           call 0x56be90
// 004a5953  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004a5957  83c414               add esp, 0x14
// 004a595a  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004a5961  895614               mov dword ptr [esi + 0x14], edx
// 004a5964  8bc6                 mov eax, esi
// 004a5966  5e                   pop esi
// 004a5967  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureManager@G3D@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
