// roc 2009-06 007ab8f0  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 930 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ab8f0
//
// 007ab8f0  83ec38               sub esp, 0x38
// 007ab8f3  53                   push ebx
// 007ab8f4  56                   push esi
// 007ab8f5  57                   push edi
// 007ab8f6  8bf1                 mov esi, ecx
// 007ab8f8  e813f7ffff           call 0x7ab010
// 007ab8fd  e81e92faff           call 0x754b20
// 007ab902  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab908  51                   push ecx
// 007ab909  d91c24               fstp dword ptr [esp]
// 007ab90c  6a10                 push 0x10
// 007ab90e  8bce                 mov ecx, esi
// 007ab910  8bd8                 mov ebx, eax
// 007ab912  8dbe9c040000         lea edi, [esi + 0x49c]
// 007ab918  e8636ef7ff           call 0x722780
// 007ab91d  50                   push eax
// 007ab91e  6826020000           push 0x226
// 007ab923  6a0f                 push 0xf
// 007ab925  8bce                 mov ecx, esi
// 007ab927  e8546ef7ff           call 0x722780
// 007ab92c  50                   push eax
// 007ab92d  6a05                 push 5
// 007ab92f  8bce                 mov ecx, esi
// 007ab931  e84a6ef7ff           call 0x722780
// 007ab936  50                   push eax
// 007ab937  8bcb                 mov ecx, ebx
// 007ab939  e8b288faff           call 0x7541f0
// 007ab93e  50                   push eax
// 007ab93f  8bcf                 mov ecx, edi
// 007ab941  e8ba86faff           call 0x754000
// 007ab946  e8d591faff           call 0x754b20
// 007ab94b  6a00                 push 0
// 007ab94d  8bc8                 mov ecx, eax
// 007ab94f  e80c8bfaff           call 0x754460
// 007ab954  85c0                 test eax, eax
// 007ab956  7411                 je 0x7ab969
// 007ab958  6a0f                 push 0xf
// 007ab95a  8bce                 mov ecx, esi
// 007ab95c  e81f6ef7ff           call 0x722780
// 007ab961  50                   push eax
// 007ab962  8bcf                 mov ecx, edi
// 007ab964  e80791faff           call 0x754a70
// 007ab969  e8b291faff           call 0x754b20
// 007ab96e  8bc8                 mov ecx, eax
// 007ab970  e85b8ffaff           call 0x7548d0
// 007ab975  83e801               sub eax, 1
// 007ab978  0f846a020000         je 0x7abbe8
// 007ab97e  83e801               sub eax, 1
// 007ab981  0f8492010000         je 0x7abb19
// 007ab987  83e801               sub eax, 1
// 007ab98a  0f85f5020000         jne 0x7abc85
// 007ab990  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007ab996  51                   push ecx
// 007ab997  d91c24               fstp dword ptr [esp]
// 007ab99a  689997b500           push 0xb59799
// 007ab99f  68f3f4fa00           push 0xfaf4f3
// 007ab9a4  8d8e7c040000         lea ecx, [esi + 0x47c]
// 007ab9aa  e85186faff           call 0x754000
// 007ab9af  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007ab9b5  51                   push ecx
// 007ab9b6  d91c24               fstp dword ptr [esp]
// 007ab9b9  6876749200           push 0x927476
// 007ab9be  68b3b2c800           push 0xc8b2b3
// 007ab9c3  8bcf                 mov ecx, edi
// 007ab9c5  e83686faff           call 0x754000
// 007ab9ca  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab9d0  51                   push ecx
// 007ab9d1  d91c24               fstp dword ptr [esp]
// 007ab9d4  68f3f3f700           push 0xf7f3f3
// 007ab9d9  68d7d7e500           push 0xe5d7d7
// 007ab9de  8d8e5c040000         lea ecx, [esi + 0x45c]
// 007ab9e4  e81786faff           call 0x754000
// 007ab9e9  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab9ef  51                   push ecx
// 007ab9f0  d91c24               fstp dword ptr [esp]
// 007ab9f3  688583a200           push 0xa28385
// 007ab9f8  68d7d7e200           push 0xe2d7d7
// 007ab9fd  8d8edc040000         lea ecx, [esi + 0x4dc]
// 007aba03  e8f885faff           call 0x754000
// 007aba08  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007aba0e  51                   push ecx
// 007aba0f  d91c24               fstp dword ptr [esp]
// 007aba12  68b0aec500           push 0xc5aeb0
// 007aba17  68e8e8f100           push 0xf1e8e8
// 007aba1c  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 007aba22  e8d985faff           call 0x754000
// 007aba27  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007aba2d  51                   push ecx
// 007aba2e  d91c24               fstp dword ptr [esp]
// 007aba31  bf7a799900           mov edi, 0x99797a
// 007aba36  57                   push edi
// 007aba37  68f7f5f900           push 0xf9f5f7
// 007aba3c  8d4e28               lea ecx, [esi + 0x28]
// 007aba3f  c786200500007c7c9400 mov dword ptr [esi + 0x520], 0x947c7c
// 007aba49  e8b285faff           call 0x754000
// 007aba4e  b88d8d8d00           mov eax, 0x8d8d8d
// 007aba53  898638040000         mov dword ptr [esi + 0x438], eax
// 007aba59  89860c030000         mov dword ptr [esi + 0x30c], eax
// 007aba5f  b84b4b6f00           mov eax, 0x6f4b4b
// 007aba64  89442410             mov dword ptr [esp + 0x10], eax
// 007aba68  89442414             mov dword ptr [esp + 0x14], eax
// 007aba6c  89442418             mov dword ptr [esp + 0x18], eax
// 007aba70  8d44240c             lea eax, [esp + 0xc]
// 007aba74  50                   push eax
// 007aba75  8d4c242c             lea ecx, [esp + 0x2c]
// 007aba79  51                   push ecx
// 007aba7a  6a07                 push 7
// 007aba7c  8bce                 mov ecx, esi
// 007aba7e  c7863c0300006e6d8f00 mov dword ptr [esi + 0x33c], 0x8f6d6e
// 007aba88  c7863003000054547500 mov dword ptr [esi + 0x330], 0x755454
// 007aba92  c786d0020000dbdae400 mov dword ptr [esi + 0x2d0], 0xe4dadb
// 007aba9c  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 007abaa6  897e4c               mov dword ptr [esi + 0x4c], edi
// 007abaa9  89be44040000         mov dword ptr [esi + 0x444], edi
// 007abaaf  c74424341f000000     mov dword ptr [esp + 0x34], 0x1f
// 007abab7  c744243820000000     mov dword ptr [esp + 0x38], 0x20
// 007ababf  c744243c25000000     mov dword ptr [esp + 0x3c], 0x25
// 007abac7  c744244032000000     mov dword ptr [esp + 0x40], 0x32
// 007abacf  c744244421000000     mov dword ptr [esp + 0x44], 0x21
// 007abad7  c744244824000000     mov dword ptr [esp + 0x48], 0x24
// 007abadf  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 007abae7  c7442418ffeec200     mov dword ptr [esp + 0x18], 0xc2eeff
// 007abaef  c7442428fe803e00     mov dword ptr [esp + 0x28], 0x3e80fe
// 007abaf7  c744242cffc06f00     mov dword ptr [esp + 0x2c], 0x6fc0ff
// 007abaff  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007abb07  e8a46cf7ff           call 0x7227b0
// 007abb0c  5f                   pop edi
// 007abb0d  8bce                 mov ecx, esi
// 007abb0f  5e                   pop esi
// 007abb10  5b                   pop ebx
// 007abb11  83c438               add esp, 0x38
// 007abb14  e907e6ffff           jmp 0x7aa120
// 007abb19  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007abb1f  51                   push ecx
// 007abb20  d91c24               fstp dword ptr [esp]
// 007abb23  68c0c0a800           push 0xa8c0c0
// 007abb28  8d9e7c040000         lea ebx, [esi + 0x47c]
// 007abb2e  68faf9f500           push 0xf5f9fa
// 007abb33  8bcb                 mov ecx, ebx
// 007abb35  e8c684faff           call 0x754000
// 007abb3a  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007abb40  51                   push ecx
// 007abb41  d91c24               fstp dword ptr [esp]
// 007abb44  68b0ac9e00           push 0x9eacb0
// 007abb49  68eeedea00           push 0xeaedee
// 007abb4e  8bcf                 mov ecx, edi
// 007abb50  e8ab84faff           call 0x754000
// 007abb55  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007abb5b  51                   push ecx
// 007abb5c  d91c24               fstp dword ptr [esp]
// 007abb5f  68f4f1e700           push 0xe7f1f4
// 007abb64  68e5e5d700           push 0xd7e5e5
// 007abb69  8d8e5c040000         lea ecx, [esi + 0x45c]
// 007abb6f  e88c84faff           call 0x754000
// 007abb74  68ccc7ba00           push 0xbac7cc
// 007abb79  8d8edc040000         lea ecx, [esi + 0x4dc]
// 007abb7f  c78620050000a3a37c00 mov dword ptr [esi + 0x520], 0x7ca3a3
// 007abb89  e8e28efaff           call 0x754a70
// 007abb8e  53                   push ebx
// 007abb8f  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 007abb95  e88684faff           call 0x754020
// 007abb9a  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007abba0  51                   push ecx
// 007abba1  d91c24               fstp dword ptr [esp]
// 007abba4  68aca89900           push 0x99a8ac
// 007abba9  68ece9d800           push 0xd8e9ec
// 007abbae  8d4e28               lea ecx, [esi + 0x28]
// 007abbb1  e84a84faff           call 0x754000
// 007abbb6  b8b6c68d00           mov eax, 0x8dc6b6
// 007abbbb  5f                   pop edi
// 007abbbc  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 007abbc2  c786f402000093a07000 mov dword ptr [esi + 0x2f4], 0x70a093
// 007abbcc  898618030000         mov dword ptr [esi + 0x318], eax
// 007abbd2  c7869c030000ffffff00 mov dword ptr [esi + 0x39c], 0xffffff
// 007abbdc  8bce                 mov ecx, esi
// 007abbde  5e                   pop esi
// 007abbdf  5b                   pop ebx
// 007abbe0  83c438               add esp, 0x38
// 007abbe3  e938e5ffff           jmp 0x7aa120
// 007abbe8  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007abbee  51                   push ecx
// 007abbef  d91c24               fstp dword ptr [esp]
// 007abbf2  68c0c0a800           push 0xa8c0c0
// 007abbf7  8d9e7c040000         lea ebx, [esi + 0x47c]
// 007abbfd  68faf9f500           push 0xf5f9fa
// 007abc02  8bcb                 mov ecx, ebx
// 007abc04  e8f783faff           call 0x754000
// 007abc09  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007abc0f  51                   push ecx
// 007abc10  d91c24               fstp dword ptr [esp]
// 007abc13  6898987e00           push 0x7e9898
// 007abc18  68eeedea00           push 0xeaedee
// 007abc1d  8bcf                 mov ecx, edi
// 007abc1f  e8dc83faff           call 0x754000
// 007abc24  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007abc2a  51                   push ecx
// 007abc2b  d91c24               fstp dword ptr [esp]
// 007abc2e  68f4f1e700           push 0xe7f1f4
// 007abc33  68e5e5d700           push 0xd7e5e5
// 007abc38  8d8e5c040000         lea ecx, [esi + 0x45c]
// 007abc3e  e8bd83faff           call 0x754000
// 007abc43  68ccc7ba00           push 0xbac7cc
// 007abc48  8d8edc040000         lea ecx, [esi + 0x4dc]
// 007abc4e  c78620050000a3a37c00 mov dword ptr [esi + 0x520], 0x7ca3a3
// 007abc58  e8138efaff           call 0x754a70
// 007abc5d  53                   push ebx
// 007abc5e  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 007abc64  e8b783faff           call 0x754020
// 007abc69  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007abc6f  51                   push ecx
// 007abc70  d91c24               fstp dword ptr [esp]
// 007abc73  687a799900           push 0x99797a
// 007abc78  68f7f5f900           push 0xf9f5f7
// 007abc7d  8d4e28               lea ecx, [esi + 0x28]
// 007abc80  e87b83faff           call 0x754000
// 007abc85  5f                   pop edi
// 007abc86  8bce                 mov ecx, esi
// 007abc88  5e                   pop esi
// 007abc89  5b                   pop ebx
// 007abc8a  83c438               add esp, 0x38
// 007abc8d  e98ee4ffff           jmp 0x7aa120
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?RefreshMetrics@CXTPWhidbeyTheme@XTPPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
