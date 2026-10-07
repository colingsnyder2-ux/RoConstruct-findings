// roc 2010-06 0090c840  unit: G3D::TextureManager::TextureArgs  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c840
//
// 0090c840  6aff                 push -1
// 0090c842  68c1109c00           push 0x9c10c1
// 0090c847  64a100000000         mov eax, dword ptr fs:[0]
// 0090c84d  50                   push eax
// 0090c84e  64892500000000       mov dword ptr fs:[0], esp
// 0090c855  83ec3c               sub esp, 0x3c
// 0090c858  56                   push esi
// 0090c859  57                   push edi
// 0090c85a  8bf9                 mov edi, ecx
// 0090c85c  c744240800000000     mov dword ptr [esp + 8], 0
// 0090c864  8d4c2410             lea ecx, [esp + 0x10]
// 0090c868  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 0090c870  c744240c44e8a100     mov dword ptr [esp + 0xc], 0xa1e844
// 0090c878  ff1504a49e00         call dword ptr [0x9ea404]
// 0090c87e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0090c882  8944242c             mov dword ptr [esp + 0x2c], eax
// 0090c886  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0090c88a  51                   push ecx
// 0090c88b  8d4c2414             lea ecx, [esp + 0x14]
// 0090c88f  c744245002000000     mov dword ptr [esp + 0x50], 2
// 0090c897  ff1568a49e00         call dword ptr [0x9ea468]
// 0090c89d  dd44246c             fld qword ptr [esp + 0x6c]
// 0090c8a1  8b542460             mov edx, dword ptr [esp + 0x60]
// 0090c8a5  dd5c243c             fstp qword ptr [esp + 0x3c]
// 0090c8a9  8b442464             mov eax, dword ptr [esp + 0x64]
// 0090c8ad  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0090c8b1  8b742454             mov esi, dword ptr [esp + 0x54]
// 0090c8b5  89542430             mov dword ptr [esp + 0x30], edx
// 0090c8b9  89442434             mov dword ptr [esp + 0x34], eax
// 0090c8bd  894c2438             mov dword ptr [esp + 0x38], ecx
// 0090c8c1  c70600000000         mov dword ptr [esi], 0
// 0090c8c7  56                   push esi
// 0090c8c8  8d542410             lea edx, [esp + 0x10]
// 0090c8cc  52                   push edx
// 0090c8cd  8bcf                 mov ecx, edi
// 0090c8cf  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0090c8d7  e824fdffff           call 0x90c600
// 0090c8dc  c744240c44e8a100     mov dword ptr [esp + 0xc], 0xa1e844
// 0090c8e4  8d4c2410             lea ecx, [esp + 0x10]
// 0090c8e8  c744244c03000000     mov dword ptr [esp + 0x4c], 3
// 0090c8f0  ff1500a49e00         call dword ptr [0x9ea400]
// 0090c8f6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0090c8fa  5f                   pop edi
// 0090c8fb  8bc6                 mov eax, esi
// 0090c8fd  5e                   pop esi
// 0090c8fe  64890d00000000       mov dword ptr fs:[0], ecx
// 0090c905  83c448               add esp, 0x48
// 0090c908  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?findTexture@TextureManager@G3D@@QAE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
