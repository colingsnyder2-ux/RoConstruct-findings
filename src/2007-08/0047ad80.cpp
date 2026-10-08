// from server: 100% by auto
// roc 2007-08 0047ad80  unit: G3D::TextureManager::TextureArgs  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047ad80
//
// 0047ad80  56                   push esi
// 0047ad81  8bf1                 mov esi, ecx
// 0047ad83  6a10                 push 0x10
// 0047ad85  6a28                 push 0x28
// 0047ad87  c70624367900         mov dword ptr [esi], 0x793624
// 0047ad8d  c7460c0a000000       mov dword ptr [esi + 0xc], 0xa
// 0047ad94  c7460400000000       mov dword ptr [esi + 4], 0
// 0047ad9b  e8c0520800           call 0x500060
// 0047ada0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0047ada3  03c9                 add ecx, ecx
// 0047ada5  03c9                 add ecx, ecx
// 0047ada7  51                   push ecx
// 0047ada8  6a00                 push 0
// 0047adaa  50                   push eax
// 0047adab  894608               mov dword ptr [esi + 8], eax
// 0047adae  e8cd570800           call 0x500580
// 0047adb3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0047adb7  83c414               add esp, 0x14
// 0047adba  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0047adc1  895614               mov dword ptr [esi + 0x14], edx
// 0047adc4  8bc6                 mov eax, esi
// 0047adc6  5e                   pop esi
// 0047adc7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureManager@G3D@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
