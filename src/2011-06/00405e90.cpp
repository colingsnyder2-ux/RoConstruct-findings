// roc 2011-06 00405e90  unit: ATL::CRegObject  size: 1671 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00405e90
//
// 00405e90  6aff                 push -1
// 00405e92  6866d29c00           push 0x9cd266
// 00405e97  64a100000000         mov eax, dword ptr fs:[0]
// 00405e9d  50                   push eax
// 00405e9e  b840110000           mov eax, 0x1140
// 00405ea3  64892500000000       mov dword ptr fs:[0], esp
// 00405eaa  e8a1534000           call 0x80b250
// 00405eaf  53                   push ebx
// 00405eb0  55                   push ebp
// 00405eb1  33ed                 xor ebp, ebp
// 00405eb3  56                   push esi
// 00405eb4  8bd9                 mov ebx, ecx
// 00405eb6  57                   push edi
// 00405eb7  895c2440             mov dword ptr [esp + 0x40], ebx
// 00405ebb  896c2410             mov dword ptr [esp + 0x10], ebp
// 00405ebf  896c2414             mov dword ptr [esp + 0x14], ebp
// 00405ec3  8b84246c110000       mov eax, dword ptr [esp + 0x116c]
// 00405eca  8bbc2460110000       mov edi, dword ptr [esp + 0x1160]
// 00405ed1  57                   push edi
// 00405ed2  89ac245c110000       mov dword ptr [esp + 0x115c], ebp
// 00405ed9  89442448             mov dword ptr [esp + 0x48], eax
// 00405edd  e8aeddffff           call 0x403c90
// 00405ee2  8bf0                 mov esi, eax
// 00405ee4  3bf5                 cmp esi, ebp
// 00405ee6  0f8c10060000         jl 0x4064fc
// 00405eec  803f7d               cmp byte ptr [edi], 0x7d
// 00405eef  0f8405060000         je 0x4064fa
// 00405ef5  eb0d                 jmp 0x405f04
// 00405ef7  eb07                 jmp 0x405f00
// 00405ef9  8da42400000000       lea esp, [esp]
// 00405f00  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00405f04  8b355403a400         mov esi, dword ptr [0xa40354]
// 00405f0a  6898b7a500           push 0xa5b798
// 00405f0f  57                   push edi
// 00405f10  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00405f18  ffd6                 call esi
// 00405f1a  8be8                 mov ebp, eax
// 00405f1c  f7dd                 neg ebp
// 00405f1e  68acb7a500           push 0xa5b7ac
// 00405f23  1bed                 sbb ebp, ebp
// 00405f25  57                   push edi
// 00405f26  45                   inc ebp
// 00405f27  ffd6                 call esi
// 00405f29  85c0                 test eax, eax
// 00405f2b  7408                 je 0x405f35
// 00405f2d  85ed                 test ebp, ebp
// 00405f2f  0f8402010000         je 0x406037
// 00405f35  57                   push edi
// 00405f36  8bcb                 mov ecx, ebx
// 00405f38  e853ddffff           call 0x403c90
// 00405f3d  8bf0                 mov esi, eax
// 00405f3f  85f6                 test esi, esi
// 00405f41  0f8ca4050000         jl 0x4064eb
// 00405f47  33f6                 xor esi, esi
// 00405f49  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 00405f50  0f84e3000000         je 0x406039
// 00405f56  8a0f                 mov cl, byte ptr [edi]
// 00405f58  8974241c             mov dword ptr [esp + 0x1c], esi
// 00405f5c  89742420             mov dword ptr [esp + 0x20], esi
// 00405f60  8bc7                 mov eax, edi
// 00405f62  84c9                 test cl, cl
// 00405f64  741c                 je 0x405f82
// 00405f66  80f95c               cmp cl, 0x5c
// 00405f69  740f                 je 0x405f7a
// 00405f6b  50                   push eax
// 00405f6c  ff15d419a400         call dword ptr [0xa419d4]
// 00405f72  8a08                 mov cl, byte ptr [eax]
// 00405f74  84c9                 test cl, cl
// 00405f76  75ee                 jne 0x405f66
// 00405f78  eb08                 jmp 0x405f82
// 00405f7a  3bc6                 cmp eax, esi
// 00405f7c  0f85ee040000         jne 0x406470
// 00405f82  57                   push edi
// 00405f83  8bcb                 mov ecx, ebx
// 00405f85  e836deffff           call 0x403dc0
// 00405f8a  85c0                 test eax, eax
// 00405f8c  7421                 je 0x405faf
// 00405f8e  8b8c2464110000       mov ecx, dword ptr [esp + 0x1164]
// 00405f95  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00405f99  57                   push edi
// 00405f9a  8d4c2420             lea ecx, [esp + 0x20]
// 00405f9e  89742424             mov dword ptr [esp + 0x24], esi
// 00405fa2  e849e9ffff           call 0x4048f0
// 00405fa7  8974241c             mov dword ptr [esp + 0x1c], esi
// 00405fab  89742420             mov dword ptr [esp + 0x20], esi
// 00405faf  3bee                 cmp ebp, esi
// 00405fb1  747e                 je 0x406031
// 00405fb3  57                   push edi
// 00405fb4  8bcb                 mov ecx, ebx
// 00405fb6  e8d5dcffff           call 0x403c90
// 00405fbb  8bf0                 mov esi, eax
// 00405fbd  85f6                 test esi, esi
// 00405fbf  0f8cc4040000         jl 0x406489
// 00405fc5  57                   push edi
// 00405fc6  8bcb                 mov ecx, ebx
// 00405fc8  e883deffff           call 0x403e50
// 00405fcd  8bf0                 mov esi, eax
// 00405fcf  85f6                 test esi, esi
// 00405fd1  0f8cb2040000         jl 0x406489
// 00405fd7  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00405fdf  803f7b               cmp byte ptr [edi], 0x7b
// 00405fe2  753f                 jne 0x406023
// 00405fe4  57                   push edi
// 00405fe5  ff156403a400         call dword ptr [0xa40364]
// 00405feb  83f801               cmp eax, 1
// 00405fee  7533                 jne 0x406023
// 00405ff0  8b8c2468110000       mov ecx, dword ptr [esp + 0x1168]
// 00405ff7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00405ffb  6a00                 push 0
// 00405ffd  51                   push ecx
// 00405ffe  52                   push edx
// 00405fff  57                   push edi
// 00406000  8bcb                 mov ecx, ebx
// 00406002  e889feffff           call 0x405e90
// 00406007  8bf0                 mov esi, eax
// 00406009  85f6                 test esi, esi
// 0040600b  0f8cda040000         jl 0x4064eb
// 00406011  57                   push edi
// 00406012  8bcb                 mov ecx, ebx
// 00406014  e877dcffff           call 0x403c90
// 00406019  8bf0                 mov esi, eax
// 0040601b  85f6                 test esi, esi
// 0040601d  0f8cc8040000         jl 0x4064eb
// 00406023  803f7d               cmp byte ptr [edi], 0x7d
// 00406026  0f85d4feffff         jne 0x405f00
// 0040602c  e9ba040000           jmp 0x4064eb
// 00406031  89742420             mov dword ptr [esp + 0x20], esi
// 00406035  eb02                 jmp 0x406039
// 00406037  33f6                 xor esi, esi
// 00406039  68a0b7a500           push 0xa5b7a0
// 0040603e  57                   push edi
// 0040603f  ff155403a400         call dword ptr [0xa40354]
// 00406045  85c0                 test eax, eax
// 00406047  7518                 jne 0x406061
// 00406049  57                   push edi
// 0040604a  8bcb                 mov ecx, ebx
// 0040604c  89442428             mov dword ptr [esp + 0x28], eax
// 00406050  e83bdcffff           call 0x403c90
// 00406055  8bf0                 mov esi, eax
// 00406057  85f6                 test esi, esi
// 00406059  0f8c8c040000         jl 0x4064eb
// 0040605f  33f6                 xor esi, esi
// 00406061  68b8b7a500           push 0xa5b7b8
// 00406066  57                   push edi
// 00406067  ff155403a400         call dword ptr [0xa40354]
// 0040606d  85c0                 test eax, eax
// 0040606f  0f8508010000         jne 0x40617d
// 00406075  8d942450010000       lea edx, [esp + 0x150]
// 0040607c  52                   push edx
// 0040607d  8bcb                 mov ecx, ebx
// 0040607f  e80cdcffff           call 0x403c90
// 00406084  8bf0                 mov esi, eax
// 00406086  85f6                 test esi, esi
// 00406088  0f8c5d040000         jl 0x4064eb
// 0040608e  57                   push edi
// 0040608f  8bcb                 mov ecx, ebx
// 00406091  e8fadbffff           call 0x403c90
// 00406096  8bf0                 mov esi, eax
// 00406098  85f6                 test esi, esi
// 0040609a  0f8c4b040000         jl 0x4064eb
// 004060a0  803f3d               cmp byte ptr [edi], 0x3d
// 004060a3  0f85d0030000         jne 0x406479
// 004060a9  33ed                 xor ebp, ebp
// 004060ab  39ac2468110000       cmp dword ptr [esp + 0x1168], ebp
// 004060b2  744f                 je 0x406103
// 004060b4  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 004060bb  57                   push edi
// 004060bc  8d8c2454010000       lea ecx, [esp + 0x154]
// 004060c3  51                   push ecx
// 004060c4  8d542438             lea edx, [esp + 0x38]
// 004060c8  52                   push edx
// 004060c9  8bcb                 mov ecx, ebx
// 004060cb  c684246411000001     mov byte ptr [esp + 0x1164], 1
// 004060d3  8944243c             mov dword ptr [esp + 0x3c], eax
// 004060d7  896c2440             mov dword ptr [esp + 0x40], ebp
// 004060db  e800faffff           call 0x405ae0
// 004060e0  8bf0                 mov esi, eax
// 004060e2  3bf5                 cmp esi, ebp
// 004060e4  896c2430             mov dword ptr [esp + 0x30], ebp
// 004060e8  896c2434             mov dword ptr [esp + 0x34], ebp
// 004060ec  0f8c9d030000         jl 0x40648f
// 004060f2  c684245811000000     mov byte ptr [esp + 0x1158], 0
// 004060fa  896c2434             mov dword ptr [esp + 0x34], ebp
// 004060fe  e9dcfeffff           jmp 0x405fdf
// 00406103  39ac246c110000       cmp dword ptr [esp + 0x116c], ebp
// 0040610a  7560                 jne 0x40616c
// 0040610c  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00406110  745a                 je 0x40616c
// 00406112  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 00406119  6806000200           push 0x20006
// 0040611e  55                   push ebp
// 0040611f  50                   push eax
// 00406120  8d4c2434             lea ecx, [esp + 0x34]
// 00406124  896c2434             mov dword ptr [esp + 0x34], ebp
// 00406128  896c2438             mov dword ptr [esp + 0x38], ebp
// 0040612c  e87fd7ffff           call 0x4038b0
// 00406131  3bc5                 cmp eax, ebp
// 00406133  0f856a030000         jne 0x4064a3
// 00406139  8b742428             mov esi, dword ptr [esp + 0x28]
// 0040613d  8d8c2450010000       lea ecx, [esp + 0x150]
// 00406144  51                   push ecx
// 00406145  56                   push esi
// 00406146  ff155000a400         call dword ptr [0xa40050]
// 0040614c  3bc5                 cmp eax, ebp
// 0040614e  7409                 je 0x406159
// 00406150  83f802               cmp eax, 2
// 00406153  0f854a030000         jne 0x4064a3
// 00406159  3bf5                 cmp esi, ebp
// 0040615b  740b                 je 0x406168
// 0040615d  56                   push esi
// 0040615e  ff150400a400         call dword ptr [0xa40004]
// 00406164  896c2428             mov dword ptr [esp + 0x28], ebp
// 00406168  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0040616c  57                   push edi
// 0040616d  8bcb                 mov ecx, ebx
// 0040616f  e8dcdcffff           call 0x403e50
// 00406174  8bf0                 mov esi, eax
// 00406176  3bf5                 cmp esi, ebp
// 00406178  e9a0feffff           jmp 0x40601d
// 0040617d  8a0f                 mov cl, byte ptr [edi]
// 0040617f  8bc7                 mov eax, edi
// 00406181  84c9                 test cl, cl
// 00406183  741c                 je 0x4061a1
// 00406185  80f95c               cmp cl, 0x5c
// 00406188  740f                 je 0x406199
// 0040618a  50                   push eax
// 0040618b  ff15d419a400         call dword ptr [0xa419d4]
// 00406191  8a08                 mov cl, byte ptr [eax]
// 00406193  84c9                 test cl, cl
// 00406195  75ee                 jne 0x406185
// 00406197  eb08                 jmp 0x4061a1
// 00406199  3bc6                 cmp eax, esi
// 0040619b  0f85d8020000         jne 0x406479
// 004061a1  39b42468110000       cmp dword ptr [esp + 0x1168], esi
// 004061a8  0f84f0000000         je 0x40629e
// 004061ae  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 004061b5  8d542418             lea edx, [esp + 0x18]
// 004061b9  52                   push edx
// 004061ba  681f000200           push 0x2001f
// 004061bf  56                   push esi
// 004061c0  57                   push edi
// 004061c1  50                   push eax
// 004061c2  8974242c             mov dword ptr [esp + 0x2c], esi
// 004061c6  ff154000a400         call dword ptr [0xa40040]
// 004061cc  3bc6                 cmp eax, esi
// 004061ce  7521                 jne 0x4061f1
// 004061d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004061d4  33c0                 xor eax, eax
// 004061d6  3bce                 cmp ecx, esi
// 004061d8  7407                 je 0x4061e1
// 004061da  51                   push ecx
// 004061db  ff150400a400         call dword ptr [0xa40004]
// 004061e1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004061e5  894c2410             mov dword ptr [esp + 0x10], ecx
// 004061e9  89742414             mov dword ptr [esp + 0x14], esi
// 004061ed  3bc6                 cmp eax, esi
// 004061ef  7474                 je 0x406265
// 004061f1  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 004061f8  6819000200           push 0x20019
// 004061fd  57                   push edi
// 004061fe  52                   push edx
// 004061ff  8d4c241c             lea ecx, [esp + 0x1c]
// 00406203  e8a8d6ffff           call 0x4038b0
// 00406208  85c0                 test eax, eax
// 0040620a  7459                 je 0x406265
// 0040620c  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00406213  8d442448             lea eax, [esp + 0x48]
// 00406217  50                   push eax
// 00406218  33ed                 xor ebp, ebp
// 0040621a  8d4c241c             lea ecx, [esp + 0x1c]
// 0040621e  51                   push ecx
// 0040621f  55                   push ebp
// 00406220  681f000200           push 0x2001f
// 00406225  55                   push ebp
// 00406226  55                   push ebp
// 00406227  55                   push ebp
// 00406228  57                   push edi
// 00406229  52                   push edx
// 0040622a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0040622e  ff153c00a400         call dword ptr [0xa4003c]
// 00406234  8bf0                 mov esi, eax
// 00406236  3bf5                 cmp esi, ebp
// 00406238  0f8571020000         jne 0x4064af
// 0040623e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00406242  33c0                 xor eax, eax
// 00406244  3bcd                 cmp ecx, ebp
// 00406246  7407                 je 0x40624f
// 00406248  51                   push ecx
// 00406249  ff150400a400         call dword ptr [0xa40004]
// 0040624f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00406253  8bf0                 mov esi, eax
// 00406255  894c2410             mov dword ptr [esp + 0x10], ecx
// 00406259  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040625d  3bc5                 cmp eax, ebp
// 0040625f  0f854a020000         jne 0x4064af
// 00406265  57                   push edi
// 00406266  8bcb                 mov ecx, ebx
// 00406268  e823daffff           call 0x403c90
// 0040626d  8bf0                 mov esi, eax
// 0040626f  85f6                 test esi, esi
// 00406271  0f8c74020000         jl 0x4064eb
// 00406277  803f3d               cmp byte ptr [edi], 0x3d
// 0040627a  0f855ffdffff         jne 0x405fdf
// 00406280  57                   push edi
// 00406281  6a00                 push 0
// 00406283  8d542418             lea edx, [esp + 0x18]
// 00406287  52                   push edx
// 00406288  8bcb                 mov ecx, ebx
// 0040628a  e851f8ffff           call 0x405ae0
// 0040628f  8bf0                 mov esi, eax
// 00406291  85f6                 test esi, esi
// 00406293  0f8c52020000         jl 0x4064eb
// 00406299  e941fdffff           jmp 0x405fdf
// 0040629e  39b4246c110000       cmp dword ptr [esp + 0x116c], esi
// 004062a5  0f85e8000000         jne 0x406393
// 004062ab  8b842464110000       mov eax, dword ptr [esp + 0x1164]
// 004062b2  6819000200           push 0x20019
// 004062b7  57                   push edi
// 004062b8  50                   push eax
// 004062b9  8d4c241c             lea ecx, [esp + 0x1c]
// 004062bd  e8eed5ffff           call 0x4038b0
// 004062c2  8be8                 mov ebp, eax
// 004062c4  896c2418             mov dword ptr [esp + 0x18], ebp
// 004062c8  3bee                 cmp ebp, esi
// 004062ca  740b                 je 0x4062d7
// 004062cc  c784246c11000001000000 mov dword ptr [esp + 0x116c], 1
// 004062d7  6aff                 push -1
// 004062d9  57                   push edi
// 004062da  8d4c2454             lea ecx, [esp + 0x54]
// 004062de  6804010000           push 0x104
// 004062e3  51                   push ecx
// 004062e4  ff154c0aa400         call dword ptr [0xa40a4c]
// 004062ea  50                   push eax
// 004062eb  e820d1ffff           call 0x403410
// 004062f0  83c414               add esp, 0x14
// 004062f3  57                   push edi
// 004062f4  8bcb                 mov ecx, ebx
// 004062f6  e895d9ffff           call 0x403c90
// 004062fb  8bf0                 mov esi, eax
// 004062fd  85f6                 test esi, esi
// 004062ff  0f8ce6010000         jl 0x4064eb
// 00406305  57                   push edi
// 00406306  8bcb                 mov ecx, ebx
// 00406308  e843dbffff           call 0x403e50
// 0040630d  8bf0                 mov esi, eax
// 0040630f  85f6                 test esi, esi
// 00406311  0f8cd4010000         jl 0x4064eb
// 00406317  803f7b               cmp byte ptr [edi], 0x7b
// 0040631a  7547                 jne 0x406363
// 0040631c  57                   push edi
// 0040631d  ff156403a400         call dword ptr [0xa40364]
// 00406323  83f801               cmp eax, 1
// 00406326  753b                 jne 0x406363
// 00406328  8bac246c110000       mov ebp, dword ptr [esp + 0x116c]
// 0040632f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00406333  55                   push ebp
// 00406334  6a00                 push 0
// 00406336  52                   push edx
// 00406337  57                   push edi
// 00406338  8bcb                 mov ecx, ebx
// 0040633a  e851fbffff           call 0x405e90
// 0040633f  8bf0                 mov esi, eax
// 00406341  85f6                 test esi, esi
// 00406343  7d08                 jge 0x40634d
// 00406345  85ed                 test ebp, ebp
// 00406347  0f849e010000         je 0x4064eb
// 0040634d  57                   push edi
// 0040634e  8bcb                 mov ecx, ebx
// 00406350  e83bd9ffff           call 0x403c90
// 00406355  8bf0                 mov esi, eax
// 00406357  85f6                 test esi, esi
// 00406359  0f8c8c010000         jl 0x4064eb
// 0040635f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00406363  8b442444             mov eax, dword ptr [esp + 0x44]
// 00406367  8984246c110000       mov dword ptr [esp + 0x116c], eax
// 0040636e  83fd02               cmp ebp, 2
// 00406371  0f84acfcffff         je 0x406023
// 00406377  85ed                 test ebp, ebp
// 00406379  7429                 je 0x4063a4
// 0040637b  85c0                 test eax, eax
// 0040637d  0f85a0fcffff         jne 0x406023
// 00406383  55                   push ebp
// 00406384  e817d3ffff           call 0x4036a0
// 00406389  83c404               add esp, 4
// 0040638c  8bf0                 mov esi, eax
// 0040638e  e958010000           jmp 0x4064eb
// 00406393  c744241802000000     mov dword ptr [esp + 0x18], 2
// 0040639b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0040639f  e928ffffff           jmp 0x4062cc
// 004063a4  85c0                 test eax, eax
// 004063a6  7442                 je 0x4063ea
// 004063a8  8b442410             mov eax, dword ptr [esp + 0x10]
// 004063ac  50                   push eax
// 004063ad  8bcb                 mov ecx, ebx
// 004063af  e84cdaffff           call 0x403e00
// 004063b4  85c0                 test eax, eax
// 004063b6  7432                 je 0x4063ea
// 004063b8  8d4c244c             lea ecx, [esp + 0x4c]
// 004063bc  51                   push ecx
// 004063bd  8bcb                 mov ecx, ebx
// 004063bf  e8fcd9ffff           call 0x403dc0
// 004063c4  85c0                 test eax, eax
// 004063c6  0f8457fcffff         je 0x406023
// 004063cc  837c242400           cmp dword ptr [esp + 0x24], 0
// 004063d1  0f844cfcffff         je 0x406023
// 004063d7  8d54244c             lea edx, [esp + 0x4c]
// 004063db  52                   push edx
// 004063dc  8d4c2414             lea ecx, [esp + 0x14]
// 004063e0  e80be5ffff           call 0x4048f0
// 004063e5  e939fcffff           jmp 0x406023
// 004063ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 004063ee  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004063f2  50                   push eax
// 004063f3  e808daffff           call 0x403e00
// 004063f8  33ed                 xor ebp, ebp
// 004063fa  8bd8                 mov ebx, eax
// 004063fc  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00406400  7415                 je 0x406417
// 00406402  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00406406  51                   push ecx
// 00406407  ff150400a400         call dword ptr [0xa40004]
// 0040640d  8be8                 mov ebp, eax
// 0040640f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00406417  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0040641f  85ed                 test ebp, ebp
// 00406421  0f859c000000         jne 0x4064c3
// 00406427  396c2424             cmp dword ptr [esp + 0x24], ebp
// 0040642b  0f84f2fbffff         je 0x406023
// 00406431  85db                 test ebx, ebx
// 00406433  0f85eafbffff         jne 0x406023
// 00406439  8b942464110000       mov edx, dword ptr [esp + 0x1164]
// 00406440  8d44244c             lea eax, [esp + 0x4c]
// 00406444  50                   push eax
// 00406445  8d4c243c             lea ecx, [esp + 0x3c]
// 00406449  8954243c             mov dword ptr [esp + 0x3c], edx
// 0040644d  895c2440             mov dword ptr [esp + 0x40], ebx
// 00406451  e8cad3ffff           call 0x403820
// 00406456  895c2438             mov dword ptr [esp + 0x38], ebx
// 0040645a  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0040645e  3bc3                 cmp eax, ebx
// 00406460  7575                 jne 0x4064d7
// 00406462  8d4c2438             lea ecx, [esp + 0x38]
// 00406466  e865e4ffff           call 0x4048d0
// 0040646b  e9b3fbffff           jmp 0x406023
// 00406470  8d4c241c             lea ecx, [esp + 0x1c]
// 00406474  e857e4ffff           call 0x4048d0
// 00406479  8d4c2410             lea ecx, [esp + 0x10]
// 0040647d  e84ee4ffff           call 0x4048d0
// 00406482  b809000280           mov eax, 0x80020009
// 00406487  eb73                 jmp 0x4064fc
// 00406489  8d4c241c             lea ecx, [esp + 0x1c]
// 0040648d  eb57                 jmp 0x4064e6
// 0040648f  8d4c2430             lea ecx, [esp + 0x30]
// 00406493  e838e4ffff           call 0x4048d0
// 00406498  8d4c2410             lea ecx, [esp + 0x10]
// 0040649c  e82fe4ffff           call 0x4048d0
// 004064a1  eb57                 jmp 0x4064fa
// 004064a3  50                   push eax
// 004064a4  e8f7d1ffff           call 0x4036a0
// 004064a9  8d4c242c             lea ecx, [esp + 0x2c]
// 004064ad  eb32                 jmp 0x4064e1
// 004064af  8d4c2410             lea ecx, [esp + 0x10]
// 004064b3  e818e4ffff           call 0x4048d0
// 004064b8  56                   push esi
// 004064b9  e8e2d1ffff           call 0x4036a0
// 004064be  83c404               add esp, 4
// 004064c1  eb39                 jmp 0x4064fc
// 004064c3  8d4c2410             lea ecx, [esp + 0x10]
// 004064c7  e804e4ffff           call 0x4048d0
// 004064cc  55                   push ebp
// 004064cd  e8ced1ffff           call 0x4036a0
// 004064d2  83c404               add esp, 4
// 004064d5  eb25                 jmp 0x4064fc
// 004064d7  50                   push eax
// 004064d8  e8c3d1ffff           call 0x4036a0
// 004064dd  8d4c243c             lea ecx, [esp + 0x3c]
// 004064e1  83c404               add esp, 4
// 004064e4  8bf0                 mov esi, eax
// 004064e6  e8e5e3ffff           call 0x4048d0
// 004064eb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004064ef  85c0                 test eax, eax
// 004064f1  7407                 je 0x4064fa
// 004064f3  50                   push eax
// 004064f4  ff150400a400         call dword ptr [0xa40004]
// 004064fa  8bc6                 mov eax, esi
// 004064fc  8b8c2450110000       mov ecx, dword ptr [esp + 0x1150]
// 00406503  5f                   pop edi
// 00406504  5e                   pop esi
// 00406505  5d                   pop ebp
// 00406506  5b                   pop ebx
// 00406507  64890d00000000       mov dword ptr fs:[0], ecx
// 0040650e  81c44c110000         add esp, 0x114c
// 00406514  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterSubkeys@CRegParser@ATL@@IAEJPADPAUHKEY__@@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp