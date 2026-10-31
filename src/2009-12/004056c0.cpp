// roc 2009-12 004056c0  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 1671 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004056c0
//
// 004056c0  6aff                 push -1
// 004056c2  6896719200           push 0x927196
// 004056c7  64a100000000         mov eax, dword ptr fs:[0]
// 004056cd  50                   push eax
// 004056ce  b840110000           mov eax, 0x1140
// 004056d3  64892500000000       mov dword ptr fs:[0], esp
// 004056da  e831f33e00           call 0x7f4a10
// 004056df  53                   push ebx
// 004056e0  55                   push ebp
// 004056e1  33ed                 xor ebp, ebp
// 004056e3  56                   push esi
// 004056e4  8bd9                 mov ebx, ecx
// 004056e6  57                   push edi
// 004056e7  895c2440             mov dword ptr [esp + 0x40], ebx
// 004056eb  896c2410             mov dword ptr [esp + 0x10], ebp
// 004056ef  896c2414             mov dword ptr [esp + 0x14], ebp
// 004056f3  8b84246c110000       mov eax, dword ptr [esp + 0x116c]
// 004056fa  8bbc2460110000       mov edi, dword ptr [esp + 0x1160]
// 00405701  57                   push edi
// 00405702  89ac245c110000       mov dword ptr [esp + 0x115c], ebp
// 00405709  89442448             mov dword ptr [esp + 0x48], eax
// 0040570d  e83edbffff           call 0x403250
// 00405712  8bf0                 mov esi, eax
// 00405714  3bf5                 cmp esi, ebp
// 00405716  0f8c10060000         jl 0x405d2c
// 0040571c  803f7d               cmp byte ptr [edi], 0x7d
// 0040571f  0f8405060000         je 0x405d2a
// 00405725  eb0d                 jmp 0x405734
// 00405727  eb07                 jmp 0x405730
// 00405729  8da42400000000       lea esp, [esp]
// 00405730  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00405734  8b3514b29800         mov esi, dword ptr [0x98b214]
// 0040573a  6828f69900           push 0x99f628
// 0040573f  57                   push edi
// 00405740  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00405748  ffd6                 call esi
// 0040574a  8be8                 mov ebp, eax
// 0040574c  f7dd                 neg ebp
// 0040574e  683cf69900           push 0x99f63c
// 00405753  1bed                 sbb ebp, ebp
// 00405755  57                   push edi
// 00405756  45                   inc ebp
// 00405757  ffd6                 call esi
// 00405759  85c0                 test eax, eax
// 0040575b  7408                 je 0x405765
// 0040575d  85ed                 test ebp, ebp
// 0040575f  0f8402010000         je 0x405867
// 00405765  57                   push edi
// 00405766  8bcb                 mov ecx, ebx
// 00405768  e8e3daffff           call 0x403250
// 0040576d  8bf0                 mov esi, eax
// 0040576f  85f6                 test esi, esi
// 00405771  0f8ca4050000         jl 0x405d1b
// 00405777  33f6                 xor esi, esi
// 00405779  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 00405780  0f84e3000000         je 0x405869
// 00405786  8a0f                 mov cl, byte ptr [edi]
// 00405788  8974241c             mov dword ptr [esp + 0x1c], esi
// 0040578c  89742420             mov dword ptr [esp + 0x20], esi
// 00405790  8bc7                 mov eax, edi
// 00405792  84c9                 test cl, cl
// 00405794  741c                 je 0x4057b2
// 00405796  80f95c               cmp cl, 0x5c
// 00405799  740f                 je 0x4057aa
// 0040579b  50                   push eax
// 0040579c  ff15d4cb9800         call dword ptr [0x98cbd4]
// 004057a2  8a08                 mov cl, byte ptr [eax]
// 004057a4  84c9                 test cl, cl
// 004057a6  75ee                 jne 0x405796
// 004057a8  eb08                 jmp 0x4057b2
// 004057aa  3bc6                 cmp eax, esi
// 004057ac  0f85ee040000         jne 0x405ca0
// 004057b2  57                   push edi
// 004057b3  8bcb                 mov ecx, ebx
// 004057b5  e8c6dbffff           call 0x403380
// 004057ba  85c0                 test eax, eax
// 004057bc  7421                 je 0x4057df
// 004057be  8b8c2464110000       mov ecx, dword ptr [esp + 0x1164]
// 004057c5  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004057c9  57                   push edi
// 004057ca  8d4c2420             lea ecx, [esp + 0x20]
// 004057ce  89742424             mov dword ptr [esp + 0x24], esi
// 004057d2  e8e9e5ffff           call 0x403dc0
// 004057d7  8974241c             mov dword ptr [esp + 0x1c], esi
// 004057db  89742420             mov dword ptr [esp + 0x20], esi
// 004057df  3bee                 cmp ebp, esi
// 004057e1  747e                 je 0x405861
// 004057e3  57                   push edi
// 004057e4  8bcb                 mov ecx, ebx
// 004057e6  e865daffff           call 0x403250
// 004057eb  8bf0                 mov esi, eax
// 004057ed  85f6                 test esi, esi
// 004057ef  0f8cc4040000         jl 0x405cb9
// 004057f5  57                   push edi
// 004057f6  8bcb                 mov ecx, ebx
// 004057f8  e813dcffff           call 0x403410
// 004057fd  8bf0                 mov esi, eax
// 004057ff  85f6                 test esi, esi
// 00405801  0f8cb2040000         jl 0x405cb9
// 00405807  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0040580f  803f7b               cmp byte ptr [edi], 0x7b
// 00405812  753f                 jne 0x405853
// 00405814  57                   push edi
// 00405815  ff1518b29800         call dword ptr [0x98b218]
// 0040581b  83f801               cmp eax, 1
// 0040581e  7533                 jne 0x405853
// 00405820  8b8c2468110000       mov ecx, dword ptr [esp + 0x1168]
// 00405827  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040582b  6a00                 push 0
// 0040582d  51                   push ecx
// 0040582e  52                   push edx
// 0040582f  57                   push edi
// 00405830  8bcb                 mov ecx, ebx
// 00405832  e889feffff           call 0x4056c0
// 00405837  8bf0                 mov esi, eax
// 00405839  85f6                 test esi, esi
// 0040583b  0f8cda040000         jl 0x405d1b
// 00405841  57                   push edi
// 00405842  8bcb                 mov ecx, ebx
// 00405844  e807daffff           call 0x403250
// 00405849  8bf0                 mov esi, eax
// 0040584b  85f6                 test esi, esi
// 0040584d  0f8cc8040000         jl 0x405d1b
// 00405853  803f7d               cmp byte ptr [edi], 0x7d
// 00405856  0f85d4feffff         jne 0x405730
// 0040585c  e9ba040000           jmp 0x405d1b
// 00405861  89742420             mov dword ptr [esp + 0x20], esi
// 00405865  eb02                 jmp 0x405869
// 00405867  33f6                 xor esi, esi
// 00405869  6830f69900           push 0x99f630
// 0040586e  57                   push edi
// 0040586f  ff1514b29800         call dword ptr [0x98b214]
// 00405875  85c0                 test eax, eax
// 00405877  7518                 jne 0x405891
// 00405879  57                   push edi
// 0040587a  8bcb                 mov ecx, ebx
// 0040587c  89442428             mov dword ptr [esp + 0x28], eax
// 00405880  e8cbd9ffff           call 0x403250
// 00405885  8bf0                 mov esi, eax
// 00405887  85f6                 test esi, esi
// 00405889  0f8c8c040000         jl 0x405d1b
// 0040588f  33f6                 xor esi, esi
// 00405891  6848f69900           push 0x99f648
// 00405896  57                   push edi
// 00405897  ff1514b29800         call dword ptr [0x98b214]
// 0040589d  85c0                 test eax, eax
// 0040589f  0f8508010000         jne 0x4059ad
// 004058a5  8d942450010000       lea edx, [esp + 0x150]
// 004058ac  52                   push edx
// 004058ad  8bcb                 mov ecx, ebx
// 004058af  e89cd9ffff           call 0x403250
// 004058b4  8bf0                 mov esi, eax
// 004058b6  85f6                 test esi, esi
// 004058b8  0f8c5d040000         jl 0x405d1b
// 004058be  57                   push edi
// 004058bf  8bcb                 mov ecx, ebx
// 004058c1  e88ad9ffff           call 0x403250
// 004058c6  8bf0                 mov esi, eax
// 004058c8  85f6                 test esi, esi
// 004058ca  0f8c4b040000         jl 0x405d1b
// 004058d0  803f3d               cmp byte ptr [edi], 0x3d
// 004058d3  0f85d0030000         jne 0x405ca9
// 004058d9  33ed                 xor ebp, ebp
// 004058db  39ac2468110000       cmp dword ptr [esp + 0x1168], ebp
// 004058e2  744f                 je 0x405933
// 004058e4  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 004058eb  57                   push edi
// 004058ec  8d8c2454010000       lea ecx, [esp + 0x154]
// 004058f3  51                   push ecx
// 004058f4  8d542438             lea edx, [esp + 0x38]
// 004058f8  52                   push edx
// 004058f9  8bcb                 mov ecx, ebx
// 004058fb  c684246411000001     mov byte ptr [esp + 0x1164], 1
// 00405903  8944243c             mov dword ptr [esp + 0x3c], eax
// 00405907  896c2440             mov dword ptr [esp + 0x40], ebp
// 0040590b  e8a0f8ffff           call 0x4051b0
// 00405910  8bf0                 mov esi, eax
// 00405912  3bf5                 cmp esi, ebp
// 00405914  896c2430             mov dword ptr [esp + 0x30], ebp
// 00405918  896c2434             mov dword ptr [esp + 0x34], ebp
// 0040591c  0f8c9d030000         jl 0x405cbf
// 00405922  c684245811000000     mov byte ptr [esp + 0x1158], 0
// 0040592a  896c2434             mov dword ptr [esp + 0x34], ebp
// 0040592e  e9dcfeffff           jmp 0x40580f
// 00405933  39ac246c110000       cmp dword ptr [esp + 0x116c], ebp
// 0040593a  7560                 jne 0x40599c
// 0040593c  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00405940  745a                 je 0x40599c
// 00405942  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00405949  6806000200           push 0x20006
// 0040594e  55                   push ebp
// 0040594f  50                   push eax
// 00405950  8d4c2434             lea ecx, [esp + 0x34]
// 00405954  896c2434             mov dword ptr [esp + 0x34], ebp
// 00405958  896c2438             mov dword ptr [esp + 0x38], ebp
// 0040595c  e80fd5ffff           call 0x402e70
// 00405961  3bc5                 cmp eax, ebp
// 00405963  0f856a030000         jne 0x405cd3
// 00405969  8b742428             mov esi, dword ptr [esp + 0x28]
// 0040596d  8d8c2450010000       lea ecx, [esp + 0x150]
// 00405974  51                   push ecx
// 00405975  56                   push esi
// 00405976  ff1504b09800         call dword ptr [0x98b004]
// 0040597c  3bc5                 cmp eax, ebp
// 0040597e  7409                 je 0x405989
// 00405980  83f802               cmp eax, 2
// 00405983  0f854a030000         jne 0x405cd3
// 00405989  3bf5                 cmp esi, ebp
// 0040598b  740b                 je 0x405998
// 0040598d  56                   push esi
// 0040598e  ff1508b09800         call dword ptr [0x98b008]
// 00405994  896c2428             mov dword ptr [esp + 0x28], ebp
// 00405998  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0040599c  57                   push edi
// 0040599d  8bcb                 mov ecx, ebx
// 0040599f  e86cdaffff           call 0x403410
// 004059a4  8bf0                 mov esi, eax
// 004059a6  3bf5                 cmp esi, ebp
// 004059a8  e9a0feffff           jmp 0x40584d
// 004059ad  8a0f                 mov cl, byte ptr [edi]
// 004059af  8bc7                 mov eax, edi
// 004059b1  84c9                 test cl, cl
// 004059b3  741c                 je 0x4059d1
// 004059b5  80f95c               cmp cl, 0x5c
// 004059b8  740f                 je 0x4059c9
// 004059ba  50                   push eax
// 004059bb  ff15d4cb9800         call dword ptr [0x98cbd4]
// 004059c1  8a08                 mov cl, byte ptr [eax]
// 004059c3  84c9                 test cl, cl
// 004059c5  75ee                 jne 0x4059b5
// 004059c7  eb08                 jmp 0x4059d1
// 004059c9  3bc6                 cmp eax, esi
// 004059cb  0f85d8020000         jne 0x405ca9
// 004059d1  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 004059d8  0f84f0000000         je 0x405ace
// 004059de  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 004059e5  8d542418             lea edx, [esp + 0x18]
// 004059e9  52                   push edx
// 004059ea  681f000200           push 0x2001f
// 004059ef  56                   push esi
// 004059f0  57                   push edi
// 004059f1  50                   push eax
// 004059f2  8974242c             mov dword ptr [esp + 0x2c], esi
// 004059f6  ff1510b09800         call dword ptr [0x98b010]
// 004059fc  3bc6                 cmp eax, esi
// 004059fe  7521                 jne 0x405a21
// 00405a00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405a04  33c0                 xor eax, eax
// 00405a06  3bce                 cmp ecx, esi
// 00405a08  7407                 je 0x405a11
// 00405a0a  51                   push ecx
// 00405a0b  ff1508b09800         call dword ptr [0x98b008]
// 00405a11  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00405a15  894c2410             mov dword ptr [esp + 0x10], ecx
// 00405a19  89742414             mov dword ptr [esp + 0x14], esi
// 00405a1d  3bc6                 cmp eax, esi
// 00405a1f  7474                 je 0x405a95
// 00405a21  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405a28  6819000200           push 0x20019
// 00405a2d  57                   push edi
// 00405a2e  52                   push edx
// 00405a2f  8d4c241c             lea ecx, [esp + 0x1c]
// 00405a33  e838d4ffff           call 0x402e70
// 00405a38  85c0                 test eax, eax
// 00405a3a  7459                 je 0x405a95
// 00405a3c  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405a43  8d442448             lea eax, [esp + 0x48]
// 00405a47  50                   push eax
// 00405a48  33ed                 xor ebp, ebp
// 00405a4a  8d4c241c             lea ecx, [esp + 0x1c]
// 00405a4e  51                   push ecx
// 00405a4f  55                   push ebp
// 00405a50  681f000200           push 0x2001f
// 00405a55  55                   push ebp
// 00405a56  55                   push ebp
// 00405a57  55                   push ebp
// 00405a58  57                   push edi
// 00405a59  52                   push edx
// 00405a5a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00405a5e  ff150cb09800         call dword ptr [0x98b00c]
// 00405a64  8bf0                 mov esi, eax
// 00405a66  3bf5                 cmp esi, ebp
// 00405a68  0f8571020000         jne 0x405cdf
// 00405a6e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405a72  33c0                 xor eax, eax
// 00405a74  3bcd                 cmp ecx, ebp
// 00405a76  7407                 je 0x405a7f
// 00405a78  51                   push ecx
// 00405a79  ff1508b09800         call dword ptr [0x98b008]
// 00405a7f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00405a83  8bf0                 mov esi, eax
// 00405a85  894c2410             mov dword ptr [esp + 0x10], ecx
// 00405a89  896c2414             mov dword ptr [esp + 0x14], ebp
// 00405a8d  3bc5                 cmp eax, ebp
// 00405a8f  0f854a020000         jne 0x405cdf
// 00405a95  57                   push edi
// 00405a96  8bcb                 mov ecx, ebx
// 00405a98  e8b3d7ffff           call 0x403250
// 00405a9d  8bf0                 mov esi, eax
// 00405a9f  85f6                 test esi, esi
// 00405aa1  0f8c74020000         jl 0x405d1b
// 00405aa7  803f3d               cmp byte ptr [edi], 0x3d
// 00405aaa  0f855ffdffff         jne 0x40580f
// 00405ab0  57                   push edi
// 00405ab1  6a00                 push 0
// 00405ab3  8d542418             lea edx, [esp + 0x18]
// 00405ab7  52                   push edx
// 00405ab8  8bcb                 mov ecx, ebx
// 00405aba  e8f1f6ffff           call 0x4051b0
// 00405abf  8bf0                 mov esi, eax
// 00405ac1  85f6                 test esi, esi
// 00405ac3  0f8c52020000         jl 0x405d1b
// 00405ac9  e941fdffff           jmp 0x40580f
// 00405ace  39b4246c110000       cmp dword ptr [esp + 0x116c], esi
// 00405ad5  0f85e8000000         jne 0x405bc3
// 00405adb  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00405ae2  6819000200           push 0x20019
// 00405ae7  57                   push edi
// 00405ae8  50                   push eax
// 00405ae9  8d4c241c             lea ecx, [esp + 0x1c]
// 00405aed  e87ed3ffff           call 0x402e70
// 00405af2  8be8                 mov ebp, eax
// 00405af4  896c2418             mov dword ptr [esp + 0x18], ebp
// 00405af8  3bee                 cmp ebp, esi
// 00405afa  740b                 je 0x405b07
// 00405afc  c784246c11000001000000 mov dword ptr [esp + 0x116c], 1
// 00405b07  6aff                 push -1
// 00405b09  57                   push edi
// 00405b0a  8d4c2454             lea ecx, [esp + 0x54]
// 00405b0e  6804010000           push 0x104
// 00405b13  51                   push ecx
// 00405b14  ff156cb79800         call dword ptr [0x98b76c]
// 00405b1a  50                   push eax
// 00405b1b  e8d0ceffff           call 0x4029f0
// 00405b20  83c414               add esp, 0x14
// 00405b23  57                   push edi
// 00405b24  8bcb                 mov ecx, ebx
// 00405b26  e825d7ffff           call 0x403250
// 00405b2b  8bf0                 mov esi, eax
// 00405b2d  85f6                 test esi, esi
// 00405b2f  0f8ce6010000         jl 0x405d1b
// 00405b35  57                   push edi
// 00405b36  8bcb                 mov ecx, ebx
// 00405b38  e8d3d8ffff           call 0x403410
// 00405b3d  8bf0                 mov esi, eax
// 00405b3f  85f6                 test esi, esi
// 00405b41  0f8cd4010000         jl 0x405d1b
// 00405b47  803f7b               cmp byte ptr [edi], 0x7b
// 00405b4a  7547                 jne 0x405b93
// 00405b4c  57                   push edi
// 00405b4d  ff1518b29800         call dword ptr [0x98b218]
// 00405b53  83f801               cmp eax, 1
// 00405b56  753b                 jne 0x405b93
// 00405b58  8bac246c110000       mov ebp, dword ptr [esp + 0x116c]
// 00405b5f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00405b63  55                   push ebp
// 00405b64  6a00                 push 0
// 00405b66  52                   push edx
// 00405b67  57                   push edi
// 00405b68  8bcb                 mov ecx, ebx
// 00405b6a  e851fbffff           call 0x4056c0
// 00405b6f  8bf0                 mov esi, eax
// 00405b71  85f6                 test esi, esi
// 00405b73  7d08                 jge 0x405b7d
// 00405b75  85ed                 test ebp, ebp
// 00405b77  0f849e010000         je 0x405d1b
// 00405b7d  57                   push edi
// 00405b7e  8bcb                 mov ecx, ebx
// 00405b80  e8cbd6ffff           call 0x403250
// 00405b85  8bf0                 mov esi, eax
// 00405b87  85f6                 test esi, esi
// 00405b89  0f8c8c010000         jl 0x405d1b
// 00405b8f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00405b93  8b442444             mov eax, dword ptr [esp + 0x44]
// 00405b97  8984246c110000       mov dword ptr [esp + 0x116c], eax
// 00405b9e  83fd02               cmp ebp, 2
// 00405ba1  0f84acfcffff         je 0x405853
// 00405ba7  85ed                 test ebp, ebp
// 00405ba9  7429                 je 0x405bd4
// 00405bab  85c0                 test eax, eax
// 00405bad  0f85a0fcffff         jne 0x405853
// 00405bb3  55                   push ebp
// 00405bb4  e8c7d0ffff           call 0x402c80
// 00405bb9  83c404               add esp, 4
// 00405bbc  8bf0                 mov esi, eax
// 00405bbe  e958010000           jmp 0x405d1b
// 00405bc3  c744241802000000     mov dword ptr [esp + 0x18], 2
// 00405bcb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00405bcf  e928ffffff           jmp 0x405afc
// 00405bd4  85c0                 test eax, eax
// 00405bd6  7442                 je 0x405c1a
// 00405bd8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405bdc  50                   push eax
// 00405bdd  8bcb                 mov ecx, ebx
// 00405bdf  e8dcd7ffff           call 0x4033c0
// 00405be4  85c0                 test eax, eax
// 00405be6  7432                 je 0x405c1a
// 00405be8  8d4c244c             lea ecx, [esp + 0x4c]
// 00405bec  51                   push ecx
// 00405bed  8bcb                 mov ecx, ebx
// 00405bef  e88cd7ffff           call 0x403380
// 00405bf4  85c0                 test eax, eax
// 00405bf6  0f8457fcffff         je 0x405853
// 00405bfc  837c242400           cmp dword ptr [esp + 0x24], 0
// 00405c01  0f844cfcffff         je 0x405853
// 00405c07  8d54244c             lea edx, [esp + 0x4c]
// 00405c0b  52                   push edx
// 00405c0c  8d4c2414             lea ecx, [esp + 0x14]
// 00405c10  e8abe1ffff           call 0x403dc0
// 00405c15  e939fcffff           jmp 0x405853
// 00405c1a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405c1e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00405c22  50                   push eax
// 00405c23  e898d7ffff           call 0x4033c0
// 00405c28  33ed                 xor ebp, ebp
// 00405c2a  8bd8                 mov ebx, eax
// 00405c2c  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00405c30  7415                 je 0x405c47
// 00405c32  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405c36  51                   push ecx
// 00405c37  ff1508b09800         call dword ptr [0x98b008]
// 00405c3d  8be8                 mov ebp, eax
// 00405c3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00405c47  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00405c4f  85ed                 test ebp, ebp
// 00405c51  0f859c000000         jne 0x405cf3
// 00405c57  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00405c5b  0f84f2fbffff         je 0x405853
// 00405c61  85db                 test ebx, ebx
// 00405c63  0f85eafbffff         jne 0x405853
// 00405c69  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00405c70  8d44244c             lea eax, [esp + 0x4c]
// 00405c74  50                   push eax
// 00405c75  8d4c243c             lea ecx, [esp + 0x3c]
// 00405c79  8954243c             mov dword ptr [esp + 0x3c], edx
// 00405c7d  895c2440             mov dword ptr [esp + 0x40], ebx
// 00405c81  e85ad1ffff           call 0x402de0
// 00405c86  895c2438             mov dword ptr [esp + 0x38], ebx
// 00405c8a  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00405c8e  3bc3                 cmp eax, ebx
// 00405c90  7575                 jne 0x405d07
// 00405c92  8d4c2438             lea ecx, [esp + 0x38]
// 00405c96  e805e1ffff           call 0x403da0
// 00405c9b  e9b3fbffff           jmp 0x405853
// 00405ca0  8d4c241c             lea ecx, [esp + 0x1c]
// 00405ca4  e8f7e0ffff           call 0x403da0
// 00405ca9  8d4c2410             lea ecx, [esp + 0x10]
// 00405cad  e8eee0ffff           call 0x403da0
// 00405cb2  b809000280           mov eax, 0x80020009
// 00405cb7  eb73                 jmp 0x405d2c
// 00405cb9  8d4c241c             lea ecx, [esp + 0x1c]
// 00405cbd  eb57                 jmp 0x405d16
// 00405cbf  8d4c2430             lea ecx, [esp + 0x30]
// 00405cc3  e8d8e0ffff           call 0x403da0
// 00405cc8  8d4c2410             lea ecx, [esp + 0x10]
// 00405ccc  e8cfe0ffff           call 0x403da0
// 00405cd1  eb57                 jmp 0x405d2a
// 00405cd3  50                   push eax
// 00405cd4  e8a7cfffff           call 0x402c80
// 00405cd9  8d4c242c             lea ecx, [esp + 0x2c]
// 00405cdd  eb32                 jmp 0x405d11
// 00405cdf  8d4c2410             lea ecx, [esp + 0x10]
// 00405ce3  e8b8e0ffff           call 0x403da0
// 00405ce8  56                   push esi
// 00405ce9  e892cfffff           call 0x402c80
// 00405cee  83c404               add esp, 4
// 00405cf1  eb39                 jmp 0x405d2c
// 00405cf3  8d4c2410             lea ecx, [esp + 0x10]
// 00405cf7  e8a4e0ffff           call 0x403da0
// 00405cfc  55                   push ebp
// 00405cfd  e87ecfffff           call 0x402c80
// 00405d02  83c404               add esp, 4
// 00405d05  eb25                 jmp 0x405d2c
// 00405d07  50                   push eax
// 00405d08  e873cfffff           call 0x402c80
// 00405d0d  8d4c243c             lea ecx, [esp + 0x3c]
// 00405d11  83c404               add esp, 4
// 00405d14  8bf0                 mov esi, eax
// 00405d16  e885e0ffff           call 0x403da0
// 00405d1b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405d1f  85c0                 test eax, eax
// 00405d21  7407                 je 0x405d2a
// 00405d23  50                   push eax
// 00405d24  ff1508b09800         call dword ptr [0x98b008]
// 00405d2a  8bc6                 mov eax, esi
// 00405d2c  8b8c2450110000       mov ecx, dword ptr [esp + 0x1150]
// 00405d33  5f                   pop edi
// 00405d34  5e                   pop esi
// 00405d35  5d                   pop ebp
// 00405d36  5b                   pop ebx
// 00405d37  64890d00000000       mov dword ptr fs:[0], ecx
// 00405d3e  81c44c110000         add esp, 0x114c
// 00405d44  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterSubkeys@CRegParser@ATL@@IAEJPADPAUHKEY__@@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp