// roc 2010-06 0090d3d0  unit: G3D::TextureManager::TextureArgs  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090d3d0
//
// 0090d3d0  64a100000000         mov eax, dword ptr fs:[0]
// 0090d3d6  6aff                 push -1
// 0090d3d8  6848129c00           push 0x9c1248
// 0090d3dd  50                   push eax
// 0090d3de  64892500000000       mov dword ptr fs:[0], esp
// 0090d3e5  83ec44               sub esp, 0x44
// 0090d3e8  56                   push esi
// 0090d3e9  8bf1                 mov esi, ecx
// 0090d3eb  8b4610               mov eax, dword ptr [esi + 0x10]
// 0090d3ee  3b4614               cmp eax, dword ptr [esi + 0x14]
// 0090d3f1  0f86f7000000         jbe 0x90d4ee
// 0090d3f7  53                   push ebx
// 0090d3f8  33db                 xor ebx, ebx
// 0090d3fa  895c240c             mov dword ptr [esp + 0xc], ebx
// 0090d3fe  895c2410             mov dword ptr [esp + 0x10], ebx
// 0090d402  895c2408             mov dword ptr [esp + 8], ebx
// 0090d406  8d4c2408             lea ecx, [esp + 8]
// 0090d40a  51                   push ecx
// 0090d40b  8bce                 mov ecx, esi
// 0090d40d  895c2458             mov dword ptr [esp + 0x58], ebx
// 0090d411  e8aafcffff           call 0x90d0c0
// 0090d416  8d4c2408             lea ecx, [esp + 8]
// 0090d41a  e8f1f4ffff           call 0x90c910
// 0090d41f  8b5610               mov edx, dword ptr [esi + 0x10]
// 0090d422  3b5614               cmp edx, dword ptr [esi + 0x14]
// 0090d425  0f86b1000000         jbe 0x90d4dc
// 0090d42b  eb03                 jmp 0x90d430
// 0090d42d  8d4900               lea ecx, [ecx]
// 0090d430  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0090d434  3bc3                 cmp eax, ebx
// 0090d436  0f8ea0000000         jle 0x90d4dc
// 0090d43c  8b542408             mov edx, dword ptr [esp + 8]
// 0090d440  8d0cc500000000       lea ecx, [eax*8]
// 0090d447  2bc8                 sub ecx, eax
// 0090d449  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 0090d44d  50                   push eax
// 0090d44e  8bce                 mov ecx, esi
// 0090d450  e8cbf0ffff           call 0x90c520
// 0090d455  8b08                 mov ecx, dword ptr [eax]
// 0090d457  e8d473b7ff           call 0x484830
// 0090d45c  294610               sub dword ptr [esi + 0x10], eax
// 0090d45f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0090d463  8b542408             mov edx, dword ptr [esp + 8]
// 0090d467  8d0cc500000000       lea ecx, [eax*8]
// 0090d46e  2bc8                 sub ecx, eax
// 0090d470  837ccae410           cmp dword ptr [edx + ecx*8 - 0x1c], 0x10
// 0090d475  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 0090d479  7205                 jb 0x90d480
// 0090d47b  8b4008               mov eax, dword ptr [eax + 8]
// 0090d47e  eb03                 jmp 0x90d483
// 0090d480  83c008               add eax, 8
// 0090d483  50                   push eax
// 0090d484  6808b3a800           push 0xa8b308
// 0090d489  e82271b4ff           call 0x4545b0
// 0090d48e  83c408               add esp, 8
// 0090d491  53                   push ebx
// 0090d492  8d442418             lea eax, [esp + 0x18]
// 0090d496  50                   push eax
// 0090d497  8d4c2410             lea ecx, [esp + 0x10]
// 0090d49b  e8a0fbffff           call 0x90d040
// 0090d4a0  50                   push eax
// 0090d4a1  8bce                 mov ecx, esi
// 0090d4a3  c644245801           mov byte ptr [esp + 0x58], 1
// 0090d4a8  e893fcffff           call 0x90d140
// 0090d4ad  c744241444e8a100     mov dword ptr [esp + 0x14], 0xa1e844
// 0090d4b5  8d4c2418             lea ecx, [esp + 0x18]
// 0090d4b9  c644245402           mov byte ptr [esp + 0x54], 2
// 0090d4be  ff1500a49e00         call dword ptr [0x9ea400]
// 0090d4c4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0090d4c7  885c2454             mov byte ptr [esp + 0x54], bl
// 0090d4cb  c74424142ce8a100     mov dword ptr [esp + 0x14], 0xa1e82c
// 0090d4d3  3b4e14               cmp ecx, dword ptr [esi + 0x14]
// 0090d4d6  0f8754ffffff         ja 0x90d430
// 0090d4dc  8d4c2408             lea ecx, [esp + 8]
// 0090d4e0  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0090d4e8  e863efffff           call 0x90c450
// 0090d4ed  5b                   pop ebx
// 0090d4ee  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0090d4f2  5e                   pop esi
// 0090d4f3  64890d00000000       mov dword ptr fs:[0], ecx
// 0090d4fa  83c450               add esp, 0x50
// 0090d4fd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?checkCacheSize@TextureManager@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
