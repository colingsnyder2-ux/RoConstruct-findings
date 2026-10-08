// from server: 100% by auto
// roc 2009-06 004a6ee0  unit: G3D::TextureManager::TextureArgs  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a6ee0
//
// 004a6ee0  6aff                 push -1
// 004a6ee2  68d9b88500           push 0x85b8d9
// 004a6ee7  64a100000000         mov eax, dword ptr fs:[0]
// 004a6eed  50                   push eax
// 004a6eee  64892500000000       mov dword ptr fs:[0], esp
// 004a6ef5  83ec1c               sub esp, 0x1c
// 004a6ef8  56                   push esi
// 004a6ef9  e872fcffff           call 0x4a6b70
// 004a6efe  50                   push eax
// 004a6eff  8d4c2408             lea ecx, [esp + 8]
// 004a6f03  ff15b8e48900         call dword ptr [0x89e4b8]
// 004a6f09  8b3574e48900         mov esi, dword ptr [0x89e474]
// 004a6f0f  8d442404             lea eax, [esp + 4]
// 004a6f13  68b00d8c00           push 0x8c0db0
// 004a6f18  50                   push eax
// 004a6f19  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004a6f21  ffd6                 call esi
// 004a6f23  83c408               add esp, 8
// 004a6f26  8d4c2404             lea ecx, [esp + 4]
// 004a6f2a  84c0                 test al, al
// 004a6f2c  7420                 je 0x4a6f4e
// 004a6f2e  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004a6f36  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a6f3c  33c0                 xor eax, eax
// 004a6f3e  5e                   pop esi
// 004a6f3f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a6f43  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6f4a  83c428               add esp, 0x28
// 004a6f4d  c3                   ret 
// 004a6f4e  689c0d8c00           push 0x8c0d9c
// 004a6f53  51                   push ecx
// 004a6f54  ffd6                 call esi
// 004a6f56  83c408               add esp, 8
// 004a6f59  84c0                 test al, al
// 004a6f5b  7427                 je 0x4a6f84
// 004a6f5d  8d4c2404             lea ecx, [esp + 4]
// 004a6f61  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004a6f69  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a6f6f  b801000000           mov eax, 1
// 004a6f74  5e                   pop esi
// 004a6f75  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a6f79  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6f80  83c428               add esp, 0x28
// 004a6f83  c3                   ret 
// 004a6f84  8d542404             lea edx, [esp + 4]
// 004a6f88  68900d8c00           push 0x8c0d90
// 004a6f8d  52                   push edx
// 004a6f8e  ffd6                 call esi
// 004a6f90  83c408               add esp, 8
// 004a6f93  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004a6f9b  8d4c2404             lea ecx, [esp + 4]
// 004a6f9f  84c0                 test al, al
// 004a6fa1  741b                 je 0x4a6fbe
// 004a6fa3  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a6fa9  b802000000           mov eax, 2
// 004a6fae  5e                   pop esi
// 004a6faf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a6fb3  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6fba  83c428               add esp, 0x28
// 004a6fbd  c3                   ret 
// 004a6fbe  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a6fc4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a6fc8  b803000000           mov eax, 3
// 004a6fcd  5e                   pop esi
// 004a6fce  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6fd5  83c428               add esp, 0x28
// 004a6fd8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?computeVendor@GLCaps@G3D@@CA?AW4Vendor@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
