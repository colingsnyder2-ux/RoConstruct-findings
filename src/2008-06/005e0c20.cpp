// roc 2008-06 005e0c20  unit: RBX::VLighting::?$FactoryProduct  size: 1244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0c20
//
// 005e0c20  6aff                 push -1
// 005e0c22  68cd637d00           push 0x7d63cd
// 005e0c27  64a100000000         mov eax, dword ptr fs:[0]
// 005e0c2d  50                   push eax
// 005e0c2e  64892500000000       mov dword ptr fs:[0], esp
// 005e0c35  81ecc0010000         sub esp, 0x1c0
// 005e0c3b  53                   push ebx
// 005e0c3c  55                   push ebp
// 005e0c3d  33db                 xor ebx, ebx
// 005e0c3f  56                   push esi
// 005e0c40  8bb424e0010000       mov esi, dword ptr [esp + 0x1e0]
// 005e0c47  57                   push edi
// 005e0c48  895c2424             mov dword ptr [esp + 0x24], ebx
// 005e0c4c  895c2420             mov dword ptr [esp + 0x20], ebx
// 005e0c50  895c242c             mov dword ptr [esp + 0x2c], ebx
// 005e0c54  395e14               cmp dword ptr [esi + 0x14], ebx
// 005e0c57  7706                 ja 0x5e0c5f
// 005e0c59  ff153c258000         call dword ptr [0x80253c]
// 005e0c5f  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 005e0c63  7205                 jb 0x5e0c6a
// 005e0c65  8b4604               mov eax, dword ptr [esi + 4]
// 005e0c68  eb03                 jmp 0x5e0c6d
// 005e0c6a  8d4604               lea eax, [esi + 4]
// 005e0c6d  80382d               cmp byte ptr [eax], 0x2d
// 005e0c70  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 005e0c77  0f94442413           sete byte ptr [esp + 0x13]
// 005e0c7c  33ff                 xor edi, edi
// 005e0c7e  33ed                 xor ebp, ebp
// 005e0c80  895c2414             mov dword ptr [esp + 0x14], ebx
// 005e0c84  c64424182d           mov byte ptr [esp + 0x18], 0x2d
// 005e0c89  c64424193a           mov byte ptr [esp + 0x19], 0x3a
// 005e0c8e  c644241a2c           mov byte ptr [esp + 0x1a], 0x2c
// 005e0c93  c644241b2e           mov byte ptr [esp + 0x1b], 0x2e
// 005e0c98  885c241c             mov byte ptr [esp + 0x1c], bl
// 005e0c9c  ff1560248000         call dword ptr [0x802460]
// 005e0ca2  8d442418             lea eax, [esp + 0x18]
// 005e0ca6  50                   push eax
// 005e0ca7  8d8c24c8000000       lea ecx, [esp + 0xc8]
// 005e0cae  899c24dc010000       mov dword ptr [esp + 0x1dc], ebx
// 005e0cb5  ff1558248000         call dword ptr [0x802458]
// 005e0cbb  c68424e000000000     mov byte ptr [esp + 0xe0], 0
// 005e0cc3  c68424e100000000     mov byte ptr [esp + 0xe1], 0
// 005e0ccb  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 005e0cd2  c68424e800000000     mov byte ptr [esp + 0xe8], 0
// 005e0cda  8d8c24ec000000       lea ecx, [esp + 0xec]
// 005e0ce1  51                   push ecx
// 005e0ce2  8bce                 mov ecx, esi
// 005e0ce4  c78424dc01000002000000 mov dword ptr [esp + 0x1dc], 2
// 005e0cef  ff1594248000         call dword ptr [0x802494]
// 005e0cf5  8d9424f4000000       lea edx, [esp + 0xf4]
// 005e0cfc  52                   push edx
// 005e0cfd  8bce                 mov ecx, esi
// 005e0cff  ff1590248000         call dword ptr [0x802490]
// 005e0d05  8d8424a8000000       lea eax, [esp + 0xa8]
// 005e0d0c  50                   push eax
// 005e0d0d  8d8c2400010000       lea ecx, [esp + 0x100]
// 005e0d14  e8b7e9ffff           call 0x5df6d0
// 005e0d19  8d4c2434             lea ecx, [esp + 0x34]
// 005e0d1d  51                   push ecx
// 005e0d1e  8d8c24f0000000       lea ecx, [esp + 0xf0]
// 005e0d25  c68424dc01000003     mov byte ptr [esp + 0x1dc], 3
// 005e0d2d  e8defcffff           call 0x5e0a10
// 005e0d32  c68424d801000004     mov byte ptr [esp + 0x1d8], 4
// 005e0d3a  8d9b00000000         lea ebx, [ebx]
// 005e0d40  8d94245c010000       lea edx, [esp + 0x15c]
// 005e0d47  52                   push edx
// 005e0d48  8d8c24f0000000       lea ecx, [esp + 0xf0]
// 005e0d4f  e88cfdffff           call 0x5e0ae0
// 005e0d54  8a942488000000       mov dl, byte ptr [esp + 0x88]
// 005e0d5b  8bf0                 mov esi, eax
// 005e0d5d  8a4e54               mov cl, byte ptr [esi + 0x54]
// 005e0d60  84c9                 test cl, cl
// 005e0d62  7457                 je 0x5e0dbb
// 005e0d64  84d2                 test dl, dl
// 005e0d66  7453                 je 0x5e0dbb
// 005e0d68  8b4644               mov eax, dword ptr [esi + 0x44]
// 005e0d6b  83f8fc               cmp eax, -4
// 005e0d6e  7410                 je 0x5e0d80
// 005e0d70  3bc3                 cmp eax, ebx
// 005e0d72  7406                 je 0x5e0d7a
// 005e0d74  3b442478             cmp eax, dword ptr [esp + 0x78]
// 005e0d78  7406                 je 0x5e0d80
// 005e0d7a  ff1590288000         call dword ptr [0x802890]
// 005e0d80  8b4648               mov eax, dword ptr [esi + 0x48]
// 005e0d83  3b44247c             cmp eax, dword ptr [esp + 0x7c]
// 005e0d87  752e                 jne 0x5e0db7
// 005e0d89  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005e0d8c  83f8fc               cmp eax, -4
// 005e0d8f  7413                 je 0x5e0da4
// 005e0d91  3bc3                 cmp eax, ebx
// 005e0d93  7409                 je 0x5e0d9e
// 005e0d95  3b842480000000       cmp eax, dword ptr [esp + 0x80]
// 005e0d9c  7406                 je 0x5e0da4
// 005e0d9e  ff1590288000         call dword ptr [0x802890]
// 005e0da4  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 005e0da7  3b8c2484000000       cmp ecx, dword ptr [esp + 0x84]
// 005e0dae  7507                 jne 0x5e0db7
// 005e0db0  b801000000           mov eax, 1
// 005e0db5  eb0b                 jmp 0x5e0dc2
// 005e0db7  33c0                 xor eax, eax
// 005e0db9  eb07                 jmp 0x5e0dc2
// 005e0dbb  33c0                 xor eax, eax
// 005e0dbd  3aca                 cmp cl, dl
// 005e0dbf  0f94c0               sete al
// 005e0dc2  84c0                 test al, al
// 005e0dc4  0f94c3               sete bl
// 005e0dc7  8d8c24b4010000       lea ecx, [esp + 0x1b4]
// 005e0dce  c68424d801000005     mov byte ptr [esp + 0x1d8], 5
// 005e0dd6  ff1568248000         call dword ptr [0x802468]
// 005e0ddc  8d8c2478010000       lea ecx, [esp + 0x178]
// 005e0de3  c68424d801000006     mov byte ptr [esp + 0x1d8], 6
// 005e0deb  ff1568248000         call dword ptr [0x802468]
// 005e0df1  8d8c245c010000       lea ecx, [esp + 0x15c]
// 005e0df8  c68424d801000004     mov byte ptr [esp + 0x1d8], 4
// 005e0e00  ff1568248000         call dword ptr [0x802468]
// 005e0e06  84db                 test bl, bl
// 005e0e08  0f8436010000         je 0x5e0f44
// 005e0e0e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005e0e12  83fb03               cmp ebx, 3
// 005e0e15  0f87ed000000         ja 0x5e0f08
// 005e0e1b  ff249dec105e00       jmp dword ptr [ebx*4 + 0x5e10ec]
// 005e0e22  8d94248c000000       lea edx, [esp + 0x8c]
// 005e0e29  52                   push edx
// 005e0e2a  e8f1d2fdff           call 0x5be120
// 005e0e2f  83c404               add esp, 4
// 005e0e32  8944242c             mov dword ptr [esp + 0x2c], eax
// 005e0e36  e9cd000000           jmp 0x5e0f08
// 005e0e3b  8d84248c000000       lea eax, [esp + 0x8c]
// 005e0e42  50                   push eax
// 005e0e43  e868f3ffff           call 0x5e01b0
// 005e0e48  0fb7c8               movzx ecx, ax
// 005e0e4b  83c404               add esp, 4
// 005e0e4e  894c2424             mov dword ptr [esp + 0x24], ecx
// 005e0e52  e9b1000000           jmp 0x5e0f08
// 005e0e57  8d94248c000000       lea edx, [esp + 0x8c]
// 005e0e5e  52                   push edx
// 005e0e5f  e84cf3ffff           call 0x5e01b0
// 005e0e64  0fb7c0               movzx eax, ax
// 005e0e67  83c404               add esp, 4
// 005e0e6a  89442420             mov dword ptr [esp + 0x20], eax
// 005e0e6e  e995000000           jmp 0x5e0f08
// 005e0e73  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 005e0e7a  83fe06               cmp esi, 6
// 005e0e7d  7c45                 jl 0x5e0ec4
// 005e0e7f  6a06                 push 6
// 005e0e81  6a00                 push 0
// 005e0e83  8d8c2448010000       lea ecx, [esp + 0x148]
// 005e0e8a  51                   push ecx
// 005e0e8b  8d8c2498000000       lea ecx, [esp + 0x98]
// 005e0e92  ff15e0238000         call dword ptr [0x8023e0]
// 005e0e98  50                   push eax
// 005e0e99  c68424dc01000007     mov byte ptr [esp + 0x1dc], 7
// 005e0ea1  e87af1ffff           call 0x5e0020
// 005e0ea6  83c404               add esp, 4
// 005e0ea9  8d8c2440010000       lea ecx, [esp + 0x140]
// 005e0eb0  8bf8                 mov edi, eax
// 005e0eb2  8bea                 mov ebp, edx
// 005e0eb4  c68424d801000004     mov byte ptr [esp + 0x1d8], 4
// 005e0ebc  ff1568248000         call dword ptr [0x802468]
// 005e0ec2  eb14                 jmp 0x5e0ed8
// 005e0ec4  8d94248c000000       lea edx, [esp + 0x8c]
// 005e0ecb  52                   push edx
// 005e0ecc  e84ff1ffff           call 0x5e0020
// 005e0ed1  83c404               add esp, 4
// 005e0ed4  8bf8                 mov edi, eax
// 005e0ed6  8bea                 mov ebp, edx
// 005e0ed8  83fe06               cmp esi, 6
// 005e0edb  7d2b                 jge 0x5e0f08
// 005e0edd  b906000000           mov ecx, 6
// 005e0ee2  2bce                 sub ecx, esi
// 005e0ee4  b801000000           mov eax, 1
// 005e0ee9  85c9                 test ecx, ecx
// 005e0eeb  7e0d                 jle 0x5e0efa
// 005e0eed  8d4900               lea ecx, [ecx]
// 005e0ef0  8d0480               lea eax, [eax + eax*4]
// 005e0ef3  03c0                 add eax, eax
// 005e0ef5  83e901               sub ecx, 1
// 005e0ef8  75f6                 jne 0x5e0ef0
// 005e0efa  55                   push ebp
// 005e0efb  99                   cdq 
// 005e0efc  57                   push edi
// 005e0efd  52                   push edx
// 005e0efe  50                   push eax
// 005e0eff  e8cc070c00           call 0x6a16d0
// 005e0f04  8bf8                 mov edi, eax
// 005e0f06  8bea                 mov ebp, edx
// 005e0f08  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 005e0f0f  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 005e0f16  8d84248c000000       lea eax, [esp + 0x8c]
// 005e0f1d  50                   push eax
// 005e0f1e  51                   push ecx
// 005e0f1f  52                   push edx
// 005e0f20  8d842484000000       lea eax, [esp + 0x84]
// 005e0f27  43                   inc ebx
// 005e0f28  50                   push eax
// 005e0f29  8d4c2444             lea ecx, [esp + 0x44]
// 005e0f2d  895c2424             mov dword ptr [esp + 0x24], ebx
// 005e0f31  e8eaeaffff           call 0x5dfa20
// 005e0f36  88842488000000       mov byte ptr [esp + 0x88], al
// 005e0f3d  33db                 xor ebx, ebx
// 005e0f3f  e9fcfdffff           jmp 0x5e0d40
// 005e0f44  8d8c248c000000       lea ecx, [esp + 0x8c]
// 005e0f4b  c68424d801000008     mov byte ptr [esp + 0x1d8], 8
// 005e0f53  ff1568248000         call dword ptr [0x802468]
// 005e0f59  8d4c2450             lea ecx, [esp + 0x50]
// 005e0f5d  c68424d801000009     mov byte ptr [esp + 0x1d8], 9
// 005e0f65  ff1568248000         call dword ptr [0x802468]
// 005e0f6b  8d4c2434             lea ecx, [esp + 0x34]
// 005e0f6f  c68424d801000003     mov byte ptr [esp + 0x1d8], 3
// 005e0f77  ff1568248000         call dword ptr [0x802468]
// 005e0f7d  0fb74c2420           movzx ecx, word ptr [esp + 0x20]
// 005e0f82  0fb7542424           movzx edx, word ptr [esp + 0x24]
// 005e0f87  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e0f8b  55                   push ebp
// 005e0f8c  57                   push edi
// 005e0f8d  51                   push ecx
// 005e0f8e  52                   push edx
// 005e0f8f  50                   push eax
// 005e0f90  e89bb9f7ff           call 0x55c930
// 005e0f95  83c414               add esp, 0x14
// 005e0f98  807c241300           cmp byte ptr [esp + 0x13], 0
// 005e0f9d  0f84ba000000         je 0x5e105d
// 005e0fa3  83cfff               or edi, 0xffffffff
// 005e0fa6  8944242c             mov dword ptr [esp + 0x2c], eax
// 005e0faa  89542430             mov dword ptr [esp + 0x30], edx
// 005e0fae  897c2414             mov dword ptr [esp + 0x14], edi
// 005e0fb2  85c0                 test eax, eax
// 005e0fb4  7508                 jne 0x5e0fbe
// 005e0fb6  81fa00000080         cmp edx, 0x80000000
// 005e0fbc  7419                 je 0x5e0fd7
// 005e0fbe  3bc7                 cmp eax, edi
// 005e0fc0  7508                 jne 0x5e0fca
// 005e0fc2  81faffffff7f         cmp edx, 0x7fffffff
// 005e0fc8  740d                 je 0x5e0fd7
// 005e0fca  83f8fe               cmp eax, -2
// 005e0fcd  7525                 jne 0x5e0ff4
// 005e0fcf  81faffffff7f         cmp edx, 0x7fffffff
// 005e0fd5  751d                 jne 0x5e0ff4
// 005e0fd7  8d4c2414             lea ecx, [esp + 0x14]
// 005e0fdb  51                   push ecx
// 005e0fdc  8d542428             lea edx, [esp + 0x28]
// 005e0fe0  52                   push edx
// 005e0fe1  8d4c2434             lea ecx, [esp + 0x34]
// 005e0fe5  e8d6f3ffff           call 0x5e03c0
// 005e0fea  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e0fee  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e0ff2  eb07                 jmp 0x5e0ffb
// 005e0ff4  f7d8                 neg eax
// 005e0ff6  83d200               adc edx, 0
// 005e0ff9  f7da                 neg edx
// 005e0ffb  8bb424e0010000       mov esi, dword ptr [esp + 0x1e0]
// 005e1002  8906                 mov dword ptr [esi], eax
// 005e1004  8d8424fc000000       lea eax, [esp + 0xfc]
// 005e100b  895604               mov dword ptr [esi + 4], edx
// 005e100e  89442414             mov dword ptr [esp + 0x14], eax
// 005e1012  8d8c2418010000       lea ecx, [esp + 0x118]
// 005e1019  c68424d80100000a     mov byte ptr [esp + 0x1d8], 0xa
// 005e1021  ff1568248000         call dword ptr [0x802468]
// 005e1027  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 005e102e  c68424d801000002     mov byte ptr [esp + 0x1d8], 2
// 005e1036  ff1568248000         call dword ptr [0x802468]
// 005e103c  8d8c24c4000000       lea ecx, [esp + 0xc4]
// 005e1043  c78424d80100000b000000 mov dword ptr [esp + 0x1d8], 0xb
// 005e104e  ff1568248000         call dword ptr [0x802468]
// 005e1054  89bc24d8010000       mov dword ptr [esp + 0x1d8], edi
// 005e105b  eb64                 jmp 0x5e10c1
// 005e105d  8bb424e0010000       mov esi, dword ptr [esp + 0x1e0]
// 005e1064  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 005e106b  8906                 mov dword ptr [esi], eax
// 005e106d  895604               mov dword ptr [esi + 4], edx
// 005e1070  894c2414             mov dword ptr [esp + 0x14], ecx
// 005e1074  8d8c2418010000       lea ecx, [esp + 0x118]
// 005e107b  c68424d80100000c     mov byte ptr [esp + 0x1d8], 0xc
// 005e1083  ff1568248000         call dword ptr [0x802468]
// 005e1089  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 005e1090  c68424d801000002     mov byte ptr [esp + 0x1d8], 2
// 005e1098  ff1568248000         call dword ptr [0x802468]
// 005e109e  8d8c24c4000000       lea ecx, [esp + 0xc4]
// 005e10a5  c78424d80100000d000000 mov dword ptr [esp + 0x1d8], 0xd
// 005e10b0  ff1568248000         call dword ptr [0x802468]
// 005e10b6  c78424d8010000ffffffff mov dword ptr [esp + 0x1d8], 0xffffffff
// 005e10c1  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 005e10c8  ff1568248000         call dword ptr [0x802468]
// 005e10ce  8b8c24d0010000       mov ecx, dword ptr [esp + 0x1d0]
// 005e10d5  5f                   pop edi
// 005e10d6  8bc6                 mov eax, esi
// 005e10d8  5e                   pop esi
// 005e10d9  5d                   pop ebp
// 005e10da  5b                   pop ebx
// 005e10db  64890d00000000       mov dword ptr fs:[0], ecx
// 005e10e2  81c4cc010000         add esp, 0x1cc
// 005e10e8  c3                   ret 
// 005e10e9  8d4900               lea ecx, [ecx]
// 005e10ec  220e                 and cl, byte ptr [esi]
// 005e10ee  5e                   pop esi
// 005e10ef  003b                 add byte ptr [ebx], bh
// 005e10f1  0e                   push cs
// 005e10f2  5e                   pop esi
// 005e10f3  00570e               add byte ptr [edi + 0xe], dl
// 005e10f6  5e                   pop esi
// 005e10f7  00730e               add byte ptr [ebx + 0xe], dh
// 005e10fa  5e                   pop esi
// library rbxgs-dll/v8datamodel\Lighting.cpp (function ??$str_from_delimited_time_duration@Vtime_duration@posix_time@boost@@D@date_time@boost@@YA?AVtime_duration@posix_time@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll v8datamodel/Lighting.cpp
