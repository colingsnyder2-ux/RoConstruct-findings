// from server: 100% by auto
// roc 2009-06 004a55f0  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a55f0
//
// 004a55f0  6aff                 push -1
// 004a55f2  68f9758500           push 0x8575f9
// 004a55f7  64a100000000         mov eax, dword ptr fs:[0]
// 004a55fd  50                   push eax
// 004a55fe  64892500000000       mov dword ptr fs:[0], esp
// 004a5605  51                   push ecx
// 004a5606  56                   push esi
// 004a5607  8bf1                 mov esi, ecx
// 004a5609  c744240400000000     mov dword ptr [esp + 4], 0
// 004a5611  8b4604               mov eax, dword ptr [esi + 4]
// 004a5614  8b16                 mov edx, dword ptr [esi]
// 004a5616  8d0cc500000000       lea ecx, [eax*8]
// 004a561d  2bc8                 sub ecx, eax
// 004a561f  57                   push edi
// 004a5620  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004a5624  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 004a5628  50                   push eax
// 004a5629  8bcf                 mov ecx, edi
// 004a562b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004a5633  e818f6ffff           call 0x4a4c50
// 004a5638  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a563c  8b5604               mov edx, dword ptr [esi + 4]
// 004a563f  51                   push ecx
// 004a5640  4a                   dec edx
// 004a5641  52                   push edx
// 004a5642  8bce                 mov ecx, esi
// 004a5644  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004a564c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a5654  e8e7f9ffff           call 0x4a5040
// 004a5659  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a565d  8bc7                 mov eax, edi
// 004a565f  5f                   pop edi
// 004a5660  5e                   pop esi
// 004a5661  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5668  83c410               add esp, 0x10
// 004a566b  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?pop@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE?AVTextureArgs@TextureManager@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
