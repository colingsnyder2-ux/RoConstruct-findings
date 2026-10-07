// roc 2010-06 0090cf40  unit: G3D::TextureManager::TextureArgs  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090cf40
//
// 0090cf40  6aff                 push -1
// 0090cf42  68b4119c00           push 0x9c11b4
// 0090cf47  64a100000000         mov eax, dword ptr fs:[0]
// 0090cf4d  50                   push eax
// 0090cf4e  64892500000000       mov dword ptr fs:[0], esp
// 0090cf55  83ec40               sub esp, 0x40
// 0090cf58  56                   push esi
// 0090cf59  8bf1                 mov esi, ecx
// 0090cf5b  8b4604               mov eax, dword ptr [esi + 4]
// 0090cf5e  3b4608               cmp eax, dword ptr [esi + 8]
// 0090cf61  89742404             mov dword ptr [esp + 4], esi
// 0090cf65  7d3d                 jge 0x90cfa4
// 0090cf67  8b16                 mov edx, dword ptr [esi]
// 0090cf69  8d0cc500000000       lea ecx, [eax*8]
// 0090cf70  2bc8                 sub ecx, eax
// 0090cf72  8d0cca               lea ecx, [edx + ecx*8]
// 0090cf75  894c2408             mov dword ptr [esp + 8], ecx
// 0090cf79  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0090cf81  85c9                 test ecx, ecx
// 0090cf83  740a                 je 0x90cf8f
// 0090cf85  8b442454             mov eax, dword ptr [esp + 0x54]
// 0090cf89  50                   push eax
// 0090cf8a  e811f7ffff           call 0x90c6a0
// 0090cf8f  ff4604               inc dword ptr [esi + 4]
// 0090cf92  5e                   pop esi
// 0090cf93  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0090cf97  64890d00000000       mov dword ptr fs:[0], ecx
// 0090cf9e  83c44c               add esp, 0x4c
// 0090cfa1  c20400               ret 4
// 0090cfa4  8b0e                 mov ecx, dword ptr [esi]
// 0090cfa6  57                   push edi
// 0090cfa7  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0090cfab  3bf9                 cmp edi, ecx
// 0090cfad  7252                 jb 0x90d001
// 0090cfaf  8d14c500000000       lea edx, [eax*8]
// 0090cfb6  2bd0                 sub edx, eax
// 0090cfb8  8d0cd1               lea ecx, [ecx + edx*8]
// 0090cfbb  3bf9                 cmp edi, ecx
// 0090cfbd  7342                 jae 0x90d001
// 0090cfbf  57                   push edi
// 0090cfc0  8d4c2414             lea ecx, [esp + 0x14]
// 0090cfc4  e8d7f6ffff           call 0x90c6a0
// 0090cfc9  8d542410             lea edx, [esp + 0x10]
// 0090cfcd  52                   push edx
// 0090cfce  8bce                 mov ecx, esi
// 0090cfd0  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0090cfd8  e863ffffff           call 0x90cf40
// 0090cfdd  8d4c2410             lea ecx, [esp + 0x10]
// 0090cfe1  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0090cfe9  e84298c1ff           call 0x526830
// 0090cfee  5f                   pop edi
// 0090cfef  5e                   pop esi
// 0090cff0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0090cff4  64890d00000000       mov dword ptr fs:[0], ecx
// 0090cffb  83c44c               add esp, 0x4c
// 0090cffe  c20400               ret 4
// 0090d001  6a00                 push 0
// 0090d003  40                   inc eax
// 0090d004  50                   push eax
// 0090d005  8bce                 mov ecx, esi
// 0090d007  e884faffff           call 0x90ca90
// 0090d00c  8b4604               mov eax, dword ptr [esi + 4]
// 0090d00f  8b16                 mov edx, dword ptr [esi]
// 0090d011  8d0cc500000000       lea ecx, [eax*8]
// 0090d018  2bc8                 sub ecx, eax
// 0090d01a  57                   push edi
// 0090d01b  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 0090d01f  e8ecf6ffff           call 0x90c710
// 0090d024  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0090d028  5f                   pop edi
// 0090d029  5e                   pop esi
// 0090d02a  64890d00000000       mov dword ptr fs:[0], ecx
// 0090d031  83c44c               add esp, 0x4c
// 0090d034  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
