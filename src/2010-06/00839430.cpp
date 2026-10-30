// roc 2010-06 00839430  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 2260 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00839430
//
// 00839430  83ec6c               sub esp, 0x6c
// 00839433  56                   push esi
// 00839434  8bf1                 mov esi, ecx
// 00839436  e8553df7ff           call 0x7ad190
// 0083943b  e816edf6ff           call 0x7a8156
// 00839440  85c0                 test eax, eax
// 00839442  7428                 je 0x83946c
// 00839444  8b10                 mov edx, dword ptr [eax]
// 00839446  8bc8                 mov ecx, eax
// 00839448  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0083944b  ffd0                 call eax
// 0083944d  85c0                 test eax, eax
// 0083944f  741b                 je 0x83946c
// 00839451  e800edf6ff           call 0x7a8156
// 00839456  85c0                 test eax, eax
// 00839458  7412                 je 0x83946c
// 0083945a  8b10                 mov edx, dword ptr [eax]
// 0083945c  8bc8                 mov ecx, eax
// 0083945e  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00839461  ffd0                 call eax
// 00839463  85c0                 test eax, eax
// 00839465  7405                 je 0x83946c
// 00839467  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083946a  eb02                 jmp 0x83946e
// 0083946c  33c0                 xor eax, eax
// 0083946e  53                   push ebx
// 0083946f  55                   push ebp
// 00839470  57                   push edi
// 00839471  68945da500           push 0xa55d94
// 00839476  50                   push eax
// 00839477  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0083947d  e87e68feff           call 0x81fd00
// 00839482  e899a6faff           call 0x7e3b20
// 00839487  d905e026a100         fld dword ptr [0xa126e0]
// 0083948d  51                   push ecx
// 0083948e  d91c24               fstp dword ptr [esp]
// 00839491  6a2a                 push 0x2a
// 00839493  8bce                 mov ecx, esi
// 00839495  8bf8                 mov edi, eax
// 00839497  8d9edc040000         lea ebx, [esi + 0x4dc]
// 0083949d  e86e3cf7ff           call 0x7ad110
// 008394a2  50                   push eax
// 008394a3  6826020000           push 0x226
// 008394a8  6a2a                 push 0x2a
// 008394aa  8bce                 mov ecx, esi
// 008394ac  e85f3cf7ff           call 0x7ad110
// 008394b1  50                   push eax
// 008394b2  6a05                 push 5
// 008394b4  8bce                 mov ecx, esi
// 008394b6  e8553cf7ff           call 0x7ad110
// 008394bb  50                   push eax
// 008394bc  8bcf                 mov ecx, edi
// 008394be  e83d9dfaff           call 0x7e3200
// 008394c3  50                   push eax
// 008394c4  8bcb                 mov ecx, ebx
// 008394c6  e8459bfaff           call 0x7e3010
// 008394cb  e850a6faff           call 0x7e3b20
// 008394d0  d905e026a100         fld dword ptr [0xa126e0]
// 008394d6  51                   push ecx
// 008394d7  d91c24               fstp dword ptr [esp]
// 008394da  6a0f                 push 0xf
// 008394dc  8bce                 mov ecx, esi
// 008394de  8bd8                 mov ebx, eax
// 008394e0  8dbe7c040000         lea edi, [esi + 0x47c]
// 008394e6  e8253cf7ff           call 0x7ad110
// 008394eb  50                   push eax
// 008394ec  68cd000000           push 0xcd
// 008394f1  6a05                 push 5
// 008394f3  8bce                 mov ecx, esi
// 008394f5  e8163cf7ff           call 0x7ad110
// 008394fa  50                   push eax
// 008394fb  6a0f                 push 0xf
// 008394fd  8bce                 mov ecx, esi
// 008394ff  e80c3cf7ff           call 0x7ad110
// 00839504  50                   push eax
// 00839505  8bcb                 mov ecx, ebx
// 00839507  e8f49cfaff           call 0x7e3200
// 0083950c  50                   push eax
// 0083950d  8bcf                 mov ecx, edi
// 0083950f  e8fc9afaff           call 0x7e3010
// 00839514  e807a6faff           call 0x7e3b20
// 00839519  d905e026a100         fld dword ptr [0xa126e0]
// 0083951f  51                   push ecx
// 00839520  d91c24               fstp dword ptr [esp]
// 00839523  68cd000000           push 0xcd
// 00839528  6a05                 push 5
// 0083952a  8bce                 mov ecx, esi
// 0083952c  8be8                 mov ebp, eax
// 0083952e  8d9e5c040000         lea ebx, [esi + 0x45c]
// 00839534  e8d73bf7ff           call 0x7ad110
// 00839539  50                   push eax
// 0083953a  6a0f                 push 0xf
// 0083953c  8bce                 mov ecx, esi
// 0083953e  e8cd3bf7ff           call 0x7ad110
// 00839543  50                   push eax
// 00839544  8bcd                 mov ecx, ebp
// 00839546  e8b59cfaff           call 0x7e3200
// 0083954b  50                   push eax
// 0083954c  6a0f                 push 0xf
// 0083954e  8bce                 mov ecx, esi
// 00839550  e8bb3bf7ff           call 0x7ad110
// 00839555  50                   push eax
// 00839556  8bcb                 mov ecx, ebx
// 00839558  e8b39afaff           call 0x7e3010
// 0083955d  6a1e                 push 0x1e
// 0083955f  8bce                 mov ecx, esi
// 00839561  e8aa3bf7ff           call 0x7ad110
// 00839566  6a1e                 push 0x1e
// 00839568  8bce                 mov ecx, esi
// 0083956a  898638050000         mov dword ptr [esi + 0x538], eax
// 00839570  e89b3bf7ff           call 0x7ad110
// 00839575  6a10                 push 0x10
// 00839577  8bce                 mov ecx, esi
// 00839579  898620050000         mov dword ptr [esi + 0x520], eax
// 0083957f  e88c3bf7ff           call 0x7ad110
// 00839584  89464c               mov dword ptr [esi + 0x4c], eax
// 00839587  e894a5faff           call 0x7e3b20
// 0083958c  d905e026a100         fld dword ptr [0xa126e0]
// 00839592  51                   push ecx
// 00839593  d91c24               fstp dword ptr [esp]
// 00839596  6826020000           push 0x226
// 0083959b  6a0f                 push 0xf
// 0083959d  8bce                 mov ecx, esi
// 0083959f  8944241c             mov dword ptr [esp + 0x1c], eax
// 008395a3  8daefc040000         lea ebp, [esi + 0x4fc]
// 008395a9  e8623bf7ff           call 0x7ad110
// 008395ae  50                   push eax
// 008395af  6a05                 push 5
// 008395b1  8bce                 mov ecx, esi
// 008395b3  e8583bf7ff           call 0x7ad110
// 008395b8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008395bc  50                   push eax
// 008395bd  e83e9cfaff           call 0x7e3200
// 008395c2  50                   push eax
// 008395c3  6a29                 push 0x29
// 008395c5  8bce                 mov ecx, esi
// 008395c7  e8443bf7ff           call 0x7ad110
// 008395cc  50                   push eax
// 008395cd  8bcd                 mov ecx, ebp
// 008395cf  e83c9afaff           call 0x7e3010
// 008395d4  e847a5faff           call 0x7e3b20
// 008395d9  d905e026a100         fld dword ptr [0xa126e0]
// 008395df  51                   push ecx
// 008395e0  d91c24               fstp dword ptr [esp]
// 008395e3  6a10                 push 0x10
// 008395e5  8bce                 mov ecx, esi
// 008395e7  89442418             mov dword ptr [esp + 0x18], eax
// 008395eb  e8203bf7ff           call 0x7ad110
// 008395f0  50                   push eax
// 008395f1  6a33                 push 0x33
// 008395f3  6a10                 push 0x10
// 008395f5  8bce                 mov ecx, esi
// 008395f7  e8143bf7ff           call 0x7ad110
// 008395fc  50                   push eax
// 008395fd  6a33                 push 0x33
// 008395ff  8bce                 mov ecx, esi
// 00839601  e80a3bf7ff           call 0x7ad110
// 00839606  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083960a  50                   push eax
// 0083960b  e8f09bfaff           call 0x7e3200
// 00839610  50                   push eax
// 00839611  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00839617  e8f499faff           call 0x7e3010
// 0083961c  c7864005000000000000 mov dword ptr [esi + 0x540], 0
// 00839626  e8f5a4faff           call 0x7e3b20
// 0083962b  d905e026a100         fld dword ptr [0xa126e0]
// 00839631  51                   push ecx
// 00839632  d91c24               fstp dword ptr [esp]
// 00839635  6826020000           push 0x226
// 0083963a  6a0f                 push 0xf
// 0083963c  8bce                 mov ecx, esi
// 0083963e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839642  e8c93af7ff           call 0x7ad110
// 00839647  50                   push eax
// 00839648  6a05                 push 5
// 0083964a  8bce                 mov ecx, esi
// 0083964c  e8bf3af7ff           call 0x7ad110
// 00839651  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00839655  50                   push eax
// 00839656  e8a59bfaff           call 0x7e3200
// 0083965b  50                   push eax
// 0083965c  6a29                 push 0x29
// 0083965e  8bce                 mov ecx, esi
// 00839660  e8ab3af7ff           call 0x7ad110
// 00839665  50                   push eax
// 00839666  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0083966c  e89f99faff           call 0x7e3010
// 00839671  e8aaa4faff           call 0x7e3b20
// 00839676  6a46                 push 0x46
// 00839678  6a05                 push 5
// 0083967a  8bce                 mov ecx, esi
// 0083967c  89442418             mov dword ptr [esp + 0x18], eax
// 00839680  e88b3af7ff           call 0x7ad110
// 00839685  50                   push eax
// 00839686  6a0f                 push 0xf
// 00839688  8bce                 mov ecx, esi
// 0083968a  e8813af7ff           call 0x7ad110
// 0083968f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00839693  50                   push eax
// 00839694  e8679bfaff           call 0x7e3200
// 00839699  89862c050000         mov dword ptr [esi + 0x52c], eax
// 0083969f  e87ca4faff           call 0x7e3b20
// 008396a4  8b4858               mov ecx, dword ptr [eax + 0x58]
// 008396a7  83c050               add eax, 0x50
// 008396aa  83f9ff               cmp ecx, -1
// 008396ad  7505                 jne 0x8396b4
// 008396af  8b4004               mov eax, dword ptr [eax + 4]
// 008396b2  eb02                 jmp 0x8396b6
// 008396b4  8bc1                 mov eax, ecx
// 008396b6  8986fc030000         mov dword ptr [esi + 0x3fc], eax
// 008396bc  e85fa4faff           call 0x7e3b20
// 008396c1  6a00                 push 0
// 008396c3  8bc8                 mov ecx, eax
// 008396c5  e8a69dfaff           call 0x7e3470
// 008396ca  85c0                 test eax, eax
// 008396cc  7448                 je 0x839716
// 008396ce  6a0f                 push 0xf
// 008396d0  8bce                 mov ecx, esi
// 008396d2  e8393af7ff           call 0x7ad110
// 008396d7  50                   push eax
// 008396d8  8bcf                 mov ecx, edi
// 008396da  e891a3faff           call 0x7e3a70
// 008396df  6a0f                 push 0xf
// 008396e1  8bce                 mov ecx, esi
// 008396e3  e8283af7ff           call 0x7ad110
// 008396e8  50                   push eax
// 008396e9  8bcb                 mov ecx, ebx
// 008396eb  e880a3faff           call 0x7e3a70
// 008396f0  6a0f                 push 0xf
// 008396f2  8bce                 mov ecx, esi
// 008396f4  e8173af7ff           call 0x7ad110
// 008396f9  50                   push eax
// 008396fa  8bcd                 mov ecx, ebp
// 008396fc  e86fa3faff           call 0x7e3a70
// 00839701  6a0f                 push 0xf
// 00839703  8bce                 mov ecx, esi
// 00839705  e8063af7ff           call 0x7ad110
// 0083970a  50                   push eax
// 0083970b  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00839711  e85aa3faff           call 0x7e3a70
// 00839716  8bce                 mov ecx, esi
// 00839718  e8b339f7ff           call 0x7ad0d0
// 0083971d  48                   dec eax
// 0083971e  83f804               cmp eax, 4
// 00839721  0f878a050000         ja 0x839cb1
// 00839727  ff2485f09c8300       jmp dword ptr [eax*4 + 0x839cf0]
// 0083972e  d905e026a100         fld dword ptr [0xa126e0]
// 00839734  51                   push ecx
// 00839735  d91c24               fstp dword ptr [esp]
// 00839738  68c4dafa00           push 0xfadac4
// 0083973d  689ebef500           push 0xf5be9e
// 00839742  8bcb                 mov ecx, ebx
// 00839744  e8c798faff           call 0x7e3010
// 00839749  d90558daa200         fld dword ptr [0xa2da58]
// 0083974f  51                   push ecx
// 00839750  d91c24               fstp dword ptr [esp]
// 00839753  6881a9e200           push 0xe2a981
// 00839758  68ddecfe00           push 0xfeecdd
// 0083975d  8bcf                 mov ecx, edi
// 0083975f  c786200500003b619c00 mov dword ptr [esi + 0x520], 0x9c613b
// 00839769  e8a298faff           call 0x7e3010
// 0083976e  d905e026a100         fld dword ptr [0xa126e0]
// 00839774  51                   push ecx
// 00839775  d91c24               fstp dword ptr [esp]
// 00839778  6893b5e700           push 0xe7b593
// 0083977d  68e3efff00           push 0xffefe3
// 00839782  8bcd                 mov ecx, ebp
// 00839784  c7464c2a66c900       mov dword ptr [esi + 0x4c], 0xc9662a
// 0083978b  e88098faff           call 0x7e3010
// 00839790  d90558daa200         fld dword ptr [0xa2da58]
// 00839796  51                   push ecx
// 00839797  d91c24               fstp dword ptr [esp]
// 0083979a  6800359100           push 0x913500
// 0083979f  6875a6f100           push 0xf1a675
// 008397a4  8d8e9c040000         lea ecx, [esi + 0x49c]
// 008397aa  e86198faff           call 0x7e3010
// 008397af  d905e026a100         fld dword ptr [0xa126e0]
// 008397b5  51                   push ecx
// 008397b6  d91c24               fstp dword ptr [esp]
// 008397b9  6879a1dc00           push 0xdca179
// 008397be  68cbddf600           push 0xf6ddcb
// 008397c3  8d8edc040000         lea ecx, [esi + 0x4dc]
// 008397c9  e84298faff           call 0x7e3010
// 008397ce  d905e026a100         fld dword ptr [0xa126e0]
// 008397d4  51                   push ecx
// 008397d5  d91c24               fstp dword ptr [esp]
// 008397d8  6881a9e200           push 0xe2a981
// 008397dd  68e3effe00           push 0xfeefe3
// 008397e2  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 008397e8  e82398faff           call 0x7e3010
// 008397ed  d905e026a100         fld dword ptr [0xa126e0]
// 008397f3  51                   push ecx
// 008397f4  d91c24               fstp dword ptr [esp]
// 008397f7  68617aac00           push 0xac7a61
// 008397fc  68e9ecf200           push 0xf2ece9
// 00839801  8d4e28               lea ecx, [esi + 0x28]
// 00839804  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 0083980e  c74620161e3600       mov dword ptr [esi + 0x20], 0x361e16
// 00839815  c78638050000a9c7f000 mov dword ptr [esi + 0x538], 0xf0c7a9
// 0083981f  e8ec97faff           call 0x7e3010
// 00839824  b800008000           mov eax, 0x800000
// 00839829  c786e4030000cbe1fc00 mov dword ptr [esi + 0x3e4], 0xfce1cb
// 00839833  c786cc030000d8e7fc00 mov dword ptr [esi + 0x3cc], 0xfce7d8
// 0083983d  c786d80300009ebef500 mov dword ptr [esi + 0x3d8], 0xf5be9e
// 00839847  c786f80100009099ae00 mov dword ptr [esi + 0x1f8], 0xae9990
// 00839851  c78608040000bdd3f700 mov dword ptr [esi + 0x408], 0xf7d3bd
// 0083985b  c744244826000000     mov dword ptr [esp + 0x48], 0x26
// 00839863  c744244c27000000     mov dword ptr [esp + 0x4c], 0x27
// 0083986b  c744245028000000     mov dword ptr [esp + 0x50], 0x28
// 00839873  c744245429000000     mov dword ptr [esp + 0x54], 0x29
// 0083987b  c74424582b000000     mov dword ptr [esp + 0x58], 0x2b
// 00839883  c744245c1f000000     mov dword ptr [esp + 0x5c], 0x1f
// 0083988b  c744246020000000     mov dword ptr [esp + 0x60], 0x20
// 00839893  c744246432000000     mov dword ptr [esp + 0x64], 0x32
// 0083989b  c744246825000000     mov dword ptr [esp + 0x68], 0x25
// 008398a3  c744246c21000000     mov dword ptr [esp + 0x6c], 0x21
// 008398ab  c744247024000000     mov dword ptr [esp + 0x70], 0x24
// 008398b3  c74424741e000000     mov dword ptr [esp + 0x74], 0x1e
// 008398bb  c74424782f000000     mov dword ptr [esp + 0x78], 0x2f
// 008398c3  c744241427417600     mov dword ptr [esp + 0x14], 0x764127
// 008398cb  c74424186a8ccb00     mov dword ptr [esp + 0x18], 0xcb8c6a
// 008398d3  c744241c6d96d000     mov dword ptr [esp + 0x1c], 0xd0966d
// 008398db  c7442420f6f6f600     mov dword ptr [esp + 0x20], 0xf6f6f6
// 008398e3  c7442424002d9600     mov dword ptr [esp + 0x24], 0x962d00
// 008398eb  c7442428ffeec200     mov dword ptr [esp + 0x28], 0xc2eeff
// 008398f3  8944242c             mov dword ptr [esp + 0x2c], eax
// 008398f7  89442430             mov dword ptr [esp + 0x30], eax
// 008398fb  8d4c2414             lea ecx, [esp + 0x14]
// 008398ff  51                   push ecx
// 00839900  8d54244c             lea edx, [esp + 0x4c]
// 00839904  89442438             mov dword ptr [esp + 0x38], eax
// 00839908  c744243cfe803e00     mov dword ptr [esp + 0x3c], 0x3e80fe
// 00839910  c7442440ffc06f00     mov dword ptr [esp + 0x40], 0x6fc0ff
// 00839918  c7442444c4dbf900     mov dword ptr [esp + 0x44], 0xf9dbc4
// 00839920  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00839928  52                   push edx
// 00839929  e970030000           jmp 0x839c9e
// 0083992e  d905e026a100         fld dword ptr [0xa126e0]
// 00839934  51                   push ecx
// 00839935  d91c24               fstp dword ptr [esp]
// 00839938  68f2f1e400           push 0xe4f1f2
// 0083993d  68d9d9a700           push 0xa7d9d9
// 00839942  8bcb                 mov ecx, ebx
// 00839944  e8c796faff           call 0x7e3010
// 00839949  d905e0fca000         fld dword ptr [0xa0fce0]
// 0083994f  51                   push ecx
// 00839950  d91c24               fstp dword ptr [esp]
// 00839953  68b7c69100           push 0x91c6b7
// 00839958  68f4f7de00           push 0xdef7f4
// 0083995d  8bcf                 mov ecx, edi
// 0083995f  e8ac96faff           call 0x7e3010
// 00839964  d905e026a100         fld dword ptr [0xa126e0]
// 0083996a  51                   push ecx
// 0083996b  d91c24               fstp dword ptr [esp]
// 0083996e  68c2ce9f00           push 0x9fcec2
// 00839973  bf60805800           mov edi, 0x588060
// 00839978  68ecf0d500           push 0xd5f0ec
// 0083997d  8bcd                 mov ecx, ebp
// 0083997f  89be20050000         mov dword ptr [esi + 0x520], edi
// 00839985  c7464c74865e00       mov dword ptr [esi + 0x4c], 0x5e8674
// 0083998c  e87f96faff           call 0x7e3010
// 00839991  d905e0fca000         fld dword ptr [0xa0fce0]
// 00839997  51                   push ecx
// 00839998  d91c24               fstp dword ptr [esp]
// 0083999b  6860776b00           push 0x6b7760
// 008399a0  68b0c28c00           push 0x8cc2b0
// 008399a5  8d8e9c040000         lea ecx, [esi + 0x49c]
// 008399ab  e86096faff           call 0x7e3010
// 008399b0  d905e0fca000         fld dword ptr [0xa0fce0]
// 008399b6  51                   push ecx
// 008399b7  d91c24               fstp dword ptr [esp]
// 008399ba  68a4b47800           push 0x78b4a4
// 008399bf  68e6e6d100           push 0xd1e6e6
// 008399c4  8d8edc040000         lea ecx, [esi + 0x4dc]
// 008399ca  e84196faff           call 0x7e3010
// 008399cf  d905e026a100         fld dword ptr [0xa126e0]
// 008399d5  51                   push ecx
// 008399d6  d91c24               fstp dword ptr [esp]
// 008399d9  68b8c69300           push 0x93c6b8
// 008399de  68ecf0d500           push 0xd5f0ec
// 008399e3  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 008399e9  e82296faff           call 0x7e3010
// 008399ee  d905e026a100         fld dword ptr [0xa126e0]
// 008399f4  51                   push ecx
// 008399f5  d91c24               fstp dword ptr [esp]
// 008399f8  6883907100           push 0x719083
// 008399fd  68f3f4f000           push 0xf0f4f3
// 00839a02  8d4e28               lea ecx, [esi + 0x28]
// 00839a05  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 00839a0f  c746201f221900       mov dword ptr [esi + 0x20], 0x19221f
// 00839a16  e8f595faff           call 0x7e3010
// 00839a1b  b83f5d3800           mov eax, 0x385d3f
// 00839a20  89442460             mov dword ptr [esp + 0x60], eax
// 00839a24  89442464             mov dword ptr [esp + 0x64], eax
// 00839a28  89442468             mov dword ptr [esp + 0x68], eax
// 00839a2c  8d442448             lea eax, [esp + 0x48]
// 00839a30  50                   push eax
// 00839a31  8d4c2418             lea ecx, [esp + 0x18]
// 00839a35  c78638050000c5d49f00 mov dword ptr [esi + 0x538], 0x9fd4c5
// 00839a3f  c786e4030000d8e3b600 mov dword ptr [esi + 0x3e4], 0xb6e3d8
// 00839a49  c786cc030000e2e7bf00 mov dword ptr [esi + 0x3cc], 0xbfe7e2
// 00839a53  c786d8030000abc08a00 mov dword ptr [esi + 0x3d8], 0x8ac0ab
// 00839a5d  c786f801000097a07b00 mov dword ptr [esi + 0x1f8], 0x7ba097
// 00839a67  c78608040000dee3bd00 mov dword ptr [esi + 0x408], 0xbde3de
// 00839a71  c744244c515e3300     mov dword ptr [esp + 0x4c], 0x335e51
// 00839a79  897c2450             mov dword ptr [esp + 0x50], edi
// 00839a7d  c74424549fae7a00     mov dword ptr [esp + 0x54], 0x7aae9f
// 00839a85  c7442458f4f4ee00     mov dword ptr [esp + 0x58], 0xeef4f4
// 00839a8d  c744245c758d5e00     mov dword ptr [esp + 0x5c], 0x5e8d75
// 00839a95  c7442478d1dead00     mov dword ptr [esp + 0x78], 0xadded1
// 00839a9d  51                   push ecx
// 00839a9e  e970010000           jmp 0x839c13
// 00839aa3  d905e026a100         fld dword ptr [0xa126e0]
// 00839aa9  51                   push ecx
// 00839aaa  d91c24               fstp dword ptr [esp]
// 00839aad  68f3f3f700           push 0xf7f3f3
// 00839ab2  68d7d7e500           push 0xe5d7d7
// 00839ab7  8bcb                 mov ecx, ebx
// 00839ab9  e85295faff           call 0x7e3010
// 00839abe  d90558daa200         fld dword ptr [0xa2da58]
// 00839ac4  51                   push ecx
// 00839ac5  d91c24               fstp dword ptr [esp]
// 00839ac8  689c9bb700           push 0xb79b9c
// 00839acd  bb7c7c9400           mov ebx, 0x947c7c
// 00839ad2  68f9f9ff00           push 0xfff9f9
// 00839ad7  8bcf                 mov ecx, edi
// 00839ad9  899e20050000         mov dword ptr [esi + 0x520], ebx
// 00839adf  e82c95faff           call 0x7e3010
// 00839ae4  d905e026a100         fld dword ptr [0xa126e0]
// 00839aea  51                   push ecx
// 00839aeb  d91c24               fstp dword ptr [esp]
// 00839aee  68bab9cd00           push 0xcdb9ba
// 00839af3  68e9e7f100           push 0xf1e7e9
// 00839af8  8bcd                 mov ecx, ebp
// 00839afa  c7464c7a799900       mov dword ptr [esi + 0x4c], 0x99797a
// 00839b01  e80a95faff           call 0x7e3010
// 00839b06  d90558daa200         fld dword ptr [0xa2da58]
// 00839b0c  51                   push ecx
// 00839b0d  d91c24               fstp dword ptr [esp]
// 00839b10  6876749200           push 0x927476
// 00839b15  68b3b2c800           push 0xc8b2b3
// 00839b1a  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00839b20  e8eb94faff           call 0x7e3010
// 00839b25  d905e026a100         fld dword ptr [0xa126e0]
// 00839b2b  51                   push ecx
// 00839b2c  d91c24               fstp dword ptr [esp]
// 00839b2f  688583a200           push 0xa28385
// 00839b34  68d7d7e200           push 0xe2d7d7
// 00839b39  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00839b3f  e8cc94faff           call 0x7e3010
// 00839b44  d905e026a100         fld dword ptr [0xa126e0]
// 00839b4a  51                   push ecx
// 00839b4b  d91c24               fstp dword ptr [esp]
// 00839b4e  68b0aec500           push 0xc5aeb0
// 00839b53  68e8e8f100           push 0xf1e8e8
// 00839b58  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00839b5e  e8ad94faff           call 0x7e3010
// 00839b63  d905e026a100         fld dword ptr [0xa126e0]
// 00839b69  51                   push ecx
// 00839b6a  d91c24               fstp dword ptr [esp]
// 00839b6d  687a799900           push 0x99797a
// 00839b72  68f7f5f900           push 0xf9f5f7
// 00839b77  8d4e28               lea ecx, [esi + 0x28]
// 00839b7a  c7862c050000eceada00 mov dword ptr [esi + 0x52c], 0xdaeaec
// 00839b84  c7462024202900       mov dword ptr [esi + 0x20], 0x292024
// 00839b8b  e88094faff           call 0x7e3010
// 00839b90  b84b4b6f00           mov eax, 0x6f4b4b
// 00839b95  8d542448             lea edx, [esp + 0x48]
// 00839b99  89442460             mov dword ptr [esp + 0x60], eax
// 00839b9d  89442464             mov dword ptr [esp + 0x64], eax
// 00839ba1  89442468             mov dword ptr [esp + 0x68], eax
// 00839ba5  52                   push edx
// 00839ba6  8d442418             lea eax, [esp + 0x18]
// 00839baa  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 00839bb4  c786e4030000d6d3e700 mov dword ptr [esi + 0x3e4], 0xe7d3d6
// 00839bbe  c786cc030000dfdfea00 mov dword ptr [esi + 0x3cc], 0xeadfdf
// 00839bc8  c786d8030000b1b0c300 mov dword ptr [esi + 0x3d8], 0xc3b0b1
// 00839bd2  c786f80100009b9ab300 mov dword ptr [esi + 0x1f8], 0xb39a9b
// 00839bdc  c78608040000d6d7e700 mov dword ptr [esi + 0x408], 0xe7d7d6
// 00839be6  c744244c54547500     mov dword ptr [esp + 0x4c], 0x755454
// 00839bee  c74424506e6d8f00     mov dword ptr [esp + 0x50], 0x8f6d6e
// 00839bf6  c7442454a8a7be00     mov dword ptr [esp + 0x54], 0xbea7a8
// 00839bfe  c7442458fdfaff00     mov dword ptr [esp + 0x58], 0xfffafd
// 00839c06  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00839c0a  c7442478dbdae400     mov dword ptr [esp + 0x78], 0xe4dadb
// 00839c12  50                   push eax
// 00839c13  c74424301f000000     mov dword ptr [esp + 0x30], 0x1f
// 00839c1b  c744242c2b000000     mov dword ptr [esp + 0x2c], 0x2b
// 00839c23  c744242829000000     mov dword ptr [esp + 0x28], 0x29
// 00839c2b  c744242428000000     mov dword ptr [esp + 0x24], 0x28
// 00839c33  c744242027000000     mov dword ptr [esp + 0x20], 0x27
// 00839c3b  c744241c26000000     mov dword ptr [esp + 0x1c], 0x26
// 00839c43  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00839c4e  c7442478ffc06f00     mov dword ptr [esp + 0x78], 0x6fc0ff
// 00839c56  c7442474fe803e00     mov dword ptr [esp + 0x74], 0x3e80fe
// 00839c5e  c7442464ffeec200     mov dword ptr [esp + 0x64], 0xc2eeff
// 00839c66  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 00839c6e  c74424481e000000     mov dword ptr [esp + 0x48], 0x1e
// 00839c76  c744244424000000     mov dword ptr [esp + 0x44], 0x24
// 00839c7e  c744244021000000     mov dword ptr [esp + 0x40], 0x21
// 00839c86  c744243c32000000     mov dword ptr [esp + 0x3c], 0x32
// 00839c8e  c744243825000000     mov dword ptr [esp + 0x38], 0x25
// 00839c96  c744243420000000     mov dword ptr [esp + 0x34], 0x20
// 00839c9e  6a0d                 push 0xd
// 00839ca0  8bce                 mov ecx, esi
// 00839ca2  e89934f7ff           call 0x7ad140
// 00839ca7  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 00839cb1  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 00839cb8  5f                   pop edi
// 00839cb9  5d                   pop ebp
// 00839cba  5b                   pop ebx
// 00839cbb  7428                 je 0x839ce5
// 00839cbd  b88d8d8d00           mov eax, 0x8d8d8d
// 00839cc2  898620040000         mov dword ptr [esi + 0x420], eax
// 00839cc8  898638040000         mov dword ptr [esi + 0x438], eax
// 00839cce  89860c030000         mov dword ptr [esi + 0x30c], eax
// 00839cd4  8b4650               mov eax, dword ptr [esi + 0x50]
// 00839cd7  83f8ff               cmp eax, -1
// 00839cda  7503                 jne 0x839cdf
// 00839cdc  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00839cdf  898644040000         mov dword ptr [esi + 0x444], eax
// 00839ce5  8bce                 mov ecx, esi
// 00839ce7  5e                   pop esi
// 00839ce8  83c46c               add esp, 0x6c
// 00839ceb  e950e8ffff           jmp 0x838540
// 00839cf0  2e97                 xchg edi, eax
// 00839cf2  83002e               add dword ptr [eax], 0x2e
// 00839cf5  99                   cdq 
// 00839cf6  8300a3               add dword ptr [eax], -0x5d
// 00839cf9  9a83002e978300       lcall 0x83, 0x972e0083
// 00839d00  2e97                 xchg edi, eax
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2003Theme@XTPPaintThemes@@MAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp