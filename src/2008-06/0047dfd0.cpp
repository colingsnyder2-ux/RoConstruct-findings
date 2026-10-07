// roc 2008-06 0047dfd0  unit: G3D::TextureManager::TextureArgs  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047dfd0
//
// 0047dfd0  6aff                 push -1
// 0047dfd2  68a44f7c00           push 0x7c4fa4
// 0047dfd7  64a100000000         mov eax, dword ptr fs:[0]
// 0047dfdd  50                   push eax
// 0047dfde  64892500000000       mov dword ptr fs:[0], esp
// 0047dfe5  83ec40               sub esp, 0x40
// 0047dfe8  56                   push esi
// 0047dfe9  8bf1                 mov esi, ecx
// 0047dfeb  8b4604               mov eax, dword ptr [esi + 4]
// 0047dfee  3b4608               cmp eax, dword ptr [esi + 8]
// 0047dff1  89742404             mov dword ptr [esp + 4], esi
// 0047dff5  7d3d                 jge 0x47e034
// 0047dff7  8b16                 mov edx, dword ptr [esi]
// 0047dff9  8d0cc500000000       lea ecx, [eax*8]
// 0047e000  2bc8                 sub ecx, eax
// 0047e002  8d0cca               lea ecx, [edx + ecx*8]
// 0047e005  894c2408             mov dword ptr [esp + 8], ecx
// 0047e009  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0047e011  85c9                 test ecx, ecx
// 0047e013  740a                 je 0x47e01f
// 0047e015  8b442454             mov eax, dword ptr [esp + 0x54]
// 0047e019  50                   push eax
// 0047e01a  e811f7ffff           call 0x47d730
// 0047e01f  ff4604               inc dword ptr [esi + 4]
// 0047e022  5e                   pop esi
// 0047e023  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0047e027  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e02e  83c44c               add esp, 0x4c
// 0047e031  c20400               ret 4
// 0047e034  8b0e                 mov ecx, dword ptr [esi]
// 0047e036  57                   push edi
// 0047e037  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0047e03b  3bf9                 cmp edi, ecx
// 0047e03d  7252                 jb 0x47e091
// 0047e03f  8d14c500000000       lea edx, [eax*8]
// 0047e046  2bd0                 sub edx, eax
// 0047e048  8d0cd1               lea ecx, [ecx + edx*8]
// 0047e04b  3bf9                 cmp edi, ecx
// 0047e04d  7342                 jae 0x47e091
// 0047e04f  57                   push edi
// 0047e050  8d4c2414             lea ecx, [esp + 0x14]
// 0047e054  e8d7f6ffff           call 0x47d730
// 0047e059  8d542410             lea edx, [esp + 0x10]
// 0047e05d  52                   push edx
// 0047e05e  8bce                 mov ecx, esi
// 0047e060  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0047e068  e863ffffff           call 0x47dfd0
// 0047e06d  8d4c2410             lea ecx, [esp + 0x10]
// 0047e071  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0047e079  e842cdfdff           call 0x45adc0
// 0047e07e  5f                   pop edi
// 0047e07f  5e                   pop esi
// 0047e080  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0047e084  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e08b  83c44c               add esp, 0x4c
// 0047e08e  c20400               ret 4
// 0047e091  6a00                 push 0
// 0047e093  40                   inc eax
// 0047e094  50                   push eax
// 0047e095  8bce                 mov ecx, esi
// 0047e097  e884faffff           call 0x47db20
// 0047e09c  8b4604               mov eax, dword ptr [esi + 4]
// 0047e09f  8b16                 mov edx, dword ptr [esi]
// 0047e0a1  8d0cc500000000       lea ecx, [eax*8]
// 0047e0a8  2bc8                 sub ecx, eax
// 0047e0aa  57                   push edi
// 0047e0ab  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 0047e0af  e8ecf6ffff           call 0x47d7a0
// 0047e0b4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0047e0b8  5f                   pop edi
// 0047e0b9  5e                   pop esi
// 0047e0ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e0c1  83c44c               add esp, 0x4c
// 0047e0c4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
