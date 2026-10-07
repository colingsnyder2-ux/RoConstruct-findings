// roc 2009-06 004a4df0  unit: G3D::TextureManager::TextureArgs  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4df0
//
// 004a4df0  6aff                 push -1
// 004a4df2  68e1748500           push 0x8574e1
// 004a4df7  64a100000000         mov eax, dword ptr fs:[0]
// 004a4dfd  50                   push eax
// 004a4dfe  64892500000000       mov dword ptr fs:[0], esp
// 004a4e05  83ec3c               sub esp, 0x3c
// 004a4e08  56                   push esi
// 004a4e09  57                   push edi
// 004a4e0a  8bf9                 mov edi, ecx
// 004a4e0c  c744240800000000     mov dword ptr [esp + 8], 0
// 004a4e14  8d4c2410             lea ecx, [esp + 0x10]
// 004a4e18  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 004a4e20  c744240c28a18b00     mov dword ptr [esp + 0xc], 0x8ba128
// 004a4e28  ff15c0e48900         call dword ptr [0x89e4c0]
// 004a4e2e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004a4e32  8944242c             mov dword ptr [esp + 0x2c], eax
// 004a4e36  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004a4e3a  51                   push ecx
// 004a4e3b  8d4c2414             lea ecx, [esp + 0x14]
// 004a4e3f  c744245002000000     mov dword ptr [esp + 0x50], 2
// 004a4e47  ff1564e48900         call dword ptr [0x89e464]
// 004a4e4d  dd44246c             fld qword ptr [esp + 0x6c]
// 004a4e51  8b542460             mov edx, dword ptr [esp + 0x60]
// 004a4e55  dd5c243c             fstp qword ptr [esp + 0x3c]
// 004a4e59  8b442464             mov eax, dword ptr [esp + 0x64]
// 004a4e5d  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004a4e61  8b742454             mov esi, dword ptr [esp + 0x54]
// 004a4e65  89542430             mov dword ptr [esp + 0x30], edx
// 004a4e69  89442434             mov dword ptr [esp + 0x34], eax
// 004a4e6d  894c2438             mov dword ptr [esp + 0x38], ecx
// 004a4e71  c70600000000         mov dword ptr [esi], 0
// 004a4e77  56                   push esi
// 004a4e78  8d542410             lea edx, [esp + 0x10]
// 004a4e7c  52                   push edx
// 004a4e7d  8bcf                 mov ecx, edi
// 004a4e7f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a4e87  e824fdffff           call 0x4a4bb0
// 004a4e8c  c744240c28a18b00     mov dword ptr [esp + 0xc], 0x8ba128
// 004a4e94  8d4c2410             lea ecx, [esp + 0x10]
// 004a4e98  c744244c03000000     mov dword ptr [esp + 0x4c], 3
// 004a4ea0  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a4ea6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004a4eaa  5f                   pop edi
// 004a4eab  8bc6                 mov eax, esi
// 004a4ead  5e                   pop esi
// 004a4eae  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4eb5  83c448               add esp, 0x48
// 004a4eb8  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?findTexture@TextureManager@G3D@@QAE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
