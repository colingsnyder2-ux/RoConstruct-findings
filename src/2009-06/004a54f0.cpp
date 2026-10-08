// from server: 100% by auto
// roc 2009-06 004a54f0  unit: G3D::TextureManager::TextureArgs  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a54f0
//
// 004a54f0  6aff                 push -1
// 004a54f2  68d4758500           push 0x8575d4
// 004a54f7  64a100000000         mov eax, dword ptr fs:[0]
// 004a54fd  50                   push eax
// 004a54fe  64892500000000       mov dword ptr fs:[0], esp
// 004a5505  83ec40               sub esp, 0x40
// 004a5508  56                   push esi
// 004a5509  8bf1                 mov esi, ecx
// 004a550b  8b4604               mov eax, dword ptr [esi + 4]
// 004a550e  3b4608               cmp eax, dword ptr [esi + 8]
// 004a5511  89742404             mov dword ptr [esp + 4], esi
// 004a5515  7d3d                 jge 0x4a5554
// 004a5517  8b16                 mov edx, dword ptr [esi]
// 004a5519  8d0cc500000000       lea ecx, [eax*8]
// 004a5520  2bc8                 sub ecx, eax
// 004a5522  8d0cca               lea ecx, [edx + ecx*8]
// 004a5525  894c2408             mov dword ptr [esp + 8], ecx
// 004a5529  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004a5531  85c9                 test ecx, ecx
// 004a5533  740a                 je 0x4a553f
// 004a5535  8b442454             mov eax, dword ptr [esp + 0x54]
// 004a5539  50                   push eax
// 004a553a  e811f7ffff           call 0x4a4c50
// 004a553f  ff4604               inc dword ptr [esi + 4]
// 004a5542  5e                   pop esi
// 004a5543  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004a5547  64890d00000000       mov dword ptr fs:[0], ecx
// 004a554e  83c44c               add esp, 0x4c
// 004a5551  c20400               ret 4
// 004a5554  8b0e                 mov ecx, dword ptr [esi]
// 004a5556  57                   push edi
// 004a5557  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004a555b  3bf9                 cmp edi, ecx
// 004a555d  7252                 jb 0x4a55b1
// 004a555f  8d14c500000000       lea edx, [eax*8]
// 004a5566  2bd0                 sub edx, eax
// 004a5568  8d0cd1               lea ecx, [ecx + edx*8]
// 004a556b  3bf9                 cmp edi, ecx
// 004a556d  7342                 jae 0x4a55b1
// 004a556f  57                   push edi
// 004a5570  8d4c2414             lea ecx, [esp + 0x14]
// 004a5574  e8d7f6ffff           call 0x4a4c50
// 004a5579  8d542410             lea edx, [esp + 0x10]
// 004a557d  52                   push edx
// 004a557e  8bce                 mov ecx, esi
// 004a5580  c744245401000000     mov dword ptr [esp + 0x54], 1
// 004a5588  e863ffffff           call 0x4a54f0
// 004a558d  8d4c2410             lea ecx, [esp + 0x10]
// 004a5591  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004a5599  e8424bfbff           call 0x45a0e0
// 004a559e  5f                   pop edi
// 004a559f  5e                   pop esi
// 004a55a0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004a55a4  64890d00000000       mov dword ptr fs:[0], ecx
// 004a55ab  83c44c               add esp, 0x4c
// 004a55ae  c20400               ret 4
// 004a55b1  6a00                 push 0
// 004a55b3  40                   inc eax
// 004a55b4  50                   push eax
// 004a55b5  8bce                 mov ecx, esi
// 004a55b7  e884faffff           call 0x4a5040
// 004a55bc  8b4604               mov eax, dword ptr [esi + 4]
// 004a55bf  8b16                 mov edx, dword ptr [esi]
// 004a55c1  8d0cc500000000       lea ecx, [eax*8]
// 004a55c8  2bc8                 sub ecx, eax
// 004a55ca  57                   push edi
// 004a55cb  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 004a55cf  e8ecf6ffff           call 0x4a4cc0
// 004a55d4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004a55d8  5f                   pop edi
// 004a55d9  5e                   pop esi
// 004a55da  64890d00000000       mov dword ptr fs:[0], ecx
// 004a55e1  83c44c               add esp, 0x4c
// 004a55e4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
