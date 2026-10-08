// from server: 100% by auto
// roc 2009-06 004acee0  unit: G3D::Win32Window  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004acee0
//
// 004acee0  6aff                 push -1
// 004acee2  68247f8500           push 0x857f24
// 004acee7  64a100000000         mov eax, dword ptr fs:[0]
// 004aceed  50                   push eax
// 004aceee  64892500000000       mov dword ptr fs:[0], esp
// 004acef5  83ec40               sub esp, 0x40
// 004acef8  56                   push esi
// 004acef9  8bf1                 mov esi, ecx
// 004acefb  8b4604               mov eax, dword ptr [esi + 4]
// 004acefe  3b4608               cmp eax, dword ptr [esi + 8]
// 004acf01  89742404             mov dword ptr [esp + 4], esi
// 004acf05  7d3d                 jge 0x4acf44
// 004acf07  8b16                 mov edx, dword ptr [esi]
// 004acf09  8d0cc500000000       lea ecx, [eax*8]
// 004acf10  2bc8                 sub ecx, eax
// 004acf12  8d0cca               lea ecx, [edx + ecx*8]
// 004acf15  894c2408             mov dword ptr [esp + 8], ecx
// 004acf19  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004acf21  85c9                 test ecx, ecx
// 004acf23  740a                 je 0x4acf2f
// 004acf25  8b442454             mov eax, dword ptr [esp + 0x54]
// 004acf29  50                   push eax
// 004acf2a  e841f3ffff           call 0x4ac270
// 004acf2f  ff4604               inc dword ptr [esi + 4]
// 004acf32  5e                   pop esi
// 004acf33  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004acf37  64890d00000000       mov dword ptr fs:[0], ecx
// 004acf3e  83c44c               add esp, 0x4c
// 004acf41  c20400               ret 4
// 004acf44  8b0e                 mov ecx, dword ptr [esi]
// 004acf46  57                   push edi
// 004acf47  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004acf4b  3bf9                 cmp edi, ecx
// 004acf4d  7252                 jb 0x4acfa1
// 004acf4f  8d14c500000000       lea edx, [eax*8]
// 004acf56  2bd0                 sub edx, eax
// 004acf58  8d0cd1               lea ecx, [ecx + edx*8]
// 004acf5b  3bf9                 cmp edi, ecx
// 004acf5d  7342                 jae 0x4acfa1
// 004acf5f  57                   push edi
// 004acf60  8d4c2414             lea ecx, [esp + 0x14]
// 004acf64  e807f3ffff           call 0x4ac270
// 004acf69  8d542410             lea edx, [esp + 0x10]
// 004acf6d  52                   push edx
// 004acf6e  8bce                 mov ecx, esi
// 004acf70  c744245401000000     mov dword ptr [esp + 0x54], 1
// 004acf78  e863ffffff           call 0x4acee0
// 004acf7d  8d4c2410             lea ecx, [esp + 0x10]
// 004acf81  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004acf89  e892ccffff           call 0x4a9c20
// 004acf8e  5f                   pop edi
// 004acf8f  5e                   pop esi
// 004acf90  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004acf94  64890d00000000       mov dword ptr fs:[0], ecx
// 004acf9b  83c44c               add esp, 0x4c
// 004acf9e  c20400               ret 4
// 004acfa1  6a00                 push 0
// 004acfa3  40                   inc eax
// 004acfa4  50                   push eax
// 004acfa5  8bce                 mov ecx, esi
// 004acfa7  e864fdffff           call 0x4acd10
// 004acfac  8b4604               mov eax, dword ptr [esi + 4]
// 004acfaf  8b16                 mov edx, dword ptr [esi]
// 004acfb1  8d0cc500000000       lea ecx, [eax*8]
// 004acfb8  2bc8                 sub ecx, eax
// 004acfba  57                   push edi
// 004acfbb  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 004acfbf  e87ce4ffff           call 0x4ab440
// 004acfc4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004acfc8  5f                   pop edi
// 004acfc9  5e                   pop esi
// 004acfca  64890d00000000       mov dword ptr fs:[0], ecx
// 004acfd1  83c44c               add esp, 0x4c
// 004acfd4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
