// roc 2008-06 00470bf0  unit: RBX::LDraw2Lua::LuaWriter  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00470bf0
//
// 00470bf0  6aff                 push -1
// 00470bf2  6809e77c00           push 0x7ce709
// 00470bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00470bfd  50                   push eax
// 00470bfe  64892500000000       mov dword ptr fs:[0], esp
// 00470c05  83ec1c               sub esp, 0x1c
// 00470c08  56                   push esi
// 00470c09  e872fcffff           call 0x470880
// 00470c0e  50                   push eax
// 00470c0f  8d4c2408             lea ecx, [esp + 8]
// 00470c13  ff155c248000         call dword ptr [0x80245c]
// 00470c19  8b356c238000         mov esi, dword ptr [0x80236c]
// 00470c1f  8d442404             lea eax, [esp + 4]
// 00470c23  6818cf8100           push 0x81cf18
// 00470c28  50                   push eax
// 00470c29  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00470c31  ffd6                 call esi
// 00470c33  83c408               add esp, 8
// 00470c36  8d4c2404             lea ecx, [esp + 4]
// 00470c3a  84c0                 test al, al
// 00470c3c  7420                 je 0x470c5e
// 00470c3e  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00470c46  ff1568248000         call dword ptr [0x802468]
// 00470c4c  33c0                 xor eax, eax
// 00470c4e  5e                   pop esi
// 00470c4f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00470c53  64890d00000000       mov dword ptr fs:[0], ecx
// 00470c5a  83c428               add esp, 0x28
// 00470c5d  c3                   ret 
// 00470c5e  6804cf8100           push 0x81cf04
// 00470c63  51                   push ecx
// 00470c64  ffd6                 call esi
// 00470c66  83c408               add esp, 8
// 00470c69  84c0                 test al, al
// 00470c6b  7427                 je 0x470c94
// 00470c6d  8d4c2404             lea ecx, [esp + 4]
// 00470c71  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00470c79  ff1568248000         call dword ptr [0x802468]
// 00470c7f  b801000000           mov eax, 1
// 00470c84  5e                   pop esi
// 00470c85  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00470c89  64890d00000000       mov dword ptr fs:[0], ecx
// 00470c90  83c428               add esp, 0x28
// 00470c93  c3                   ret 
// 00470c94  8d542404             lea edx, [esp + 4]
// 00470c98  68f8ce8100           push 0x81cef8
// 00470c9d  52                   push edx
// 00470c9e  ffd6                 call esi
// 00470ca0  83c408               add esp, 8
// 00470ca3  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00470cab  8d4c2404             lea ecx, [esp + 4]
// 00470caf  84c0                 test al, al
// 00470cb1  741b                 je 0x470cce
// 00470cb3  ff1568248000         call dword ptr [0x802468]
// 00470cb9  b802000000           mov eax, 2
// 00470cbe  5e                   pop esi
// 00470cbf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00470cc3  64890d00000000       mov dword ptr fs:[0], ecx
// 00470cca  83c428               add esp, 0x28
// 00470ccd  c3                   ret 
// 00470cce  ff1568248000         call dword ptr [0x802468]
// 00470cd4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00470cd8  b803000000           mov eax, 3
// 00470cdd  5e                   pop esi
// 00470cde  64890d00000000       mov dword ptr fs:[0], ecx
// 00470ce5  83c428               add esp, 0x28
// 00470ce8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?computeVendor@GLCaps@G3D@@CA?AW4Vendor@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
