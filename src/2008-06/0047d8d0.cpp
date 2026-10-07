// roc 2008-06 0047d8d0  unit: G3D::TextureManager::TextureArgs  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d8d0
//
// 0047d8d0  6aff                 push -1
// 0047d8d2  68b14e7c00           push 0x7c4eb1
// 0047d8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0047d8dd  50                   push eax
// 0047d8de  64892500000000       mov dword ptr fs:[0], esp
// 0047d8e5  83ec3c               sub esp, 0x3c
// 0047d8e8  56                   push esi
// 0047d8e9  57                   push edi
// 0047d8ea  8bf9                 mov edi, ecx
// 0047d8ec  c744240800000000     mov dword ptr [esp + 8], 0
// 0047d8f4  8d4c2410             lea ecx, [esp + 0x10]
// 0047d8f8  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 0047d900  c744240c70978100     mov dword ptr [esp + 0xc], 0x819770
// 0047d908  ff1560248000         call dword ptr [0x802460]
// 0047d90e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0047d912  8944242c             mov dword ptr [esp + 0x2c], eax
// 0047d916  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0047d91a  51                   push ecx
// 0047d91b  8d4c2414             lea ecx, [esp + 0x14]
// 0047d91f  c744245002000000     mov dword ptr [esp + 0x50], 2
// 0047d927  ff150c248000         call dword ptr [0x80240c]
// 0047d92d  dd44246c             fld qword ptr [esp + 0x6c]
// 0047d931  8b542460             mov edx, dword ptr [esp + 0x60]
// 0047d935  dd5c243c             fstp qword ptr [esp + 0x3c]
// 0047d939  8b442464             mov eax, dword ptr [esp + 0x64]
// 0047d93d  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0047d941  8b742454             mov esi, dword ptr [esp + 0x54]
// 0047d945  89542430             mov dword ptr [esp + 0x30], edx
// 0047d949  89442434             mov dword ptr [esp + 0x34], eax
// 0047d94d  894c2438             mov dword ptr [esp + 0x38], ecx
// 0047d951  c70600000000         mov dword ptr [esi], 0
// 0047d957  56                   push esi
// 0047d958  8d542410             lea edx, [esp + 0x10]
// 0047d95c  52                   push edx
// 0047d95d  8bcf                 mov ecx, edi
// 0047d95f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0047d967  e824fdffff           call 0x47d690
// 0047d96c  c744240c70978100     mov dword ptr [esp + 0xc], 0x819770
// 0047d974  8d4c2410             lea ecx, [esp + 0x10]
// 0047d978  c744244c03000000     mov dword ptr [esp + 0x4c], 3
// 0047d980  ff1568248000         call dword ptr [0x802468]
// 0047d986  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0047d98a  5f                   pop edi
// 0047d98b  8bc6                 mov eax, esi
// 0047d98d  5e                   pop esi
// 0047d98e  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d995  83c448               add esp, 0x48
// 0047d998  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?findTexture@TextureManager@G3D@@QAE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
