// roc 2009-06 004055f0  unit: ATL::CRegObject  size: 1671 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004055f0
//
// 004055f0  6aff                 push -1
// 004055f2  6816cc8400           push 0x84cc16
// 004055f7  64a100000000         mov eax, dword ptr fs:[0]
// 004055fd  50                   push eax
// 004055fe  b840110000           mov eax, 0x1140
// 00405603  64892500000000       mov dword ptr fs:[0], esp
// 0040560a  e8d1453100           call 0x719be0
// 0040560f  53                   push ebx
// 00405610  55                   push ebp
// 00405611  33ed                 xor ebp, ebp
// 00405613  56                   push esi
// 00405614  8bd9                 mov ebx, ecx
// 00405616  57                   push edi
// 00405617  895c2440             mov dword ptr [esp + 0x40], ebx
// 0040561b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0040561f  896c2414             mov dword ptr [esp + 0x14], ebp
// 00405623  8b84246c110000       mov eax, dword ptr [esp + 0x116c]
// 0040562a  8bbc2460110000       mov edi, dword ptr [esp + 0x1160]
// 00405631  57                   push edi
// 00405632  89ac245c110000       mov dword ptr [esp + 0x115c], ebp
// 00405639  89442448             mov dword ptr [esp + 0x48], eax
// 0040563d  e83edfffff           call 0x403580
// 00405642  8bf0                 mov esi, eax
// 00405644  3bf5                 cmp esi, ebp
// 00405646  0f8c10060000         jl 0x405c5c
// 0040564c  803f7d               cmp byte ptr [edi], 0x7d
// 0040564f  0f8405060000         je 0x405c5a
// 00405655  eb0d                 jmp 0x405664
// 00405657  eb07                 jmp 0x405660
// 00405659  8da42400000000       lea esp, [esp]
// 00405660  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00405664  8b35dce18900         mov esi, dword ptr [0x89e1dc]
// 0040566a  68e8ca8a00           push 0x8acae8
// 0040566f  57                   push edi
// 00405670  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00405678  ffd6                 call esi
// 0040567a  8be8                 mov ebp, eax
// 0040567c  f7dd                 neg ebp
// 0040567e  68fcca8a00           push 0x8acafc
// 00405683  1bed                 sbb ebp, ebp
// 00405685  57                   push edi
// 00405686  45                   inc ebp
// 00405687  ffd6                 call esi
// 00405689  85c0                 test eax, eax
// 0040568b  7408                 je 0x405695
// 0040568d  85ed                 test ebp, ebp
// 0040568f  0f8402010000         je 0x405797
// 00405695  57                   push edi
// 00405696  8bcb                 mov ecx, ebx
// 00405698  e8e3deffff           call 0x403580
// 0040569d  8bf0                 mov esi, eax
// 0040569f  85f6                 test esi, esi
// 004056a1  0f8ca4050000         jl 0x405c4b
// 004056a7  33f6                 xor esi, esi
// 004056a9  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 004056b0  0f84e3000000         je 0x405799
// 004056b6  8a0f                 mov cl, byte ptr [edi]
// 004056b8  8974241c             mov dword ptr [esp + 0x1c], esi
// 004056bc  89742420             mov dword ptr [esp + 0x20], esi
// 004056c0  8bc7                 mov eax, edi
// 004056c2  84c9                 test cl, cl
// 004056c4  741c                 je 0x4056e2
// 004056c6  80f95c               cmp cl, 0x5c
// 004056c9  740f                 je 0x4056da
// 004056cb  50                   push eax
// 004056cc  ff1580ee8900         call dword ptr [0x89ee80]
// 004056d2  8a08                 mov cl, byte ptr [eax]
// 004056d4  84c9                 test cl, cl
// 004056d6  75ee                 jne 0x4056c6
// 004056d8  eb08                 jmp 0x4056e2
// 004056da  3bc6                 cmp eax, esi
// 004056dc  0f85ee040000         jne 0x405bd0
// 004056e2  57                   push edi
// 004056e3  8bcb                 mov ecx, ebx
// 004056e5  e8c6dfffff           call 0x4036b0
// 004056ea  85c0                 test eax, eax
// 004056ec  7421                 je 0x40570f
// 004056ee  8b8c2464110000       mov ecx, dword ptr [esp + 0x1164]
// 004056f5  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004056f9  57                   push edi
// 004056fa  8d4c2420             lea ecx, [esp + 0x20]
// 004056fe  89742424             mov dword ptr [esp + 0x24], esi
// 00405702  e8f9e9ffff           call 0x404100
// 00405707  8974241c             mov dword ptr [esp + 0x1c], esi
// 0040570b  89742420             mov dword ptr [esp + 0x20], esi
// 0040570f  3bee                 cmp ebp, esi
// 00405711  747e                 je 0x405791
// 00405713  57                   push edi
// 00405714  8bcb                 mov ecx, ebx
// 00405716  e865deffff           call 0x403580
// 0040571b  8bf0                 mov esi, eax
// 0040571d  85f6                 test esi, esi
// 0040571f  0f8cc4040000         jl 0x405be9
// 00405725  57                   push edi
// 00405726  8bcb                 mov ecx, ebx
// 00405728  e813e0ffff           call 0x403740
// 0040572d  8bf0                 mov esi, eax
// 0040572f  85f6                 test esi, esi
// 00405731  0f8cb2040000         jl 0x405be9
// 00405737  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0040573f  803f7b               cmp byte ptr [edi], 0x7b
// 00405742  753f                 jne 0x405783
// 00405744  57                   push edi
// 00405745  ff15e0e18900         call dword ptr [0x89e1e0]
// 0040574b  83f801               cmp eax, 1
// 0040574e  7533                 jne 0x405783
// 00405750  8b8c2468110000       mov ecx, dword ptr [esp + 0x1168]
// 00405757  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040575b  6a00                 push 0
// 0040575d  51                   push ecx
// 0040575e  52                   push edx
// 0040575f  57                   push edi
// 00405760  8bcb                 mov ecx, ebx
// 00405762  e889feffff           call 0x4055f0
// 00405767  8bf0                 mov esi, eax
// 00405769  85f6                 test esi, esi
// 0040576b  0f8cda040000         jl 0x405c4b
// 00405771  57                   push edi
// 00405772  8bcb                 mov ecx, ebx
// 00405774  e807deffff           call 0x403580
// 00405779  8bf0                 mov esi, eax
// 0040577b  85f6                 test esi, esi
// 0040577d  0f8cc8040000         jl 0x405c4b
// 00405783  803f7d               cmp byte ptr [edi], 0x7d
// 00405786  0f85d4feffff         jne 0x405660
// 0040578c  e9ba040000           jmp 0x405c4b
// 00405791  89742420             mov dword ptr [esp + 0x20], esi
// 00405795  eb02                 jmp 0x405799
// 00405797  33f6                 xor esi, esi
// 00405799  68f0ca8a00           push 0x8acaf0
// 0040579e  57                   push edi
// 0040579f  ff15dce18900         call dword ptr [0x89e1dc]
// 004057a5  85c0                 test eax, eax
// 004057a7  7518                 jne 0x4057c1
// 004057a9  57                   push edi
// 004057aa  8bcb                 mov ecx, ebx
// 004057ac  89442428             mov dword ptr [esp + 0x28], eax
// 004057b0  e8cbddffff           call 0x403580
// 004057b5  8bf0                 mov esi, eax
// 004057b7  85f6                 test esi, esi
// 004057b9  0f8c8c040000         jl 0x405c4b
// 004057bf  33f6                 xor esi, esi
// 004057c1  6808cb8a00           push 0x8acb08
// 004057c6  57                   push edi
// 004057c7  ff15dce18900         call dword ptr [0x89e1dc]
// 004057cd  85c0                 test eax, eax
// 004057cf  0f8508010000         jne 0x4058dd
// 004057d5  8d942450010000       lea edx, [esp + 0x150]
// 004057dc  52                   push edx
// 004057dd  8bcb                 mov ecx, ebx
// 004057df  e89cddffff           call 0x403580
// 004057e4  8bf0                 mov esi, eax
// 004057e6  85f6                 test esi, esi
// 004057e8  0f8c5d040000         jl 0x405c4b
// 004057ee  57                   push edi
// 004057ef  8bcb                 mov ecx, ebx
// 004057f1  e88addffff           call 0x403580
// 004057f6  8bf0                 mov esi, eax
// 004057f8  85f6                 test esi, esi
// 004057fa  0f8c4b040000         jl 0x405c4b
// 00405800  803f3d               cmp byte ptr [edi], 0x3d
// 00405803  0f85d0030000         jne 0x405bd9
// 00405809  33ed                 xor ebp, ebp
// 0040580b  39ac2468110000       cmp dword ptr [esp + 0x1168], ebp
// 00405812  744f                 je 0x405863
// 00405814  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 0040581b  57                   push edi
// 0040581c  8d8c2454010000       lea ecx, [esp + 0x154]
// 00405823  51                   push ecx
// 00405824  8d542438             lea edx, [esp + 0x38]
// 00405828  52                   push edx
// 00405829  8bcb                 mov ecx, ebx
// 0040582b  c684246411000001     mov byte ptr [esp + 0x1164], 1
// 00405833  8944243c             mov dword ptr [esp + 0x3c], eax
// 00405837  896c2440             mov dword ptr [esp + 0x40], ebp
// 0040583b  e800faffff           call 0x405240
// 00405840  8bf0                 mov esi, eax
// 00405842  3bf5                 cmp esi, ebp
// 00405844  896c2430             mov dword ptr [esp + 0x30], ebp
// 00405848  896c2434             mov dword ptr [esp + 0x34], ebp
// 0040584c  0f8c9d030000         jl 0x405bef
// 00405852  c684245811000000     mov byte ptr [esp + 0x1158], 0
// 0040585a  896c2434             mov dword ptr [esp + 0x34], ebp
// 0040585e  e9dcfeffff           jmp 0x40573f
// 00405863  39ac246c110000       cmp dword ptr [esp + 0x116c], ebp
// 0040586a  7560                 jne 0x4058cc
// 0040586c  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00405870  745a                 je 0x4058cc
// 00405872  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00405879  6806000200           push 0x20006
// 0040587e  55                   push ebp
// 0040587f  50                   push eax
// 00405880  8d4c2434             lea ecx, [esp + 0x34]
// 00405884  896c2434             mov dword ptr [esp + 0x34], ebp
// 00405888  896c2438             mov dword ptr [esp + 0x38], ebp
// 0040588c  e80fd9ffff           call 0x4031a0
// 00405891  3bc5                 cmp eax, ebp
// 00405893  0f856a030000         jne 0x405c03
// 00405899  8b742428             mov esi, dword ptr [esp + 0x28]
// 0040589d  8d8c2450010000       lea ecx, [esp + 0x150]
// 004058a4  51                   push ecx
// 004058a5  56                   push esi
// 004058a6  ff1504e08900         call dword ptr [0x89e004]
// 004058ac  3bc5                 cmp eax, ebp
// 004058ae  7409                 je 0x4058b9
// 004058b0  83f802               cmp eax, 2
// 004058b3  0f854a030000         jne 0x405c03
// 004058b9  3bf5                 cmp esi, ebp
// 004058bb  740b                 je 0x4058c8
// 004058bd  56                   push esi
// 004058be  ff1508e08900         call dword ptr [0x89e008]
// 004058c4  896c2428             mov dword ptr [esp + 0x28], ebp
// 004058c8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004058cc  57                   push edi
// 004058cd  8bcb                 mov ecx, ebx
// 004058cf  e86cdeffff           call 0x403740
// 004058d4  8bf0                 mov esi, eax
// 004058d6  3bf5                 cmp esi, ebp
// 004058d8  e9a0feffff           jmp 0x40577d
// 004058dd  8a0f                 mov cl, byte ptr [edi]
// 004058df  8bc7                 mov eax, edi
// 004058e1  84c9                 test cl, cl
// 004058e3  741c                 je 0x405901
// 004058e5  80f95c               cmp cl, 0x5c
// 004058e8  740f                 je 0x4058f9
// 004058ea  50                   push eax
// 004058eb  ff1580ee8900         call dword ptr [0x89ee80]
// 004058f1  8a08                 mov cl, byte ptr [eax]
// 004058f3  84c9                 test cl, cl
// 004058f5  75ee                 jne 0x4058e5
// 004058f7  eb08                 jmp 0x405901
// 004058f9  3bc6                 cmp eax, esi
// 004058fb  0f85d8020000         jne 0x405bd9
// 00405901  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 00405908  0f84f0000000         je 0x4059fe
// 0040590e  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00405915  8d542418             lea edx, [esp + 0x18]
// 00405919  52                   push edx
// 0040591a  681f000200           push 0x2001f
// 0040591f  56                   push esi
// 00405920  57                   push edi
// 00405921  50                   push eax
// 00405922  8974242c             mov dword ptr [esp + 0x2c], esi
// 00405926  ff1510e08900         call dword ptr [0x89e010]
// 0040592c  3bc6                 cmp eax, esi
// 0040592e  7521                 jne 0x405951
// 00405930  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405934  33c0                 xor eax, eax
// 00405936  3bce                 cmp ecx, esi
// 00405938  7407                 je 0x405941
// 0040593a  51                   push ecx
// 0040593b  ff1508e08900         call dword ptr [0x89e008]
// 00405941  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00405945  894c2410             mov dword ptr [esp + 0x10], ecx
// 00405949  89742414             mov dword ptr [esp + 0x14], esi
// 0040594d  3bc6                 cmp eax, esi
// 0040594f  7474                 je 0x4059c5
// 00405951  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405958  6819000200           push 0x20019
// 0040595d  57                   push edi
// 0040595e  52                   push edx
// 0040595f  8d4c241c             lea ecx, [esp + 0x1c]
// 00405963  e838d8ffff           call 0x4031a0
// 00405968  85c0                 test eax, eax
// 0040596a  7459                 je 0x4059c5
// 0040596c  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405973  8d442448             lea eax, [esp + 0x48]
// 00405977  50                   push eax
// 00405978  33ed                 xor ebp, ebp
// 0040597a  8d4c241c             lea ecx, [esp + 0x1c]
// 0040597e  51                   push ecx
// 0040597f  55                   push ebp
// 00405980  681f000200           push 0x2001f
// 00405985  55                   push ebp
// 00405986  55                   push ebp
// 00405987  55                   push ebp
// 00405988  57                   push edi
// 00405989  52                   push edx
// 0040598a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0040598e  ff150ce08900         call dword ptr [0x89e00c]
// 00405994  8bf0                 mov esi, eax
// 00405996  3bf5                 cmp esi, ebp
// 00405998  0f8571020000         jne 0x405c0f
// 0040599e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004059a2  33c0                 xor eax, eax
// 004059a4  3bcd                 cmp ecx, ebp
// 004059a6  7407                 je 0x4059af
// 004059a8  51                   push ecx
// 004059a9  ff1508e08900         call dword ptr [0x89e008]
// 004059af  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004059b3  8bf0                 mov esi, eax
// 004059b5  894c2410             mov dword ptr [esp + 0x10], ecx
// 004059b9  896c2414             mov dword ptr [esp + 0x14], ebp
// 004059bd  3bc5                 cmp eax, ebp
// 004059bf  0f854a020000         jne 0x405c0f
// 004059c5  57                   push edi
// 004059c6  8bcb                 mov ecx, ebx
// 004059c8  e8b3dbffff           call 0x403580
// 004059cd  8bf0                 mov esi, eax
// 004059cf  85f6                 test esi, esi
// 004059d1  0f8c74020000         jl 0x405c4b
// 004059d7  803f3d               cmp byte ptr [edi], 0x3d
// 004059da  0f855ffdffff         jne 0x40573f
// 004059e0  57                   push edi
// 004059e1  6a00                 push 0
// 004059e3  8d542418             lea edx, [esp + 0x18]
// 004059e7  52                   push edx
// 004059e8  8bcb                 mov ecx, ebx
// 004059ea  e851f8ffff           call 0x405240
// 004059ef  8bf0                 mov esi, eax
// 004059f1  85f6                 test esi, esi
// 004059f3  0f8c52020000         jl 0x405c4b
// 004059f9  e941fdffff           jmp 0x40573f
// 004059fe  39b4246c110000       cmp dword ptr [esp + 0x116c], esi
// 00405a05  0f85e8000000         jne 0x405af3
// 00405a0b  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00405a12  6819000200           push 0x20019
// 00405a17  57                   push edi
// 00405a18  50                   push eax
// 00405a19  8d4c241c             lea ecx, [esp + 0x1c]
// 00405a1d  e87ed7ffff           call 0x4031a0
// 00405a22  8be8                 mov ebp, eax
// 00405a24  896c2418             mov dword ptr [esp + 0x18], ebp
// 00405a28  3bee                 cmp ebp, esi
// 00405a2a  740b                 je 0x405a37
// 00405a2c  c784246c11000001000000 mov dword ptr [esp + 0x116c], 1
// 00405a37  6aff                 push -1
// 00405a39  57                   push edi
// 00405a3a  8d4c2454             lea ecx, [esp + 0x54]
// 00405a3e  6804010000           push 0x104
// 00405a43  51                   push ecx
// 00405a44  ff15a0e98900         call dword ptr [0x89e9a0]
// 00405a4a  50                   push eax
// 00405a4b  e8d0d2ffff           call 0x402d20
// 00405a50  83c414               add esp, 0x14
// 00405a53  57                   push edi
// 00405a54  8bcb                 mov ecx, ebx
// 00405a56  e825dbffff           call 0x403580
// 00405a5b  8bf0                 mov esi, eax
// 00405a5d  85f6                 test esi, esi
// 00405a5f  0f8ce6010000         jl 0x405c4b
// 00405a65  57                   push edi
// 00405a66  8bcb                 mov ecx, ebx
// 00405a68  e8d3dcffff           call 0x403740
// 00405a6d  8bf0                 mov esi, eax
// 00405a6f  85f6                 test esi, esi
// 00405a71  0f8cd4010000         jl 0x405c4b
// 00405a77  803f7b               cmp byte ptr [edi], 0x7b
// 00405a7a  7547                 jne 0x405ac3
// 00405a7c  57                   push edi
// 00405a7d  ff15e0e18900         call dword ptr [0x89e1e0]
// 00405a83  83f801               cmp eax, 1
// 00405a86  753b                 jne 0x405ac3
// 00405a88  8bac246c110000       mov ebp, dword ptr [esp + 0x116c]
// 00405a8f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00405a93  55                   push ebp
// 00405a94  6a00                 push 0
// 00405a96  52                   push edx
// 00405a97  57                   push edi
// 00405a98  8bcb                 mov ecx, ebx
// 00405a9a  e851fbffff           call 0x4055f0
// 00405a9f  8bf0                 mov esi, eax
// 00405aa1  85f6                 test esi, esi
// 00405aa3  7d08                 jge 0x405aad
// 00405aa5  85ed                 test ebp, ebp
// 00405aa7  0f849e010000         je 0x405c4b
// 00405aad  57                   push edi
// 00405aae  8bcb                 mov ecx, ebx
// 00405ab0  e8cbdaffff           call 0x403580
// 00405ab5  8bf0                 mov esi, eax
// 00405ab7  85f6                 test esi, esi
// 00405ab9  0f8c8c010000         jl 0x405c4b
// 00405abf  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00405ac3  8b442444             mov eax, dword ptr [esp + 0x44]
// 00405ac7  8984246c110000       mov dword ptr [esp + 0x116c], eax
// 00405ace  83fd02               cmp ebp, 2
// 00405ad1  0f84acfcffff         je 0x405783
// 00405ad7  85ed                 test ebp, ebp
// 00405ad9  7429                 je 0x405b04
// 00405adb  85c0                 test eax, eax
// 00405add  0f85a0fcffff         jne 0x405783
// 00405ae3  55                   push ebp
// 00405ae4  e8c7d4ffff           call 0x402fb0
// 00405ae9  83c404               add esp, 4
// 00405aec  8bf0                 mov esi, eax
// 00405aee  e958010000           jmp 0x405c4b
// 00405af3  c744241802000000     mov dword ptr [esp + 0x18], 2
// 00405afb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00405aff  e928ffffff           jmp 0x405a2c
// 00405b04  85c0                 test eax, eax
// 00405b06  7442                 je 0x405b4a
// 00405b08  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405b0c  50                   push eax
// 00405b0d  8bcb                 mov ecx, ebx
// 00405b0f  e8dcdbffff           call 0x4036f0
// 00405b14  85c0                 test eax, eax
// 00405b16  7432                 je 0x405b4a
// 00405b18  8d4c244c             lea ecx, [esp + 0x4c]
// 00405b1c  51                   push ecx
// 00405b1d  8bcb                 mov ecx, ebx
// 00405b1f  e88cdbffff           call 0x4036b0
// 00405b24  85c0                 test eax, eax
// 00405b26  0f8457fcffff         je 0x405783
// 00405b2c  837c242400           cmp dword ptr [esp + 0x24], 0
// 00405b31  0f844cfcffff         je 0x405783
// 00405b37  8d54244c             lea edx, [esp + 0x4c]
// 00405b3b  52                   push edx
// 00405b3c  8d4c2414             lea ecx, [esp + 0x14]
// 00405b40  e8bbe5ffff           call 0x404100
// 00405b45  e939fcffff           jmp 0x405783
// 00405b4a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405b4e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00405b52  50                   push eax
// 00405b53  e898dbffff           call 0x4036f0
// 00405b58  33ed                 xor ebp, ebp
// 00405b5a  8bd8                 mov ebx, eax
// 00405b5c  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00405b60  7415                 je 0x405b77
// 00405b62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405b66  51                   push ecx
// 00405b67  ff1508e08900         call dword ptr [0x89e008]
// 00405b6d  8be8                 mov ebp, eax
// 00405b6f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00405b77  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00405b7f  85ed                 test ebp, ebp
// 00405b81  0f859c000000         jne 0x405c23
// 00405b87  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00405b8b  0f84f2fbffff         je 0x405783
// 00405b91  85db                 test ebx, ebx
// 00405b93  0f85eafbffff         jne 0x405783
// 00405b99  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405ba0  8d44244c             lea eax, [esp + 0x4c]
// 00405ba4  50                   push eax
// 00405ba5  8d4c243c             lea ecx, [esp + 0x3c]
// 00405ba9  8954243c             mov dword ptr [esp + 0x3c], edx
// 00405bad  895c2440             mov dword ptr [esp + 0x40], ebx
// 00405bb1  e85ad5ffff           call 0x403110
// 00405bb6  895c2438             mov dword ptr [esp + 0x38], ebx
// 00405bba  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00405bbe  3bc3                 cmp eax, ebx
// 00405bc0  7575                 jne 0x405c37
// 00405bc2  8d4c2438             lea ecx, [esp + 0x38]
// 00405bc6  e815e5ffff           call 0x4040e0
// 00405bcb  e9b3fbffff           jmp 0x405783
// 00405bd0  8d4c241c             lea ecx, [esp + 0x1c]
// 00405bd4  e807e5ffff           call 0x4040e0
// 00405bd9  8d4c2410             lea ecx, [esp + 0x10]
// 00405bdd  e8fee4ffff           call 0x4040e0
// 00405be2  b809000280           mov eax, 0x80020009
// 00405be7  eb73                 jmp 0x405c5c
// 00405be9  8d4c241c             lea ecx, [esp + 0x1c]
// 00405bed  eb57                 jmp 0x405c46
// 00405bef  8d4c2430             lea ecx, [esp + 0x30]
// 00405bf3  e8e8e4ffff           call 0x4040e0
// 00405bf8  8d4c2410             lea ecx, [esp + 0x10]
// 00405bfc  e8dfe4ffff           call 0x4040e0
// 00405c01  eb57                 jmp 0x405c5a
// 00405c03  50                   push eax
// 00405c04  e8a7d3ffff           call 0x402fb0
// 00405c09  8d4c242c             lea ecx, [esp + 0x2c]
// 00405c0d  eb32                 jmp 0x405c41
// 00405c0f  8d4c2410             lea ecx, [esp + 0x10]
// 00405c13  e8c8e4ffff           call 0x4040e0
// 00405c18  56                   push esi
// 00405c19  e892d3ffff           call 0x402fb0
// 00405c1e  83c404               add esp, 4
// 00405c21  eb39                 jmp 0x405c5c
// 00405c23  8d4c2410             lea ecx, [esp + 0x10]
// 00405c27  e8b4e4ffff           call 0x4040e0
// 00405c2c  55                   push ebp
// 00405c2d  e87ed3ffff           call 0x402fb0
// 00405c32  83c404               add esp, 4
// 00405c35  eb25                 jmp 0x405c5c
// 00405c37  50                   push eax
// 00405c38  e873d3ffff           call 0x402fb0
// 00405c3d  8d4c243c             lea ecx, [esp + 0x3c]
// 00405c41  83c404               add esp, 4
// 00405c44  8bf0                 mov esi, eax
// 00405c46  e895e4ffff           call 0x4040e0
// 00405c4b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405c4f  85c0                 test eax, eax
// 00405c51  7407                 je 0x405c5a
// 00405c53  50                   push eax
// 00405c54  ff1508e08900         call dword ptr [0x89e008]
// 00405c5a  8bc6                 mov eax, esi
// 00405c5c  8b8c2450110000       mov ecx, dword ptr [esp + 0x1150]
// 00405c63  5f                   pop edi
// 00405c64  5e                   pop esi
// 00405c65  5d                   pop ebp
// 00405c66  5b                   pop ebx
// 00405c67  64890d00000000       mov dword ptr fs:[0], ecx
// 00405c6e  81c44c110000         add esp, 0x114c
// 00405c74  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterSubkeys@CRegParser@ATL@@IAEJPADPAUHKEY__@@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp