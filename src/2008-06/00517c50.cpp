// from server: 100% by auto
// roc 2008-06 00517c50  unit: G3D::TextInput::WrongSymbol  size: 538 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00517c50
//
// 00517c50  6aff                 push -1
// 00517c52  68ddc77c00           push 0x7cc7dd
// 00517c57  64a100000000         mov eax, dword ptr fs:[0]
// 00517c5d  50                   push eax
// 00517c5e  64892500000000       mov dword ptr fs:[0], esp
// 00517c65  83ec74               sub esp, 0x74
// 00517c68  53                   push ebx
// 00517c69  55                   push ebp
// 00517c6a  56                   push esi
// 00517c6b  57                   push edi
// 00517c6c  8bf1                 mov esi, ecx
// 00517c6e  6a04                 push 4
// 00517c70  89742414             mov dword ptr [esp + 0x14], esi
// 00517c74  e8a78c1800           call 0x6a0920
// 00517c79  33ed                 xor ebp, ebp
// 00517c7b  83c404               add esp, 4
// 00517c7e  3bc5                 cmp eax, ebp
// 00517c80  7404                 je 0x517c86
// 00517c82  8930                 mov dword ptr [eax], esi
// 00517c84  eb02                 jmp 0x517c88
// 00517c86  33c0                 xor eax, eax
// 00517c88  8906                 mov dword ptr [esi], eax
// 00517c8a  896e10               mov dword ptr [esi + 0x10], ebp
// 00517c8d  896e14               mov dword ptr [esi + 0x14], ebp
// 00517c90  896e18               mov dword ptr [esi + 0x18], ebp
// 00517c93  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00517c96  8d5e20               lea ebx, [esi + 0x20]
// 00517c99  89ac248c000000       mov dword ptr [esp + 0x8c], ebp
// 00517ca0  896b04               mov dword ptr [ebx + 4], ebp
// 00517ca3  896b08               mov dword ptr [ebx + 8], ebp
// 00517ca6  892b                 mov dword ptr [ebx], ebp
// 00517ca8  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00517caf  50                   push eax
// 00517cb0  8d4e38               lea ecx, [esi + 0x38]
// 00517cb3  c684249000000001     mov byte ptr [esp + 0x90], 1
// 00517cbb  e850e9ffff           call 0x516610
// 00517cc0  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00517cc3  8bbc2498000000       mov edi, dword ptr [esp + 0x98]
// 00517cca  41                   inc ecx
// 00517ccb  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 00517cd3  896e2c               mov dword ptr [esi + 0x2c], ebp
// 00517cd6  c7463401000000       mov dword ptr [esi + 0x34], 1
// 00517cdd  894e30               mov dword ptr [esi + 0x30], ecx
// 00517ce0  396e54               cmp dword ptr [esi + 0x54], ebp
// 00517ce3  0f8539010000         jne 0x517e22
// 00517ce9  837f140e             cmp dword ptr [edi + 0x14], 0xe
// 00517ced  737f                 jae 0x517d6e
// 00517cef  6888ca8100           push 0x81ca88
// 00517cf4  8d4c2450             lea ecx, [esp + 0x50]
// 00517cf8  ff1558248000         call dword ptr [0x802458]
// 00517cfe  57                   push edi
// 00517cff  50                   push eax
// 00517d00  8d542438             lea edx, [esp + 0x38]
// 00517d04  52                   push edx
// 00517d05  c684249800000003     mov byte ptr [esp + 0x98], 3
// 00517d0d  ff15a8248000         call dword ptr [0x8024a8]
// 00517d13  6888ca8100           push 0x81ca88
// 00517d18  50                   push eax
// 00517d19  8d442428             lea eax, [esp + 0x28]
// 00517d1d  50                   push eax
// 00517d1e  c68424a400000004     mov byte ptr [esp + 0xa4], 4
// 00517d26  ff15e4238000         call dword ptr [0x8023e4]
// 00517d2c  83c418               add esp, 0x18
// 00517d2f  50                   push eax
// 00517d30  8d4e40               lea ecx, [esi + 0x40]
// 00517d33  c684249000000005     mov byte ptr [esp + 0x90], 5
// 00517d3b  ff150c248000         call dword ptr [0x80240c]
// 00517d41  8d4c2414             lea ecx, [esp + 0x14]
// 00517d45  c684248c00000004     mov byte ptr [esp + 0x8c], 4
// 00517d4d  ff1568248000         call dword ptr [0x802468]
// 00517d53  8d4c2430             lea ecx, [esp + 0x30]
// 00517d57  c684248c00000003     mov byte ptr [esp + 0x8c], 3
// 00517d5f  ff1568248000         call dword ptr [0x802468]
// 00517d65  8d4c244c             lea ecx, [esp + 0x4c]
// 00517d69  e9a6000000           jmp 0x517e14
// 00517d6e  6a0a                 push 0xa
// 00517d70  55                   push ebp
// 00517d71  8d4c2470             lea ecx, [esp + 0x70]
// 00517d75  51                   push ecx
// 00517d76  8bcf                 mov ecx, edi
// 00517d78  ff15e0238000         call dword ptr [0x8023e0]
// 00517d7e  8be8                 mov ebp, eax
// 00517d80  6888ca8100           push 0x81ca88
// 00517d85  8d4c2418             lea ecx, [esp + 0x18]
// 00517d89  c684249000000006     mov byte ptr [esp + 0x90], 6
// 00517d91  ff1558248000         call dword ptr [0x802458]
// 00517d97  55                   push ebp
// 00517d98  50                   push eax
// 00517d99  8d542438             lea edx, [esp + 0x38]
// 00517d9d  52                   push edx
// 00517d9e  c684249800000007     mov byte ptr [esp + 0x98], 7
// 00517da6  ff15a8248000         call dword ptr [0x8024a8]
// 00517dac  68388b8200           push 0x828b38
// 00517db1  50                   push eax
// 00517db2  8d442460             lea eax, [esp + 0x60]
// 00517db6  50                   push eax
// 00517db7  c68424a400000008     mov byte ptr [esp + 0xa4], 8
// 00517dbf  ff15e4238000         call dword ptr [0x8023e4]
// 00517dc5  83c418               add esp, 0x18
// 00517dc8  50                   push eax
// 00517dc9  8d4e40               lea ecx, [esi + 0x40]
// 00517dcc  c684249000000009     mov byte ptr [esp + 0x90], 9
// 00517dd4  ff150c248000         call dword ptr [0x80240c]
// 00517dda  8d4c244c             lea ecx, [esp + 0x4c]
// 00517dde  c684248c00000008     mov byte ptr [esp + 0x8c], 8
// 00517de6  ff1568248000         call dword ptr [0x802468]
// 00517dec  8d4c2430             lea ecx, [esp + 0x30]
// 00517df0  c684248c00000007     mov byte ptr [esp + 0x8c], 7
// 00517df8  ff1568248000         call dword ptr [0x802468]
// 00517dfe  8d4c2414             lea ecx, [esp + 0x14]
// 00517e02  c684248c00000006     mov byte ptr [esp + 0x8c], 6
// 00517e0a  ff1568248000         call dword ptr [0x802468]
// 00517e10  8d4c2468             lea ecx, [esp + 0x68]
// 00517e14  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 00517e1c  ff1568248000         call dword ptr [0x802468]
// 00517e22  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00517e25  6a01                 push 1
// 00517e27  51                   push ecx
// 00517e28  8bcb                 mov ecx, ebx
// 00517e2a  e861a8ffff           call 0x512690
// 00517e2f  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00517e33  8b4624               mov eax, dword ptr [esi + 0x24]
// 00517e36  7205                 jb 0x517e3d
// 00517e38  8b7f04               mov edi, dword ptr [edi + 4]
// 00517e3b  eb03                 jmp 0x517e40
// 00517e3d  83c704               add edi, 4
// 00517e40  8b13                 mov edx, dword ptr [ebx]
// 00517e42  50                   push eax
// 00517e43  57                   push edi
// 00517e44  52                   push edx
// 00517e45  e8960bffff           call 0x5089e0
// 00517e4a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00517e51  83c40c               add esp, 0xc
// 00517e54  5f                   pop edi
// 00517e55  8bc6                 mov eax, esi
// 00517e57  5e                   pop esi
// 00517e58  5d                   pop ebp
// 00517e59  5b                   pop ebx
// 00517e5a  64890d00000000       mov dword ptr fs:[0], ecx
// 00517e61  81c480000000         add esp, 0x80
// 00517e67  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TextInput@G3D@@QAE@W4FS@01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVSettings@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
