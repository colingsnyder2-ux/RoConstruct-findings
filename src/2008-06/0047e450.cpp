// from server: 100% by auto
// roc 2008-06 0047e450  unit: G3D::TextureManager::TextureArgs  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047e450
//
// 0047e450  64a100000000         mov eax, dword ptr fs:[0]
// 0047e456  6aff                 push -1
// 0047e458  6838507c00           push 0x7c5038
// 0047e45d  50                   push eax
// 0047e45e  64892500000000       mov dword ptr fs:[0], esp
// 0047e465  83ec44               sub esp, 0x44
// 0047e468  56                   push esi
// 0047e469  8bf1                 mov esi, ecx
// 0047e46b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0047e46e  3b4614               cmp eax, dword ptr [esi + 0x14]
// 0047e471  0f86f7000000         jbe 0x47e56e
// 0047e477  53                   push ebx
// 0047e478  33db                 xor ebx, ebx
// 0047e47a  895c240c             mov dword ptr [esp + 0xc], ebx
// 0047e47e  895c2410             mov dword ptr [esp + 0x10], ebx
// 0047e482  895c2408             mov dword ptr [esp + 8], ebx
// 0047e486  8d4c2408             lea ecx, [esp + 8]
// 0047e48a  51                   push ecx
// 0047e48b  8bce                 mov ecx, esi
// 0047e48d  895c2458             mov dword ptr [esp + 0x58], ebx
// 0047e491  e8bafcffff           call 0x47e150
// 0047e496  8d4c2408             lea ecx, [esp + 8]
// 0047e49a  e801f5ffff           call 0x47d9a0
// 0047e49f  8b5610               mov edx, dword ptr [esi + 0x10]
// 0047e4a2  3b5614               cmp edx, dword ptr [esi + 0x14]
// 0047e4a5  0f86b1000000         jbe 0x47e55c
// 0047e4ab  eb03                 jmp 0x47e4b0
// 0047e4ad  8d4900               lea ecx, [ecx]
// 0047e4b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047e4b4  3bc3                 cmp eax, ebx
// 0047e4b6  0f8ea0000000         jle 0x47e55c
// 0047e4bc  8b542408             mov edx, dword ptr [esp + 8]
// 0047e4c0  8d0cc500000000       lea ecx, [eax*8]
// 0047e4c7  2bc8                 sub ecx, eax
// 0047e4c9  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 0047e4cd  50                   push eax
// 0047e4ce  8bce                 mov ecx, esi
// 0047e4d0  e8dbf0ffff           call 0x47d5b0
// 0047e4d5  8b08                 mov ecx, dword ptr [eax]
// 0047e4d7  e89451ffff           call 0x473670
// 0047e4dc  294610               sub dword ptr [esi + 0x10], eax
// 0047e4df  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047e4e3  8b542408             mov edx, dword ptr [esp + 8]
// 0047e4e7  8d0cc500000000       lea ecx, [eax*8]
// 0047e4ee  2bc8                 sub ecx, eax
// 0047e4f0  837ccae410           cmp dword ptr [edx + ecx*8 - 0x1c], 0x10
// 0047e4f5  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 0047e4f9  7205                 jb 0x47e500
// 0047e4fb  8b4008               mov eax, dword ptr [eax + 8]
// 0047e4fe  eb03                 jmp 0x47e503
// 0047e500  83c008               add eax, 8
// 0047e503  50                   push eax
// 0047e504  689cef8100           push 0x81ef9c
// 0047e509  e802efffff           call 0x47d410
// 0047e50e  83c408               add esp, 8
// 0047e511  53                   push ebx
// 0047e512  8d442418             lea eax, [esp + 0x18]
// 0047e516  50                   push eax
// 0047e517  8d4c2410             lea ecx, [esp + 0x10]
// 0047e51b  e8b0fbffff           call 0x47e0d0
// 0047e520  50                   push eax
// 0047e521  8bce                 mov ecx, esi
// 0047e523  c644245801           mov byte ptr [esp + 0x58], 1
// 0047e528  e8a3fcffff           call 0x47e1d0
// 0047e52d  c744241470978100     mov dword ptr [esp + 0x14], 0x819770
// 0047e535  8d4c2418             lea ecx, [esp + 0x18]
// 0047e539  c644245402           mov byte ptr [esp + 0x54], 2
// 0047e53e  ff1568248000         call dword ptr [0x802468]
// 0047e544  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0047e547  885c2454             mov byte ptr [esp + 0x54], bl
// 0047e54b  c744241450978100     mov dword ptr [esp + 0x14], 0x819750
// 0047e553  3b4e14               cmp ecx, dword ptr [esi + 0x14]
// 0047e556  0f8754ffffff         ja 0x47e4b0
// 0047e55c  8d4c2408             lea ecx, [esp + 8]
// 0047e560  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0047e568  e8b3e73200           call 0x7acd20
// 0047e56d  5b                   pop ebx
// 0047e56e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0047e572  5e                   pop esi
// 0047e573  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e57a  83c450               add esp, 0x50
// 0047e57d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?checkCacheSize@TextureManager@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
