// roc 2008-06 0073c940  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 2260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073c940
//
// 0073c940  83ec6c               sub esp, 0x6c
// 0073c943  56                   push esi
// 0073c944  8bf1                 mov esi, ecx
// 0073c946  e8a517f7ff           call 0x6ae0f0
// 0073c94b  e8fe44f6ff           call 0x6a0e4e
// 0073c950  85c0                 test eax, eax
// 0073c952  7428                 je 0x73c97c
// 0073c954  8b10                 mov edx, dword ptr [eax]
// 0073c956  8bc8                 mov ecx, eax
// 0073c958  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0073c95b  ffd0                 call eax
// 0073c95d  85c0                 test eax, eax
// 0073c95f  741b                 je 0x73c97c
// 0073c961  e8e844f6ff           call 0x6a0e4e
// 0073c966  85c0                 test eax, eax
// 0073c968  7412                 je 0x73c97c
// 0073c96a  8b10                 mov edx, dword ptr [eax]
// 0073c96c  8bc8                 mov ecx, eax
// 0073c96e  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0073c971  ffd0                 call eax
// 0073c973  85c0                 test eax, eax
// 0073c975  7405                 je 0x73c97c
// 0073c977  8b4020               mov eax, dword ptr [eax + 0x20]
// 0073c97a  eb02                 jmp 0x73c97e
// 0073c97c  33c0                 xor eax, eax
// 0073c97e  53                   push ebx
// 0073c97f  55                   push ebp
// 0073c980  57                   push edi
// 0073c981  6874198500           push 0x851974
// 0073c986  50                   push eax
// 0073c987  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0073c98d  e8debbfdff           call 0x718570
// 0073c992  e8a933faff           call 0x6dfd40
// 0073c997  d905ac9b8100         fld dword ptr [0x819bac]
// 0073c99d  51                   push ecx
// 0073c99e  d91c24               fstp dword ptr [esp]
// 0073c9a1  6a2a                 push 0x2a
// 0073c9a3  8bce                 mov ecx, esi
// 0073c9a5  8bf8                 mov edi, eax
// 0073c9a7  8d9edc040000         lea ebx, [esi + 0x4dc]
// 0073c9ad  e8be16f7ff           call 0x6ae070
// 0073c9b2  50                   push eax
// 0073c9b3  6826020000           push 0x226
// 0073c9b8  6a2a                 push 0x2a
// 0073c9ba  8bce                 mov ecx, esi
// 0073c9bc  e8af16f7ff           call 0x6ae070
// 0073c9c1  50                   push eax
// 0073c9c2  6a05                 push 5
// 0073c9c4  8bce                 mov ecx, esi
// 0073c9c6  e8a516f7ff           call 0x6ae070
// 0073c9cb  50                   push eax
// 0073c9cc  8bcf                 mov ecx, edi
// 0073c9ce  e89d2afaff           call 0x6df470
// 0073c9d3  50                   push eax
// 0073c9d4  8bcb                 mov ecx, ebx
// 0073c9d6  e8a528faff           call 0x6df280
// 0073c9db  e86033faff           call 0x6dfd40
// 0073c9e0  d905ac9b8100         fld dword ptr [0x819bac]
// 0073c9e6  51                   push ecx
// 0073c9e7  d91c24               fstp dword ptr [esp]
// 0073c9ea  6a0f                 push 0xf
// 0073c9ec  8bce                 mov ecx, esi
// 0073c9ee  8bd8                 mov ebx, eax
// 0073c9f0  8dbe7c040000         lea edi, [esi + 0x47c]
// 0073c9f6  e87516f7ff           call 0x6ae070
// 0073c9fb  50                   push eax
// 0073c9fc  68cd000000           push 0xcd
// 0073ca01  6a05                 push 5
// 0073ca03  8bce                 mov ecx, esi
// 0073ca05  e86616f7ff           call 0x6ae070
// 0073ca0a  50                   push eax
// 0073ca0b  6a0f                 push 0xf
// 0073ca0d  8bce                 mov ecx, esi
// 0073ca0f  e85c16f7ff           call 0x6ae070
// 0073ca14  50                   push eax
// 0073ca15  8bcb                 mov ecx, ebx
// 0073ca17  e8542afaff           call 0x6df470
// 0073ca1c  50                   push eax
// 0073ca1d  8bcf                 mov ecx, edi
// 0073ca1f  e85c28faff           call 0x6df280
// 0073ca24  e81733faff           call 0x6dfd40
// 0073ca29  d905ac9b8100         fld dword ptr [0x819bac]
// 0073ca2f  51                   push ecx
// 0073ca30  d91c24               fstp dword ptr [esp]
// 0073ca33  68cd000000           push 0xcd
// 0073ca38  6a05                 push 5
// 0073ca3a  8bce                 mov ecx, esi
// 0073ca3c  8be8                 mov ebp, eax
// 0073ca3e  8d9e5c040000         lea ebx, [esi + 0x45c]
// 0073ca44  e82716f7ff           call 0x6ae070
// 0073ca49  50                   push eax
// 0073ca4a  6a0f                 push 0xf
// 0073ca4c  8bce                 mov ecx, esi
// 0073ca4e  e81d16f7ff           call 0x6ae070
// 0073ca53  50                   push eax
// 0073ca54  8bcd                 mov ecx, ebp
// 0073ca56  e8152afaff           call 0x6df470
// 0073ca5b  50                   push eax
// 0073ca5c  6a0f                 push 0xf
// 0073ca5e  8bce                 mov ecx, esi
// 0073ca60  e80b16f7ff           call 0x6ae070
// 0073ca65  50                   push eax
// 0073ca66  8bcb                 mov ecx, ebx
// 0073ca68  e81328faff           call 0x6df280
// 0073ca6d  6a1e                 push 0x1e
// 0073ca6f  8bce                 mov ecx, esi
// 0073ca71  e8fa15f7ff           call 0x6ae070
// 0073ca76  6a1e                 push 0x1e
// 0073ca78  8bce                 mov ecx, esi
// 0073ca7a  898638050000         mov dword ptr [esi + 0x538], eax
// 0073ca80  e8eb15f7ff           call 0x6ae070
// 0073ca85  6a10                 push 0x10
// 0073ca87  8bce                 mov ecx, esi
// 0073ca89  898620050000         mov dword ptr [esi + 0x520], eax
// 0073ca8f  e8dc15f7ff           call 0x6ae070
// 0073ca94  89464c               mov dword ptr [esi + 0x4c], eax
// 0073ca97  e8a432faff           call 0x6dfd40
// 0073ca9c  d905ac9b8100         fld dword ptr [0x819bac]
// 0073caa2  51                   push ecx
// 0073caa3  d91c24               fstp dword ptr [esp]
// 0073caa6  6826020000           push 0x226
// 0073caab  6a0f                 push 0xf
// 0073caad  8bce                 mov ecx, esi
// 0073caaf  8944241c             mov dword ptr [esp + 0x1c], eax
// 0073cab3  8daefc040000         lea ebp, [esi + 0x4fc]
// 0073cab9  e8b215f7ff           call 0x6ae070
// 0073cabe  50                   push eax
// 0073cabf  6a05                 push 5
// 0073cac1  8bce                 mov ecx, esi
// 0073cac3  e8a815f7ff           call 0x6ae070
// 0073cac8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073cacc  50                   push eax
// 0073cacd  e89e29faff           call 0x6df470
// 0073cad2  50                   push eax
// 0073cad3  6a29                 push 0x29
// 0073cad5  8bce                 mov ecx, esi
// 0073cad7  e89415f7ff           call 0x6ae070
// 0073cadc  50                   push eax
// 0073cadd  8bcd                 mov ecx, ebp
// 0073cadf  e89c27faff           call 0x6df280
// 0073cae4  e85732faff           call 0x6dfd40
// 0073cae9  d905ac9b8100         fld dword ptr [0x819bac]
// 0073caef  51                   push ecx
// 0073caf0  d91c24               fstp dword ptr [esp]
// 0073caf3  6a10                 push 0x10
// 0073caf5  8bce                 mov ecx, esi
// 0073caf7  89442418             mov dword ptr [esp + 0x18], eax
// 0073cafb  e87015f7ff           call 0x6ae070
// 0073cb00  50                   push eax
// 0073cb01  6a33                 push 0x33
// 0073cb03  6a10                 push 0x10
// 0073cb05  8bce                 mov ecx, esi
// 0073cb07  e86415f7ff           call 0x6ae070
// 0073cb0c  50                   push eax
// 0073cb0d  6a33                 push 0x33
// 0073cb0f  8bce                 mov ecx, esi
// 0073cb11  e85a15f7ff           call 0x6ae070
// 0073cb16  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073cb1a  50                   push eax
// 0073cb1b  e85029faff           call 0x6df470
// 0073cb20  50                   push eax
// 0073cb21  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0073cb27  e85427faff           call 0x6df280
// 0073cb2c  c7864005000000000000 mov dword ptr [esi + 0x540], 0
// 0073cb36  e80532faff           call 0x6dfd40
// 0073cb3b  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cb41  51                   push ecx
// 0073cb42  d91c24               fstp dword ptr [esp]
// 0073cb45  6826020000           push 0x226
// 0073cb4a  6a0f                 push 0xf
// 0073cb4c  8bce                 mov ecx, esi
// 0073cb4e  8944241c             mov dword ptr [esp + 0x1c], eax
// 0073cb52  e81915f7ff           call 0x6ae070
// 0073cb57  50                   push eax
// 0073cb58  6a05                 push 5
// 0073cb5a  8bce                 mov ecx, esi
// 0073cb5c  e80f15f7ff           call 0x6ae070
// 0073cb61  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073cb65  50                   push eax
// 0073cb66  e80529faff           call 0x6df470
// 0073cb6b  50                   push eax
// 0073cb6c  6a29                 push 0x29
// 0073cb6e  8bce                 mov ecx, esi
// 0073cb70  e8fb14f7ff           call 0x6ae070
// 0073cb75  50                   push eax
// 0073cb76  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0073cb7c  e8ff26faff           call 0x6df280
// 0073cb81  e8ba31faff           call 0x6dfd40
// 0073cb86  6a46                 push 0x46
// 0073cb88  6a05                 push 5
// 0073cb8a  8bce                 mov ecx, esi
// 0073cb8c  89442418             mov dword ptr [esp + 0x18], eax
// 0073cb90  e8db14f7ff           call 0x6ae070
// 0073cb95  50                   push eax
// 0073cb96  6a0f                 push 0xf
// 0073cb98  8bce                 mov ecx, esi
// 0073cb9a  e8d114f7ff           call 0x6ae070
// 0073cb9f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073cba3  50                   push eax
// 0073cba4  e8c728faff           call 0x6df470
// 0073cba9  89862c050000         mov dword ptr [esi + 0x52c], eax
// 0073cbaf  e88c31faff           call 0x6dfd40
// 0073cbb4  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0073cbb7  83c050               add eax, 0x50
// 0073cbba  83f9ff               cmp ecx, -1
// 0073cbbd  7505                 jne 0x73cbc4
// 0073cbbf  8b4004               mov eax, dword ptr [eax + 4]
// 0073cbc2  eb02                 jmp 0x73cbc6
// 0073cbc4  8bc1                 mov eax, ecx
// 0073cbc6  8986fc030000         mov dword ptr [esi + 0x3fc], eax
// 0073cbcc  e86f31faff           call 0x6dfd40
// 0073cbd1  6a00                 push 0
// 0073cbd3  8bc8                 mov ecx, eax
// 0073cbd5  e8062bfaff           call 0x6df6e0
// 0073cbda  85c0                 test eax, eax
// 0073cbdc  7448                 je 0x73cc26
// 0073cbde  6a0f                 push 0xf
// 0073cbe0  8bce                 mov ecx, esi
// 0073cbe2  e88914f7ff           call 0x6ae070
// 0073cbe7  50                   push eax
// 0073cbe8  8bcf                 mov ecx, edi
// 0073cbea  e8a130faff           call 0x6dfc90
// 0073cbef  6a0f                 push 0xf
// 0073cbf1  8bce                 mov ecx, esi
// 0073cbf3  e87814f7ff           call 0x6ae070
// 0073cbf8  50                   push eax
// 0073cbf9  8bcb                 mov ecx, ebx
// 0073cbfb  e89030faff           call 0x6dfc90
// 0073cc00  6a0f                 push 0xf
// 0073cc02  8bce                 mov ecx, esi
// 0073cc04  e86714f7ff           call 0x6ae070
// 0073cc09  50                   push eax
// 0073cc0a  8bcd                 mov ecx, ebp
// 0073cc0c  e87f30faff           call 0x6dfc90
// 0073cc11  6a0f                 push 0xf
// 0073cc13  8bce                 mov ecx, esi
// 0073cc15  e85614f7ff           call 0x6ae070
// 0073cc1a  50                   push eax
// 0073cc1b  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0073cc21  e86a30faff           call 0x6dfc90
// 0073cc26  8bce                 mov ecx, esi
// 0073cc28  e80314f7ff           call 0x6ae030
// 0073cc2d  48                   dec eax
// 0073cc2e  83f804               cmp eax, 4
// 0073cc31  0f878a050000         ja 0x73d1c1
// 0073cc37  ff248500d27300       jmp dword ptr [eax*4 + 0x73d200]
// 0073cc3e  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cc44  51                   push ecx
// 0073cc45  d91c24               fstp dword ptr [esp]
// 0073cc48  68c4dafa00           push 0xfadac4
// 0073cc4d  689ebef500           push 0xf5be9e
// 0073cc52  8bcb                 mov ecx, ebx
// 0073cc54  e82726faff           call 0x6df280
// 0073cc59  d90540f88200         fld dword ptr [0x82f840]
// 0073cc5f  51                   push ecx
// 0073cc60  d91c24               fstp dword ptr [esp]
// 0073cc63  6881a9e200           push 0xe2a981
// 0073cc68  68ddecfe00           push 0xfeecdd
// 0073cc6d  8bcf                 mov ecx, edi
// 0073cc6f  c786200500003b619c00 mov dword ptr [esi + 0x520], 0x9c613b
// 0073cc79  e80226faff           call 0x6df280
// 0073cc7e  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cc84  51                   push ecx
// 0073cc85  d91c24               fstp dword ptr [esp]
// 0073cc88  6893b5e700           push 0xe7b593
// 0073cc8d  68e3efff00           push 0xffefe3
// 0073cc92  8bcd                 mov ecx, ebp
// 0073cc94  c7464c2a66c900       mov dword ptr [esi + 0x4c], 0xc9662a
// 0073cc9b  e8e025faff           call 0x6df280
// 0073cca0  d90540f88200         fld dword ptr [0x82f840]
// 0073cca6  51                   push ecx
// 0073cca7  d91c24               fstp dword ptr [esp]
// 0073ccaa  6800359100           push 0x913500
// 0073ccaf  6875a6f100           push 0xf1a675
// 0073ccb4  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0073ccba  e8c125faff           call 0x6df280
// 0073ccbf  d905ac9b8100         fld dword ptr [0x819bac]
// 0073ccc5  51                   push ecx
// 0073ccc6  d91c24               fstp dword ptr [esp]
// 0073ccc9  6879a1dc00           push 0xdca179
// 0073ccce  68cbddf600           push 0xf6ddcb
// 0073ccd3  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0073ccd9  e8a225faff           call 0x6df280
// 0073ccde  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cce4  51                   push ecx
// 0073cce5  d91c24               fstp dword ptr [esp]
// 0073cce8  6881a9e200           push 0xe2a981
// 0073cced  68e3effe00           push 0xfeefe3
// 0073ccf2  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0073ccf8  e88325faff           call 0x6df280
// 0073ccfd  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cd03  51                   push ecx
// 0073cd04  d91c24               fstp dword ptr [esp]
// 0073cd07  68617aac00           push 0xac7a61
// 0073cd0c  68e9ecf200           push 0xf2ece9
// 0073cd11  8d4e28               lea ecx, [esi + 0x28]
// 0073cd14  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 0073cd1e  c74620161e3600       mov dword ptr [esi + 0x20], 0x361e16
// 0073cd25  c78638050000a9c7f000 mov dword ptr [esi + 0x538], 0xf0c7a9
// 0073cd2f  e84c25faff           call 0x6df280
// 0073cd34  b800008000           mov eax, 0x800000
// 0073cd39  c786e4030000cbe1fc00 mov dword ptr [esi + 0x3e4], 0xfce1cb
// 0073cd43  c786cc030000d8e7fc00 mov dword ptr [esi + 0x3cc], 0xfce7d8
// 0073cd4d  c786d80300009ebef500 mov dword ptr [esi + 0x3d8], 0xf5be9e
// 0073cd57  c786f80100009099ae00 mov dword ptr [esi + 0x1f8], 0xae9990
// 0073cd61  c78608040000bdd3f700 mov dword ptr [esi + 0x408], 0xf7d3bd
// 0073cd6b  c744244826000000     mov dword ptr [esp + 0x48], 0x26
// 0073cd73  c744244c27000000     mov dword ptr [esp + 0x4c], 0x27
// 0073cd7b  c744245028000000     mov dword ptr [esp + 0x50], 0x28
// 0073cd83  c744245429000000     mov dword ptr [esp + 0x54], 0x29
// 0073cd8b  c74424582b000000     mov dword ptr [esp + 0x58], 0x2b
// 0073cd93  c744245c1f000000     mov dword ptr [esp + 0x5c], 0x1f
// 0073cd9b  c744246020000000     mov dword ptr [esp + 0x60], 0x20
// 0073cda3  c744246432000000     mov dword ptr [esp + 0x64], 0x32
// 0073cdab  c744246825000000     mov dword ptr [esp + 0x68], 0x25
// 0073cdb3  c744246c21000000     mov dword ptr [esp + 0x6c], 0x21
// 0073cdbb  c744247024000000     mov dword ptr [esp + 0x70], 0x24
// 0073cdc3  c74424741e000000     mov dword ptr [esp + 0x74], 0x1e
// 0073cdcb  c74424782f000000     mov dword ptr [esp + 0x78], 0x2f
// 0073cdd3  c744241427417600     mov dword ptr [esp + 0x14], 0x764127
// 0073cddb  c74424186a8ccb00     mov dword ptr [esp + 0x18], 0xcb8c6a
// 0073cde3  c744241c6d96d000     mov dword ptr [esp + 0x1c], 0xd0966d
// 0073cdeb  c7442420f6f6f600     mov dword ptr [esp + 0x20], 0xf6f6f6
// 0073cdf3  c7442424002d9600     mov dword ptr [esp + 0x24], 0x962d00
// 0073cdfb  c7442428ffeec200     mov dword ptr [esp + 0x28], 0xc2eeff
// 0073ce03  8944242c             mov dword ptr [esp + 0x2c], eax
// 0073ce07  89442430             mov dword ptr [esp + 0x30], eax
// 0073ce0b  8d4c2414             lea ecx, [esp + 0x14]
// 0073ce0f  51                   push ecx
// 0073ce10  8d54244c             lea edx, [esp + 0x4c]
// 0073ce14  89442438             mov dword ptr [esp + 0x38], eax
// 0073ce18  c744243cfe803e00     mov dword ptr [esp + 0x3c], 0x3e80fe
// 0073ce20  c7442440ffc06f00     mov dword ptr [esp + 0x40], 0x6fc0ff
// 0073ce28  c7442444c4dbf900     mov dword ptr [esp + 0x44], 0xf9dbc4
// 0073ce30  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0073ce38  52                   push edx
// 0073ce39  e970030000           jmp 0x73d1ae
// 0073ce3e  d905ac9b8100         fld dword ptr [0x819bac]
// 0073ce44  51                   push ecx
// 0073ce45  d91c24               fstp dword ptr [esp]
// 0073ce48  68f2f1e400           push 0xe4f1f2
// 0073ce4d  68d9d9a700           push 0xa7d9d9
// 0073ce52  8bcb                 mov ecx, ebx
// 0073ce54  e82724faff           call 0x6df280
// 0073ce59  d9051c718200         fld dword ptr [0x82711c]
// 0073ce5f  51                   push ecx
// 0073ce60  d91c24               fstp dword ptr [esp]
// 0073ce63  68b7c69100           push 0x91c6b7
// 0073ce68  68f4f7de00           push 0xdef7f4
// 0073ce6d  8bcf                 mov ecx, edi
// 0073ce6f  e80c24faff           call 0x6df280
// 0073ce74  d905ac9b8100         fld dword ptr [0x819bac]
// 0073ce7a  51                   push ecx
// 0073ce7b  d91c24               fstp dword ptr [esp]
// 0073ce7e  68c2ce9f00           push 0x9fcec2
// 0073ce83  bf60805800           mov edi, 0x588060
// 0073ce88  68ecf0d500           push 0xd5f0ec
// 0073ce8d  8bcd                 mov ecx, ebp
// 0073ce8f  89be20050000         mov dword ptr [esi + 0x520], edi
// 0073ce95  c7464c74865e00       mov dword ptr [esi + 0x4c], 0x5e8674
// 0073ce9c  e8df23faff           call 0x6df280
// 0073cea1  d9051c718200         fld dword ptr [0x82711c]
// 0073cea7  51                   push ecx
// 0073cea8  d91c24               fstp dword ptr [esp]
// 0073ceab  6860776b00           push 0x6b7760
// 0073ceb0  68b0c28c00           push 0x8cc2b0
// 0073ceb5  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0073cebb  e8c023faff           call 0x6df280
// 0073cec0  d9051c718200         fld dword ptr [0x82711c]
// 0073cec6  51                   push ecx
// 0073cec7  d91c24               fstp dword ptr [esp]
// 0073ceca  68a4b47800           push 0x78b4a4
// 0073cecf  68e6e6d100           push 0xd1e6e6
// 0073ced4  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0073ceda  e8a123faff           call 0x6df280
// 0073cedf  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cee5  51                   push ecx
// 0073cee6  d91c24               fstp dword ptr [esp]
// 0073cee9  68b8c69300           push 0x93c6b8
// 0073ceee  68ecf0d500           push 0xd5f0ec
// 0073cef3  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0073cef9  e88223faff           call 0x6df280
// 0073cefe  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cf04  51                   push ecx
// 0073cf05  d91c24               fstp dword ptr [esp]
// 0073cf08  6883907100           push 0x719083
// 0073cf0d  68f3f4f000           push 0xf0f4f3
// 0073cf12  8d4e28               lea ecx, [esi + 0x28]
// 0073cf15  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 0073cf1f  c746201f221900       mov dword ptr [esi + 0x20], 0x19221f
// 0073cf26  e85523faff           call 0x6df280
// 0073cf2b  b83f5d3800           mov eax, 0x385d3f
// 0073cf30  89442460             mov dword ptr [esp + 0x60], eax
// 0073cf34  89442464             mov dword ptr [esp + 0x64], eax
// 0073cf38  89442468             mov dword ptr [esp + 0x68], eax
// 0073cf3c  8d442448             lea eax, [esp + 0x48]
// 0073cf40  50                   push eax
// 0073cf41  8d4c2418             lea ecx, [esp + 0x18]
// 0073cf45  c78638050000c5d49f00 mov dword ptr [esi + 0x538], 0x9fd4c5
// 0073cf4f  c786e4030000d8e3b600 mov dword ptr [esi + 0x3e4], 0xb6e3d8
// 0073cf59  c786cc030000e2e7bf00 mov dword ptr [esi + 0x3cc], 0xbfe7e2
// 0073cf63  c786d8030000abc08a00 mov dword ptr [esi + 0x3d8], 0x8ac0ab
// 0073cf6d  c786f801000097a07b00 mov dword ptr [esi + 0x1f8], 0x7ba097
// 0073cf77  c78608040000dee3bd00 mov dword ptr [esi + 0x408], 0xbde3de
// 0073cf81  c744244c515e3300     mov dword ptr [esp + 0x4c], 0x335e51
// 0073cf89  897c2450             mov dword ptr [esp + 0x50], edi
// 0073cf8d  c74424549fae7a00     mov dword ptr [esp + 0x54], 0x7aae9f
// 0073cf95  c7442458f4f4ee00     mov dword ptr [esp + 0x58], 0xeef4f4
// 0073cf9d  c744245c758d5e00     mov dword ptr [esp + 0x5c], 0x5e8d75
// 0073cfa5  c7442478d1dead00     mov dword ptr [esp + 0x78], 0xadded1
// 0073cfad  51                   push ecx
// 0073cfae  e970010000           jmp 0x73d123
// 0073cfb3  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cfb9  51                   push ecx
// 0073cfba  d91c24               fstp dword ptr [esp]
// 0073cfbd  68f3f3f700           push 0xf7f3f3
// 0073cfc2  68d7d7e500           push 0xe5d7d7
// 0073cfc7  8bcb                 mov ecx, ebx
// 0073cfc9  e8b222faff           call 0x6df280
// 0073cfce  d90540f88200         fld dword ptr [0x82f840]
// 0073cfd4  51                   push ecx
// 0073cfd5  d91c24               fstp dword ptr [esp]
// 0073cfd8  689c9bb700           push 0xb79b9c
// 0073cfdd  bb7c7c9400           mov ebx, 0x947c7c
// 0073cfe2  68f9f9ff00           push 0xfff9f9
// 0073cfe7  8bcf                 mov ecx, edi
// 0073cfe9  899e20050000         mov dword ptr [esi + 0x520], ebx
// 0073cfef  e88c22faff           call 0x6df280
// 0073cff4  d905ac9b8100         fld dword ptr [0x819bac]
// 0073cffa  51                   push ecx
// 0073cffb  d91c24               fstp dword ptr [esp]
// 0073cffe  68bab9cd00           push 0xcdb9ba
// 0073d003  68e9e7f100           push 0xf1e7e9
// 0073d008  8bcd                 mov ecx, ebp
// 0073d00a  c7464c7a799900       mov dword ptr [esi + 0x4c], 0x99797a
// 0073d011  e86a22faff           call 0x6df280
// 0073d016  d90540f88200         fld dword ptr [0x82f840]
// 0073d01c  51                   push ecx
// 0073d01d  d91c24               fstp dword ptr [esp]
// 0073d020  6876749200           push 0x927476
// 0073d025  68b3b2c800           push 0xc8b2b3
// 0073d02a  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0073d030  e84b22faff           call 0x6df280
// 0073d035  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d03b  51                   push ecx
// 0073d03c  d91c24               fstp dword ptr [esp]
// 0073d03f  688583a200           push 0xa28385
// 0073d044  68d7d7e200           push 0xe2d7d7
// 0073d049  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0073d04f  e82c22faff           call 0x6df280
// 0073d054  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d05a  51                   push ecx
// 0073d05b  d91c24               fstp dword ptr [esp]
// 0073d05e  68b0aec500           push 0xc5aeb0
// 0073d063  68e8e8f100           push 0xf1e8e8
// 0073d068  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0073d06e  e80d22faff           call 0x6df280
// 0073d073  d905ac9b8100         fld dword ptr [0x819bac]
// 0073d079  51                   push ecx
// 0073d07a  d91c24               fstp dword ptr [esp]
// 0073d07d  687a799900           push 0x99797a
// 0073d082  68f7f5f900           push 0xf9f5f7
// 0073d087  8d4e28               lea ecx, [esi + 0x28]
// 0073d08a  c7862c050000eceada00 mov dword ptr [esi + 0x52c], 0xdaeaec
// 0073d094  c7462024202900       mov dword ptr [esi + 0x20], 0x292024
// 0073d09b  e8e021faff           call 0x6df280
// 0073d0a0  b84b4b6f00           mov eax, 0x6f4b4b
// 0073d0a5  8d542448             lea edx, [esp + 0x48]
// 0073d0a9  89442460             mov dword ptr [esp + 0x60], eax
// 0073d0ad  89442464             mov dword ptr [esp + 0x64], eax
// 0073d0b1  89442468             mov dword ptr [esp + 0x68], eax
// 0073d0b5  52                   push edx
// 0073d0b6  8d442418             lea eax, [esp + 0x18]
// 0073d0ba  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 0073d0c4  c786e4030000d6d3e700 mov dword ptr [esi + 0x3e4], 0xe7d3d6
// 0073d0ce  c786cc030000dfdfea00 mov dword ptr [esi + 0x3cc], 0xeadfdf
// 0073d0d8  c786d8030000b1b0c300 mov dword ptr [esi + 0x3d8], 0xc3b0b1
// 0073d0e2  c786f80100009b9ab300 mov dword ptr [esi + 0x1f8], 0xb39a9b
// 0073d0ec  c78608040000d6d7e700 mov dword ptr [esi + 0x408], 0xe7d7d6
// 0073d0f6  c744244c54547500     mov dword ptr [esp + 0x4c], 0x755454
// 0073d0fe  c74424506e6d8f00     mov dword ptr [esp + 0x50], 0x8f6d6e
// 0073d106  c7442454a8a7be00     mov dword ptr [esp + 0x54], 0xbea7a8
// 0073d10e  c7442458fdfaff00     mov dword ptr [esp + 0x58], 0xfffafd
// 0073d116  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0073d11a  c7442478dbdae400     mov dword ptr [esp + 0x78], 0xe4dadb
// 0073d122  50                   push eax
// 0073d123  c74424301f000000     mov dword ptr [esp + 0x30], 0x1f
// 0073d12b  c744242c2b000000     mov dword ptr [esp + 0x2c], 0x2b
// 0073d133  c744242829000000     mov dword ptr [esp + 0x28], 0x29
// 0073d13b  c744242428000000     mov dword ptr [esp + 0x24], 0x28
// 0073d143  c744242027000000     mov dword ptr [esp + 0x20], 0x27
// 0073d14b  c744241c26000000     mov dword ptr [esp + 0x1c], 0x26
// 0073d153  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0073d15e  c7442478ffc06f00     mov dword ptr [esp + 0x78], 0x6fc0ff
// 0073d166  c7442474fe803e00     mov dword ptr [esp + 0x74], 0x3e80fe
// 0073d16e  c7442464ffeec200     mov dword ptr [esp + 0x64], 0xc2eeff
// 0073d176  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 0073d17e  c74424481e000000     mov dword ptr [esp + 0x48], 0x1e
// 0073d186  c744244424000000     mov dword ptr [esp + 0x44], 0x24
// 0073d18e  c744244021000000     mov dword ptr [esp + 0x40], 0x21
// 0073d196  c744243c32000000     mov dword ptr [esp + 0x3c], 0x32
// 0073d19e  c744243825000000     mov dword ptr [esp + 0x38], 0x25
// 0073d1a6  c744243420000000     mov dword ptr [esp + 0x34], 0x20
// 0073d1ae  6a0d                 push 0xd
// 0073d1b0  8bce                 mov ecx, esi
// 0073d1b2  e8e90ef7ff           call 0x6ae0a0
// 0073d1b7  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 0073d1c1  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 0073d1c8  5f                   pop edi
// 0073d1c9  5d                   pop ebp
// 0073d1ca  5b                   pop ebx
// 0073d1cb  7428                 je 0x73d1f5
// 0073d1cd  b88d8d8d00           mov eax, 0x8d8d8d
// 0073d1d2  898620040000         mov dword ptr [esi + 0x420], eax
// 0073d1d8  898638040000         mov dword ptr [esi + 0x438], eax
// 0073d1de  89860c030000         mov dword ptr [esi + 0x30c], eax
// 0073d1e4  8b4650               mov eax, dword ptr [esi + 0x50]
// 0073d1e7  83f8ff               cmp eax, -1
// 0073d1ea  7503                 jne 0x73d1ef
// 0073d1ec  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0073d1ef  898644040000         mov dword ptr [esi + 0x444], eax
// 0073d1f5  8bce                 mov ecx, esi
// 0073d1f7  5e                   pop esi
// 0073d1f8  83c46c               add esp, 0x6c
// 0073d1fb  e950e8ffff           jmp 0x73ba50
// 0073d200  3ecc                 int3 
// 0073d202  7300                 jae 0x73d204
// 0073d204  3ece                 into 
// 0073d206  7300                 jae 0x73d208
// 0073d208  b3cf                 mov bl, 0xcf
// 0073d20a  7300                 jae 0x73d20c
// 0073d20c  3ecc                 int3 
// 0073d20e  7300                 jae 0x73d210
// 0073d210  3ecc                 int3 
// 0073d212  7300                 jae 0x73d214
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOffice2003Theme.cpp (function ?RefreshMetrics@CXTPOffice2003Theme@XTPPaintThemes@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp
