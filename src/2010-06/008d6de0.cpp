// roc 2010-06 008d6de0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d6de0
//
// 008d6de0  55                   push ebp
// 008d6de1  8bec                 mov ebp, esp
// 008d6de3  6aff                 push -1
// 008d6de5  68d0e59b00           push 0x9be5d0
// 008d6dea  64a100000000         mov eax, dword ptr fs:[0]
// 008d6df0  50                   push eax
// 008d6df1  64892500000000       mov dword ptr fs:[0], esp
// 008d6df8  83ec10               sub esp, 0x10
// 008d6dfb  8b5508               mov edx, dword ptr [ebp + 8]
// 008d6dfe  53                   push ebx
// 008d6dff  56                   push esi
// 008d6e00  57                   push edi
// 008d6e01  8965f0               mov dword ptr [ebp - 0x10], esp
// 008d6e04  8bf1                 mov esi, ecx
// 008d6e06  81faffffff1f         cmp edx, 0x1fffffff
// 008d6e0c  7605                 jbe 0x8d6e13
// 008d6e0e  e8ddcfb4ff           call 0x423df0
// 008d6e13  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d6e16  85c9                 test ecx, ecx
// 008d6e18  7504                 jne 0x8d6e1e
// 008d6e1a  33c0                 xor eax, eax
// 008d6e1c  eb08                 jmp 0x8d6e26
// 008d6e1e  8b4614               mov eax, dword ptr [esi + 0x14]
// 008d6e21  2bc1                 sub eax, ecx
// 008d6e23  c1f803               sar eax, 3
// 008d6e26  3bc2                 cmp eax, edx
// 008d6e28  0f839a000000         jae 0x8d6ec8
// 008d6e2e  6a00                 push 0
// 008d6e30  52                   push edx
// 008d6e31  e87a770200           call 0x8fe5b0
// 008d6e36  8945ec               mov dword ptr [ebp - 0x14], eax
// 008d6e39  8b4610               mov eax, dword ptr [esi + 0x10]
// 008d6e3c  83c408               add esp, 8
// 008d6e3f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 008d6e46  8945e4               mov dword ptr [ebp - 0x1c], eax
// 008d6e49  39460c               cmp dword ptr [esi + 0xc], eax
// 008d6e4c  7606                 jbe 0x8d6e54
// 008d6e4e  ff150ca99e00         call dword ptr [0x9ea90c]
// 008d6e54  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 008d6e57  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 008d6e5a  7606                 jbe 0x8d6e62
// 008d6e5c  ff150ca99e00         call dword ptr [0x9ea90c]
// 008d6e62  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008d6e65  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 008d6e68  c645e800             mov byte ptr [ebp - 0x18], 0
// 008d6e6c  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 008d6e6f  50                   push eax
// 008d6e70  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 008d6e73  51                   push ecx
// 008d6e74  8d5e08               lea ebx, [esi + 8]
// 008d6e77  53                   push ebx
// 008d6e78  52                   push edx
// 008d6e79  50                   push eax
// 008d6e7a  57                   push edi
// 008d6e7b  e8708ed3ff           call 0x60fcf0
// 008d6e80  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008d6e83  8b460c               mov eax, dword ptr [esi + 0xc]
// 008d6e86  8bf9                 mov edi, ecx
// 008d6e88  2bf8                 sub edi, eax
// 008d6e8a  83c418               add esp, 0x18
// 008d6e8d  c1ff03               sar edi, 3
// 008d6e90  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 008d6e97  85c0                 test eax, eax
// 008d6e99  7418                 je 0x8d6eb3
// 008d6e9b  8b5508               mov edx, dword ptr [ebp + 8]
// 008d6e9e  52                   push edx
// 008d6e9f  53                   push ebx
// 008d6ea0  51                   push ecx
// 008d6ea1  50                   push eax
// 008d6ea2  e809c7d2ff           call 0x6035b0
// 008d6ea7  8b460c               mov eax, dword ptr [esi + 0xc]
// 008d6eaa  50                   push eax
// 008d6eab  e8ea0aedff           call 0x7a799a
// 008d6eb0  83c414               add esp, 0x14
// 008d6eb3  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 008d6eb6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008d6eb9  8d14c8               lea edx, [eax + ecx*8]
// 008d6ebc  8d0cf8               lea ecx, [eax + edi*8]
// 008d6ebf  895614               mov dword ptr [esi + 0x14], edx
// 008d6ec2  894e10               mov dword ptr [esi + 0x10], ecx
// 008d6ec5  89460c               mov dword ptr [esi + 0xc], eax
// 008d6ec8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 008d6ecb  5f                   pop edi
// 008d6ecc  5e                   pop esi
// 008d6ecd  64890d00000000       mov dword ptr fs:[0], ecx
// 008d6ed4  5b                   pop ebx
// 008d6ed5  8be5                 mov esp, ebp
// 008d6ed7  5d                   pop ebp
// 008d6ed8  c20400               ret 4
// 008d6edb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 008d6ede  52                   push edx
// 008d6edf  e8b60aedff           call 0x7a799a
// 008d6ee4  83c404               add esp, 4
// 008d6ee7  6a00                 push 0
// 008d6ee9  6a00                 push 0
// 008d6eeb  e8c21aedff           call 0x7a89b2
// copied from an identical function in another client (function ?reserve@?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll vector_sp.cpp