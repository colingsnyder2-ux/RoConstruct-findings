// from server: 100% by auto
// roc 2010-06 0090d040  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090d040
//
// 0090d040  6aff                 push -1
// 0090d042  68d9119c00           push 0x9c11d9
// 0090d047  64a100000000         mov eax, dword ptr fs:[0]
// 0090d04d  50                   push eax
// 0090d04e  64892500000000       mov dword ptr fs:[0], esp
// 0090d055  51                   push ecx
// 0090d056  56                   push esi
// 0090d057  8bf1                 mov esi, ecx
// 0090d059  c744240400000000     mov dword ptr [esp + 4], 0
// 0090d061  8b4604               mov eax, dword ptr [esi + 4]
// 0090d064  8b16                 mov edx, dword ptr [esi]
// 0090d066  8d0cc500000000       lea ecx, [eax*8]
// 0090d06d  2bc8                 sub ecx, eax
// 0090d06f  57                   push edi
// 0090d070  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0090d074  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 0090d078  50                   push eax
// 0090d079  8bcf                 mov ecx, edi
// 0090d07b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0090d083  e818f6ffff           call 0x90c6a0
// 0090d088  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0090d08c  8b5604               mov edx, dword ptr [esi + 4]
// 0090d08f  51                   push ecx
// 0090d090  4a                   dec edx
// 0090d091  52                   push edx
// 0090d092  8bce                 mov ecx, esi
// 0090d094  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0090d09c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0090d0a4  e8e7f9ffff           call 0x90ca90
// 0090d0a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0090d0ad  8bc7                 mov eax, edi
// 0090d0af  5f                   pop edi
// 0090d0b0  5e                   pop esi
// 0090d0b1  64890d00000000       mov dword ptr fs:[0], ecx
// 0090d0b8  83c410               add esp, 0x10
// 0090d0bb  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?pop@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE?AVTextureArgs@TextureManager@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
