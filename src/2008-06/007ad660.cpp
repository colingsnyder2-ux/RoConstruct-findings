// roc 2008-06 007ad660  unit: RBX::RenderNew::Material::Level  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad660
//
// 007ad660  6aff                 push -1
// 007ad662  68a4d87e00           push 0x7ed8a4
// 007ad667  64a100000000         mov eax, dword ptr fs:[0]
// 007ad66d  50                   push eax
// 007ad66e  64892500000000       mov dword ptr fs:[0], esp
// 007ad675  83ec40               sub esp, 0x40
// 007ad678  56                   push esi
// 007ad679  8bf1                 mov esi, ecx
// 007ad67b  8b4604               mov eax, dword ptr [esi + 4]
// 007ad67e  3b4608               cmp eax, dword ptr [esi + 8]
// 007ad681  89742404             mov dword ptr [esp + 4], esi
// 007ad685  7d3d                 jge 0x7ad6c4
// 007ad687  8b16                 mov edx, dword ptr [esi]
// 007ad689  8d0cc500000000       lea ecx, [eax*8]
// 007ad690  2bc8                 sub ecx, eax
// 007ad692  8d0cca               lea ecx, [edx + ecx*8]
// 007ad695  894c2408             mov dword ptr [esp + 8], ecx
// 007ad699  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 007ad6a1  85c9                 test ecx, ecx
// 007ad6a3  740a                 je 0x7ad6af
// 007ad6a5  8b442454             mov eax, dword ptr [esp + 0x54]
// 007ad6a9  50                   push eax
// 007ad6aa  e891f7ffff           call 0x7ace40
// 007ad6af  ff4604               inc dword ptr [esi + 4]
// 007ad6b2  5e                   pop esi
// 007ad6b3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007ad6b7  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad6be  83c44c               add esp, 0x4c
// 007ad6c1  c20400               ret 4
// 007ad6c4  8b0e                 mov ecx, dword ptr [esi]
// 007ad6c6  57                   push edi
// 007ad6c7  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 007ad6cb  3bf9                 cmp edi, ecx
// 007ad6cd  7252                 jb 0x7ad721
// 007ad6cf  8d14c500000000       lea edx, [eax*8]
// 007ad6d6  2bd0                 sub edx, eax
// 007ad6d8  8d0cd1               lea ecx, [ecx + edx*8]
// 007ad6db  3bf9                 cmp edi, ecx
// 007ad6dd  7342                 jae 0x7ad721
// 007ad6df  57                   push edi
// 007ad6e0  8d4c2414             lea ecx, [esp + 0x14]
// 007ad6e4  e857f7ffff           call 0x7ace40
// 007ad6e9  8d542410             lea edx, [esp + 0x10]
// 007ad6ed  52                   push edx
// 007ad6ee  8bce                 mov ecx, esi
// 007ad6f0  c744245401000000     mov dword ptr [esp + 0x54], 1
// 007ad6f8  e863ffffff           call 0x7ad660
// 007ad6fd  8d4c2410             lea ecx, [esp + 0x10]
// 007ad701  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007ad709  e802fcffff           call 0x7ad310
// 007ad70e  5f                   pop edi
// 007ad70f  5e                   pop esi
// 007ad710  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007ad714  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad71b  83c44c               add esp, 0x4c
// 007ad71e  c20400               ret 4
// 007ad721  6a00                 push 0
// 007ad723  40                   inc eax
// 007ad724  50                   push eax
// 007ad725  8bce                 mov ecx, esi
// 007ad727  e884fdffff           call 0x7ad4b0
// 007ad72c  8b4604               mov eax, dword ptr [esi + 4]
// 007ad72f  8b16                 mov edx, dword ptr [esi]
// 007ad731  8d0cc500000000       lea ecx, [eax*8]
// 007ad738  2bc8                 sub ecx, eax
// 007ad73a  57                   push edi
// 007ad73b  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 007ad73f  e8bcf7ffff           call 0x7acf00
// 007ad744  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007ad748  5f                   pop edi
// 007ad749  5e                   pop esi
// 007ad74a  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad751  83c44c               add esp, 0x4c
// 007ad754  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
