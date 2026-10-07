// roc 2009-06 004a5aa0  unit: G3D::TextureManager::TextureArgs  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a5aa0
//
// 004a5aa0  6aff                 push -1
// 004a5aa2  6898768500           push 0x857698
// 004a5aa7  64a100000000         mov eax, dword ptr fs:[0]
// 004a5aad  50                   push eax
// 004a5aae  64892500000000       mov dword ptr fs:[0], esp
// 004a5ab5  83ec38               sub esp, 0x38
// 004a5ab8  56                   push esi
// 004a5ab9  8bf1                 mov esi, ecx
// 004a5abb  8d4c2408             lea ecx, [esp + 8]
// 004a5abf  c744244401000000     mov dword ptr [esp + 0x44], 1
// 004a5ac7  c744240428a18b00     mov dword ptr [esp + 4], 0x8ba128
// 004a5acf  ff15c0e48900         call dword ptr [0x89e4c0]
// 004a5ad5  8b442454             mov eax, dword ptr [esp + 0x54]
// 004a5ad9  89442424             mov dword ptr [esp + 0x24], eax
// 004a5add  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004a5ae1  51                   push ecx
// 004a5ae2  8d4c240c             lea ecx, [esp + 0xc]
// 004a5ae6  c644244802           mov byte ptr [esp + 0x48], 2
// 004a5aeb  ff1564e48900         call dword ptr [0x89e464]
// 004a5af1  dd442464             fld qword ptr [esp + 0x64]
// 004a5af5  8b542458             mov edx, dword ptr [esp + 0x58]
// 004a5af9  dd5c2434             fstp qword ptr [esp + 0x34]
// 004a5afd  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004a5b01  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004a5b05  89542428             mov dword ptr [esp + 0x28], edx
// 004a5b09  8d542404             lea edx, [esp + 4]
// 004a5b0d  894c2430             mov dword ptr [esp + 0x30], ecx
// 004a5b11  52                   push edx
// 004a5b12  8bce                 mov ecx, esi
// 004a5b14  89442430             mov dword ptr [esp + 0x30], eax
// 004a5b18  e843eeffff           call 0x4a4960
// 004a5b1d  8d4c2404             lea ecx, [esp + 4]
// 004a5b21  84c0                 test al, al
// 004a5b23  7455                 je 0x4a5b7a
// 004a5b25  c644244400           mov byte ptr [esp + 0x44], 0
// 004a5b2a  e8b145fbff           call 0x45a0e0
// 004a5b2f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004a5b33  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004a5b3b  85c0                 test eax, eax
// 004a5b3d  7427                 je 0x4a5b66
// 004a5b3f  83c004               add eax, 4
// 004a5b42  50                   push eax
// 004a5b43  ff15a4e18900         call dword ptr [0x89e1a4]
// 004a5b49  85c0                 test eax, eax
// 004a5b4b  7519                 jne 0x4a5b66
// 004a5b4d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004a5b51  e82af2f9ff           call 0x444d80
// 004a5b56  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004a5b5a  85c9                 test ecx, ecx
// 004a5b5c  7408                 je 0x4a5b66
// 004a5b5e  8b01                 mov eax, dword ptr [ecx]
// 004a5b60  8b10                 mov edx, dword ptr [eax]
// 004a5b62  6a01                 push 1
// 004a5b64  ffd2                 call edx
// 004a5b66  32c0                 xor al, al
// 004a5b68  5e                   pop esi
// 004a5b69  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004a5b6d  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5b74  83c444               add esp, 0x44
// 004a5b77  c22000               ret 0x20
// 004a5b7a  8d44244c             lea eax, [esp + 0x4c]
// 004a5b7e  50                   push eax
// 004a5b7f  51                   push ecx
// 004a5b80  8bce                 mov ecx, esi
// 004a5b82  e859f7ffff           call 0x4a52e0
// 004a5b87  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004a5b8b  e82052ffff           call 0x49adb0
// 004a5b90  014610               add dword ptr [esi + 0x10], eax
// 004a5b93  8bce                 mov ecx, esi
// 004a5b95  e8d6fdffff           call 0x4a5970
// 004a5b9a  8d4c2404             lea ecx, [esp + 4]
// 004a5b9e  c644244400           mov byte ptr [esp + 0x44], 0
// 004a5ba3  e83845fbff           call 0x45a0e0
// 004a5ba8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004a5bac  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004a5bb4  85c0                 test eax, eax
// 004a5bb6  7427                 je 0x4a5bdf
// 004a5bb8  83c004               add eax, 4
// 004a5bbb  50                   push eax
// 004a5bbc  ff15a4e18900         call dword ptr [0x89e1a4]
// 004a5bc2  85c0                 test eax, eax
// 004a5bc4  7519                 jne 0x4a5bdf
// 004a5bc6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004a5bca  e8b1f1f9ff           call 0x444d80
// 004a5bcf  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004a5bd3  85c9                 test ecx, ecx
// 004a5bd5  7408                 je 0x4a5bdf
// 004a5bd7  8b11                 mov edx, dword ptr [ecx]
// 004a5bd9  8b02                 mov eax, dword ptr [edx]
// 004a5bdb  6a01                 push 1
// 004a5bdd  ffd0                 call eax
// 004a5bdf  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004a5be3  b001                 mov al, 1
// 004a5be5  5e                   pop esi
// 004a5be6  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5bed  83c444               add esp, 0x44
// 004a5bf0  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?cacheTexture@TextureManager@G3D@@QAE_NV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
