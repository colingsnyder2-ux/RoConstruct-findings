// roc 2009-12 004d19b0  unit: G3D::TextureManager::TextureArgs  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d19b0
//
// 004d19b0  6aff                 push -1
// 004d19b2  68c1339300           push 0x9333c1
// 004d19b7  64a100000000         mov eax, dword ptr fs:[0]
// 004d19bd  50                   push eax
// 004d19be  64892500000000       mov dword ptr fs:[0], esp
// 004d19c5  83ec3c               sub esp, 0x3c
// 004d19c8  56                   push esi
// 004d19c9  57                   push edi
// 004d19ca  8bf9                 mov edi, ecx
// 004d19cc  c744240800000000     mov dword ptr [esp + 8], 0
// 004d19d4  8d4c2410             lea ecx, [esp + 0x10]
// 004d19d8  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 004d19e0  c744240c20e69a00     mov dword ptr [esp + 0xc], 0x9ae620
// 004d19e8  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d19ee  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004d19f2  8944242c             mov dword ptr [esp + 0x2c], eax
// 004d19f6  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004d19fa  51                   push ecx
// 004d19fb  8d4c2414             lea ecx, [esp + 0x14]
// 004d19ff  c744245002000000     mov dword ptr [esp + 0x50], 2
// 004d1a07  ff159cb69800         call dword ptr [0x98b69c]
// 004d1a0d  dd44246c             fld qword ptr [esp + 0x6c]
// 004d1a11  8b542460             mov edx, dword ptr [esp + 0x60]
// 004d1a15  dd5c243c             fstp qword ptr [esp + 0x3c]
// 004d1a19  8b442464             mov eax, dword ptr [esp + 0x64]
// 004d1a1d  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004d1a21  8b742454             mov esi, dword ptr [esp + 0x54]
// 004d1a25  89542430             mov dword ptr [esp + 0x30], edx
// 004d1a29  89442434             mov dword ptr [esp + 0x34], eax
// 004d1a2d  894c2438             mov dword ptr [esp + 0x38], ecx
// 004d1a31  c70600000000         mov dword ptr [esi], 0
// 004d1a37  56                   push esi
// 004d1a38  8d542410             lea edx, [esp + 0x10]
// 004d1a3c  52                   push edx
// 004d1a3d  8bcf                 mov ecx, edi
// 004d1a3f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004d1a47  e824fdffff           call 0x4d1770
// 004d1a4c  c744240c20e69a00     mov dword ptr [esp + 0xc], 0x9ae620
// 004d1a54  8d4c2410             lea ecx, [esp + 0x10]
// 004d1a58  c744244c03000000     mov dword ptr [esp + 0x4c], 3
// 004d1a60  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d1a66  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004d1a6a  5f                   pop edi
// 004d1a6b  8bc6                 mov eax, esi
// 004d1a6d  5e                   pop esi
// 004d1a6e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d1a75  83c448               add esp, 0x48
// 004d1a78  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?findTexture@TextureManager@G3D@@QAE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
