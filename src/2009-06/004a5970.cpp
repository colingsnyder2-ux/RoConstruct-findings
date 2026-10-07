// roc 2009-06 004a5970  unit: G3D::TextureManager::TextureArgs  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a5970
//
// 004a5970  64a100000000         mov eax, dword ptr fs:[0]
// 004a5976  6aff                 push -1
// 004a5978  6868768500           push 0x857668
// 004a597d  50                   push eax
// 004a597e  64892500000000       mov dword ptr fs:[0], esp
// 004a5985  83ec44               sub esp, 0x44
// 004a5988  56                   push esi
// 004a5989  8bf1                 mov esi, ecx
// 004a598b  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a598e  3b4614               cmp eax, dword ptr [esi + 0x14]
// 004a5991  0f86f7000000         jbe 0x4a5a8e
// 004a5997  53                   push ebx
// 004a5998  33db                 xor ebx, ebx
// 004a599a  895c240c             mov dword ptr [esp + 0xc], ebx
// 004a599e  895c2410             mov dword ptr [esp + 0x10], ebx
// 004a59a2  895c2408             mov dword ptr [esp + 8], ebx
// 004a59a6  8d4c2408             lea ecx, [esp + 8]
// 004a59aa  51                   push ecx
// 004a59ab  8bce                 mov ecx, esi
// 004a59ad  895c2458             mov dword ptr [esp + 0x58], ebx
// 004a59b1  e8bafcffff           call 0x4a5670
// 004a59b6  8d4c2408             lea ecx, [esp + 8]
// 004a59ba  e801f5ffff           call 0x4a4ec0
// 004a59bf  8b5610               mov edx, dword ptr [esi + 0x10]
// 004a59c2  3b5614               cmp edx, dword ptr [esi + 0x14]
// 004a59c5  0f86b1000000         jbe 0x4a5a7c
// 004a59cb  eb03                 jmp 0x4a59d0
// 004a59cd  8d4900               lea ecx, [ecx]
// 004a59d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a59d4  3bc3                 cmp eax, ebx
// 004a59d6  0f8ea0000000         jle 0x4a5a7c
// 004a59dc  8b542408             mov edx, dword ptr [esp + 8]
// 004a59e0  8d0cc500000000       lea ecx, [eax*8]
// 004a59e7  2bc8                 sub ecx, eax
// 004a59e9  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 004a59ed  50                   push eax
// 004a59ee  8bce                 mov ecx, esi
// 004a59f0  e8dbf0ffff           call 0x4a4ad0
// 004a59f5  8b08                 mov ecx, dword ptr [eax]
// 004a59f7  e8b453ffff           call 0x49adb0
// 004a59fc  294610               sub dword ptr [esi + 0x10], eax
// 004a59ff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a5a03  8b542408             mov edx, dword ptr [esp + 8]
// 004a5a07  8d0cc500000000       lea ecx, [eax*8]
// 004a5a0e  2bc8                 sub ecx, eax
// 004a5a10  837ccae410           cmp dword ptr [edx + ecx*8 - 0x1c], 0x10
// 004a5a15  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 004a5a19  7205                 jb 0x4a5a20
// 004a5a1b  8b4008               mov eax, dword ptr [eax + 8]
// 004a5a1e  eb03                 jmp 0x4a5a23
// 004a5a20  83c008               add eax, 8
// 004a5a23  50                   push eax
// 004a5a24  68bc0a8c00           push 0x8c0abc
// 004a5a29  e8b2ef1c00           call 0x6749e0
// 004a5a2e  83c408               add esp, 8
// 004a5a31  53                   push ebx
// 004a5a32  8d442418             lea eax, [esp + 0x18]
// 004a5a36  50                   push eax
// 004a5a37  8d4c2410             lea ecx, [esp + 0x10]
// 004a5a3b  e8b0fbffff           call 0x4a55f0
// 004a5a40  50                   push eax
// 004a5a41  8bce                 mov ecx, esi
// 004a5a43  c644245801           mov byte ptr [esp + 0x58], 1
// 004a5a48  e8a3fcffff           call 0x4a56f0
// 004a5a4d  c744241428a18b00     mov dword ptr [esp + 0x14], 0x8ba128
// 004a5a55  8d4c2418             lea ecx, [esp + 0x18]
// 004a5a59  c644245402           mov byte ptr [esp + 0x54], 2
// 004a5a5e  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a5a64  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004a5a67  885c2454             mov byte ptr [esp + 0x54], bl
// 004a5a6b  c744241410a18b00     mov dword ptr [esp + 0x14], 0x8ba110
// 004a5a73  3b4e14               cmp ecx, dword ptr [esi + 0x14]
// 004a5a76  0f8754ffffff         ja 0x4a59d0
// 004a5a7c  8d4c2408             lea ecx, [esp + 8]
// 004a5a80  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 004a5a88  e873efffff           call 0x4a4a00
// 004a5a8d  5b                   pop ebx
// 004a5a8e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004a5a92  5e                   pop esi
// 004a5a93  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5a9a  83c450               add esp, 0x50
// 004a5a9d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?checkCacheSize@TextureManager@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
