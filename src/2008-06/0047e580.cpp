// roc 2008-06 0047e580  unit: G3D::TextureManager::TextureArgs  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047e580
//
// 0047e580  6aff                 push -1
// 0047e582  6868507c00           push 0x7c5068
// 0047e587  64a100000000         mov eax, dword ptr fs:[0]
// 0047e58d  50                   push eax
// 0047e58e  64892500000000       mov dword ptr fs:[0], esp
// 0047e595  83ec38               sub esp, 0x38
// 0047e598  56                   push esi
// 0047e599  8bf1                 mov esi, ecx
// 0047e59b  8d4c2408             lea ecx, [esp + 8]
// 0047e59f  c744244401000000     mov dword ptr [esp + 0x44], 1
// 0047e5a7  c744240470978100     mov dword ptr [esp + 4], 0x819770
// 0047e5af  ff1560248000         call dword ptr [0x802460]
// 0047e5b5  8b442454             mov eax, dword ptr [esp + 0x54]
// 0047e5b9  89442424             mov dword ptr [esp + 0x24], eax
// 0047e5bd  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0047e5c1  51                   push ecx
// 0047e5c2  8d4c240c             lea ecx, [esp + 0xc]
// 0047e5c6  c644244802           mov byte ptr [esp + 0x48], 2
// 0047e5cb  ff150c248000         call dword ptr [0x80240c]
// 0047e5d1  dd442464             fld qword ptr [esp + 0x64]
// 0047e5d5  8b542458             mov edx, dword ptr [esp + 0x58]
// 0047e5d9  dd5c2434             fstp qword ptr [esp + 0x34]
// 0047e5dd  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0047e5e1  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0047e5e5  89542428             mov dword ptr [esp + 0x28], edx
// 0047e5e9  8d542404             lea edx, [esp + 4]
// 0047e5ed  894c2430             mov dword ptr [esp + 0x30], ecx
// 0047e5f1  52                   push edx
// 0047e5f2  8bce                 mov ecx, esi
// 0047e5f4  89442430             mov dword ptr [esp + 0x30], eax
// 0047e5f8  e893eeffff           call 0x47d490
// 0047e5fd  8d4c2404             lea ecx, [esp + 4]
// 0047e601  84c0                 test al, al
// 0047e603  7455                 je 0x47e65a
// 0047e605  c644244400           mov byte ptr [esp + 0x44], 0
// 0047e60a  e8b1c7fdff           call 0x45adc0
// 0047e60f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0047e613  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0047e61b  85c0                 test eax, eax
// 0047e61d  7427                 je 0x47e646
// 0047e61f  83c004               add eax, 4
// 0047e622  50                   push eax
// 0047e623  ff15ac218000         call dword ptr [0x8021ac]
// 0047e629  85c0                 test eax, eax
// 0047e62b  7519                 jne 0x47e646
// 0047e62d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0047e631  e85ac7fdff           call 0x45ad90
// 0047e636  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0047e63a  85c9                 test ecx, ecx
// 0047e63c  7408                 je 0x47e646
// 0047e63e  8b01                 mov eax, dword ptr [ecx]
// 0047e640  8b10                 mov edx, dword ptr [eax]
// 0047e642  6a01                 push 1
// 0047e644  ffd2                 call edx
// 0047e646  32c0                 xor al, al
// 0047e648  5e                   pop esi
// 0047e649  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0047e64d  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e654  83c444               add esp, 0x44
// 0047e657  c22000               ret 0x20
// 0047e65a  8d44244c             lea eax, [esp + 0x4c]
// 0047e65e  50                   push eax
// 0047e65f  51                   push ecx
// 0047e660  8bce                 mov ecx, esi
// 0047e662  e859f7ffff           call 0x47ddc0
// 0047e667  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0047e66b  e80050ffff           call 0x473670
// 0047e670  014610               add dword ptr [esi + 0x10], eax
// 0047e673  8bce                 mov ecx, esi
// 0047e675  e8d6fdffff           call 0x47e450
// 0047e67a  8d4c2404             lea ecx, [esp + 4]
// 0047e67e  c644244400           mov byte ptr [esp + 0x44], 0
// 0047e683  e838c7fdff           call 0x45adc0
// 0047e688  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0047e68c  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0047e694  85c0                 test eax, eax
// 0047e696  7427                 je 0x47e6bf
// 0047e698  83c004               add eax, 4
// 0047e69b  50                   push eax
// 0047e69c  ff15ac218000         call dword ptr [0x8021ac]
// 0047e6a2  85c0                 test eax, eax
// 0047e6a4  7519                 jne 0x47e6bf
// 0047e6a6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0047e6aa  e8e1c6fdff           call 0x45ad90
// 0047e6af  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0047e6b3  85c9                 test ecx, ecx
// 0047e6b5  7408                 je 0x47e6bf
// 0047e6b7  8b11                 mov edx, dword ptr [ecx]
// 0047e6b9  8b02                 mov eax, dword ptr [edx]
// 0047e6bb  6a01                 push 1
// 0047e6bd  ffd0                 call eax
// 0047e6bf  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0047e6c3  b001                 mov al, 1
// 0047e6c5  5e                   pop esi
// 0047e6c6  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e6cd  83c444               add esp, 0x44
// 0047e6d0  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?cacheTexture@TextureManager@G3D@@QAE_NV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
