// roc 2010-06 00839d10  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 930 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00839d10
//
// 00839d10  83ec38               sub esp, 0x38
// 00839d13  53                   push ebx
// 00839d14  56                   push esi
// 00839d15  57                   push edi
// 00839d16  8bf1                 mov esi, ecx
// 00839d18  e813f7ffff           call 0x839430
// 00839d1d  e8fe9dfaff           call 0x7e3b20
// 00839d22  d905e026a100         fld dword ptr [0xa126e0]
// 00839d28  51                   push ecx
// 00839d29  d91c24               fstp dword ptr [esp]
// 00839d2c  6a10                 push 0x10
// 00839d2e  8bce                 mov ecx, esi
// 00839d30  8bd8                 mov ebx, eax
// 00839d32  8dbe9c040000         lea edi, [esi + 0x49c]
// 00839d38  e8d333f7ff           call 0x7ad110
// 00839d3d  50                   push eax
// 00839d3e  6826020000           push 0x226
// 00839d43  6a0f                 push 0xf
// 00839d45  8bce                 mov ecx, esi
// 00839d47  e8c433f7ff           call 0x7ad110
// 00839d4c  50                   push eax
// 00839d4d  6a05                 push 5
// 00839d4f  8bce                 mov ecx, esi
// 00839d51  e8ba33f7ff           call 0x7ad110
// 00839d56  50                   push eax
// 00839d57  8bcb                 mov ecx, ebx
// 00839d59  e8a294faff           call 0x7e3200
// 00839d5e  50                   push eax
// 00839d5f  8bcf                 mov ecx, edi
// 00839d61  e8aa92faff           call 0x7e3010
// 00839d66  e8b59dfaff           call 0x7e3b20
// 00839d6b  6a00                 push 0
// 00839d6d  8bc8                 mov ecx, eax
// 00839d6f  e8fc96faff           call 0x7e3470
// 00839d74  85c0                 test eax, eax
// 00839d76  7411                 je 0x839d89
// 00839d78  6a0f                 push 0xf
// 00839d7a  8bce                 mov ecx, esi
// 00839d7c  e88f33f7ff           call 0x7ad110
// 00839d81  50                   push eax
// 00839d82  8bcf                 mov ecx, edi
// 00839d84  e8e79cfaff           call 0x7e3a70
// 00839d89  e8929dfaff           call 0x7e3b20
// 00839d8e  8bc8                 mov ecx, eax
// 00839d90  e83b9bfaff           call 0x7e38d0
// 00839d95  83e801               sub eax, 1
// 00839d98  0f846a020000         je 0x83a008
// 00839d9e  83e801               sub eax, 1
// 00839da1  0f8492010000         je 0x839f39
// 00839da7  83e801               sub eax, 1
// 00839daa  0f85f5020000         jne 0x83a0a5
// 00839db0  d90558daa200         fld dword ptr [0xa2da58]
// 00839db6  51                   push ecx
// 00839db7  d91c24               fstp dword ptr [esp]
// 00839dba  689997b500           push 0xb59799
// 00839dbf  68f3f4fa00           push 0xfaf4f3
// 00839dc4  8d8e7c040000         lea ecx, [esi + 0x47c]
// 00839dca  e84192faff           call 0x7e3010
// 00839dcf  d90558daa200         fld dword ptr [0xa2da58]
// 00839dd5  51                   push ecx
// 00839dd6  d91c24               fstp dword ptr [esp]
// 00839dd9  6876749200           push 0x927476
// 00839dde  68b3b2c800           push 0xc8b2b3
// 00839de3  8bcf                 mov ecx, edi
// 00839de5  e82692faff           call 0x7e3010
// 00839dea  d905e026a100         fld dword ptr [0xa126e0]
// 00839df0  51                   push ecx
// 00839df1  d91c24               fstp dword ptr [esp]
// 00839df4  68f3f3f700           push 0xf7f3f3
// 00839df9  68d7d7e500           push 0xe5d7d7
// 00839dfe  8d8e5c040000         lea ecx, [esi + 0x45c]
// 00839e04  e80792faff           call 0x7e3010
// 00839e09  d905e026a100         fld dword ptr [0xa126e0]
// 00839e0f  51                   push ecx
// 00839e10  d91c24               fstp dword ptr [esp]
// 00839e13  688583a200           push 0xa28385
// 00839e18  68d7d7e200           push 0xe2d7d7
// 00839e1d  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00839e23  e8e891faff           call 0x7e3010
// 00839e28  d905e026a100         fld dword ptr [0xa126e0]
// 00839e2e  51                   push ecx
// 00839e2f  d91c24               fstp dword ptr [esp]
// 00839e32  68b0aec500           push 0xc5aeb0
// 00839e37  68e8e8f100           push 0xf1e8e8
// 00839e3c  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00839e42  e8c991faff           call 0x7e3010
// 00839e47  d905e026a100         fld dword ptr [0xa126e0]
// 00839e4d  51                   push ecx
// 00839e4e  d91c24               fstp dword ptr [esp]
// 00839e51  bf7a799900           mov edi, 0x99797a
// 00839e56  57                   push edi
// 00839e57  68f7f5f900           push 0xf9f5f7
// 00839e5c  8d4e28               lea ecx, [esi + 0x28]
// 00839e5f  c786200500007c7c9400 mov dword ptr [esi + 0x520], 0x947c7c
// 00839e69  e8a291faff           call 0x7e3010
// 00839e6e  b88d8d8d00           mov eax, 0x8d8d8d
// 00839e73  898638040000         mov dword ptr [esi + 0x438], eax
// 00839e79  89860c030000         mov dword ptr [esi + 0x30c], eax
// 00839e7f  b84b4b6f00           mov eax, 0x6f4b4b
// 00839e84  89442410             mov dword ptr [esp + 0x10], eax
// 00839e88  89442414             mov dword ptr [esp + 0x14], eax
// 00839e8c  89442418             mov dword ptr [esp + 0x18], eax
// 00839e90  8d44240c             lea eax, [esp + 0xc]
// 00839e94  50                   push eax
// 00839e95  8d4c242c             lea ecx, [esp + 0x2c]
// 00839e99  51                   push ecx
// 00839e9a  6a07                 push 7
// 00839e9c  8bce                 mov ecx, esi
// 00839e9e  c7863c0300006e6d8f00 mov dword ptr [esi + 0x33c], 0x8f6d6e
// 00839ea8  c7863003000054547500 mov dword ptr [esi + 0x330], 0x755454
// 00839eb2  c786d0020000dbdae400 mov dword ptr [esi + 0x2d0], 0xe4dadb
// 00839ebc  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 00839ec6  897e4c               mov dword ptr [esi + 0x4c], edi
// 00839ec9  89be44040000         mov dword ptr [esi + 0x444], edi
// 00839ecf  c74424341f000000     mov dword ptr [esp + 0x34], 0x1f
// 00839ed7  c744243820000000     mov dword ptr [esp + 0x38], 0x20
// 00839edf  c744243c25000000     mov dword ptr [esp + 0x3c], 0x25
// 00839ee7  c744244032000000     mov dword ptr [esp + 0x40], 0x32
// 00839eef  c744244421000000     mov dword ptr [esp + 0x44], 0x21
// 00839ef7  c744244824000000     mov dword ptr [esp + 0x48], 0x24
// 00839eff  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 00839f07  c7442418ffeec200     mov dword ptr [esp + 0x18], 0xc2eeff
// 00839f0f  c7442428fe803e00     mov dword ptr [esp + 0x28], 0x3e80fe
// 00839f17  c744242cffc06f00     mov dword ptr [esp + 0x2c], 0x6fc0ff
// 00839f1f  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00839f27  e81432f7ff           call 0x7ad140
// 00839f2c  5f                   pop edi
// 00839f2d  8bce                 mov ecx, esi
// 00839f2f  5e                   pop esi
// 00839f30  5b                   pop ebx
// 00839f31  83c438               add esp, 0x38
// 00839f34  e907e6ffff           jmp 0x838540
// 00839f39  d90558daa200         fld dword ptr [0xa2da58]
// 00839f3f  51                   push ecx
// 00839f40  d91c24               fstp dword ptr [esp]
// 00839f43  68c0c0a800           push 0xa8c0c0
// 00839f48  8d9e7c040000         lea ebx, [esi + 0x47c]
// 00839f4e  68faf9f500           push 0xf5f9fa
// 00839f53  8bcb                 mov ecx, ebx
// 00839f55  e8b690faff           call 0x7e3010
// 00839f5a  d90558daa200         fld dword ptr [0xa2da58]
// 00839f60  51                   push ecx
// 00839f61  d91c24               fstp dword ptr [esp]
// 00839f64  68b0ac9e00           push 0x9eacb0
// 00839f69  68eeedea00           push 0xeaedee
// 00839f6e  8bcf                 mov ecx, edi
// 00839f70  e89b90faff           call 0x7e3010
// 00839f75  d905e026a100         fld dword ptr [0xa126e0]
// 00839f7b  51                   push ecx
// 00839f7c  d91c24               fstp dword ptr [esp]
// 00839f7f  68f4f1e700           push 0xe7f1f4
// 00839f84  68e5e5d700           push 0xd7e5e5
// 00839f89  8d8e5c040000         lea ecx, [esi + 0x45c]
// 00839f8f  e87c90faff           call 0x7e3010
// 00839f94  68ccc7ba00           push 0xbac7cc
// 00839f99  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00839f9f  c78620050000a3a37c00 mov dword ptr [esi + 0x520], 0x7ca3a3
// 00839fa9  e8c29afaff           call 0x7e3a70
// 00839fae  53                   push ebx
// 00839faf  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00839fb5  e87690faff           call 0x7e3030
// 00839fba  d905e026a100         fld dword ptr [0xa126e0]
// 00839fc0  51                   push ecx
// 00839fc1  d91c24               fstp dword ptr [esp]
// 00839fc4  68aca89900           push 0x99a8ac
// 00839fc9  68ece9d800           push 0xd8e9ec
// 00839fce  8d4e28               lea ecx, [esi + 0x28]
// 00839fd1  e83a90faff           call 0x7e3010
// 00839fd6  b8b6c68d00           mov eax, 0x8dc6b6
// 00839fdb  5f                   pop edi
// 00839fdc  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 00839fe2  c786f402000093a07000 mov dword ptr [esi + 0x2f4], 0x70a093
// 00839fec  898618030000         mov dword ptr [esi + 0x318], eax
// 00839ff2  c7869c030000ffffff00 mov dword ptr [esi + 0x39c], 0xffffff
// 00839ffc  8bce                 mov ecx, esi
// 00839ffe  5e                   pop esi
// 00839fff  5b                   pop ebx
// 0083a000  83c438               add esp, 0x38
// 0083a003  e938e5ffff           jmp 0x838540
// 0083a008  d90558daa200         fld dword ptr [0xa2da58]
// 0083a00e  51                   push ecx
// 0083a00f  d91c24               fstp dword ptr [esp]
// 0083a012  68c0c0a800           push 0xa8c0c0
// 0083a017  8d9e7c040000         lea ebx, [esi + 0x47c]
// 0083a01d  68faf9f500           push 0xf5f9fa
// 0083a022  8bcb                 mov ecx, ebx
// 0083a024  e8e78ffaff           call 0x7e3010
// 0083a029  d90558daa200         fld dword ptr [0xa2da58]
// 0083a02f  51                   push ecx
// 0083a030  d91c24               fstp dword ptr [esp]
// 0083a033  6898987e00           push 0x7e9898
// 0083a038  68eeedea00           push 0xeaedee
// 0083a03d  8bcf                 mov ecx, edi
// 0083a03f  e8cc8ffaff           call 0x7e3010
// 0083a044  d905e026a100         fld dword ptr [0xa126e0]
// 0083a04a  51                   push ecx
// 0083a04b  d91c24               fstp dword ptr [esp]
// 0083a04e  68f4f1e700           push 0xe7f1f4
// 0083a053  68e5e5d700           push 0xd7e5e5
// 0083a058  8d8e5c040000         lea ecx, [esi + 0x45c]
// 0083a05e  e8ad8ffaff           call 0x7e3010
// 0083a063  68ccc7ba00           push 0xbac7cc
// 0083a068  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0083a06e  c78620050000a3a37c00 mov dword ptr [esi + 0x520], 0x7ca3a3
// 0083a078  e8f399faff           call 0x7e3a70
// 0083a07d  53                   push ebx
// 0083a07e  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0083a084  e8a78ffaff           call 0x7e3030
// 0083a089  d905e026a100         fld dword ptr [0xa126e0]
// 0083a08f  51                   push ecx
// 0083a090  d91c24               fstp dword ptr [esp]
// 0083a093  687a799900           push 0x99797a
// 0083a098  68f7f5f900           push 0xf9f5f7
// 0083a09d  8d4e28               lea ecx, [esi + 0x28]
// 0083a0a0  e86b8ffaff           call 0x7e3010
// 0083a0a5  5f                   pop edi
// 0083a0a6  8bce                 mov ecx, esi
// 0083a0a8  5e                   pop esi
// 0083a0a9  5b                   pop ebx
// 0083a0aa  83c438               add esp, 0x38
// 0083a0ad  e98ee4ffff           jmp 0x838540
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?RefreshMetrics@CXTPWhidbeyTheme@XTPPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
