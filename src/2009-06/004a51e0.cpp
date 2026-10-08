// from server: 100% by auto
// roc 2009-06 004a51e0  unit: G3D::TextureManager::TextureArgs  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a51e0
//
// 004a51e0  6aff                 push -1
// 004a51e2  6873758500           push 0x857573
// 004a51e7  64a100000000         mov eax, dword ptr fs:[0]
// 004a51ed  50                   push eax
// 004a51ee  64892500000000       mov dword ptr fs:[0], esp
// 004a51f5  51                   push ecx
// 004a51f6  56                   push esi
// 004a51f7  57                   push edi
// 004a51f8  8bf9                 mov edi, ecx
// 004a51fa  897c2408             mov dword ptr [esp + 8], edi
// 004a51fe  8d7708               lea esi, [edi + 8]
// 004a5201  8bce                 mov ecx, esi
// 004a5203  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004a520b  e850f9ffff           call 0x4a4b60
// 004a5210  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004a5217  8d442420             lea eax, [esp + 0x20]
// 004a521b  50                   push eax
// 004a521c  8d4e04               lea ecx, [esi + 4]
// 004a521f  c644241802           mov byte ptr [esp + 0x18], 2
// 004a5224  ff1564e48900         call dword ptr [0x89e464]
// 004a522a  dd44244c             fld qword ptr [esp + 0x4c]
// 004a522e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004a5232  dd5e30               fstp qword ptr [esi + 0x30]
// 004a5235  8b542440             mov edx, dword ptr [esp + 0x40]
// 004a5239  8b442444             mov eax, dword ptr [esp + 0x44]
// 004a523d  894e20               mov dword ptr [esi + 0x20], ecx
// 004a5240  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004a5244  895624               mov dword ptr [esi + 0x24], edx
// 004a5247  8b542454             mov edx, dword ptr [esp + 0x54]
// 004a524b  894e2c               mov dword ptr [esi + 0x2c], ecx
// 004a524e  8d4f40               lea ecx, [edi + 0x40]
// 004a5251  52                   push edx
// 004a5252  894628               mov dword ptr [esi + 0x28], eax
// 004a5255  e806a6ffff           call 0x49f860
// 004a525a  8b442458             mov eax, dword ptr [esp + 0x58]
// 004a525e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004a5262  8907                 mov dword ptr [edi], eax
// 004a5264  894f48               mov dword ptr [edi + 0x48], ecx
// 004a5267  c744241c28a18b00     mov dword ptr [esp + 0x1c], 0x8ba128
// 004a526f  8d4c2420             lea ecx, [esp + 0x20]
// 004a5273  c644241403           mov byte ptr [esp + 0x14], 3
// 004a5278  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a527e  8b442454             mov eax, dword ptr [esp + 0x54]
// 004a5282  c744241c10a18b00     mov dword ptr [esp + 0x1c], 0x8ba110
// 004a528a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a5292  85c0                 test eax, eax
// 004a5294  7427                 je 0x4a52bd
// 004a5296  83c004               add eax, 4
// 004a5299  50                   push eax
// 004a529a  ff15a4e18900         call dword ptr [0x89e1a4]
// 004a52a0  85c0                 test eax, eax
// 004a52a2  7519                 jne 0x4a52bd
// 004a52a4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004a52a8  e8d3faf9ff           call 0x444d80
// 004a52ad  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004a52b1  85c9                 test ecx, ecx
// 004a52b3  7408                 je 0x4a52bd
// 004a52b5  8b11                 mov edx, dword ptr [ecx]
// 004a52b7  8b02                 mov eax, dword ptr [edx]
// 004a52b9  6a01                 push 1
// 004a52bb  ffd0                 call eax
// 004a52bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a52c1  8bc7                 mov eax, edi
// 004a52c3  5f                   pop edi
// 004a52c4  5e                   pop esi
// 004a52c5  64890d00000000       mov dword ptr fs:[0], ecx
// 004a52cc  83c410               add esp, 0x10
// 004a52cf  c24400               ret 0x44
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Node@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@VTextureArgs@TextureManager@2@V?$ReferenceCountedPointer@VTexture@G3D@@@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
