// roc 2009-12 004d3ab0  unit: G3D::TextureManager::TextureArgs  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d3ab0
//
// 004d3ab0  6aff                 push -1
// 004d3ab2  68a9e59200           push 0x92e5a9
// 004d3ab7  64a100000000         mov eax, dword ptr fs:[0]
// 004d3abd  50                   push eax
// 004d3abe  64892500000000       mov dword ptr fs:[0], esp
// 004d3ac5  83ec1c               sub esp, 0x1c
// 004d3ac8  56                   push esi
// 004d3ac9  e872fcffff           call 0x4d3740
// 004d3ace  50                   push eax
// 004d3acf  8d4c2408             lea ecx, [esp + 8]
// 004d3ad3  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d3ad9  8b35acb69800         mov esi, dword ptr [0x98b6ac]
// 004d3adf  8d442404             lea eax, [esp + 4]
// 004d3ae3  6898669b00           push 0x9b6698
// 004d3ae8  50                   push eax
// 004d3ae9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004d3af1  ffd6                 call esi
// 004d3af3  83c408               add esp, 8
// 004d3af6  8d4c2404             lea ecx, [esp + 4]
// 004d3afa  84c0                 test al, al
// 004d3afc  7420                 je 0x4d3b1e
// 004d3afe  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004d3b06  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3b0c  33c0                 xor eax, eax
// 004d3b0e  5e                   pop esi
// 004d3b0f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d3b13  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3b1a  83c428               add esp, 0x28
// 004d3b1d  c3                   ret 
// 004d3b1e  6884669b00           push 0x9b6684
// 004d3b23  51                   push ecx
// 004d3b24  ffd6                 call esi
// 004d3b26  83c408               add esp, 8
// 004d3b29  84c0                 test al, al
// 004d3b2b  7427                 je 0x4d3b54
// 004d3b2d  8d4c2404             lea ecx, [esp + 4]
// 004d3b31  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004d3b39  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3b3f  b801000000           mov eax, 1
// 004d3b44  5e                   pop esi
// 004d3b45  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d3b49  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3b50  83c428               add esp, 0x28
// 004d3b53  c3                   ret 
// 004d3b54  8d542404             lea edx, [esp + 4]
// 004d3b58  6878669b00           push 0x9b6678
// 004d3b5d  52                   push edx
// 004d3b5e  ffd6                 call esi
// 004d3b60  83c408               add esp, 8
// 004d3b63  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004d3b6b  8d4c2404             lea ecx, [esp + 4]
// 004d3b6f  84c0                 test al, al
// 004d3b71  741b                 je 0x4d3b8e
// 004d3b73  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3b79  b802000000           mov eax, 2
// 004d3b7e  5e                   pop esi
// 004d3b7f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d3b83  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3b8a  83c428               add esp, 0x28
// 004d3b8d  c3                   ret 
// 004d3b8e  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3b94  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d3b98  b803000000           mov eax, 3
// 004d3b9d  5e                   pop esi
// 004d3b9e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3ba5  83c428               add esp, 0x28
// 004d3ba8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?computeVendor@GLCaps@G3D@@CA?AW4Vendor@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
