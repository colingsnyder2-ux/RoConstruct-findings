// roc 2008-06 0050ec40  unit: seg_00500000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ec40
//
// 0050ec40  64a100000000         mov eax, dword ptr fs:[0]
// 0050ec46  6aff                 push -1
// 0050ec48  6840c27c00           push 0x7cc240
// 0050ec4d  50                   push eax
// 0050ec4e  64892500000000       mov dword ptr fs:[0], esp
// 0050ec55  81ec34010000         sub esp, 0x134
// 0050ec5b  56                   push esi
// 0050ec5c  8bb42448010000       mov esi, dword ptr [esp + 0x148]
// 0050ec63  57                   push edi
// 0050ec64  8d442408             lea eax, [esp + 8]
// 0050ec68  50                   push eax
// 0050ec69  8bf9                 mov edi, ecx
// 0050ec6b  6a02                 push 2
// 0050ec6d  8bce                 mov ecx, esi
// 0050ec6f  e89c700000           call 0x515d10
// 0050ec74  668b442408           mov ax, word ptr [esp + 8]
// 0050ec79  3c50                 cmp al, 0x50
// 0050ec7b  0f85d1000000         jne 0x50ed52
// 0050ec81  80fc36               cmp ah, 0x36
// 0050ec84  0f85c8000000         jne 0x50ed52
// 0050ec8a  53                   push ebx
// 0050ec8b  55                   push ebp
// 0050ec8c  8bce                 mov ecx, esi
// 0050ec8e  e85de5ffff           call 0x50d1f0
// 0050ec93  8bce                 mov ecx, esi
// 0050ec95  8bd8                 mov ebx, eax
// 0050ec97  e854e5ffff           call 0x50d1f0
// 0050ec9c  8bce                 mov ecx, esi
// 0050ec9e  8be8                 mov ebp, eax
// 0050eca0  e84be5ffff           call 0x50d1f0
// 0050eca5  85db                 test ebx, ebx
// 0050eca7  7c57                 jl 0x50ed00
// 0050eca9  85ed                 test ebp, ebp
// 0050ecab  7c53                 jl 0x50ed00
// 0050ecad  81fba0860100         cmp ebx, 0x186a0
// 0050ecb3  7f4b                 jg 0x50ed00
// 0050ecb5  81fda0860100         cmp ebp, 0x186a0
// 0050ecbb  7f43                 jg 0x50ed00
// 0050ecbd  8bce                 mov ecx, esi
// 0050ecbf  e8bcbdffff           call 0x50aa80
// 0050ecc4  6a03                 push 3
// 0050ecc6  55                   push ebp
// 0050ecc7  53                   push ebx
// 0050ecc8  8bcf                 mov ecx, edi
// 0050ecca  e891f4ffff           call 0x50e160
// 0050eccf  8b470c               mov eax, dword ptr [edi + 0xc]
// 0050ecd2  0faf4708             imul eax, dword ptr [edi + 8]
// 0050ecd6  8b4f04               mov ecx, dword ptr [edi + 4]
// 0050ecd9  51                   push ecx
// 0050ecda  8d1440               lea edx, [eax + eax*2]
// 0050ecdd  52                   push edx
// 0050ecde  8bce                 mov ecx, esi
// 0050ece0  e82b700000           call 0x515d10
// 0050ece5  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 0050ecec  5d                   pop ebp
// 0050eced  5b                   pop ebx
// 0050ecee  5f                   pop edi
// 0050ecef  5e                   pop esi
// 0050ecf0  64890d00000000       mov dword ptr fs:[0], ecx
// 0050ecf7  81c440010000         add esp, 0x140
// 0050ecfd  c20400               ret 4
// 0050ed00  6820828200           push 0x828220
// 0050ed05  8d4c2418             lea ecx, [esp + 0x18]
// 0050ed09  ff1558248000         call dword ptr [0x802458]
// 0050ed0f  8d44244c             lea eax, [esp + 0x4c]
// 0050ed13  50                   push eax
// 0050ed14  8bce                 mov ecx, esi
// 0050ed16  c784245001000002000000 mov dword ptr [esp + 0x150], 2
// 0050ed21  e80abdffff           call 0x50aa30
// 0050ed26  50                   push eax
// 0050ed27  8d4c2418             lea ecx, [esp + 0x18]
// 0050ed2b  51                   push ecx
// 0050ed2c  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0050ed33  c684245401000003     mov byte ptr [esp + 0x154], 3
// 0050ed3b  e8703bf6ff           call 0x4728b0
// 0050ed40  6878c48d00           push 0x8dc478
// 0050ed45  8d942488000000       lea edx, [esp + 0x88]
// 0050ed4c  52                   push edx
// 0050ed4d  e83a281900           call 0x6a158c
// 0050ed52  680c828200           push 0x82820c
// 0050ed57  8d4c242c             lea ecx, [esp + 0x2c]
// 0050ed5b  ff1558248000         call dword ptr [0x802458]
// 0050ed61  8d442460             lea eax, [esp + 0x60]
// 0050ed65  50                   push eax
// 0050ed66  8bce                 mov ecx, esi
// 0050ed68  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 0050ed73  e8b8bcffff           call 0x50aa30
// 0050ed78  50                   push eax
// 0050ed79  8d4c242c             lea ecx, [esp + 0x2c]
// 0050ed7d  51                   push ecx
// 0050ed7e  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 0050ed85  c684244c01000001     mov byte ptr [esp + 0x14c], 1
// 0050ed8d  e81e3bf6ff           call 0x4728b0
// 0050ed92  6878c48d00           push 0x8dc478
// 0050ed97  8d9424e0000000       lea edx, [esp + 0xe0]
// 0050ed9e  52                   push edx
// 0050ed9f  e8e8271900           call 0x6a158c
// library g3d-6.09-rbx2008/G3Dcpp\GImage_ppm.cpp (function ?decodePPM@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_ppm.cpp
