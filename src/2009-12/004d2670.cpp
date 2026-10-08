// roc 2009-12 004d2670  unit: G3D::TextureManager::TextureArgs  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d2670
//
// 004d2670  6aff                 push -1
// 004d2672  6878359300           push 0x933578
// 004d2677  64a100000000         mov eax, dword ptr fs:[0]
// 004d267d  50                   push eax
// 004d267e  64892500000000       mov dword ptr fs:[0], esp
// 004d2685  83ec38               sub esp, 0x38
// 004d2688  56                   push esi
// 004d2689  8bf1                 mov esi, ecx
// 004d268b  8d4c2408             lea ecx, [esp + 8]
// 004d268f  c744244401000000     mov dword ptr [esp + 0x44], 1
// 004d2697  c744240420e69a00     mov dword ptr [esp + 4], 0x9ae620
// 004d269f  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d26a5  8b442454             mov eax, dword ptr [esp + 0x54]
// 004d26a9  89442424             mov dword ptr [esp + 0x24], eax
// 004d26ad  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004d26b1  51                   push ecx
// 004d26b2  8d4c240c             lea ecx, [esp + 0xc]
// 004d26b6  c644244802           mov byte ptr [esp + 0x48], 2
// 004d26bb  ff159cb69800         call dword ptr [0x98b69c]
// 004d26c1  dd442464             fld qword ptr [esp + 0x64]
// 004d26c5  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d26c9  dd5c2434             fstp qword ptr [esp + 0x34]
// 004d26cd  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004d26d1  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004d26d5  89542428             mov dword ptr [esp + 0x28], edx
// 004d26d9  8d542404             lea edx, [esp + 4]
// 004d26dd  894c2430             mov dword ptr [esp + 0x30], ecx
// 004d26e1  52                   push edx
// 004d26e2  8bce                 mov ecx, esi
// 004d26e4  89442430             mov dword ptr [esp + 0x30], eax
// 004d26e8  e833eeffff           call 0x4d1520
// 004d26ed  8d4c2404             lea ecx, [esp + 4]
// 004d26f1  84c0                 test al, al
// 004d26f3  7455                 je 0x4d274a
// 004d26f5  c644244400           mov byte ptr [esp + 0x44], 0
// 004d26fa  e8b1f2f8ff           call 0x4619b0
// 004d26ff  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004d2703  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004d270b  85c0                 test eax, eax
// 004d270d  7427                 je 0x4d2736
// 004d270f  83c004               add eax, 4
// 004d2712  50                   push eax
// 004d2713  ff1508b29800         call dword ptr [0x98b208]
// 004d2719  85c0                 test eax, eax
// 004d271b  7519                 jne 0x4d2736
// 004d271d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004d2721  e8fa88f7ff           call 0x44b020
// 004d2726  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004d272a  85c9                 test ecx, ecx
// 004d272c  7408                 je 0x4d2736
// 004d272e  8b01                 mov eax, dword ptr [ecx]
// 004d2730  8b10                 mov edx, dword ptr [eax]
// 004d2732  6a01                 push 1
// 004d2734  ffd2                 call edx
// 004d2736  32c0                 xor al, al
// 004d2738  5e                   pop esi
// 004d2739  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d273d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d2744  83c444               add esp, 0x44
// 004d2747  c22000               ret 0x20
// 004d274a  8d44244c             lea eax, [esp + 0x4c]
// 004d274e  50                   push eax
// 004d274f  51                   push ecx
// 004d2750  8bce                 mov ecx, esi
// 004d2752  e849f7ffff           call 0x4d1ea0
// 004d2757  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004d275b  e8e04effff           call 0x4c7640
// 004d2760  014610               add dword ptr [esi + 0x10], eax
// 004d2763  8bce                 mov ecx, esi
// 004d2765  e8d6fdffff           call 0x4d2540
// 004d276a  8d4c2404             lea ecx, [esp + 4]
// 004d276e  c644244400           mov byte ptr [esp + 0x44], 0
// 004d2773  e838f2f8ff           call 0x4619b0
// 004d2778  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004d277c  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004d2784  85c0                 test eax, eax
// 004d2786  7427                 je 0x4d27af
// 004d2788  83c004               add eax, 4
// 004d278b  50                   push eax
// 004d278c  ff1508b29800         call dword ptr [0x98b208]
// 004d2792  85c0                 test eax, eax
// 004d2794  7519                 jne 0x4d27af
// 004d2796  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004d279a  e88188f7ff           call 0x44b020
// 004d279f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004d27a3  85c9                 test ecx, ecx
// 004d27a5  7408                 je 0x4d27af
// 004d27a7  8b11                 mov edx, dword ptr [ecx]
// 004d27a9  8b02                 mov eax, dword ptr [edx]
// 004d27ab  6a01                 push 1
// 004d27ad  ffd0                 call eax
// 004d27af  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004d27b3  b001                 mov al, 1
// 004d27b5  5e                   pop esi
// 004d27b6  64890d00000000       mov dword ptr fs:[0], ecx
// 004d27bd  83c444               add esp, 0x44
// 004d27c0  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?cacheTexture@TextureManager@G3D@@QAE_NV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
