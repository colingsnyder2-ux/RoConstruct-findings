// from server: 100% by auto
// roc 2009-06 0056fee0  unit: G3D::Log  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056fee0
//
// 0056fee0  6aff                 push -1
// 0056fee2  68d9b88500           push 0x85b8d9
// 0056fee7  64a100000000         mov eax, dword ptr fs:[0]
// 0056feed  50                   push eax
// 0056feee  64892500000000       mov dword ptr fs:[0], esp
// 0056fef5  83ec1c               sub esp, 0x1c
// 0056fef8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056fefc  56                   push esi
// 0056fefd  50                   push eax
// 0056fefe  8d4c2408             lea ecx, [esp + 8]
// 0056ff02  51                   push ecx
// 0056ff03  e838470000           call 0x574640
// 0056ff08  8b3574e48900         mov esi, dword ptr [0x89e474]
// 0056ff0e  8d54240c             lea edx, [esp + 0xc]
// 0056ff12  68549f8c00           push 0x8c9f54
// 0056ff17  52                   push edx
// 0056ff18  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0056ff20  ffd6                 call esi
// 0056ff22  83c410               add esp, 0x10
// 0056ff25  84c0                 test al, al
// 0056ff27  0f858a010000         jne 0x5700b7
// 0056ff2d  8d442404             lea eax, [esp + 4]
// 0056ff31  681cb58c00           push 0x8cb51c
// 0056ff36  50                   push eax
// 0056ff37  ffd6                 call esi
// 0056ff39  83c408               add esp, 8
// 0056ff3c  84c0                 test al, al
// 0056ff3e  0f8573010000         jne 0x5700b7
// 0056ff44  8d4c2404             lea ecx, [esp + 4]
// 0056ff48  684c9f8c00           push 0x8c9f4c
// 0056ff4d  51                   push ecx
// 0056ff4e  ffd6                 call esi
// 0056ff50  83c408               add esp, 8
// 0056ff53  84c0                 test al, al
// 0056ff55  7427                 je 0x56ff7e
// 0056ff57  8d4c2404             lea ecx, [esp + 4]
// 0056ff5b  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0056ff63  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056ff69  b802000000           mov eax, 2
// 0056ff6e  5e                   pop esi
// 0056ff6f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056ff73  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ff7a  83c428               add esp, 0x28
// 0056ff7d  c3                   ret 
// 0056ff7e  8d542404             lea edx, [esp + 4]
// 0056ff82  68509f8c00           push 0x8c9f50
// 0056ff87  52                   push edx
// 0056ff88  ffd6                 call esi
// 0056ff8a  83c408               add esp, 8
// 0056ff8d  84c0                 test al, al
// 0056ff8f  7427                 je 0x56ffb8
// 0056ff91  8d4c2404             lea ecx, [esp + 4]
// 0056ff95  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0056ff9d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056ffa3  b801000000           mov eax, 1
// 0056ffa8  5e                   pop esi
// 0056ffa9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056ffad  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ffb4  83c428               add esp, 0x28
// 0056ffb7  c3                   ret 
// 0056ffb8  8d442404             lea eax, [esp + 4]
// 0056ffbc  68489f8c00           push 0x8c9f48
// 0056ffc1  50                   push eax
// 0056ffc2  ffd6                 call esi
// 0056ffc4  83c408               add esp, 8
// 0056ffc7  8d4c2404             lea ecx, [esp + 4]
// 0056ffcb  84c0                 test al, al
// 0056ffcd  7423                 je 0x56fff2
// 0056ffcf  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0056ffd7  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056ffdd  b803000000           mov eax, 3
// 0056ffe2  5e                   pop esi
// 0056ffe3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056ffe7  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ffee  83c428               add esp, 0x28
// 0056fff1  c3                   ret 
// 0056fff2  68449f8c00           push 0x8c9f44
// 0056fff7  51                   push ecx
// 0056fff8  ffd6                 call esi
// 0056fffa  83c408               add esp, 8
// 0056fffd  84c0                 test al, al
// 0056ffff  7427                 je 0x570028
// 00570001  8d4c2404             lea ecx, [esp + 4]
// 00570005  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0057000d  ff15c4e48900         call dword ptr [0x89e4c4]
// 00570013  b804000000           mov eax, 4
// 00570018  5e                   pop esi
// 00570019  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057001d  64890d00000000       mov dword ptr fs:[0], ecx
// 00570024  83c428               add esp, 0x28
// 00570027  c3                   ret 
// 00570028  8d542404             lea edx, [esp + 4]
// 0057002c  68f8118b00           push 0x8b11f8
// 00570031  52                   push edx
// 00570032  ffd6                 call esi
// 00570034  83c408               add esp, 8
// 00570037  84c0                 test al, al
// 00570039  7427                 je 0x570062
// 0057003b  8d4c2404             lea ecx, [esp + 4]
// 0057003f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00570047  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057004d  b805000000           mov eax, 5
// 00570052  5e                   pop esi
// 00570053  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00570057  64890d00000000       mov dword ptr fs:[0], ecx
// 0057005e  83c428               add esp, 0x28
// 00570061  c3                   ret 
// 00570062  8d442404             lea eax, [esp + 4]
// 00570066  68409f8c00           push 0x8c9f40
// 0057006b  50                   push eax
// 0057006c  ffd6                 call esi
// 0057006e  83c408               add esp, 8
// 00570071  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00570079  8d4c2404             lea ecx, [esp + 4]
// 0057007d  84c0                 test al, al
// 0057007f  741b                 je 0x57009c
// 00570081  ff15c4e48900         call dword ptr [0x89e4c4]
// 00570087  b807000000           mov eax, 7
// 0057008c  5e                   pop esi
// 0057008d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00570091  64890d00000000       mov dword ptr fs:[0], ecx
// 00570098  83c428               add esp, 0x28
// 0057009b  c3                   ret 
// 0057009c  ff15c4e48900         call dword ptr [0x89e4c4]
// 005700a2  b809000000           mov eax, 9
// 005700a7  5e                   pop esi
// 005700a8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005700ac  64890d00000000       mov dword ptr fs:[0], ecx
// 005700b3  83c428               add esp, 0x28
// 005700b6  c3                   ret 
// 005700b7  8d4c2404             lea ecx, [esp + 4]
// 005700bb  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005700c3  ff15c4e48900         call dword ptr [0x89e4c4]
// 005700c9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005700cd  33c0                 xor eax, eax
// 005700cf  5e                   pop esi
// 005700d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005700d7  83c428               add esp, 0x28
// 005700da  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?stringToFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
