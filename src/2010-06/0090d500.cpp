// from server: 100% by auto
// roc 2010-06 0090d500  unit: G3D::TextureManager::TextureArgs  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090d500
//
// 0090d500  6aff                 push -1
// 0090d502  6878129c00           push 0x9c1278
// 0090d507  64a100000000         mov eax, dword ptr fs:[0]
// 0090d50d  50                   push eax
// 0090d50e  64892500000000       mov dword ptr fs:[0], esp
// 0090d515  83ec38               sub esp, 0x38
// 0090d518  56                   push esi
// 0090d519  8bf1                 mov esi, ecx
// 0090d51b  8d4c2408             lea ecx, [esp + 8]
// 0090d51f  c744244401000000     mov dword ptr [esp + 0x44], 1
// 0090d527  c744240444e8a100     mov dword ptr [esp + 4], 0xa1e844
// 0090d52f  ff1504a49e00         call dword ptr [0x9ea404]
// 0090d535  8b442454             mov eax, dword ptr [esp + 0x54]
// 0090d539  89442424             mov dword ptr [esp + 0x24], eax
// 0090d53d  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0090d541  51                   push ecx
// 0090d542  8d4c240c             lea ecx, [esp + 0xc]
// 0090d546  c644244802           mov byte ptr [esp + 0x48], 2
// 0090d54b  ff1568a49e00         call dword ptr [0x9ea468]
// 0090d551  dd442464             fld qword ptr [esp + 0x64]
// 0090d555  8b542458             mov edx, dword ptr [esp + 0x58]
// 0090d559  dd5c2434             fstp qword ptr [esp + 0x34]
// 0090d55d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0090d561  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0090d565  89542428             mov dword ptr [esp + 0x28], edx
// 0090d569  8d542404             lea edx, [esp + 4]
// 0090d56d  894c2430             mov dword ptr [esp + 0x30], ecx
// 0090d571  52                   push edx
// 0090d572  8bce                 mov ecx, esi
// 0090d574  89442430             mov dword ptr [esp + 0x30], eax
// 0090d578  e833eeffff           call 0x90c3b0
// 0090d57d  8d4c2404             lea ecx, [esp + 4]
// 0090d581  84c0                 test al, al
// 0090d583  7455                 je 0x90d5da
// 0090d585  c644244400           mov byte ptr [esp + 0x44], 0
// 0090d58a  e8a192c1ff           call 0x526830
// 0090d58f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0090d593  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0090d59b  85c0                 test eax, eax
// 0090d59d  7427                 je 0x90d5c6
// 0090d59f  83c004               add eax, 4
// 0090d5a2  50                   push eax
// 0090d5a3  ff157ca39e00         call dword ptr [0x9ea37c]
// 0090d5a9  85c0                 test eax, eax
// 0090d5ab  7519                 jne 0x90d5c6
// 0090d5ad  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0090d5b1  e86a65b7ff           call 0x483b20
// 0090d5b6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0090d5ba  85c9                 test ecx, ecx
// 0090d5bc  7408                 je 0x90d5c6
// 0090d5be  8b01                 mov eax, dword ptr [ecx]
// 0090d5c0  8b10                 mov edx, dword ptr [eax]
// 0090d5c2  6a01                 push 1
// 0090d5c4  ffd2                 call edx
// 0090d5c6  32c0                 xor al, al
// 0090d5c8  5e                   pop esi
// 0090d5c9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0090d5cd  64890d00000000       mov dword ptr fs:[0], ecx
// 0090d5d4  83c444               add esp, 0x44
// 0090d5d7  c22000               ret 0x20
// 0090d5da  8d44244c             lea eax, [esp + 0x4c]
// 0090d5de  50                   push eax
// 0090d5df  51                   push ecx
// 0090d5e0  8bce                 mov ecx, esi
// 0090d5e2  e849f7ffff           call 0x90cd30
// 0090d5e7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0090d5eb  e84072b7ff           call 0x484830
// 0090d5f0  014610               add dword ptr [esi + 0x10], eax
// 0090d5f3  8bce                 mov ecx, esi
// 0090d5f5  e8d6fdffff           call 0x90d3d0
// 0090d5fa  8d4c2404             lea ecx, [esp + 4]
// 0090d5fe  c644244400           mov byte ptr [esp + 0x44], 0
// 0090d603  e82892c1ff           call 0x526830
// 0090d608  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0090d60c  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0090d614  85c0                 test eax, eax
// 0090d616  7427                 je 0x90d63f
// 0090d618  83c004               add eax, 4
// 0090d61b  50                   push eax
// 0090d61c  ff157ca39e00         call dword ptr [0x9ea37c]
// 0090d622  85c0                 test eax, eax
// 0090d624  7519                 jne 0x90d63f
// 0090d626  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0090d62a  e8f164b7ff           call 0x483b20
// 0090d62f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0090d633  85c9                 test ecx, ecx
// 0090d635  7408                 je 0x90d63f
// 0090d637  8b11                 mov edx, dword ptr [ecx]
// 0090d639  8b02                 mov eax, dword ptr [edx]
// 0090d63b  6a01                 push 1
// 0090d63d  ffd0                 call eax
// 0090d63f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0090d643  b001                 mov al, 1
// 0090d645  5e                   pop esi
// 0090d646  64890d00000000       mov dword ptr fs:[0], ecx
// 0090d64d  83c444               add esp, 0x44
// 0090d650  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?cacheTexture@TextureManager@G3D@@QAE_NV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
