// roc 2009-12 004d9a00  unit: G3D::Win32Window  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9a00
//
// 004d9a00  6aff                 push -1
// 004d9a02  68243e9300           push 0x933e24
// 004d9a07  64a100000000         mov eax, dword ptr fs:[0]
// 004d9a0d  50                   push eax
// 004d9a0e  64892500000000       mov dword ptr fs:[0], esp
// 004d9a15  83ec40               sub esp, 0x40
// 004d9a18  56                   push esi
// 004d9a19  8bf1                 mov esi, ecx
// 004d9a1b  8b4604               mov eax, dword ptr [esi + 4]
// 004d9a1e  3b4608               cmp eax, dword ptr [esi + 8]
// 004d9a21  89742404             mov dword ptr [esp + 4], esi
// 004d9a25  7d3d                 jge 0x4d9a64
// 004d9a27  8b16                 mov edx, dword ptr [esi]
// 004d9a29  8d0cc500000000       lea ecx, [eax*8]
// 004d9a30  2bc8                 sub ecx, eax
// 004d9a32  8d0cca               lea ecx, [edx + ecx*8]
// 004d9a35  894c2408             mov dword ptr [esp + 8], ecx
// 004d9a39  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004d9a41  85c9                 test ecx, ecx
// 004d9a43  740a                 je 0x4d9a4f
// 004d9a45  8b442454             mov eax, dword ptr [esp + 0x54]
// 004d9a49  50                   push eax
// 004d9a4a  e801f3ffff           call 0x4d8d50
// 004d9a4f  ff4604               inc dword ptr [esi + 4]
// 004d9a52  5e                   pop esi
// 004d9a53  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004d9a57  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9a5e  83c44c               add esp, 0x4c
// 004d9a61  c20400               ret 4
// 004d9a64  8b0e                 mov ecx, dword ptr [esi]
// 004d9a66  57                   push edi
// 004d9a67  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d9a6b  3bf9                 cmp edi, ecx
// 004d9a6d  7252                 jb 0x4d9ac1
// 004d9a6f  8d14c500000000       lea edx, [eax*8]
// 004d9a76  2bd0                 sub edx, eax
// 004d9a78  8d0cd1               lea ecx, [ecx + edx*8]
// 004d9a7b  3bf9                 cmp edi, ecx
// 004d9a7d  7342                 jae 0x4d9ac1
// 004d9a7f  57                   push edi
// 004d9a80  8d4c2414             lea ecx, [esp + 0x14]
// 004d9a84  e8c7f2ffff           call 0x4d8d50
// 004d9a89  8d542410             lea edx, [esp + 0x10]
// 004d9a8d  52                   push edx
// 004d9a8e  8bce                 mov ecx, esi
// 004d9a90  c744245401000000     mov dword ptr [esp + 0x54], 1
// 004d9a98  e863ffffff           call 0x4d9a00
// 004d9a9d  8d4c2410             lea ecx, [esp + 0x10]
// 004d9aa1  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004d9aa9  e8a2ccffff           call 0x4d6750
// 004d9aae  5f                   pop edi
// 004d9aaf  5e                   pop esi
// 004d9ab0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004d9ab4  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9abb  83c44c               add esp, 0x4c
// 004d9abe  c20400               ret 4
// 004d9ac1  6a00                 push 0
// 004d9ac3  40                   inc eax
// 004d9ac4  50                   push eax
// 004d9ac5  8bce                 mov ecx, esi
// 004d9ac7  e844fdffff           call 0x4d9810
// 004d9acc  8b4604               mov eax, dword ptr [esi + 4]
// 004d9acf  8b16                 mov edx, dword ptr [esi]
// 004d9ad1  8d0cc500000000       lea ecx, [eax*8]
// 004d9ad8  2bc8                 sub ecx, eax
// 004d9ada  57                   push edi
// 004d9adb  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 004d9adf  e82ce4ffff           call 0x4d7f10
// 004d9ae4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004d9ae8  5f                   pop edi
// 004d9ae9  5e                   pop esi
// 004d9aea  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9af1  83c44c               add esp, 0x4c
// 004d9af4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
