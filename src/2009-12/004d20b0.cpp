// roc 2009-12 004d20b0  unit: G3D::TextureManager::TextureArgs  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d20b0
//
// 004d20b0  6aff                 push -1
// 004d20b2  68b4349300           push 0x9334b4
// 004d20b7  64a100000000         mov eax, dword ptr fs:[0]
// 004d20bd  50                   push eax
// 004d20be  64892500000000       mov dword ptr fs:[0], esp
// 004d20c5  83ec40               sub esp, 0x40
// 004d20c8  56                   push esi
// 004d20c9  8bf1                 mov esi, ecx
// 004d20cb  8b4604               mov eax, dword ptr [esi + 4]
// 004d20ce  3b4608               cmp eax, dword ptr [esi + 8]
// 004d20d1  89742404             mov dword ptr [esp + 4], esi
// 004d20d5  7d3d                 jge 0x4d2114
// 004d20d7  8b16                 mov edx, dword ptr [esi]
// 004d20d9  8d0cc500000000       lea ecx, [eax*8]
// 004d20e0  2bc8                 sub ecx, eax
// 004d20e2  8d0cca               lea ecx, [edx + ecx*8]
// 004d20e5  894c2408             mov dword ptr [esp + 8], ecx
// 004d20e9  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004d20f1  85c9                 test ecx, ecx
// 004d20f3  740a                 je 0x4d20ff
// 004d20f5  8b442454             mov eax, dword ptr [esp + 0x54]
// 004d20f9  50                   push eax
// 004d20fa  e811f7ffff           call 0x4d1810
// 004d20ff  ff4604               inc dword ptr [esi + 4]
// 004d2102  5e                   pop esi
// 004d2103  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004d2107  64890d00000000       mov dword ptr fs:[0], ecx
// 004d210e  83c44c               add esp, 0x4c
// 004d2111  c20400               ret 4
// 004d2114  8b0e                 mov ecx, dword ptr [esi]
// 004d2116  57                   push edi
// 004d2117  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d211b  3bf9                 cmp edi, ecx
// 004d211d  7252                 jb 0x4d2171
// 004d211f  8d14c500000000       lea edx, [eax*8]
// 004d2126  2bd0                 sub edx, eax
// 004d2128  8d0cd1               lea ecx, [ecx + edx*8]
// 004d212b  3bf9                 cmp edi, ecx
// 004d212d  7342                 jae 0x4d2171
// 004d212f  57                   push edi
// 004d2130  8d4c2414             lea ecx, [esp + 0x14]
// 004d2134  e8d7f6ffff           call 0x4d1810
// 004d2139  8d542410             lea edx, [esp + 0x10]
// 004d213d  52                   push edx
// 004d213e  8bce                 mov ecx, esi
// 004d2140  c744245401000000     mov dword ptr [esp + 0x54], 1
// 004d2148  e863ffffff           call 0x4d20b0
// 004d214d  8d4c2410             lea ecx, [esp + 0x10]
// 004d2151  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004d2159  e852f8f8ff           call 0x4619b0
// 004d215e  5f                   pop edi
// 004d215f  5e                   pop esi
// 004d2160  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004d2164  64890d00000000       mov dword ptr fs:[0], ecx
// 004d216b  83c44c               add esp, 0x4c
// 004d216e  c20400               ret 4
// 004d2171  6a00                 push 0
// 004d2173  40                   inc eax
// 004d2174  50                   push eax
// 004d2175  8bce                 mov ecx, esi
// 004d2177  e884faffff           call 0x4d1c00
// 004d217c  8b4604               mov eax, dword ptr [esi + 4]
// 004d217f  8b16                 mov edx, dword ptr [esi]
// 004d2181  8d0cc500000000       lea ecx, [eax*8]
// 004d2188  2bc8                 sub ecx, eax
// 004d218a  57                   push edi
// 004d218b  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 004d218f  e8ecf6ffff           call 0x4d1880
// 004d2194  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004d2198  5f                   pop edi
// 004d2199  5e                   pop esi
// 004d219a  64890d00000000       mov dword ptr fs:[0], ecx
// 004d21a1  83c44c               add esp, 0x4c
// 004d21a4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
