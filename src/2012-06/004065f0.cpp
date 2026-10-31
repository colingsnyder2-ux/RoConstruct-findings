// roc 2012-06 004065f0  unit: ATL::CRegObject  size: 1671 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004065f0
//
// 004065f0  6aff                 push -1
// 004065f2  6886a2a900           push 0xa9a286
// 004065f7  64a100000000         mov eax, dword ptr fs:[0]
// 004065fd  50                   push eax
// 004065fe  b840110000           mov eax, 0x1140
// 00406603  64892500000000       mov dword ptr fs:[0], esp
// 0040660a  e8d1cc5700           call 0x9832e0
// 0040660f  53                   push ebx
// 00406610  55                   push ebp
// 00406611  33ed                 xor ebp, ebp
// 00406613  56                   push esi
// 00406614  8bd9                 mov ebx, ecx
// 00406616  57                   push edi
// 00406617  895c2440             mov dword ptr [esp + 0x40], ebx
// 0040661b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0040661f  896c2414             mov dword ptr [esp + 0x14], ebp
// 00406623  8b84246c110000       mov eax, dword ptr [esp + 0x116c]
// 0040662a  8bbc2460110000       mov edi, dword ptr [esp + 0x1160]
// 00406631  57                   push edi
// 00406632  89ac245c110000       mov dword ptr [esp + 0x115c], ebp
// 00406639  89442448             mov dword ptr [esp + 0x48], eax
// 0040663d  e89ee1ffff           call 0x4047e0
// 00406642  8bf0                 mov esi, eax
// 00406644  3bf5                 cmp esi, ebp
// 00406646  0f8c10060000         jl 0x406c5c
// 0040664c  803f7d               cmp byte ptr [edi], 0x7d
// 0040664f  0f8405060000         je 0x406c5a
// 00406655  eb0d                 jmp 0x406664
// 00406657  eb07                 jmp 0x406660
// 00406659  8da42400000000       lea esp, [esp]
// 00406660  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00406664  8b35a421b200         mov esi, dword ptr [0xb221a4]
// 0040666a  68c435b400           push 0xb435c4
// 0040666f  57                   push edi
// 00406670  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00406678  ffd6                 call esi
// 0040667a  8be8                 mov ebp, eax
// 0040667c  f7dd                 neg ebp
// 0040667e  68d835b400           push 0xb435d8
// 00406683  1bed                 sbb ebp, ebp
// 00406685  57                   push edi
// 00406686  45                   inc ebp
// 00406687  ffd6                 call esi
// 00406689  85c0                 test eax, eax
// 0040668b  7408                 je 0x406695
// 0040668d  85ed                 test ebp, ebp
// 0040668f  0f8402010000         je 0x406797
// 00406695  57                   push edi
// 00406696  8bcb                 mov ecx, ebx
// 00406698  e843e1ffff           call 0x4047e0
// 0040669d  8bf0                 mov esi, eax
// 0040669f  85f6                 test esi, esi
// 004066a1  0f8ca4050000         jl 0x406c4b
// 004066a7  33f6                 xor esi, esi
// 004066a9  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 004066b0  0f84e3000000         je 0x406799
// 004066b6  8a0f                 mov cl, byte ptr [edi]
// 004066b8  8974241c             mov dword ptr [esp + 0x1c], esi
// 004066bc  89742420             mov dword ptr [esp + 0x20], esi
// 004066c0  8bc7                 mov eax, edi
// 004066c2  84c9                 test cl, cl
// 004066c4  741c                 je 0x4066e2
// 004066c6  80f95c               cmp cl, 0x5c
// 004066c9  740f                 je 0x4066da
// 004066cb  50                   push eax
// 004066cc  ff15183cb200         call dword ptr [0xb23c18]
// 004066d2  8a08                 mov cl, byte ptr [eax]
// 004066d4  84c9                 test cl, cl
// 004066d6  75ee                 jne 0x4066c6
// 004066d8  eb08                 jmp 0x4066e2
// 004066da  3bc6                 cmp eax, esi
// 004066dc  0f85ee040000         jne 0x406bd0
// 004066e2  57                   push edi
// 004066e3  8bcb                 mov ecx, ebx
// 004066e5  e826e2ffff           call 0x404910
// 004066ea  85c0                 test eax, eax
// 004066ec  7421                 je 0x40670f
// 004066ee  8b8c2464110000       mov ecx, dword ptr [esp + 0x1164]
// 004066f5  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004066f9  57                   push edi
// 004066fa  8d4c2420             lea ecx, [esp + 0x20]
// 004066fe  89742424             mov dword ptr [esp + 0x24], esi
// 00406702  e869e8ffff           call 0x404f70
// 00406707  8974241c             mov dword ptr [esp + 0x1c], esi
// 0040670b  89742420             mov dword ptr [esp + 0x20], esi
// 0040670f  3bee                 cmp ebp, esi
// 00406711  747e                 je 0x406791
// 00406713  57                   push edi
// 00406714  8bcb                 mov ecx, ebx
// 00406716  e8c5e0ffff           call 0x4047e0
// 0040671b  8bf0                 mov esi, eax
// 0040671d  85f6                 test esi, esi
// 0040671f  0f8cc4040000         jl 0x406be9
// 00406725  57                   push edi
// 00406726  8bcb                 mov ecx, ebx
// 00406728  e873e2ffff           call 0x4049a0
// 0040672d  8bf0                 mov esi, eax
// 0040672f  85f6                 test esi, esi
// 00406731  0f8cb2040000         jl 0x406be9
// 00406737  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0040673f  803f7b               cmp byte ptr [edi], 0x7b
// 00406742  753f                 jne 0x406783
// 00406744  57                   push edi
// 00406745  ff15a821b200         call dword ptr [0xb221a8]
// 0040674b  83f801               cmp eax, 1
// 0040674e  7533                 jne 0x406783
// 00406750  8b8c2468110000       mov ecx, dword ptr [esp + 0x1168]
// 00406757  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040675b  6a00                 push 0
// 0040675d  51                   push ecx
// 0040675e  52                   push edx
// 0040675f  57                   push edi
// 00406760  8bcb                 mov ecx, ebx
// 00406762  e889feffff           call 0x4065f0
// 00406767  8bf0                 mov esi, eax
// 00406769  85f6                 test esi, esi
// 0040676b  0f8cda040000         jl 0x406c4b
// 00406771  57                   push edi
// 00406772  8bcb                 mov ecx, ebx
// 00406774  e867e0ffff           call 0x4047e0
// 00406779  8bf0                 mov esi, eax
// 0040677b  85f6                 test esi, esi
// 0040677d  0f8cc8040000         jl 0x406c4b
// 00406783  803f7d               cmp byte ptr [edi], 0x7d
// 00406786  0f85d4feffff         jne 0x406660
// 0040678c  e9ba040000           jmp 0x406c4b
// 00406791  89742420             mov dword ptr [esp + 0x20], esi
// 00406795  eb02                 jmp 0x406799
// 00406797  33f6                 xor esi, esi
// 00406799  68cc35b400           push 0xb435cc
// 0040679e  57                   push edi
// 0040679f  ff15a421b200         call dword ptr [0xb221a4]
// 004067a5  85c0                 test eax, eax
// 004067a7  7518                 jne 0x4067c1
// 004067a9  57                   push edi
// 004067aa  8bcb                 mov ecx, ebx
// 004067ac  89442428             mov dword ptr [esp + 0x28], eax
// 004067b0  e82be0ffff           call 0x4047e0
// 004067b5  8bf0                 mov esi, eax
// 004067b7  85f6                 test esi, esi
// 004067b9  0f8c8c040000         jl 0x406c4b
// 004067bf  33f6                 xor esi, esi
// 004067c1  68e435b400           push 0xb435e4
// 004067c6  57                   push edi
// 004067c7  ff15a421b200         call dword ptr [0xb221a4]
// 004067cd  85c0                 test eax, eax
// 004067cf  0f8508010000         jne 0x4068dd
// 004067d5  8d942450010000       lea edx, [esp + 0x150]
// 004067dc  52                   push edx
// 004067dd  8bcb                 mov ecx, ebx
// 004067df  e8fcdfffff           call 0x4047e0
// 004067e4  8bf0                 mov esi, eax
// 004067e6  85f6                 test esi, esi
// 004067e8  0f8c5d040000         jl 0x406c4b
// 004067ee  57                   push edi
// 004067ef  8bcb                 mov ecx, ebx
// 004067f1  e8eadfffff           call 0x4047e0
// 004067f6  8bf0                 mov esi, eax
// 004067f8  85f6                 test esi, esi
// 004067fa  0f8c4b040000         jl 0x406c4b
// 00406800  803f3d               cmp byte ptr [edi], 0x3d
// 00406803  0f85d0030000         jne 0x406bd9
// 00406809  33ed                 xor ebp, ebp
// 0040680b  39ac2468110000       cmp dword ptr [esp + 0x1168], ebp
// 00406812  744f                 je 0x406863
// 00406814  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 0040681b  57                   push edi
// 0040681c  8d8c2454010000       lea ecx, [esp + 0x154]
// 00406823  51                   push ecx
// 00406824  8d542438             lea edx, [esp + 0x38]
// 00406828  52                   push edx
// 00406829  8bcb                 mov ecx, ebx
// 0040682b  c684246411000001     mov byte ptr [esp + 0x1164], 1
// 00406833  8944243c             mov dword ptr [esp + 0x3c], eax
// 00406837  896c2440             mov dword ptr [esp + 0x40], ebp
// 0040683b  e800faffff           call 0x406240
// 00406840  8bf0                 mov esi, eax
// 00406842  3bf5                 cmp esi, ebp
// 00406844  896c2430             mov dword ptr [esp + 0x30], ebp
// 00406848  896c2434             mov dword ptr [esp + 0x34], ebp
// 0040684c  0f8c9d030000         jl 0x406bef
// 00406852  c684245811000000     mov byte ptr [esp + 0x1158], 0
// 0040685a  896c2434             mov dword ptr [esp + 0x34], ebp
// 0040685e  e9dcfeffff           jmp 0x40673f
// 00406863  39ac246c110000       cmp dword ptr [esp + 0x116c], ebp
// 0040686a  7560                 jne 0x4068cc
// 0040686c  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00406870  745a                 je 0x4068cc
// 00406872  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00406879  6806000200           push 0x20006
// 0040687e  55                   push ebp
// 0040687f  50                   push eax
// 00406880  8d4c2434             lea ecx, [esp + 0x34]
// 00406884  896c2434             mov dword ptr [esp + 0x34], ebp
// 00406888  896c2438             mov dword ptr [esp + 0x38], ebp
// 0040688c  e86fdbffff           call 0x404400
// 00406891  3bc5                 cmp eax, ebp
// 00406893  0f856a030000         jne 0x406c03
// 00406899  8b742428             mov esi, dword ptr [esp + 0x28]
// 0040689d  8d8c2450010000       lea ecx, [esp + 0x150]
// 004068a4  51                   push ecx
// 004068a5  56                   push esi
// 004068a6  ff155020b200         call dword ptr [0xb22050]
// 004068ac  3bc5                 cmp eax, ebp
// 004068ae  7409                 je 0x4068b9
// 004068b0  83f802               cmp eax, 2
// 004068b3  0f854a030000         jne 0x406c03
// 004068b9  3bf5                 cmp esi, ebp
// 004068bb  740b                 je 0x4068c8
// 004068bd  56                   push esi
// 004068be  ff150420b200         call dword ptr [0xb22004]
// 004068c4  896c2428             mov dword ptr [esp + 0x28], ebp
// 004068c8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004068cc  57                   push edi
// 004068cd  8bcb                 mov ecx, ebx
// 004068cf  e8cce0ffff           call 0x4049a0
// 004068d4  8bf0                 mov esi, eax
// 004068d6  3bf5                 cmp esi, ebp
// 004068d8  e9a0feffff           jmp 0x40677d
// 004068dd  8a0f                 mov cl, byte ptr [edi]
// 004068df  8bc7                 mov eax, edi
// 004068e1  84c9                 test cl, cl
// 004068e3  741c                 je 0x406901
// 004068e5  80f95c               cmp cl, 0x5c
// 004068e8  740f                 je 0x4068f9
// 004068ea  50                   push eax
// 004068eb  ff15183cb200         call dword ptr [0xb23c18]
// 004068f1  8a08                 mov cl, byte ptr [eax]
// 004068f3  84c9                 test cl, cl
// 004068f5  75ee                 jne 0x4068e5
// 004068f7  eb08                 jmp 0x406901
// 004068f9  3bc6                 cmp eax, esi
// 004068fb  0f85d8020000         jne 0x406bd9
// 00406901  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 00406908  0f84f0000000         je 0x4069fe
// 0040690e  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00406915  8d542418             lea edx, [esp + 0x18]
// 00406919  52                   push edx
// 0040691a  681f000200           push 0x2001f
// 0040691f  56                   push esi
// 00406920  57                   push edi
// 00406921  50                   push eax
// 00406922  8974242c             mov dword ptr [esp + 0x2c], esi
// 00406926  ff150c20b200         call dword ptr [0xb2200c]
// 0040692c  3bc6                 cmp eax, esi
// 0040692e  7521                 jne 0x406951
// 00406930  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00406934  33c0                 xor eax, eax
// 00406936  3bce                 cmp ecx, esi
// 00406938  7407                 je 0x406941
// 0040693a  51                   push ecx
// 0040693b  ff150420b200         call dword ptr [0xb22004]
// 00406941  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00406945  894c2410             mov dword ptr [esp + 0x10], ecx
// 00406949  89742414             mov dword ptr [esp + 0x14], esi
// 0040694d  3bc6                 cmp eax, esi
// 0040694f  7474                 je 0x4069c5
// 00406951  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00406958  6819000200           push 0x20019
// 0040695d  57                   push edi
// 0040695e  52                   push edx
// 0040695f  8d4c241c             lea ecx, [esp + 0x1c]
// 00406963  e898daffff           call 0x404400
// 00406968  85c0                 test eax, eax
// 0040696a  7459                 je 0x4069c5
// 0040696c  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00406973  8d442448             lea eax, [esp + 0x48]
// 00406977  50                   push eax
// 00406978  33ed                 xor ebp, ebp
// 0040697a  8d4c241c             lea ecx, [esp + 0x1c]
// 0040697e  51                   push ecx
// 0040697f  55                   push ebp
// 00406980  681f000200           push 0x2001f
// 00406985  55                   push ebp
// 00406986  55                   push ebp
// 00406987  55                   push ebp
// 00406988  57                   push edi
// 00406989  52                   push edx
// 0040698a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0040698e  ff150820b200         call dword ptr [0xb22008]
// 00406994  8bf0                 mov esi, eax
// 00406996  3bf5                 cmp esi, ebp
// 00406998  0f8571020000         jne 0x406c0f
// 0040699e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004069a2  33c0                 xor eax, eax
// 004069a4  3bcd                 cmp ecx, ebp
// 004069a6  7407                 je 0x4069af
// 004069a8  51                   push ecx
// 004069a9  ff150420b200         call dword ptr [0xb22004]
// 004069af  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004069b3  8bf0                 mov esi, eax
// 004069b5  894c2410             mov dword ptr [esp + 0x10], ecx
// 004069b9  896c2414             mov dword ptr [esp + 0x14], ebp
// 004069bd  3bc5                 cmp eax, ebp
// 004069bf  0f854a020000         jne 0x406c0f
// 004069c5  57                   push edi
// 004069c6  8bcb                 mov ecx, ebx
// 004069c8  e813deffff           call 0x4047e0
// 004069cd  8bf0                 mov esi, eax
// 004069cf  85f6                 test esi, esi
// 004069d1  0f8c74020000         jl 0x406c4b
// 004069d7  803f3d               cmp byte ptr [edi], 0x3d
// 004069da  0f855ffdffff         jne 0x40673f
// 004069e0  57                   push edi
// 004069e1  6a00                 push 0
// 004069e3  8d542418             lea edx, [esp + 0x18]
// 004069e7  52                   push edx
// 004069e8  8bcb                 mov ecx, ebx
// 004069ea  e851f8ffff           call 0x406240
// 004069ef  8bf0                 mov esi, eax
// 004069f1  85f6                 test esi, esi
// 004069f3  0f8c52020000         jl 0x406c4b
// 004069f9  e941fdffff           jmp 0x40673f
// 004069fe  39b4246c110000       cmp dword ptr [esp + 0x116c], esi
// 00406a05  0f85e8000000         jne 0x406af3
// 00406a0b  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00406a12  6819000200           push 0x20019
// 00406a17  57                   push edi
// 00406a18  50                   push eax
// 00406a19  8d4c241c             lea ecx, [esp + 0x1c]
// 00406a1d  e8ded9ffff           call 0x404400
// 00406a22  8be8                 mov ebp, eax
// 00406a24  896c2418             mov dword ptr [esp + 0x18], ebp
// 00406a28  3bee                 cmp ebp, esi
// 00406a2a  740b                 je 0x406a37
// 00406a2c  c784246c11000001000000 mov dword ptr [esp + 0x116c], 1
// 00406a37  6aff                 push -1
// 00406a39  57                   push edi
// 00406a3a  8d4c2454             lea ecx, [esp + 0x54]
// 00406a3e  6804010000           push 0x104
// 00406a43  51                   push ecx
// 00406a44  ff15f029b200         call dword ptr [0xb229f0]
// 00406a4a  50                   push eax
// 00406a4b  e8d0d5ffff           call 0x404020
// 00406a50  83c414               add esp, 0x14
// 00406a53  57                   push edi
// 00406a54  8bcb                 mov ecx, ebx
// 00406a56  e885ddffff           call 0x4047e0
// 00406a5b  8bf0                 mov esi, eax
// 00406a5d  85f6                 test esi, esi
// 00406a5f  0f8ce6010000         jl 0x406c4b
// 00406a65  57                   push edi
// 00406a66  8bcb                 mov ecx, ebx
// 00406a68  e833dfffff           call 0x4049a0
// 00406a6d  8bf0                 mov esi, eax
// 00406a6f  85f6                 test esi, esi
// 00406a71  0f8cd4010000         jl 0x406c4b
// 00406a77  803f7b               cmp byte ptr [edi], 0x7b
// 00406a7a  7547                 jne 0x406ac3
// 00406a7c  57                   push edi
// 00406a7d  ff15a821b200         call dword ptr [0xb221a8]
// 00406a83  83f801               cmp eax, 1
// 00406a86  753b                 jne 0x406ac3
// 00406a88  8bac246c110000       mov ebp, dword ptr [esp + 0x116c]
// 00406a8f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00406a93  55                   push ebp
// 00406a94  6a00                 push 0
// 00406a96  52                   push edx
// 00406a97  57                   push edi
// 00406a98  8bcb                 mov ecx, ebx
// 00406a9a  e851fbffff           call 0x4065f0
// 00406a9f  8bf0                 mov esi, eax
// 00406aa1  85f6                 test esi, esi
// 00406aa3  7d08                 jge 0x406aad
// 00406aa5  85ed                 test ebp, ebp
// 00406aa7  0f849e010000         je 0x406c4b
// 00406aad  57                   push edi
// 00406aae  8bcb                 mov ecx, ebx
// 00406ab0  e82bddffff           call 0x4047e0
// 00406ab5  8bf0                 mov esi, eax
// 00406ab7  85f6                 test esi, esi
// 00406ab9  0f8c8c010000         jl 0x406c4b
// 00406abf  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00406ac3  8b442444             mov eax, dword ptr [esp + 0x44]
// 00406ac7  8984246c110000       mov dword ptr [esp + 0x116c], eax
// 00406ace  83fd02               cmp ebp, 2
// 00406ad1  0f84acfcffff         je 0x406783
// 00406ad7  85ed                 test ebp, ebp
// 00406ad9  7429                 je 0x406b04
// 00406adb  85c0                 test eax, eax
// 00406add  0f85a0fcffff         jne 0x406783
// 00406ae3  55                   push ebp
// 00406ae4  e8c7d7ffff           call 0x4042b0
// 00406ae9  83c404               add esp, 4
// 00406aec  8bf0                 mov esi, eax
// 00406aee  e958010000           jmp 0x406c4b
// 00406af3  c744241802000000     mov dword ptr [esp + 0x18], 2
// 00406afb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00406aff  e928ffffff           jmp 0x406a2c
// 00406b04  85c0                 test eax, eax
// 00406b06  7442                 je 0x406b4a
// 00406b08  8b442410             mov eax, dword ptr [esp + 0x10]
// 00406b0c  50                   push eax
// 00406b0d  8bcb                 mov ecx, ebx
// 00406b0f  e83cdeffff           call 0x404950
// 00406b14  85c0                 test eax, eax
// 00406b16  7432                 je 0x406b4a
// 00406b18  8d4c244c             lea ecx, [esp + 0x4c]
// 00406b1c  51                   push ecx
// 00406b1d  8bcb                 mov ecx, ebx
// 00406b1f  e8ecddffff           call 0x404910
// 00406b24  85c0                 test eax, eax
// 00406b26  0f8457fcffff         je 0x406783
// 00406b2c  837c242400           cmp dword ptr [esp + 0x24], 0
// 00406b31  0f844cfcffff         je 0x406783
// 00406b37  8d54244c             lea edx, [esp + 0x4c]
// 00406b3b  52                   push edx
// 00406b3c  8d4c2414             lea ecx, [esp + 0x14]
// 00406b40  e82be4ffff           call 0x404f70
// 00406b45  e939fcffff           jmp 0x406783
// 00406b4a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00406b4e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00406b52  50                   push eax
// 00406b53  e8f8ddffff           call 0x404950
// 00406b58  33ed                 xor ebp, ebp
// 00406b5a  8bd8                 mov ebx, eax
// 00406b5c  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00406b60  7415                 je 0x406b77
// 00406b62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00406b66  51                   push ecx
// 00406b67  ff150420b200         call dword ptr [0xb22004]
// 00406b6d  8be8                 mov ebp, eax
// 00406b6f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00406b77  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00406b7f  85ed                 test ebp, ebp
// 00406b81  0f859c000000         jne 0x406c23
// 00406b87  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00406b8b  0f84f2fbffff         je 0x406783
// 00406b91  85db                 test ebx, ebx
// 00406b93  0f85eafbffff         jne 0x406783
// 00406b99  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00406ba0  8d44244c             lea eax, [esp + 0x4c]
// 00406ba4  50                   push eax
// 00406ba5  8d4c243c             lea ecx, [esp + 0x3c]
// 00406ba9  8954243c             mov dword ptr [esp + 0x3c], edx
// 00406bad  895c2440             mov dword ptr [esp + 0x40], ebx
// 00406bb1  e8bad7ffff           call 0x404370
// 00406bb6  895c2438             mov dword ptr [esp + 0x38], ebx
// 00406bba  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00406bbe  3bc3                 cmp eax, ebx
// 00406bc0  7575                 jne 0x406c37
// 00406bc2  8d4c2438             lea ecx, [esp + 0x38]
// 00406bc6  e885e3ffff           call 0x404f50
// 00406bcb  e9b3fbffff           jmp 0x406783
// 00406bd0  8d4c241c             lea ecx, [esp + 0x1c]
// 00406bd4  e877e3ffff           call 0x404f50
// 00406bd9  8d4c2410             lea ecx, [esp + 0x10]
// 00406bdd  e86ee3ffff           call 0x404f50
// 00406be2  b809000280           mov eax, 0x80020009
// 00406be7  eb73                 jmp 0x406c5c
// 00406be9  8d4c241c             lea ecx, [esp + 0x1c]
// 00406bed  eb57                 jmp 0x406c46
// 00406bef  8d4c2430             lea ecx, [esp + 0x30]
// 00406bf3  e858e3ffff           call 0x404f50
// 00406bf8  8d4c2410             lea ecx, [esp + 0x10]
// 00406bfc  e84fe3ffff           call 0x404f50
// 00406c01  eb57                 jmp 0x406c5a
// 00406c03  50                   push eax
// 00406c04  e8a7d6ffff           call 0x4042b0
// 00406c09  8d4c242c             lea ecx, [esp + 0x2c]
// 00406c0d  eb32                 jmp 0x406c41
// 00406c0f  8d4c2410             lea ecx, [esp + 0x10]
// 00406c13  e838e3ffff           call 0x404f50
// 00406c18  56                   push esi
// 00406c19  e892d6ffff           call 0x4042b0
// 00406c1e  83c404               add esp, 4
// 00406c21  eb39                 jmp 0x406c5c
// 00406c23  8d4c2410             lea ecx, [esp + 0x10]
// 00406c27  e824e3ffff           call 0x404f50
// 00406c2c  55                   push ebp
// 00406c2d  e87ed6ffff           call 0x4042b0
// 00406c32  83c404               add esp, 4
// 00406c35  eb25                 jmp 0x406c5c
// 00406c37  50                   push eax
// 00406c38  e873d6ffff           call 0x4042b0
// 00406c3d  8d4c243c             lea ecx, [esp + 0x3c]
// 00406c41  83c404               add esp, 4
// 00406c44  8bf0                 mov esi, eax
// 00406c46  e805e3ffff           call 0x404f50
// 00406c4b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00406c4f  85c0                 test eax, eax
// 00406c51  7407                 je 0x406c5a
// 00406c53  50                   push eax
// 00406c54  ff150420b200         call dword ptr [0xb22004]
// 00406c5a  8bc6                 mov eax, esi
// 00406c5c  8b8c2450110000       mov ecx, dword ptr [esp + 0x1150]
// 00406c63  5f                   pop edi
// 00406c64  5e                   pop esi
// 00406c65  5d                   pop ebp
// 00406c66  5b                   pop ebx
// 00406c67  64890d00000000       mov dword ptr fs:[0], ecx
// 00406c6e  81c44c110000         add esp, 0x114c
// 00406c74  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterSubkeys@CRegParser@ATL@@IAEJPADPAUHKEY__@@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp