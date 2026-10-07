// roc 2010-06 00552db0  unit: G3D::Log  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00552db0
//
// 00552db0  6aff                 push -1
// 00552db2  68095b9800           push 0x985b09
// 00552db7  64a100000000         mov eax, dword ptr fs:[0]
// 00552dbd  50                   push eax
// 00552dbe  64892500000000       mov dword ptr fs:[0], esp
// 00552dc5  83ec1c               sub esp, 0x1c
// 00552dc8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00552dcc  56                   push esi
// 00552dcd  50                   push eax
// 00552dce  8d4c2408             lea ecx, [esp + 8]
// 00552dd2  51                   push ecx
// 00552dd3  e868480000           call 0x557640
// 00552dd8  8b3558a49e00         mov esi, dword ptr [0x9ea458]
// 00552dde  8d54240c             lea edx, [esp + 0xc]
// 00552de2  684802a200           push 0xa20248
// 00552de7  52                   push edx
// 00552de8  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00552df0  ffd6                 call esi
// 00552df2  83c410               add esp, 0x10
// 00552df5  84c0                 test al, al
// 00552df7  0f858a010000         jne 0x552f87
// 00552dfd  8d442404             lea eax, [esp + 4]
// 00552e01  684002a200           push 0xa20240
// 00552e06  50                   push eax
// 00552e07  ffd6                 call esi
// 00552e09  83c408               add esp, 8
// 00552e0c  84c0                 test al, al
// 00552e0e  0f8573010000         jne 0x552f87
// 00552e14  8d4c2404             lea ecx, [esp + 4]
// 00552e18  683c02a200           push 0xa2023c
// 00552e1d  51                   push ecx
// 00552e1e  ffd6                 call esi
// 00552e20  83c408               add esp, 8
// 00552e23  84c0                 test al, al
// 00552e25  7427                 je 0x552e4e
// 00552e27  8d4c2404             lea ecx, [esp + 4]
// 00552e2b  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00552e33  ff1500a49e00         call dword ptr [0x9ea400]
// 00552e39  b802000000           mov eax, 2
// 00552e3e  5e                   pop esi
// 00552e3f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552e43  64890d00000000       mov dword ptr fs:[0], ecx
// 00552e4a  83c428               add esp, 0x28
// 00552e4d  c3                   ret 
// 00552e4e  8d542404             lea edx, [esp + 4]
// 00552e52  683802a200           push 0xa20238
// 00552e57  52                   push edx
// 00552e58  ffd6                 call esi
// 00552e5a  83c408               add esp, 8
// 00552e5d  84c0                 test al, al
// 00552e5f  7427                 je 0x552e88
// 00552e61  8d4c2404             lea ecx, [esp + 4]
// 00552e65  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00552e6d  ff1500a49e00         call dword ptr [0x9ea400]
// 00552e73  b801000000           mov eax, 1
// 00552e78  5e                   pop esi
// 00552e79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552e7d  64890d00000000       mov dword ptr fs:[0], ecx
// 00552e84  83c428               add esp, 0x28
// 00552e87  c3                   ret 
// 00552e88  8d442404             lea eax, [esp + 4]
// 00552e8c  683402a200           push 0xa20234
// 00552e91  50                   push eax
// 00552e92  ffd6                 call esi
// 00552e94  83c408               add esp, 8
// 00552e97  8d4c2404             lea ecx, [esp + 4]
// 00552e9b  84c0                 test al, al
// 00552e9d  7423                 je 0x552ec2
// 00552e9f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00552ea7  ff1500a49e00         call dword ptr [0x9ea400]
// 00552ead  b803000000           mov eax, 3
// 00552eb2  5e                   pop esi
// 00552eb3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552eb7  64890d00000000       mov dword ptr fs:[0], ecx
// 00552ebe  83c428               add esp, 0x28
// 00552ec1  c3                   ret 
// 00552ec2  683002a200           push 0xa20230
// 00552ec7  51                   push ecx
// 00552ec8  ffd6                 call esi
// 00552eca  83c408               add esp, 8
// 00552ecd  84c0                 test al, al
// 00552ecf  7427                 je 0x552ef8
// 00552ed1  8d4c2404             lea ecx, [esp + 4]
// 00552ed5  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00552edd  ff1500a49e00         call dword ptr [0x9ea400]
// 00552ee3  b804000000           mov eax, 4
// 00552ee8  5e                   pop esi
// 00552ee9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552eed  64890d00000000       mov dword ptr fs:[0], ecx
// 00552ef4  83c428               add esp, 0x28
// 00552ef7  c3                   ret 
// 00552ef8  8d542404             lea edx, [esp + 4]
// 00552efc  68204ca000           push 0xa04c20
// 00552f01  52                   push edx
// 00552f02  ffd6                 call esi
// 00552f04  83c408               add esp, 8
// 00552f07  84c0                 test al, al
// 00552f09  7427                 je 0x552f32
// 00552f0b  8d4c2404             lea ecx, [esp + 4]
// 00552f0f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00552f17  ff1500a49e00         call dword ptr [0x9ea400]
// 00552f1d  b805000000           mov eax, 5
// 00552f22  5e                   pop esi
// 00552f23  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552f27  64890d00000000       mov dword ptr fs:[0], ecx
// 00552f2e  83c428               add esp, 0x28
// 00552f31  c3                   ret 
// 00552f32  8d442404             lea eax, [esp + 4]
// 00552f36  682c02a200           push 0xa2022c
// 00552f3b  50                   push eax
// 00552f3c  ffd6                 call esi
// 00552f3e  83c408               add esp, 8
// 00552f41  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00552f49  8d4c2404             lea ecx, [esp + 4]
// 00552f4d  84c0                 test al, al
// 00552f4f  741b                 je 0x552f6c
// 00552f51  ff1500a49e00         call dword ptr [0x9ea400]
// 00552f57  b807000000           mov eax, 7
// 00552f5c  5e                   pop esi
// 00552f5d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552f61  64890d00000000       mov dword ptr fs:[0], ecx
// 00552f68  83c428               add esp, 0x28
// 00552f6b  c3                   ret 
// 00552f6c  ff1500a49e00         call dword ptr [0x9ea400]
// 00552f72  b809000000           mov eax, 9
// 00552f77  5e                   pop esi
// 00552f78  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552f7c  64890d00000000       mov dword ptr fs:[0], ecx
// 00552f83  83c428               add esp, 0x28
// 00552f86  c3                   ret 
// 00552f87  8d4c2404             lea ecx, [esp + 4]
// 00552f8b  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00552f93  ff1500a49e00         call dword ptr [0x9ea400]
// 00552f99  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00552f9d  33c0                 xor eax, eax
// 00552f9f  5e                   pop esi
// 00552fa0  64890d00000000       mov dword ptr fs:[0], ecx
// 00552fa7  83c428               add esp, 0x28
// 00552faa  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?stringToFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
