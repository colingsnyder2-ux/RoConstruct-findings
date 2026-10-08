// from server: 100% by auto
// roc 2008-06 00482fd0  unit: G3D::Win32Window  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00482fd0
//
// 00482fd0  6aff                 push -1
// 00482fd2  6894547c00           push 0x7c5494
// 00482fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00482fdd  50                   push eax
// 00482fde  64892500000000       mov dword ptr fs:[0], esp
// 00482fe5  83ec40               sub esp, 0x40
// 00482fe8  56                   push esi
// 00482fe9  8bf1                 mov esi, ecx
// 00482feb  8b4604               mov eax, dword ptr [esi + 4]
// 00482fee  3b4608               cmp eax, dword ptr [esi + 8]
// 00482ff1  89742404             mov dword ptr [esp + 4], esi
// 00482ff5  7d3d                 jge 0x483034
// 00482ff7  8b16                 mov edx, dword ptr [esi]
// 00482ff9  8d0cc500000000       lea ecx, [eax*8]
// 00483000  2bc8                 sub ecx, eax
// 00483002  8d0cca               lea ecx, [edx + ecx*8]
// 00483005  894c2408             mov dword ptr [esp + 8], ecx
// 00483009  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00483011  85c9                 test ecx, ecx
// 00483013  740a                 je 0x48301f
// 00483015  8b442454             mov eax, dword ptr [esp + 0x54]
// 00483019  50                   push eax
// 0048301a  e841f3ffff           call 0x482360
// 0048301f  ff4604               inc dword ptr [esi + 4]
// 00483022  5e                   pop esi
// 00483023  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00483027  64890d00000000       mov dword ptr fs:[0], ecx
// 0048302e  83c44c               add esp, 0x4c
// 00483031  c20400               ret 4
// 00483034  8b0e                 mov ecx, dword ptr [esi]
// 00483036  57                   push edi
// 00483037  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0048303b  3bf9                 cmp edi, ecx
// 0048303d  7252                 jb 0x483091
// 0048303f  8d14c500000000       lea edx, [eax*8]
// 00483046  2bd0                 sub edx, eax
// 00483048  8d0cd1               lea ecx, [ecx + edx*8]
// 0048304b  3bf9                 cmp edi, ecx
// 0048304d  7342                 jae 0x483091
// 0048304f  57                   push edi
// 00483050  8d4c2414             lea ecx, [esp + 0x14]
// 00483054  e807f3ffff           call 0x482360
// 00483059  8d542410             lea edx, [esp + 0x10]
// 0048305d  52                   push edx
// 0048305e  8bce                 mov ecx, esi
// 00483060  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00483068  e863ffffff           call 0x482fd0
// 0048306d  8d4c2410             lea ecx, [esp + 0x10]
// 00483071  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00483079  e802cbffff           call 0x47fb80
// 0048307e  5f                   pop edi
// 0048307f  5e                   pop esi
// 00483080  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00483084  64890d00000000       mov dword ptr fs:[0], ecx
// 0048308b  83c44c               add esp, 0x4c
// 0048308e  c20400               ret 4
// 00483091  6a00                 push 0
// 00483093  40                   inc eax
// 00483094  50                   push eax
// 00483095  8bce                 mov ecx, esi
// 00483097  e864fdffff           call 0x482e00
// 0048309c  8b4604               mov eax, dword ptr [esi + 4]
// 0048309f  8b16                 mov edx, dword ptr [esi]
// 004830a1  8d0cc500000000       lea ecx, [eax*8]
// 004830a8  2bc8                 sub ecx, eax
// 004830aa  57                   push edi
// 004830ab  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 004830af  e87ce4ffff           call 0x481530
// 004830b4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004830b8  5f                   pop edi
// 004830b9  5e                   pop esi
// 004830ba  64890d00000000       mov dword ptr fs:[0], ecx
// 004830c1  83c44c               add esp, 0x4c
// 004830c4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
