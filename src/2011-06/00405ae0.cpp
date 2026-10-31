// roc 2011-06 00405ae0  unit: ATL::CRegObject  size: 938 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00405ae0
//
// 00405ae0  55                   push ebp
// 00405ae1  8bec                 mov ebp, esp
// 00405ae3  6aff                 push -1
// 00405ae5  683ed29c00           push 0x9cd23e
// 00405aea  64a100000000         mov eax, dword ptr fs:[0]
// 00405af0  50                   push eax
// 00405af1  64892500000000       mov dword ptr fs:[0], esp
// 00405af8  51                   push ecx
// 00405af9  b820110000           mov eax, 0x1120
// 00405afe  e84d574000           call 0x80b250
// 00405b03  53                   push ebx
// 00405b04  56                   push esi
// 00405b05  57                   push edi
// 00405b06  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00405b0c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00405b0f  8bf1                 mov esi, ecx
// 00405b11  33ff                 xor edi, edi
// 00405b13  50                   push eax
// 00405b14  8975e4               mov dword ptr [ebp - 0x1c], esi
// 00405b17  897dec               mov dword ptr [ebp - 0x14], edi
// 00405b1a  e871e1ffff           call 0x403c90
// 00405b1f  3bc7                 cmp eax, edi
// 00405b21  0f8c4a030000         jl 0x405e71
// 00405b27  8d4dec               lea ecx, [ebp - 0x14]
// 00405b2a  51                   push ecx
// 00405b2b  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00405b31  52                   push edx
// 00405b32  e899dfffff           call 0x403ad0
// 00405b37  83c408               add esp, 8
// 00405b3a  85c0                 test eax, eax
// 00405b3c  750a                 jne 0x405b48
// 00405b3e  b809000280           mov eax, 0x80020009
// 00405b43  e929030000           jmp 0x405e71
// 00405b48  8bce                 mov ecx, esi
// 00405b4a  e8e1e0ffff           call 0x403c30
// 00405b4f  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00405b55  50                   push eax
// 00405b56  8bce                 mov ecx, esi
// 00405b58  e833e1ffff           call 0x403c90
// 00405b5d  3bc7                 cmp eax, edi
// 00405b5f  0f8c0c030000         jl 0x405e71
// 00405b65  0fb745ec             movzx eax, word ptr [ebp - 0x14]
// 00405b69  83f813               cmp eax, 0x13
// 00405b6c  0f8ff7010000         jg 0x405d69
// 00405b72  0f8440010000         je 0x405cb8
// 00405b78  83f808               cmp eax, 8
// 00405b7b  0f841b010000         je 0x405c9c
// 00405b81  83f811               cmp eax, 0x11
// 00405b84  0f85d2020000         jne 0x405e5c
// 00405b8a  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00405b90  51                   push ecx
// 00405b91  ff156403a400         call dword ptr [0xa40364]
// 00405b97  8bd8                 mov ebx, eax
// 00405b99  895de8               mov dword ptr [ebp - 0x18], ebx
// 00405b9c  f6c301               test bl, 1
// 00405b9f  7560                 jne 0x405c01
// 00405ba1  99                   cdq 
// 00405ba2  2bc2                 sub eax, edx
// 00405ba4  8bf8                 mov edi, eax
// 00405ba6  d1ff                 sar edi, 1
// 00405ba8  897dec               mov dword ptr [ebp - 0x14], edi
// 00405bab  c785d0feffff00000000 mov dword ptr [ebp - 0x130], 0
// 00405bb5  c745fc04000000       mov dword ptr [ebp - 4], 4
// 00405bbc  57                   push edi
// 00405bbd  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405bc3  c645fc05             mov byte ptr [ebp - 4], 5
// 00405bc7  e8d4f9ffff           call 0x4055a0
// 00405bcc  eb14                 jmp 0x405be2
// 00405bce  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 00405bd1  e864474000           call 0x80a33a
// 00405bd6  b8dc5b4000           mov eax, 0x405bdc
// 00405bdb  c3                   ret 
// 00405bdc  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 00405bdf  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 00405be2  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 00405be8  85c0                 test eax, eax
// 00405bea  751f                 jne 0x405c0b
// 00405bec  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00405bf2  85d2                 test edx, edx
// 00405bf4  740b                 je 0x405c01
// 00405bf6  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405bfc  e82fe7ffff           call 0x404330
// 00405c01  b805400080           mov eax, 0x80004005
// 00405c06  e966020000           jmp 0x405e71
// 00405c0b  57                   push edi
// 00405c0c  6a00                 push 0
// 00405c0e  50                   push eax
// 00405c0f  e8d0564000           call 0x80b2e4
// 00405c14  83c40c               add esp, 0xc
// 00405c17  33f6                 xor esi, esi
// 00405c19  85db                 test ebx, ebx
// 00405c1b  7e3f                 jle 0x405c5c
// 00405c1d  8d4900               lea ecx, [ecx]
// 00405c20  0fb69435d0eeffff     movzx edx, byte ptr [ebp + esi - 0x1130]
// 00405c28  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 00405c2e  8bc6                 mov eax, esi
// 00405c30  d1e8                 shr eax, 1
// 00405c32  52                   push edx
// 00405c33  8d3c08               lea edi, [eax + ecx]
// 00405c36  e845dfffff           call 0x403b80
// 00405c3b  8bce                 mov ecx, esi
// 00405c3d  83e101               and ecx, 1
// 00405c40  03c9                 add ecx, ecx
// 00405c42  03c9                 add ecx, ecx
// 00405c44  8bd1                 mov edx, ecx
// 00405c46  b904000000           mov ecx, 4
// 00405c4b  2bca                 sub ecx, edx
// 00405c4d  d2e0                 shl al, cl
// 00405c4f  46                   inc esi
// 00405c50  83c404               add esp, 4
// 00405c53  0807                 or byte ptr [edi], al
// 00405c55  3bf3                 cmp esi, ebx
// 00405c57  7cc7                 jl 0x405c20
// 00405c59  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 00405c5c  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 00405c62  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00405c65  8b4508               mov eax, dword ptr [ebp + 8]
// 00405c68  8b00                 mov eax, dword ptr [eax]
// 00405c6a  57                   push edi
// 00405c6b  51                   push ecx
// 00405c6c  6a03                 push 3
// 00405c6e  6a00                 push 0
// 00405c70  52                   push edx
// 00405c71  50                   push eax
// 00405c72  ff154400a400         call dword ptr [0xa40044]
// 00405c78  8bf0                 mov esi, eax
// 00405c7a  8d85d4feffff         lea eax, [ebp - 0x12c]
// 00405c80  3985d0feffff         cmp dword ptr [ebp - 0x130], eax
// 00405c86  0f84bc010000         je 0x405e48
// 00405c8c  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405c92  e899e6ffff           call 0x404330
// 00405c97  e9ac010000           jmp 0x405e48
// 00405c9c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00405c9f  6a01                 push 1
// 00405ca1  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00405ca7  51                   push ecx
// 00405ca8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405cab  52                   push edx
// 00405cac  e87fdcffff           call 0x403930
// 00405cb1  8bf0                 mov esi, eax
// 00405cb3  e990010000           jmp 0x405e48
// 00405cb8  897dec               mov dword ptr [ebp - 0x14], edi
// 00405cbb  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00405cc1  50                   push eax
// 00405cc2  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00405cc9  ff156403a400         call dword ptr [0xa40364]
// 00405ccf  40                   inc eax
// 00405cd0  6a02                 push 2
// 00405cd2  50                   push eax
// 00405cd3  8d4de8               lea ecx, [ebp - 0x18]
// 00405cd6  51                   push ecx
// 00405cd7  8945e8               mov dword ptr [ebp - 0x18], eax
// 00405cda  e8c1d7ffff           call 0x4034a0
// 00405cdf  83c40c               add esp, 0xc
// 00405ce2  85c0                 test eax, eax
// 00405ce4  7c45                 jl 0x405d2b
// 00405ce6  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 00405ce9  81fe00040000         cmp esi, 0x400
// 00405cef  7f1b                 jg 0x405d0c
// 00405cf1  56                   push esi
// 00405cf2  e829e9ffff           call 0x404620
// 00405cf7  83c404               add esp, 4
// 00405cfa  84c0                 test al, al
// 00405cfc  740e                 je 0x405d0c
// 00405cfe  8bc6                 mov eax, esi
// 00405d00  e87b554000           call 0x80b280
// 00405d05  8965f0               mov dword ptr [ebp - 0x10], esp
// 00405d08  8bc4                 mov eax, esp
// 00405d0a  eb09                 jmp 0x405d15
// 00405d0c  56                   push esi
// 00405d0d  8d4dec               lea ecx, [ebp - 0x14]
// 00405d10  e8bbeeffff           call 0x404bd0
// 00405d15  6a03                 push 3
// 00405d17  d1ee                 shr esi, 1
// 00405d19  56                   push esi
// 00405d1a  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00405d20  52                   push edx
// 00405d21  50                   push eax
// 00405d22  e8c9d7ffff           call 0x4034f0
// 00405d27  3bc7                 cmp eax, edi
// 00405d29  7512                 jne 0x405d3d
// 00405d2b  8d4dec               lea ecx, [ebp - 0x14]
// 00405d2e  e88de5ffff           call 0x4042c0
// 00405d33  b80e000780           mov eax, 0x8007000e
// 00405d38  e934010000           jmp 0x405e71
// 00405d3d  8d4de0               lea ecx, [ebp - 0x20]
// 00405d40  51                   push ecx
// 00405d41  57                   push edi
// 00405d42  57                   push edi
// 00405d43  50                   push eax
// 00405d44  ff15f00aa400         call dword ptr [0xa40af0]
// 00405d4a  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00405d4d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00405d50  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405d53  52                   push edx
// 00405d54  50                   push eax
// 00405d55  e8b6dbffff           call 0x403910
// 00405d5a  8d4dec               lea ecx, [ebp - 0x14]
// 00405d5d  8bf0                 mov esi, eax
// 00405d5f  e85ce5ffff           call 0x4042c0
// 00405d64  e9df000000           jmp 0x405e48
// 00405d69  3d08400000           cmp eax, 0x4008
// 00405d6e  0f85e8000000         jne 0x405e5c
// 00405d74  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00405d7a  51                   push ecx
// 00405d7b  ff156403a400         call dword ptr [0xa40364]
// 00405d81  83c002               add eax, 2
// 00405d84  89bdd0feffff         mov dword ptr [ebp - 0x130], edi
// 00405d8a  897dfc               mov dword ptr [ebp - 4], edi
// 00405d8d  50                   push eax
// 00405d8e  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405d94  c645fc01             mov byte ptr [ebp - 4], 1
// 00405d98  e803f8ffff           call 0x4055a0
// 00405d9d  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 00405da3  85ff                 test edi, edi
// 00405da5  0f8483000000         je 0x405e2e
// 00405dab  80bdd0eeffff00       cmp byte ptr [ebp - 0x1130], 0
// 00405db2  8db5d0eeffff         lea esi, [ebp - 0x1130]
// 00405db8  7450                 je 0x405e0a
// 00405dba  8b1dd419a400         mov ebx, dword ptr [0xa419d4]
// 00405dc0  56                   push esi
// 00405dc1  ffd3                 call ebx
// 00405dc3  8a0e                 mov cl, byte ptr [esi]
// 00405dc5  80f95c               cmp cl, 0x5c
// 00405dc8  751e                 jne 0x405de8
// 00405dca  803830               cmp byte ptr [eax], 0x30
// 00405dcd  7519                 jne 0x405de8
// 00405dcf  c60700               mov byte ptr [edi], 0
// 00405dd2  50                   push eax
// 00405dd3  47                   inc edi
// 00405dd4  ffd3                 call ebx
// 00405dd6  8bf0                 mov esi, eax
// 00405dd8  eb2b                 jmp 0x405e05
// 00405dda  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00405ddd  e858454000           call 0x80a33a
// 00405de2  b89d5d4000           mov eax, 0x405d9d
// 00405de7  c3                   ret 
// 00405de8  880f                 mov byte ptr [edi], cl
// 00405dea  0fb616               movzx edx, byte ptr [esi]
// 00405ded  52                   push edx
// 00405dee  ff155003a400         call dword ptr [0xa40350]
// 00405df4  85c0                 test eax, eax
// 00405df6  740b                 je 0x405e03
// 00405df8  8a4601               mov al, byte ptr [esi + 1]
// 00405dfb  46                   inc esi
// 00405dfc  47                   inc edi
// 00405dfd  84c0                 test al, al
// 00405dff  7409                 je 0x405e0a
// 00405e01  8807                 mov byte ptr [edi], al
// 00405e03  47                   inc edi
// 00405e04  46                   inc esi
// 00405e05  803e00               cmp byte ptr [esi], 0
// 00405e08  75b6                 jne 0x405dc0
// 00405e0a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00405e0d  c60700               mov byte ptr [edi], 0
// 00405e10  c6470100             mov byte ptr [edi + 1], 0
// 00405e14  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 00405e1a  50                   push eax
// 00405e1b  51                   push ecx
// 00405e1c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405e1f  e84cdbffff           call 0x403970
// 00405e24  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 00405e2a  8bf0                 mov esi, eax
// 00405e2c  eb05                 jmp 0x405e33
// 00405e2e  be0e000000           mov esi, 0xe
// 00405e33  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00405e39  3bfa                 cmp edi, edx
// 00405e3b  740b                 je 0x405e48
// 00405e3d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405e43  e8e8e4ffff           call 0x404330
// 00405e48  33ff                 xor edi, edi
// 00405e4a  3bf7                 cmp esi, edi
// 00405e4c  740b                 je 0x405e59
// 00405e4e  56                   push esi
// 00405e4f  e84cd8ffff           call 0x4036a0
// 00405e54  83c404               add esp, 4
// 00405e57  eb18                 jmp 0x405e71
// 00405e59  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 00405e5c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00405e5f  50                   push eax
// 00405e60  8bce                 mov ecx, esi
// 00405e62  e829deffff           call 0x403c90
// 00405e67  33c9                 xor ecx, ecx
// 00405e69  3bc7                 cmp eax, edi
// 00405e6b  0f9dc1               setge cl
// 00405e6e  49                   dec ecx
// 00405e6f  23c1                 and eax, ecx
// 00405e71  8da5c4eeffff         lea esp, [ebp - 0x113c]
// 00405e77  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405e7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00405e81  5f                   pop edi
// 00405e82  5e                   pop esi
// 00405e83  5b                   pop ebx
// 00405e84  8be5                 mov esp, ebp
// 00405e86  5d                   pop ebp
// 00405e87  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddValue@CRegParser@ATL@@IAEJAAVCRegKey@2@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp