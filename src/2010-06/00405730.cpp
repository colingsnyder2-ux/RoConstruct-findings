// roc 2010-06 00405730  unit: ATL::CRegObject  size: 1671 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00405730
//
// 00405730  6aff                 push -1
// 00405732  68e6da9700           push 0x97dae6
// 00405737  64a100000000         mov eax, dword ptr fs:[0]
// 0040573d  50                   push eax
// 0040573e  b840110000           mov eax, 0x1140
// 00405743  64892500000000       mov dword ptr fs:[0], esp
// 0040574a  e801343a00           call 0x7a8b50
// 0040574f  53                   push ebx
// 00405750  55                   push ebp
// 00405751  33ed                 xor ebp, ebp
// 00405753  56                   push esi
// 00405754  8bd9                 mov ebx, ecx
// 00405756  57                   push edi
// 00405757  895c2440             mov dword ptr [esp + 0x40], ebx
// 0040575b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0040575f  896c2414             mov dword ptr [esp + 0x14], ebp
// 00405763  8b84246c110000       mov eax, dword ptr [esp + 0x116c]
// 0040576a  8bbc2460110000       mov edi, dword ptr [esp + 0x1160]
// 00405771  57                   push edi
// 00405772  89ac245c110000       mov dword ptr [esp + 0x115c], ebp
// 00405779  89442448             mov dword ptr [esp + 0x48], eax
// 0040577d  e81edbffff           call 0x4032a0
// 00405782  8bf0                 mov esi, eax
// 00405784  3bf5                 cmp esi, ebp
// 00405786  0f8c10060000         jl 0x405d9c
// 0040578c  803f7d               cmp byte ptr [edi], 0x7d
// 0040578f  0f8405060000         je 0x405d9a
// 00405795  eb0d                 jmp 0x4057a4
// 00405797  eb07                 jmp 0x4057a0
// 00405799  8da42400000000       lea esp, [esp]
// 004057a0  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 004057a4  8b3584a39e00         mov esi, dword ptr [0x9ea384]
// 004057aa  68d001a000           push 0xa001d0
// 004057af  57                   push edi
// 004057b0  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004057b8  ffd6                 call esi
// 004057ba  8be8                 mov ebp, eax
// 004057bc  f7dd                 neg ebp
// 004057be  68e401a000           push 0xa001e4
// 004057c3  1bed                 sbb ebp, ebp
// 004057c5  57                   push edi
// 004057c6  45                   inc ebp
// 004057c7  ffd6                 call esi
// 004057c9  85c0                 test eax, eax
// 004057cb  7408                 je 0x4057d5
// 004057cd  85ed                 test ebp, ebp
// 004057cf  0f8402010000         je 0x4058d7
// 004057d5  57                   push edi
// 004057d6  8bcb                 mov ecx, ebx
// 004057d8  e8c3daffff           call 0x4032a0
// 004057dd  8bf0                 mov esi, eax
// 004057df  85f6                 test esi, esi
// 004057e1  0f8ca4050000         jl 0x405d8b
// 004057e7  33f6                 xor esi, esi
// 004057e9  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 004057f0  0f84e3000000         je 0x4058d9
// 004057f6  8a0f                 mov cl, byte ptr [edi]
// 004057f8  8974241c             mov dword ptr [esp + 0x1c], esi
// 004057fc  89742420             mov dword ptr [esp + 0x20], esi
// 00405800  8bc7                 mov eax, edi
// 00405802  84c9                 test cl, cl
// 00405804  741c                 je 0x405822
// 00405806  80f95c               cmp cl, 0x5c
// 00405809  740f                 je 0x40581a
// 0040580b  50                   push eax
// 0040580c  ff1564ba9e00         call dword ptr [0x9eba64]
// 00405812  8a08                 mov cl, byte ptr [eax]
// 00405814  84c9                 test cl, cl
// 00405816  75ee                 jne 0x405806
// 00405818  eb08                 jmp 0x405822
// 0040581a  3bc6                 cmp eax, esi
// 0040581c  0f85ee040000         jne 0x405d10
// 00405822  57                   push edi
// 00405823  8bcb                 mov ecx, ebx
// 00405825  e8a6dbffff           call 0x4033d0
// 0040582a  85c0                 test eax, eax
// 0040582c  7421                 je 0x40584f
// 0040582e  8b8c2464110000       mov ecx, dword ptr [esp + 0x1164]
// 00405835  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00405839  57                   push edi
// 0040583a  8d4c2420             lea ecx, [esp + 0x20]
// 0040583e  89742424             mov dword ptr [esp + 0x24], esi
// 00405842  e8d9e5ffff           call 0x403e20
// 00405847  8974241c             mov dword ptr [esp + 0x1c], esi
// 0040584b  89742420             mov dword ptr [esp + 0x20], esi
// 0040584f  3bee                 cmp ebp, esi
// 00405851  747e                 je 0x4058d1
// 00405853  57                   push edi
// 00405854  8bcb                 mov ecx, ebx
// 00405856  e845daffff           call 0x4032a0
// 0040585b  8bf0                 mov esi, eax
// 0040585d  85f6                 test esi, esi
// 0040585f  0f8cc4040000         jl 0x405d29
// 00405865  57                   push edi
// 00405866  8bcb                 mov ecx, ebx
// 00405868  e8f3dbffff           call 0x403460
// 0040586d  8bf0                 mov esi, eax
// 0040586f  85f6                 test esi, esi
// 00405871  0f8cb2040000         jl 0x405d29
// 00405877  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0040587f  803f7b               cmp byte ptr [edi], 0x7b
// 00405882  753f                 jne 0x4058c3
// 00405884  57                   push edi
// 00405885  ff1588a39e00         call dword ptr [0x9ea388]
// 0040588b  83f801               cmp eax, 1
// 0040588e  7533                 jne 0x4058c3
// 00405890  8b8c2468110000       mov ecx, dword ptr [esp + 0x1168]
// 00405897  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040589b  6a00                 push 0
// 0040589d  51                   push ecx
// 0040589e  52                   push edx
// 0040589f  57                   push edi
// 004058a0  8bcb                 mov ecx, ebx
// 004058a2  e889feffff           call 0x405730
// 004058a7  8bf0                 mov esi, eax
// 004058a9  85f6                 test esi, esi
// 004058ab  0f8cda040000         jl 0x405d8b
// 004058b1  57                   push edi
// 004058b2  8bcb                 mov ecx, ebx
// 004058b4  e8e7d9ffff           call 0x4032a0
// 004058b9  8bf0                 mov esi, eax
// 004058bb  85f6                 test esi, esi
// 004058bd  0f8cc8040000         jl 0x405d8b
// 004058c3  803f7d               cmp byte ptr [edi], 0x7d
// 004058c6  0f85d4feffff         jne 0x4057a0
// 004058cc  e9ba040000           jmp 0x405d8b
// 004058d1  89742420             mov dword ptr [esp + 0x20], esi
// 004058d5  eb02                 jmp 0x4058d9
// 004058d7  33f6                 xor esi, esi
// 004058d9  68d801a000           push 0xa001d8
// 004058de  57                   push edi
// 004058df  ff1584a39e00         call dword ptr [0x9ea384]
// 004058e5  85c0                 test eax, eax
// 004058e7  7518                 jne 0x405901
// 004058e9  57                   push edi
// 004058ea  8bcb                 mov ecx, ebx
// 004058ec  89442428             mov dword ptr [esp + 0x28], eax
// 004058f0  e8abd9ffff           call 0x4032a0
// 004058f5  8bf0                 mov esi, eax
// 004058f7  85f6                 test esi, esi
// 004058f9  0f8c8c040000         jl 0x405d8b
// 004058ff  33f6                 xor esi, esi
// 00405901  68f001a000           push 0xa001f0
// 00405906  57                   push edi
// 00405907  ff1584a39e00         call dword ptr [0x9ea384]
// 0040590d  85c0                 test eax, eax
// 0040590f  0f8508010000         jne 0x405a1d
// 00405915  8d942450010000       lea edx, [esp + 0x150]
// 0040591c  52                   push edx
// 0040591d  8bcb                 mov ecx, ebx
// 0040591f  e87cd9ffff           call 0x4032a0
// 00405924  8bf0                 mov esi, eax
// 00405926  85f6                 test esi, esi
// 00405928  0f8c5d040000         jl 0x405d8b
// 0040592e  57                   push edi
// 0040592f  8bcb                 mov ecx, ebx
// 00405931  e86ad9ffff           call 0x4032a0
// 00405936  8bf0                 mov esi, eax
// 00405938  85f6                 test esi, esi
// 0040593a  0f8c4b040000         jl 0x405d8b
// 00405940  803f3d               cmp byte ptr [edi], 0x3d
// 00405943  0f85d0030000         jne 0x405d19
// 00405949  33ed                 xor ebp, ebp
// 0040594b  39ac2468110000       cmp dword ptr [esp + 0x1168], ebp
// 00405952  744f                 je 0x4059a3
// 00405954  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 0040595b  57                   push edi
// 0040595c  8d8c2454010000       lea ecx, [esp + 0x154]
// 00405963  51                   push ecx
// 00405964  8d542438             lea edx, [esp + 0x38]
// 00405968  52                   push edx
// 00405969  8bcb                 mov ecx, ebx
// 0040596b  c684246411000001     mov byte ptr [esp + 0x1164], 1
// 00405973  8944243c             mov dword ptr [esp + 0x3c], eax
// 00405977  896c2440             mov dword ptr [esp + 0x40], ebp
// 0040597b  e800faffff           call 0x405380
// 00405980  8bf0                 mov esi, eax
// 00405982  3bf5                 cmp esi, ebp
// 00405984  896c2430             mov dword ptr [esp + 0x30], ebp
// 00405988  896c2434             mov dword ptr [esp + 0x34], ebp
// 0040598c  0f8c9d030000         jl 0x405d2f
// 00405992  c684245811000000     mov byte ptr [esp + 0x1158], 0
// 0040599a  896c2434             mov dword ptr [esp + 0x34], ebp
// 0040599e  e9dcfeffff           jmp 0x40587f
// 004059a3  39ac246c110000       cmp dword ptr [esp + 0x116c], ebp
// 004059aa  7560                 jne 0x405a0c
// 004059ac  396c2424             cmp dword ptr [esp + 0x24], ebp
// 004059b0  745a                 je 0x405a0c
// 004059b2  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 004059b9  6806000200           push 0x20006
// 004059be  55                   push ebp
// 004059bf  50                   push eax
// 004059c0  8d4c2434             lea ecx, [esp + 0x34]
// 004059c4  896c2434             mov dword ptr [esp + 0x34], ebp
// 004059c8  896c2438             mov dword ptr [esp + 0x38], ebp
// 004059cc  e8efd4ffff           call 0x402ec0
// 004059d1  3bc5                 cmp eax, ebp
// 004059d3  0f856a030000         jne 0x405d43
// 004059d9  8b742428             mov esi, dword ptr [esp + 0x28]
// 004059dd  8d8c2450010000       lea ecx, [esp + 0x150]
// 004059e4  51                   push ecx
// 004059e5  56                   push esi
// 004059e6  ff150ca09e00         call dword ptr [0x9ea00c]
// 004059ec  3bc5                 cmp eax, ebp
// 004059ee  7409                 je 0x4059f9
// 004059f0  83f802               cmp eax, 2
// 004059f3  0f854a030000         jne 0x405d43
// 004059f9  3bf5                 cmp esi, ebp
// 004059fb  740b                 je 0x405a08
// 004059fd  56                   push esi
// 004059fe  ff1510a09e00         call dword ptr [0x9ea010]
// 00405a04  896c2428             mov dword ptr [esp + 0x28], ebp
// 00405a08  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00405a0c  57                   push edi
// 00405a0d  8bcb                 mov ecx, ebx
// 00405a0f  e84cdaffff           call 0x403460
// 00405a14  8bf0                 mov esi, eax
// 00405a16  3bf5                 cmp esi, ebp
// 00405a18  e9a0feffff           jmp 0x4058bd
// 00405a1d  8a0f                 mov cl, byte ptr [edi]
// 00405a1f  8bc7                 mov eax, edi
// 00405a21  84c9                 test cl, cl
// 00405a23  741c                 je 0x405a41
// 00405a25  80f95c               cmp cl, 0x5c
// 00405a28  740f                 je 0x405a39
// 00405a2a  50                   push eax
// 00405a2b  ff1564ba9e00         call dword ptr [0x9eba64]
// 00405a31  8a08                 mov cl, byte ptr [eax]
// 00405a33  84c9                 test cl, cl
// 00405a35  75ee                 jne 0x405a25
// 00405a37  eb08                 jmp 0x405a41
// 00405a39  3bc6                 cmp eax, esi
// 00405a3b  0f85d8020000         jne 0x405d19
// 00405a41  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 00405a48  0f84f0000000         je 0x405b3e
// 00405a4e  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00405a55  8d542418             lea edx, [esp + 0x18]
// 00405a59  52                   push edx
// 00405a5a  681f000200           push 0x2001f
// 00405a5f  56                   push esi
// 00405a60  57                   push edi
// 00405a61  50                   push eax
// 00405a62  8974242c             mov dword ptr [esp + 0x2c], esi
// 00405a66  ff1518a09e00         call dword ptr [0x9ea018]
// 00405a6c  3bc6                 cmp eax, esi
// 00405a6e  7521                 jne 0x405a91
// 00405a70  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405a74  33c0                 xor eax, eax
// 00405a76  3bce                 cmp ecx, esi
// 00405a78  7407                 je 0x405a81
// 00405a7a  51                   push ecx
// 00405a7b  ff1510a09e00         call dword ptr [0x9ea010]
// 00405a81  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00405a85  894c2410             mov dword ptr [esp + 0x10], ecx
// 00405a89  89742414             mov dword ptr [esp + 0x14], esi
// 00405a8d  3bc6                 cmp eax, esi
// 00405a8f  7474                 je 0x405b05
// 00405a91  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405a98  6819000200           push 0x20019
// 00405a9d  57                   push edi
// 00405a9e  52                   push edx
// 00405a9f  8d4c241c             lea ecx, [esp + 0x1c]
// 00405aa3  e818d4ffff           call 0x402ec0
// 00405aa8  85c0                 test eax, eax
// 00405aaa  7459                 je 0x405b05
// 00405aac  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405ab3  8d442448             lea eax, [esp + 0x48]
// 00405ab7  50                   push eax
// 00405ab8  33ed                 xor ebp, ebp
// 00405aba  8d4c241c             lea ecx, [esp + 0x1c]
// 00405abe  51                   push ecx
// 00405abf  55                   push ebp
// 00405ac0  681f000200           push 0x2001f
// 00405ac5  55                   push ebp
// 00405ac6  55                   push ebp
// 00405ac7  55                   push ebp
// 00405ac8  57                   push edi
// 00405ac9  52                   push edx
// 00405aca  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00405ace  ff1514a09e00         call dword ptr [0x9ea014]
// 00405ad4  8bf0                 mov esi, eax
// 00405ad6  3bf5                 cmp esi, ebp
// 00405ad8  0f8571020000         jne 0x405d4f
// 00405ade  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405ae2  33c0                 xor eax, eax
// 00405ae4  3bcd                 cmp ecx, ebp
// 00405ae6  7407                 je 0x405aef
// 00405ae8  51                   push ecx
// 00405ae9  ff1510a09e00         call dword ptr [0x9ea010]
// 00405aef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00405af3  8bf0                 mov esi, eax
// 00405af5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00405af9  896c2414             mov dword ptr [esp + 0x14], ebp
// 00405afd  3bc5                 cmp eax, ebp
// 00405aff  0f854a020000         jne 0x405d4f
// 00405b05  57                   push edi
// 00405b06  8bcb                 mov ecx, ebx
// 00405b08  e893d7ffff           call 0x4032a0
// 00405b0d  8bf0                 mov esi, eax
// 00405b0f  85f6                 test esi, esi
// 00405b11  0f8c74020000         jl 0x405d8b
// 00405b17  803f3d               cmp byte ptr [edi], 0x3d
// 00405b1a  0f855ffdffff         jne 0x40587f
// 00405b20  57                   push edi
// 00405b21  6a00                 push 0
// 00405b23  8d542418             lea edx, [esp + 0x18]
// 00405b27  52                   push edx
// 00405b28  8bcb                 mov ecx, ebx
// 00405b2a  e851f8ffff           call 0x405380
// 00405b2f  8bf0                 mov esi, eax
// 00405b31  85f6                 test esi, esi
// 00405b33  0f8c52020000         jl 0x405d8b
// 00405b39  e941fdffff           jmp 0x40587f
// 00405b3e  39b4246c110000       cmp dword ptr [esp + 0x116c], esi
// 00405b45  0f85e8000000         jne 0x405c33
// 00405b4b  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00405b52  6819000200           push 0x20019
// 00405b57  57                   push edi
// 00405b58  50                   push eax
// 00405b59  8d4c241c             lea ecx, [esp + 0x1c]
// 00405b5d  e85ed3ffff           call 0x402ec0
// 00405b62  8be8                 mov ebp, eax
// 00405b64  896c2418             mov dword ptr [esp + 0x18], ebp
// 00405b68  3bee                 cmp ebp, esi
// 00405b6a  740b                 je 0x405b77
// 00405b6c  c784246c11000001000000 mov dword ptr [esp + 0x116c], 1
// 00405b77  6aff                 push -1
// 00405b79  57                   push edi
// 00405b7a  8d4c2454             lea ecx, [esp + 0x54]
// 00405b7e  6804010000           push 0x104
// 00405b83  51                   push ecx
// 00405b84  ff15d4a89e00         call dword ptr [0x9ea8d4]
// 00405b8a  50                   push eax
// 00405b8b  e8b0ceffff           call 0x402a40
// 00405b90  83c414               add esp, 0x14
// 00405b93  57                   push edi
// 00405b94  8bcb                 mov ecx, ebx
// 00405b96  e805d7ffff           call 0x4032a0
// 00405b9b  8bf0                 mov esi, eax
// 00405b9d  85f6                 test esi, esi
// 00405b9f  0f8ce6010000         jl 0x405d8b
// 00405ba5  57                   push edi
// 00405ba6  8bcb                 mov ecx, ebx
// 00405ba8  e8b3d8ffff           call 0x403460
// 00405bad  8bf0                 mov esi, eax
// 00405baf  85f6                 test esi, esi
// 00405bb1  0f8cd4010000         jl 0x405d8b
// 00405bb7  803f7b               cmp byte ptr [edi], 0x7b
// 00405bba  7547                 jne 0x405c03
// 00405bbc  57                   push edi
// 00405bbd  ff1588a39e00         call dword ptr [0x9ea388]
// 00405bc3  83f801               cmp eax, 1
// 00405bc6  753b                 jne 0x405c03
// 00405bc8  8bac246c110000       mov ebp, dword ptr [esp + 0x116c]
// 00405bcf  8b542410             mov edx, dword ptr [esp + 0x10]
// 00405bd3  55                   push ebp
// 00405bd4  6a00                 push 0
// 00405bd6  52                   push edx
// 00405bd7  57                   push edi
// 00405bd8  8bcb                 mov ecx, ebx
// 00405bda  e851fbffff           call 0x405730
// 00405bdf  8bf0                 mov esi, eax
// 00405be1  85f6                 test esi, esi
// 00405be3  7d08                 jge 0x405bed
// 00405be5  85ed                 test ebp, ebp
// 00405be7  0f849e010000         je 0x405d8b
// 00405bed  57                   push edi
// 00405bee  8bcb                 mov ecx, ebx
// 00405bf0  e8abd6ffff           call 0x4032a0
// 00405bf5  8bf0                 mov esi, eax
// 00405bf7  85f6                 test esi, esi
// 00405bf9  0f8c8c010000         jl 0x405d8b
// 00405bff  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00405c03  8b442444             mov eax, dword ptr [esp + 0x44]
// 00405c07  8984246c110000       mov dword ptr [esp + 0x116c], eax
// 00405c0e  83fd02               cmp ebp, 2
// 00405c11  0f84acfcffff         je 0x4058c3
// 00405c17  85ed                 test ebp, ebp
// 00405c19  7429                 je 0x405c44
// 00405c1b  85c0                 test eax, eax
// 00405c1d  0f85a0fcffff         jne 0x4058c3
// 00405c23  55                   push ebp
// 00405c24  e8a7d0ffff           call 0x402cd0
// 00405c29  83c404               add esp, 4
// 00405c2c  8bf0                 mov esi, eax
// 00405c2e  e958010000           jmp 0x405d8b
// 00405c33  c744241802000000     mov dword ptr [esp + 0x18], 2
// 00405c3b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00405c3f  e928ffffff           jmp 0x405b6c
// 00405c44  85c0                 test eax, eax
// 00405c46  7442                 je 0x405c8a
// 00405c48  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405c4c  50                   push eax
// 00405c4d  8bcb                 mov ecx, ebx
// 00405c4f  e8bcd7ffff           call 0x403410
// 00405c54  85c0                 test eax, eax
// 00405c56  7432                 je 0x405c8a
// 00405c58  8d4c244c             lea ecx, [esp + 0x4c]
// 00405c5c  51                   push ecx
// 00405c5d  8bcb                 mov ecx, ebx
// 00405c5f  e86cd7ffff           call 0x4033d0
// 00405c64  85c0                 test eax, eax
// 00405c66  0f8457fcffff         je 0x4058c3
// 00405c6c  837c242400           cmp dword ptr [esp + 0x24], 0
// 00405c71  0f844cfcffff         je 0x4058c3
// 00405c77  8d54244c             lea edx, [esp + 0x4c]
// 00405c7b  52                   push edx
// 00405c7c  8d4c2414             lea ecx, [esp + 0x14]
// 00405c80  e89be1ffff           call 0x403e20
// 00405c85  e939fcffff           jmp 0x4058c3
// 00405c8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405c8e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00405c92  50                   push eax
// 00405c93  e878d7ffff           call 0x403410
// 00405c98  33ed                 xor ebp, ebp
// 00405c9a  8bd8                 mov ebx, eax
// 00405c9c  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00405ca0  7415                 je 0x405cb7
// 00405ca2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405ca6  51                   push ecx
// 00405ca7  ff1510a09e00         call dword ptr [0x9ea010]
// 00405cad  8be8                 mov ebp, eax
// 00405caf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00405cb7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00405cbf  85ed                 test ebp, ebp
// 00405cc1  0f859c000000         jne 0x405d63
// 00405cc7  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00405ccb  0f84f2fbffff         je 0x4058c3
// 00405cd1  85db                 test ebx, ebx
// 00405cd3  0f85eafbffff         jne 0x4058c3
// 00405cd9  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405ce0  8d44244c             lea eax, [esp + 0x4c]
// 00405ce4  50                   push eax
// 00405ce5  8d4c243c             lea ecx, [esp + 0x3c]
// 00405ce9  8954243c             mov dword ptr [esp + 0x3c], edx
// 00405ced  895c2440             mov dword ptr [esp + 0x40], ebx
// 00405cf1  e83ad1ffff           call 0x402e30
// 00405cf6  895c2438             mov dword ptr [esp + 0x38], ebx
// 00405cfa  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00405cfe  3bc3                 cmp eax, ebx
// 00405d00  7575                 jne 0x405d77
// 00405d02  8d4c2438             lea ecx, [esp + 0x38]
// 00405d06  e8f5e0ffff           call 0x403e00
// 00405d0b  e9b3fbffff           jmp 0x4058c3
// 00405d10  8d4c241c             lea ecx, [esp + 0x1c]
// 00405d14  e8e7e0ffff           call 0x403e00
// 00405d19  8d4c2410             lea ecx, [esp + 0x10]
// 00405d1d  e8dee0ffff           call 0x403e00
// 00405d22  b809000280           mov eax, 0x80020009
// 00405d27  eb73                 jmp 0x405d9c
// 00405d29  8d4c241c             lea ecx, [esp + 0x1c]
// 00405d2d  eb57                 jmp 0x405d86
// 00405d2f  8d4c2430             lea ecx, [esp + 0x30]
// 00405d33  e8c8e0ffff           call 0x403e00
// 00405d38  8d4c2410             lea ecx, [esp + 0x10]
// 00405d3c  e8bfe0ffff           call 0x403e00
// 00405d41  eb57                 jmp 0x405d9a
// 00405d43  50                   push eax
// 00405d44  e887cfffff           call 0x402cd0
// 00405d49  8d4c242c             lea ecx, [esp + 0x2c]
// 00405d4d  eb32                 jmp 0x405d81
// 00405d4f  8d4c2410             lea ecx, [esp + 0x10]
// 00405d53  e8a8e0ffff           call 0x403e00
// 00405d58  56                   push esi
// 00405d59  e872cfffff           call 0x402cd0
// 00405d5e  83c404               add esp, 4
// 00405d61  eb39                 jmp 0x405d9c
// 00405d63  8d4c2410             lea ecx, [esp + 0x10]
// 00405d67  e894e0ffff           call 0x403e00
// 00405d6c  55                   push ebp
// 00405d6d  e85ecfffff           call 0x402cd0
// 00405d72  83c404               add esp, 4
// 00405d75  eb25                 jmp 0x405d9c
// 00405d77  50                   push eax
// 00405d78  e853cfffff           call 0x402cd0
// 00405d7d  8d4c243c             lea ecx, [esp + 0x3c]
// 00405d81  83c404               add esp, 4
// 00405d84  8bf0                 mov esi, eax
// 00405d86  e875e0ffff           call 0x403e00
// 00405d8b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405d8f  85c0                 test eax, eax
// 00405d91  7407                 je 0x405d9a
// 00405d93  50                   push eax
// 00405d94  ff1510a09e00         call dword ptr [0x9ea010]
// 00405d9a  8bc6                 mov eax, esi
// 00405d9c  8b8c2450110000       mov ecx, dword ptr [esp + 0x1150]
// 00405da3  5f                   pop edi
// 00405da4  5e                   pop esi
// 00405da5  5d                   pop ebp
// 00405da6  5b                   pop ebx
// 00405da7  64890d00000000       mov dword ptr fs:[0], ecx
// 00405dae  81c44c110000         add esp, 0x114c
// 00405db4  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterSubkeys@CRegParser@ATL@@IAEJPADPAUHKEY__@@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp