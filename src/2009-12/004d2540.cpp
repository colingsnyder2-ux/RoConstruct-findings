// roc 2009-12 004d2540  unit: G3D::TextureManager::TextureArgs  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d2540
//
// 004d2540  64a100000000         mov eax, dword ptr fs:[0]
// 004d2546  6aff                 push -1
// 004d2548  6848359300           push 0x933548
// 004d254d  50                   push eax
// 004d254e  64892500000000       mov dword ptr fs:[0], esp
// 004d2555  83ec44               sub esp, 0x44
// 004d2558  56                   push esi
// 004d2559  8bf1                 mov esi, ecx
// 004d255b  8b4610               mov eax, dword ptr [esi + 0x10]
// 004d255e  3b4614               cmp eax, dword ptr [esi + 0x14]
// 004d2561  0f86f7000000         jbe 0x4d265e
// 004d2567  53                   push ebx
// 004d2568  33db                 xor ebx, ebx
// 004d256a  895c240c             mov dword ptr [esp + 0xc], ebx
// 004d256e  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d2572  895c2408             mov dword ptr [esp + 8], ebx
// 004d2576  8d4c2408             lea ecx, [esp + 8]
// 004d257a  51                   push ecx
// 004d257b  8bce                 mov ecx, esi
// 004d257d  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d2581  e8aafcffff           call 0x4d2230
// 004d2586  8d4c2408             lea ecx, [esp + 8]
// 004d258a  e8f1f4ffff           call 0x4d1a80
// 004d258f  8b5610               mov edx, dword ptr [esi + 0x10]
// 004d2592  3b5614               cmp edx, dword ptr [esi + 0x14]
// 004d2595  0f86b1000000         jbe 0x4d264c
// 004d259b  eb03                 jmp 0x4d25a0
// 004d259d  8d4900               lea ecx, [ecx]
// 004d25a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d25a4  3bc3                 cmp eax, ebx
// 004d25a6  0f8ea0000000         jle 0x4d264c
// 004d25ac  8b542408             mov edx, dword ptr [esp + 8]
// 004d25b0  8d0cc500000000       lea ecx, [eax*8]
// 004d25b7  2bc8                 sub ecx, eax
// 004d25b9  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 004d25bd  50                   push eax
// 004d25be  8bce                 mov ecx, esi
// 004d25c0  e8cbf0ffff           call 0x4d1690
// 004d25c5  8b08                 mov ecx, dword ptr [eax]
// 004d25c7  e87450ffff           call 0x4c7640
// 004d25cc  294610               sub dword ptr [esi + 0x10], eax
// 004d25cf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d25d3  8b542408             mov edx, dword ptr [esp + 8]
// 004d25d7  8d0cc500000000       lea ecx, [eax*8]
// 004d25de  2bc8                 sub ecx, eax
// 004d25e0  837ccae410           cmp dword ptr [edx + ecx*8 - 0x1c], 0x10
// 004d25e5  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 004d25e9  7205                 jb 0x4d25f0
// 004d25eb  8b4008               mov eax, dword ptr [eax + 8]
// 004d25ee  eb03                 jmp 0x4d25f3
// 004d25f0  83c008               add eax, 8
// 004d25f3  50                   push eax
// 004d25f4  68a4639b00           push 0x9b63a4
// 004d25f9  e892243800           call 0x854a90
// 004d25fe  83c408               add esp, 8
// 004d2601  53                   push ebx
// 004d2602  8d442418             lea eax, [esp + 0x18]
// 004d2606  50                   push eax
// 004d2607  8d4c2410             lea ecx, [esp + 0x10]
// 004d260b  e8a0fbffff           call 0x4d21b0
// 004d2610  50                   push eax
// 004d2611  8bce                 mov ecx, esi
// 004d2613  c644245801           mov byte ptr [esp + 0x58], 1
// 004d2618  e893fcffff           call 0x4d22b0
// 004d261d  c744241420e69a00     mov dword ptr [esp + 0x14], 0x9ae620
// 004d2625  8d4c2418             lea ecx, [esp + 0x18]
// 004d2629  c644245402           mov byte ptr [esp + 0x54], 2
// 004d262e  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d2634  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004d2637  885c2454             mov byte ptr [esp + 0x54], bl
// 004d263b  c744241408e69a00     mov dword ptr [esp + 0x14], 0x9ae608
// 004d2643  3b4e14               cmp ecx, dword ptr [esi + 0x14]
// 004d2646  0f8754ffffff         ja 0x4d25a0
// 004d264c  8d4c2408             lea ecx, [esp + 8]
// 004d2650  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 004d2658  e863efffff           call 0x4d15c0
// 004d265d  5b                   pop ebx
// 004d265e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004d2662  5e                   pop esi
// 004d2663  64890d00000000       mov dword ptr fs:[0], ecx
// 004d266a  83c450               add esp, 0x50
// 004d266d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?checkCacheSize@TextureManager@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
