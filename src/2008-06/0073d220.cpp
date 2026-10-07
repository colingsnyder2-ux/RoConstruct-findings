// roc 2008-06 0073d220  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 930 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073d220
//
// 0073d220  83ec38               sub esp, 0x38
// 0073d223  53                   push ebx
// 0073d224  56                   push esi
// 0073d225  57                   push edi
// 0073d226  8bf1                 mov esi, ecx
// 0073d228  e813f7ffff           call 0x73c940
// 0073d22d  e80e2bfaff           call 0x6dfd40
// 0073d232  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d238  51                   push ecx
// 0073d239  d91c24               fstp dword ptr [esp]
// 0073d23c  6a10                 push 0x10
// 0073d23e  8bce                 mov ecx, esi
// 0073d240  8bd8                 mov ebx, eax
// 0073d242  8dbe9c040000         lea edi, [esi + 0x49c]
// 0073d248  e8230ef7ff           call 0x6ae070
// 0073d24d  50                   push eax
// 0073d24e  6826020000           push 0x226
// 0073d253  6a0f                 push 0xf
// 0073d255  8bce                 mov ecx, esi
// 0073d257  e8140ef7ff           call 0x6ae070
// 0073d25c  50                   push eax
// 0073d25d  6a05                 push 5
// 0073d25f  8bce                 mov ecx, esi
// 0073d261  e80a0ef7ff           call 0x6ae070
// 0073d266  50                   push eax
// 0073d267  8bcb                 mov ecx, ebx
// 0073d269  e80222faff           call 0x6df470
// 0073d26e  50                   push eax
// 0073d26f  8bcf                 mov ecx, edi
// 0073d271  e80a20faff           call 0x6df280
// 0073d276  e8c52afaff           call 0x6dfd40
// 0073d27b  6a00                 push 0
// 0073d27d  8bc8                 mov ecx, eax
// 0073d27f  e85c24faff           call 0x6df6e0
// 0073d284  85c0                 test eax, eax
// 0073d286  7411                 je 0x73d299
// 0073d288  6a0f                 push 0xf
// 0073d28a  8bce                 mov ecx, esi
// 0073d28c  e8df0df7ff           call 0x6ae070
// 0073d291  50                   push eax
// 0073d292  8bcf                 mov ecx, edi
// 0073d294  e8f729faff           call 0x6dfc90
// 0073d299  e8a22afaff           call 0x6dfd40
// 0073d29e  8bc8                 mov ecx, eax
// 0073d2a0  e89b28faff           call 0x6dfb40
// 0073d2a5  83e801               sub eax, 1
// 0073d2a8  0f846a020000         je 0x73d518
// 0073d2ae  83e801               sub eax, 1
// 0073d2b1  0f8492010000         je 0x73d449
// 0073d2b7  83e801               sub eax, 1
// 0073d2ba  0f85f5020000         jne 0x73d5b5
// 0073d2c0  d90540f88200         fld dword ptr [0x82f840]
// 0073d2c6  51                   push ecx
// 0073d2c7  d91c24               fstp dword ptr [esp]
// 0073d2ca  689997b500           push 0xb59799
// 0073d2cf  68f3f4fa00           push 0xfaf4f3
// 0073d2d4  8d8e7c040000         lea ecx, [esi + 0x47c]
// 0073d2da  e8a11ffaff           call 0x6df280
// 0073d2df  d90540f88200         fld dword ptr [0x82f840]
// 0073d2e5  51                   push ecx
// 0073d2e6  d91c24               fstp dword ptr [esp]
// 0073d2e9  6876749200           push 0x927476
// 0073d2ee  68b3b2c800           push 0xc8b2b3
// 0073d2f3  8bcf                 mov ecx, edi
// 0073d2f5  e8861ffaff           call 0x6df280
// 0073d2fa  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d300  51                   push ecx
// 0073d301  d91c24               fstp dword ptr [esp]
// 0073d304  68f3f3f700           push 0xf7f3f3
// 0073d309  68d7d7e500           push 0xe5d7d7
// 0073d30e  8d8e5c040000         lea ecx, [esi + 0x45c]
// 0073d314  e8671ffaff           call 0x6df280
// 0073d319  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d31f  51                   push ecx
// 0073d320  d91c24               fstp dword ptr [esp]
// 0073d323  688583a200           push 0xa28385
// 0073d328  68d7d7e200           push 0xe2d7d7
// 0073d32d  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0073d333  e8481ffaff           call 0x6df280
// 0073d338  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d33e  51                   push ecx
// 0073d33f  d91c24               fstp dword ptr [esp]
// 0073d342  68b0aec500           push 0xc5aeb0
// 0073d347  68e8e8f100           push 0xf1e8e8
// 0073d34c  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0073d352  e8291ffaff           call 0x6df280
// 0073d357  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d35d  51                   push ecx
// 0073d35e  d91c24               fstp dword ptr [esp]
// 0073d361  bf7a799900           mov edi, 0x99797a
// 0073d366  57                   push edi
// 0073d367  68f7f5f900           push 0xf9f5f7
// 0073d36c  8d4e28               lea ecx, [esi + 0x28]
// 0073d36f  c786200500007c7c9400 mov dword ptr [esi + 0x520], 0x947c7c
// 0073d379  e8021ffaff           call 0x6df280
// 0073d37e  b88d8d8d00           mov eax, 0x8d8d8d
// 0073d383  898638040000         mov dword ptr [esi + 0x438], eax
// 0073d389  89860c030000         mov dword ptr [esi + 0x30c], eax
// 0073d38f  b84b4b6f00           mov eax, 0x6f4b4b
// 0073d394  89442410             mov dword ptr [esp + 0x10], eax
// 0073d398  89442414             mov dword ptr [esp + 0x14], eax
// 0073d39c  89442418             mov dword ptr [esp + 0x18], eax
// 0073d3a0  8d44240c             lea eax, [esp + 0xc]
// 0073d3a4  50                   push eax
// 0073d3a5  8d4c242c             lea ecx, [esp + 0x2c]
// 0073d3a9  51                   push ecx
// 0073d3aa  6a07                 push 7
// 0073d3ac  8bce                 mov ecx, esi
// 0073d3ae  c7863c0300006e6d8f00 mov dword ptr [esi + 0x33c], 0x8f6d6e
// 0073d3b8  c7863003000054547500 mov dword ptr [esi + 0x330], 0x755454
// 0073d3c2  c786d0020000dbdae400 mov dword ptr [esi + 0x2d0], 0xe4dadb
// 0073d3cc  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 0073d3d6  897e4c               mov dword ptr [esi + 0x4c], edi
// 0073d3d9  89be44040000         mov dword ptr [esi + 0x444], edi
// 0073d3df  c74424341f000000     mov dword ptr [esp + 0x34], 0x1f
// 0073d3e7  c744243820000000     mov dword ptr [esp + 0x38], 0x20
// 0073d3ef  c744243c25000000     mov dword ptr [esp + 0x3c], 0x25
// 0073d3f7  c744244032000000     mov dword ptr [esp + 0x40], 0x32
// 0073d3ff  c744244421000000     mov dword ptr [esp + 0x44], 0x21
// 0073d407  c744244824000000     mov dword ptr [esp + 0x48], 0x24
// 0073d40f  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 0073d417  c7442418ffeec200     mov dword ptr [esp + 0x18], 0xc2eeff
// 0073d41f  c7442428fe803e00     mov dword ptr [esp + 0x28], 0x3e80fe
// 0073d427  c744242cffc06f00     mov dword ptr [esp + 0x2c], 0x6fc0ff
// 0073d42f  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0073d437  e8640cf7ff           call 0x6ae0a0
// 0073d43c  5f                   pop edi
// 0073d43d  8bce                 mov ecx, esi
// 0073d43f  5e                   pop esi
// 0073d440  5b                   pop ebx
// 0073d441  83c438               add esp, 0x38
// 0073d444  e907e6ffff           jmp 0x73ba50
// 0073d449  d90540f88200         fld dword ptr [0x82f840]
// 0073d44f  51                   push ecx
// 0073d450  d91c24               fstp dword ptr [esp]
// 0073d453  68c0c0a800           push 0xa8c0c0
// 0073d458  8d9e7c040000         lea ebx, [esi + 0x47c]
// 0073d45e  68faf9f500           push 0xf5f9fa
// 0073d463  8bcb                 mov ecx, ebx
// 0073d465  e8161efaff           call 0x6df280
// 0073d46a  d90540f88200         fld dword ptr [0x82f840]
// 0073d470  51                   push ecx
// 0073d471  d91c24               fstp dword ptr [esp]
// 0073d474  68b0ac9e00           push 0x9eacb0
// 0073d479  68eeedea00           push 0xeaedee
// 0073d47e  8bcf                 mov ecx, edi
// 0073d480  e8fb1dfaff           call 0x6df280
// 0073d485  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d48b  51                   push ecx
// 0073d48c  d91c24               fstp dword ptr [esp]
// 0073d48f  68f4f1e700           push 0xe7f1f4
// 0073d494  68e5e5d700           push 0xd7e5e5
// 0073d499  8d8e5c040000         lea ecx, [esi + 0x45c]
// 0073d49f  e8dc1dfaff           call 0x6df280
// 0073d4a4  68ccc7ba00           push 0xbac7cc
// 0073d4a9  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0073d4af  c78620050000a3a37c00 mov dword ptr [esi + 0x520], 0x7ca3a3
// 0073d4b9  e8d227faff           call 0x6dfc90
// 0073d4be  53                   push ebx
// 0073d4bf  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0073d4c5  e8d61dfaff           call 0x6df2a0
// 0073d4ca  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d4d0  51                   push ecx
// 0073d4d1  d91c24               fstp dword ptr [esp]
// 0073d4d4  68aca89900           push 0x99a8ac
// 0073d4d9  68ece9d800           push 0xd8e9ec
// 0073d4de  8d4e28               lea ecx, [esi + 0x28]
// 0073d4e1  e89a1dfaff           call 0x6df280
// 0073d4e6  b8b6c68d00           mov eax, 0x8dc6b6
// 0073d4eb  5f                   pop edi
// 0073d4ec  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 0073d4f2  c786f402000093a07000 mov dword ptr [esi + 0x2f4], 0x70a093
// 0073d4fc  898618030000         mov dword ptr [esi + 0x318], eax
// 0073d502  c7869c030000ffffff00 mov dword ptr [esi + 0x39c], 0xffffff
// 0073d50c  8bce                 mov ecx, esi
// 0073d50e  5e                   pop esi
// 0073d50f  5b                   pop ebx
// 0073d510  83c438               add esp, 0x38
// 0073d513  e938e5ffff           jmp 0x73ba50
// 0073d518  d90540f88200         fld dword ptr [0x82f840]
// 0073d51e  51                   push ecx
// 0073d51f  d91c24               fstp dword ptr [esp]
// 0073d522  68c0c0a800           push 0xa8c0c0
// 0073d527  8d9e7c040000         lea ebx, [esi + 0x47c]
// 0073d52d  68faf9f500           push 0xf5f9fa
// 0073d532  8bcb                 mov ecx, ebx
// 0073d534  e8471dfaff           call 0x6df280
// 0073d539  d90540f88200         fld dword ptr [0x82f840]
// 0073d53f  51                   push ecx
// 0073d540  d91c24               fstp dword ptr [esp]
// 0073d543  6898987e00           push 0x7e9898
// 0073d548  68eeedea00           push 0xeaedee
// 0073d54d  8bcf                 mov ecx, edi
// 0073d54f  e82c1dfaff           call 0x6df280
// 0073d554  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d55a  51                   push ecx
// 0073d55b  d91c24               fstp dword ptr [esp]
// 0073d55e  68f4f1e700           push 0xe7f1f4
// 0073d563  68e5e5d700           push 0xd7e5e5
// 0073d568  8d8e5c040000         lea ecx, [esi + 0x45c]
// 0073d56e  e80d1dfaff           call 0x6df280
// 0073d573  68ccc7ba00           push 0xbac7cc
// 0073d578  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0073d57e  c78620050000a3a37c00 mov dword ptr [esi + 0x520], 0x7ca3a3
// 0073d588  e80327faff           call 0x6dfc90
// 0073d58d  53                   push ebx
// 0073d58e  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0073d594  e8071dfaff           call 0x6df2a0
// 0073d599  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d59f  51                   push ecx
// 0073d5a0  d91c24               fstp dword ptr [esp]
// 0073d5a3  687a799900           push 0x99797a
// 0073d5a8  68f7f5f900           push 0xf9f5f7
// 0073d5ad  8d4e28               lea ecx, [esi + 0x28]
// 0073d5b0  e8cb1cfaff           call 0x6df280
// 0073d5b5  5f                   pop edi
// 0073d5b6  8bce                 mov ecx, esi
// 0073d5b8  5e                   pop esi
// 0073d5b9  5b                   pop ebx
// 0073d5ba  83c438               add esp, 0x38
// 0073d5bd  e98ee4ffff           jmp 0x73ba50
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?RefreshMetrics@CXTPWhidbeyTheme@XTPPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
