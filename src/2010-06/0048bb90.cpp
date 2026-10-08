// from server: 100% by auto
// roc 2010-06 0048bb90  unit: G3D::Win32Window  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048bb90
//
// 0048bb90  6aff                 push -1
// 0048bb92  68a4629800           push 0x9862a4
// 0048bb97  64a100000000         mov eax, dword ptr fs:[0]
// 0048bb9d  50                   push eax
// 0048bb9e  64892500000000       mov dword ptr fs:[0], esp
// 0048bba5  83ec40               sub esp, 0x40
// 0048bba8  56                   push esi
// 0048bba9  8bf1                 mov esi, ecx
// 0048bbab  8b4604               mov eax, dword ptr [esi + 4]
// 0048bbae  3b4608               cmp eax, dword ptr [esi + 8]
// 0048bbb1  89742404             mov dword ptr [esp + 4], esi
// 0048bbb5  7d3d                 jge 0x48bbf4
// 0048bbb7  8b16                 mov edx, dword ptr [esi]
// 0048bbb9  8d0cc500000000       lea ecx, [eax*8]
// 0048bbc0  2bc8                 sub ecx, eax
// 0048bbc2  8d0cca               lea ecx, [edx + ecx*8]
// 0048bbc5  894c2408             mov dword ptr [esp + 8], ecx
// 0048bbc9  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0048bbd1  85c9                 test ecx, ecx
// 0048bbd3  740a                 je 0x48bbdf
// 0048bbd5  8b442454             mov eax, dword ptr [esp + 0x54]
// 0048bbd9  50                   push eax
// 0048bbda  e801f3ffff           call 0x48aee0
// 0048bbdf  ff4604               inc dword ptr [esi + 4]
// 0048bbe2  5e                   pop esi
// 0048bbe3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0048bbe7  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bbee  83c44c               add esp, 0x4c
// 0048bbf1  c20400               ret 4
// 0048bbf4  8b0e                 mov ecx, dword ptr [esi]
// 0048bbf6  57                   push edi
// 0048bbf7  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0048bbfb  3bf9                 cmp edi, ecx
// 0048bbfd  7252                 jb 0x48bc51
// 0048bbff  8d14c500000000       lea edx, [eax*8]
// 0048bc06  2bd0                 sub edx, eax
// 0048bc08  8d0cd1               lea ecx, [ecx + edx*8]
// 0048bc0b  3bf9                 cmp edi, ecx
// 0048bc0d  7342                 jae 0x48bc51
// 0048bc0f  57                   push edi
// 0048bc10  8d4c2414             lea ecx, [esp + 0x14]
// 0048bc14  e8c7f2ffff           call 0x48aee0
// 0048bc19  8d542410             lea edx, [esp + 0x10]
// 0048bc1d  52                   push edx
// 0048bc1e  8bce                 mov ecx, esi
// 0048bc20  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0048bc28  e863ffffff           call 0x48bb90
// 0048bc2d  8d4c2410             lea ecx, [esp + 0x10]
// 0048bc31  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0048bc39  e852cbffff           call 0x488790
// 0048bc3e  5f                   pop edi
// 0048bc3f  5e                   pop esi
// 0048bc40  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0048bc44  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bc4b  83c44c               add esp, 0x4c
// 0048bc4e  c20400               ret 4
// 0048bc51  6a00                 push 0
// 0048bc53  40                   inc eax
// 0048bc54  50                   push eax
// 0048bc55  8bce                 mov ecx, esi
// 0048bc57  e844fdffff           call 0x48b9a0
// 0048bc5c  8b4604               mov eax, dword ptr [esi + 4]
// 0048bc5f  8b16                 mov edx, dword ptr [esi]
// 0048bc61  8d0cc500000000       lea ecx, [eax*8]
// 0048bc68  2bc8                 sub ecx, eax
// 0048bc6a  57                   push edi
// 0048bc6b  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 0048bc6f  e82ce4ffff           call 0x48a0a0
// 0048bc74  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0048bc78  5f                   pop edi
// 0048bc79  5e                   pop esi
// 0048bc7a  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bc81  83c44c               add esp, 0x4c
// 0048bc84  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
