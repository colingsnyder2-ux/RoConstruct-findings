// roc 2009-12 005eeeb0  unit: G3D::Log  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eeeb0
//
// 005eeeb0  6aff                 push -1
// 005eeeb2  68a9e59200           push 0x92e5a9
// 005eeeb7  64a100000000         mov eax, dword ptr fs:[0]
// 005eeebd  50                   push eax
// 005eeebe  64892500000000       mov dword ptr fs:[0], esp
// 005eeec5  83ec1c               sub esp, 0x1c
// 005eeec8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005eeecc  56                   push esi
// 005eeecd  50                   push eax
// 005eeece  8d4c2408             lea ecx, [esp + 8]
// 005eeed2  51                   push ecx
// 005eeed3  e838470000           call 0x5f3610
// 005eeed8  8b35acb69800         mov esi, dword ptr [0x98b6ac]
// 005eeede  8d54240c             lea edx, [esp + 0xc]
// 005eeee2  686c079c00           push 0x9c076c
// 005eeee7  52                   push edx
// 005eeee8  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005eeef0  ffd6                 call esi
// 005eeef2  83c410               add esp, 0x10
// 005eeef5  84c0                 test al, al
// 005eeef7  0f858a010000         jne 0x5ef087
// 005eeefd  8d442404             lea eax, [esp + 4]
// 005eef01  68a4239c00           push 0x9c23a4
// 005eef06  50                   push eax
// 005eef07  ffd6                 call esi
// 005eef09  83c408               add esp, 8
// 005eef0c  84c0                 test al, al
// 005eef0e  0f8573010000         jne 0x5ef087
// 005eef14  8d4c2404             lea ecx, [esp + 4]
// 005eef18  6864079c00           push 0x9c0764
// 005eef1d  51                   push ecx
// 005eef1e  ffd6                 call esi
// 005eef20  83c408               add esp, 8
// 005eef23  84c0                 test al, al
// 005eef25  7427                 je 0x5eef4e
// 005eef27  8d4c2404             lea ecx, [esp + 4]
// 005eef2b  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005eef33  ff15e4b69800         call dword ptr [0x98b6e4]
// 005eef39  b802000000           mov eax, 2
// 005eef3e  5e                   pop esi
// 005eef3f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005eef43  64890d00000000       mov dword ptr fs:[0], ecx
// 005eef4a  83c428               add esp, 0x28
// 005eef4d  c3                   ret 
// 005eef4e  8d542404             lea edx, [esp + 4]
// 005eef52  6868079c00           push 0x9c0768
// 005eef57  52                   push edx
// 005eef58  ffd6                 call esi
// 005eef5a  83c408               add esp, 8
// 005eef5d  84c0                 test al, al
// 005eef5f  7427                 je 0x5eef88
// 005eef61  8d4c2404             lea ecx, [esp + 4]
// 005eef65  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005eef6d  ff15e4b69800         call dword ptr [0x98b6e4]
// 005eef73  b801000000           mov eax, 1
// 005eef78  5e                   pop esi
// 005eef79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005eef7d  64890d00000000       mov dword ptr fs:[0], ecx
// 005eef84  83c428               add esp, 0x28
// 005eef87  c3                   ret 
// 005eef88  8d442404             lea eax, [esp + 4]
// 005eef8c  6860079c00           push 0x9c0760
// 005eef91  50                   push eax
// 005eef92  ffd6                 call esi
// 005eef94  83c408               add esp, 8
// 005eef97  8d4c2404             lea ecx, [esp + 4]
// 005eef9b  84c0                 test al, al
// 005eef9d  7423                 je 0x5eefc2
// 005eef9f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005eefa7  ff15e4b69800         call dword ptr [0x98b6e4]
// 005eefad  b803000000           mov eax, 3
// 005eefb2  5e                   pop esi
// 005eefb3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005eefb7  64890d00000000       mov dword ptr fs:[0], ecx
// 005eefbe  83c428               add esp, 0x28
// 005eefc1  c3                   ret 
// 005eefc2  685c079c00           push 0x9c075c
// 005eefc7  51                   push ecx
// 005eefc8  ffd6                 call esi
// 005eefca  83c408               add esp, 8
// 005eefcd  84c0                 test al, al
// 005eefcf  7427                 je 0x5eeff8
// 005eefd1  8d4c2404             lea ecx, [esp + 4]
// 005eefd5  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005eefdd  ff15e4b69800         call dword ptr [0x98b6e4]
// 005eefe3  b804000000           mov eax, 4
// 005eefe8  5e                   pop esi
// 005eefe9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005eefed  64890d00000000       mov dword ptr fs:[0], ecx
// 005eeff4  83c428               add esp, 0x28
// 005eeff7  c3                   ret 
// 005eeff8  8d542404             lea edx, [esp + 4]
// 005eeffc  68d83e9a00           push 0x9a3ed8
// 005ef001  52                   push edx
// 005ef002  ffd6                 call esi
// 005ef004  83c408               add esp, 8
// 005ef007  84c0                 test al, al
// 005ef009  7427                 je 0x5ef032
// 005ef00b  8d4c2404             lea ecx, [esp + 4]
// 005ef00f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005ef017  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ef01d  b805000000           mov eax, 5
// 005ef022  5e                   pop esi
// 005ef023  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ef027  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef02e  83c428               add esp, 0x28
// 005ef031  c3                   ret 
// 005ef032  8d442404             lea eax, [esp + 4]
// 005ef036  6858079c00           push 0x9c0758
// 005ef03b  50                   push eax
// 005ef03c  ffd6                 call esi
// 005ef03e  83c408               add esp, 8
// 005ef041  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005ef049  8d4c2404             lea ecx, [esp + 4]
// 005ef04d  84c0                 test al, al
// 005ef04f  741b                 je 0x5ef06c
// 005ef051  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ef057  b807000000           mov eax, 7
// 005ef05c  5e                   pop esi
// 005ef05d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ef061  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef068  83c428               add esp, 0x28
// 005ef06b  c3                   ret 
// 005ef06c  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ef072  b809000000           mov eax, 9
// 005ef077  5e                   pop esi
// 005ef078  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ef07c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef083  83c428               add esp, 0x28
// 005ef086  c3                   ret 
// 005ef087  8d4c2404             lea ecx, [esp + 4]
// 005ef08b  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005ef093  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ef099  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ef09d  33c0                 xor eax, eax
// 005ef09f  5e                   pop esi
// 005ef0a0  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef0a7  83c428               add esp, 0x28
// 005ef0aa  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?stringToFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
