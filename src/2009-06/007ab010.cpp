// roc 2009-06 007ab010  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 2260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ab010
//
// 007ab010  83ec6c               sub esp, 0x6c
// 007ab013  56                   push esi
// 007ab014  8bf1                 mov esi, ecx
// 007ab016  e8e577f7ff           call 0x722800
// 007ab01b  e8cee1f6ff           call 0x7191ee
// 007ab020  85c0                 test eax, eax
// 007ab022  7428                 je 0x7ab04c
// 007ab024  8b10                 mov edx, dword ptr [eax]
// 007ab026  8bc8                 mov ecx, eax
// 007ab028  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007ab02b  ffd0                 call eax
// 007ab02d  85c0                 test eax, eax
// 007ab02f  741b                 je 0x7ab04c
// 007ab031  e8b8e1f6ff           call 0x7191ee
// 007ab036  85c0                 test eax, eax
// 007ab038  7412                 je 0x7ab04c
// 007ab03a  8b10                 mov edx, dword ptr [eax]
// 007ab03c  8bc8                 mov ecx, eax
// 007ab03e  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007ab041  ffd0                 call eax
// 007ab043  85c0                 test eax, eax
// 007ab045  7405                 je 0x7ab04c
// 007ab047  8b4020               mov eax, dword ptr [eax + 0x20]
// 007ab04a  eb02                 jmp 0x7ab04e
// 007ab04c  33c0                 xor eax, eax
// 007ab04e  53                   push ebx
// 007ab04f  55                   push ebp
// 007ab050  57                   push edi
// 007ab051  6854248f00           push 0x8f2454
// 007ab056  50                   push eax
// 007ab057  8d8e2c010000         lea ecx, [esi + 0x12c]
// 007ab05d  e87e5cfeff           call 0x790ce0
// 007ab062  e8b99afaff           call 0x754b20
// 007ab067  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab06d  51                   push ecx
// 007ab06e  d91c24               fstp dword ptr [esp]
// 007ab071  6a2a                 push 0x2a
// 007ab073  8bce                 mov ecx, esi
// 007ab075  8bf8                 mov edi, eax
// 007ab077  8d9edc040000         lea ebx, [esi + 0x4dc]
// 007ab07d  e8fe76f7ff           call 0x722780
// 007ab082  50                   push eax
// 007ab083  6826020000           push 0x226
// 007ab088  6a2a                 push 0x2a
// 007ab08a  8bce                 mov ecx, esi
// 007ab08c  e8ef76f7ff           call 0x722780
// 007ab091  50                   push eax
// 007ab092  6a05                 push 5
// 007ab094  8bce                 mov ecx, esi
// 007ab096  e8e576f7ff           call 0x722780
// 007ab09b  50                   push eax
// 007ab09c  8bcf                 mov ecx, edi
// 007ab09e  e84d91faff           call 0x7541f0
// 007ab0a3  50                   push eax
// 007ab0a4  8bcb                 mov ecx, ebx
// 007ab0a6  e8558ffaff           call 0x754000
// 007ab0ab  e8709afaff           call 0x754b20
// 007ab0b0  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab0b6  51                   push ecx
// 007ab0b7  d91c24               fstp dword ptr [esp]
// 007ab0ba  6a0f                 push 0xf
// 007ab0bc  8bce                 mov ecx, esi
// 007ab0be  8bd8                 mov ebx, eax
// 007ab0c0  8dbe7c040000         lea edi, [esi + 0x47c]
// 007ab0c6  e8b576f7ff           call 0x722780
// 007ab0cb  50                   push eax
// 007ab0cc  68cd000000           push 0xcd
// 007ab0d1  6a05                 push 5
// 007ab0d3  8bce                 mov ecx, esi
// 007ab0d5  e8a676f7ff           call 0x722780
// 007ab0da  50                   push eax
// 007ab0db  6a0f                 push 0xf
// 007ab0dd  8bce                 mov ecx, esi
// 007ab0df  e89c76f7ff           call 0x722780
// 007ab0e4  50                   push eax
// 007ab0e5  8bcb                 mov ecx, ebx
// 007ab0e7  e80491faff           call 0x7541f0
// 007ab0ec  50                   push eax
// 007ab0ed  8bcf                 mov ecx, edi
// 007ab0ef  e80c8ffaff           call 0x754000
// 007ab0f4  e8279afaff           call 0x754b20
// 007ab0f9  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab0ff  51                   push ecx
// 007ab100  d91c24               fstp dword ptr [esp]
// 007ab103  68cd000000           push 0xcd
// 007ab108  6a05                 push 5
// 007ab10a  8bce                 mov ecx, esi
// 007ab10c  8be8                 mov ebp, eax
// 007ab10e  8d9e5c040000         lea ebx, [esi + 0x45c]
// 007ab114  e86776f7ff           call 0x722780
// 007ab119  50                   push eax
// 007ab11a  6a0f                 push 0xf
// 007ab11c  8bce                 mov ecx, esi
// 007ab11e  e85d76f7ff           call 0x722780
// 007ab123  50                   push eax
// 007ab124  8bcd                 mov ecx, ebp
// 007ab126  e8c590faff           call 0x7541f0
// 007ab12b  50                   push eax
// 007ab12c  6a0f                 push 0xf
// 007ab12e  8bce                 mov ecx, esi
// 007ab130  e84b76f7ff           call 0x722780
// 007ab135  50                   push eax
// 007ab136  8bcb                 mov ecx, ebx
// 007ab138  e8c38efaff           call 0x754000
// 007ab13d  6a1e                 push 0x1e
// 007ab13f  8bce                 mov ecx, esi
// 007ab141  e83a76f7ff           call 0x722780
// 007ab146  6a1e                 push 0x1e
// 007ab148  8bce                 mov ecx, esi
// 007ab14a  898638050000         mov dword ptr [esi + 0x538], eax
// 007ab150  e82b76f7ff           call 0x722780
// 007ab155  6a10                 push 0x10
// 007ab157  8bce                 mov ecx, esi
// 007ab159  898620050000         mov dword ptr [esi + 0x520], eax
// 007ab15f  e81c76f7ff           call 0x722780
// 007ab164  89464c               mov dword ptr [esi + 0x4c], eax
// 007ab167  e8b499faff           call 0x754b20
// 007ab16c  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab172  51                   push ecx
// 007ab173  d91c24               fstp dword ptr [esp]
// 007ab176  6826020000           push 0x226
// 007ab17b  6a0f                 push 0xf
// 007ab17d  8bce                 mov ecx, esi
// 007ab17f  8944241c             mov dword ptr [esp + 0x1c], eax
// 007ab183  8daefc040000         lea ebp, [esi + 0x4fc]
// 007ab189  e8f275f7ff           call 0x722780
// 007ab18e  50                   push eax
// 007ab18f  6a05                 push 5
// 007ab191  8bce                 mov ecx, esi
// 007ab193  e8e875f7ff           call 0x722780
// 007ab198  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ab19c  50                   push eax
// 007ab19d  e84e90faff           call 0x7541f0
// 007ab1a2  50                   push eax
// 007ab1a3  6a29                 push 0x29
// 007ab1a5  8bce                 mov ecx, esi
// 007ab1a7  e8d475f7ff           call 0x722780
// 007ab1ac  50                   push eax
// 007ab1ad  8bcd                 mov ecx, ebp
// 007ab1af  e84c8efaff           call 0x754000
// 007ab1b4  e86799faff           call 0x754b20
// 007ab1b9  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab1bf  51                   push ecx
// 007ab1c0  d91c24               fstp dword ptr [esp]
// 007ab1c3  6a10                 push 0x10
// 007ab1c5  8bce                 mov ecx, esi
// 007ab1c7  89442418             mov dword ptr [esp + 0x18], eax
// 007ab1cb  e8b075f7ff           call 0x722780
// 007ab1d0  50                   push eax
// 007ab1d1  6a33                 push 0x33
// 007ab1d3  6a10                 push 0x10
// 007ab1d5  8bce                 mov ecx, esi
// 007ab1d7  e8a475f7ff           call 0x722780
// 007ab1dc  50                   push eax
// 007ab1dd  6a33                 push 0x33
// 007ab1df  8bce                 mov ecx, esi
// 007ab1e1  e89a75f7ff           call 0x722780
// 007ab1e6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ab1ea  50                   push eax
// 007ab1eb  e80090faff           call 0x7541f0
// 007ab1f0  50                   push eax
// 007ab1f1  8d8e9c040000         lea ecx, [esi + 0x49c]
// 007ab1f7  e8048efaff           call 0x754000
// 007ab1fc  c7864005000000000000 mov dword ptr [esi + 0x540], 0
// 007ab206  e81599faff           call 0x754b20
// 007ab20b  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab211  51                   push ecx
// 007ab212  d91c24               fstp dword ptr [esp]
// 007ab215  6826020000           push 0x226
// 007ab21a  6a0f                 push 0xf
// 007ab21c  8bce                 mov ecx, esi
// 007ab21e  8944241c             mov dword ptr [esp + 0x1c], eax
// 007ab222  e85975f7ff           call 0x722780
// 007ab227  50                   push eax
// 007ab228  6a05                 push 5
// 007ab22a  8bce                 mov ecx, esi
// 007ab22c  e84f75f7ff           call 0x722780
// 007ab231  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ab235  50                   push eax
// 007ab236  e8b58ffaff           call 0x7541f0
// 007ab23b  50                   push eax
// 007ab23c  6a29                 push 0x29
// 007ab23e  8bce                 mov ecx, esi
// 007ab240  e83b75f7ff           call 0x722780
// 007ab245  50                   push eax
// 007ab246  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 007ab24c  e8af8dfaff           call 0x754000
// 007ab251  e8ca98faff           call 0x754b20
// 007ab256  6a46                 push 0x46
// 007ab258  6a05                 push 5
// 007ab25a  8bce                 mov ecx, esi
// 007ab25c  89442418             mov dword ptr [esp + 0x18], eax
// 007ab260  e81b75f7ff           call 0x722780
// 007ab265  50                   push eax
// 007ab266  6a0f                 push 0xf
// 007ab268  8bce                 mov ecx, esi
// 007ab26a  e81175f7ff           call 0x722780
// 007ab26f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ab273  50                   push eax
// 007ab274  e8778ffaff           call 0x7541f0
// 007ab279  89862c050000         mov dword ptr [esi + 0x52c], eax
// 007ab27f  e89c98faff           call 0x754b20
// 007ab284  8b4858               mov ecx, dword ptr [eax + 0x58]
// 007ab287  83c050               add eax, 0x50
// 007ab28a  83f9ff               cmp ecx, -1
// 007ab28d  7505                 jne 0x7ab294
// 007ab28f  8b4004               mov eax, dword ptr [eax + 4]
// 007ab292  eb02                 jmp 0x7ab296
// 007ab294  8bc1                 mov eax, ecx
// 007ab296  8986fc030000         mov dword ptr [esi + 0x3fc], eax
// 007ab29c  e87f98faff           call 0x754b20
// 007ab2a1  6a00                 push 0
// 007ab2a3  8bc8                 mov ecx, eax
// 007ab2a5  e8b691faff           call 0x754460
// 007ab2aa  85c0                 test eax, eax
// 007ab2ac  7448                 je 0x7ab2f6
// 007ab2ae  6a0f                 push 0xf
// 007ab2b0  8bce                 mov ecx, esi
// 007ab2b2  e8c974f7ff           call 0x722780
// 007ab2b7  50                   push eax
// 007ab2b8  8bcf                 mov ecx, edi
// 007ab2ba  e8b197faff           call 0x754a70
// 007ab2bf  6a0f                 push 0xf
// 007ab2c1  8bce                 mov ecx, esi
// 007ab2c3  e8b874f7ff           call 0x722780
// 007ab2c8  50                   push eax
// 007ab2c9  8bcb                 mov ecx, ebx
// 007ab2cb  e8a097faff           call 0x754a70
// 007ab2d0  6a0f                 push 0xf
// 007ab2d2  8bce                 mov ecx, esi
// 007ab2d4  e8a774f7ff           call 0x722780
// 007ab2d9  50                   push eax
// 007ab2da  8bcd                 mov ecx, ebp
// 007ab2dc  e88f97faff           call 0x754a70
// 007ab2e1  6a0f                 push 0xf
// 007ab2e3  8bce                 mov ecx, esi
// 007ab2e5  e89674f7ff           call 0x722780
// 007ab2ea  50                   push eax
// 007ab2eb  8d8e9c040000         lea ecx, [esi + 0x49c]
// 007ab2f1  e87a97faff           call 0x754a70
// 007ab2f6  8bce                 mov ecx, esi
// 007ab2f8  e84374f7ff           call 0x722740
// 007ab2fd  48                   dec eax
// 007ab2fe  83f804               cmp eax, 4
// 007ab301  0f878a050000         ja 0x7ab891
// 007ab307  ff2485d0b87a00       jmp dword ptr [eax*4 + 0x7ab8d0]
// 007ab30e  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab314  51                   push ecx
// 007ab315  d91c24               fstp dword ptr [esp]
// 007ab318  68c4dafa00           push 0xfadac4
// 007ab31d  689ebef500           push 0xf5be9e
// 007ab322  8bcb                 mov ecx, ebx
// 007ab324  e8d78cfaff           call 0x754000
// 007ab329  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007ab32f  51                   push ecx
// 007ab330  d91c24               fstp dword ptr [esp]
// 007ab333  6881a9e200           push 0xe2a981
// 007ab338  68ddecfe00           push 0xfeecdd
// 007ab33d  8bcf                 mov ecx, edi
// 007ab33f  c786200500003b619c00 mov dword ptr [esi + 0x520], 0x9c613b
// 007ab349  e8b28cfaff           call 0x754000
// 007ab34e  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab354  51                   push ecx
// 007ab355  d91c24               fstp dword ptr [esp]
// 007ab358  6893b5e700           push 0xe7b593
// 007ab35d  68e3efff00           push 0xffefe3
// 007ab362  8bcd                 mov ecx, ebp
// 007ab364  c7464c2a66c900       mov dword ptr [esi + 0x4c], 0xc9662a
// 007ab36b  e8908cfaff           call 0x754000
// 007ab370  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007ab376  51                   push ecx
// 007ab377  d91c24               fstp dword ptr [esp]
// 007ab37a  6800359100           push 0x913500
// 007ab37f  6875a6f100           push 0xf1a675
// 007ab384  8d8e9c040000         lea ecx, [esi + 0x49c]
// 007ab38a  e8718cfaff           call 0x754000
// 007ab38f  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab395  51                   push ecx
// 007ab396  d91c24               fstp dword ptr [esp]
// 007ab399  6879a1dc00           push 0xdca179
// 007ab39e  68cbddf600           push 0xf6ddcb
// 007ab3a3  8d8edc040000         lea ecx, [esi + 0x4dc]
// 007ab3a9  e8528cfaff           call 0x754000
// 007ab3ae  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab3b4  51                   push ecx
// 007ab3b5  d91c24               fstp dword ptr [esp]
// 007ab3b8  6881a9e200           push 0xe2a981
// 007ab3bd  68e3effe00           push 0xfeefe3
// 007ab3c2  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 007ab3c8  e8338cfaff           call 0x754000
// 007ab3cd  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab3d3  51                   push ecx
// 007ab3d4  d91c24               fstp dword ptr [esp]
// 007ab3d7  68617aac00           push 0xac7a61
// 007ab3dc  68e9ecf200           push 0xf2ece9
// 007ab3e1  8d4e28               lea ecx, [esi + 0x28]
// 007ab3e4  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 007ab3ee  c74620161e3600       mov dword ptr [esi + 0x20], 0x361e16
// 007ab3f5  c78638050000a9c7f000 mov dword ptr [esi + 0x538], 0xf0c7a9
// 007ab3ff  e8fc8bfaff           call 0x754000
// 007ab404  b800008000           mov eax, 0x800000
// 007ab409  c786e4030000cbe1fc00 mov dword ptr [esi + 0x3e4], 0xfce1cb
// 007ab413  c786cc030000d8e7fc00 mov dword ptr [esi + 0x3cc], 0xfce7d8
// 007ab41d  c786d80300009ebef500 mov dword ptr [esi + 0x3d8], 0xf5be9e
// 007ab427  c786f80100009099ae00 mov dword ptr [esi + 0x1f8], 0xae9990
// 007ab431  c78608040000bdd3f700 mov dword ptr [esi + 0x408], 0xf7d3bd
// 007ab43b  c744244826000000     mov dword ptr [esp + 0x48], 0x26
// 007ab443  c744244c27000000     mov dword ptr [esp + 0x4c], 0x27
// 007ab44b  c744245028000000     mov dword ptr [esp + 0x50], 0x28
// 007ab453  c744245429000000     mov dword ptr [esp + 0x54], 0x29
// 007ab45b  c74424582b000000     mov dword ptr [esp + 0x58], 0x2b
// 007ab463  c744245c1f000000     mov dword ptr [esp + 0x5c], 0x1f
// 007ab46b  c744246020000000     mov dword ptr [esp + 0x60], 0x20
// 007ab473  c744246432000000     mov dword ptr [esp + 0x64], 0x32
// 007ab47b  c744246825000000     mov dword ptr [esp + 0x68], 0x25
// 007ab483  c744246c21000000     mov dword ptr [esp + 0x6c], 0x21
// 007ab48b  c744247024000000     mov dword ptr [esp + 0x70], 0x24
// 007ab493  c74424741e000000     mov dword ptr [esp + 0x74], 0x1e
// 007ab49b  c74424782f000000     mov dword ptr [esp + 0x78], 0x2f
// 007ab4a3  c744241427417600     mov dword ptr [esp + 0x14], 0x764127
// 007ab4ab  c74424186a8ccb00     mov dword ptr [esp + 0x18], 0xcb8c6a
// 007ab4b3  c744241c6d96d000     mov dword ptr [esp + 0x1c], 0xd0966d
// 007ab4bb  c7442420f6f6f600     mov dword ptr [esp + 0x20], 0xf6f6f6
// 007ab4c3  c7442424002d9600     mov dword ptr [esp + 0x24], 0x962d00
// 007ab4cb  c7442428ffeec200     mov dword ptr [esp + 0x28], 0xc2eeff
// 007ab4d3  8944242c             mov dword ptr [esp + 0x2c], eax
// 007ab4d7  89442430             mov dword ptr [esp + 0x30], eax
// 007ab4db  8d4c2414             lea ecx, [esp + 0x14]
// 007ab4df  51                   push ecx
// 007ab4e0  8d54244c             lea edx, [esp + 0x4c]
// 007ab4e4  89442438             mov dword ptr [esp + 0x38], eax
// 007ab4e8  c744243cfe803e00     mov dword ptr [esp + 0x3c], 0x3e80fe
// 007ab4f0  c7442440ffc06f00     mov dword ptr [esp + 0x40], 0x6fc0ff
// 007ab4f8  c7442444c4dbf900     mov dword ptr [esp + 0x44], 0xf9dbc4
// 007ab500  c744244800000000     mov dword ptr [esp + 0x48], 0
// 007ab508  52                   push edx
// 007ab509  e970030000           jmp 0x7ab87e
// 007ab50e  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab514  51                   push ecx
// 007ab515  d91c24               fstp dword ptr [esp]
// 007ab518  68f2f1e400           push 0xe4f1f2
// 007ab51d  68d9d9a700           push 0xa7d9d9
// 007ab522  8bcb                 mov ecx, ebx
// 007ab524  e8d78afaff           call 0x754000
// 007ab529  d90540aa8b00         fld dword ptr [0x8baa40]
// 007ab52f  51                   push ecx
// 007ab530  d91c24               fstp dword ptr [esp]
// 007ab533  68b7c69100           push 0x91c6b7
// 007ab538  68f4f7de00           push 0xdef7f4
// 007ab53d  8bcf                 mov ecx, edi
// 007ab53f  e8bc8afaff           call 0x754000
// 007ab544  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab54a  51                   push ecx
// 007ab54b  d91c24               fstp dword ptr [esp]
// 007ab54e  68c2ce9f00           push 0x9fcec2
// 007ab553  bf60805800           mov edi, 0x588060
// 007ab558  68ecf0d500           push 0xd5f0ec
// 007ab55d  8bcd                 mov ecx, ebp
// 007ab55f  89be20050000         mov dword ptr [esi + 0x520], edi
// 007ab565  c7464c74865e00       mov dword ptr [esi + 0x4c], 0x5e8674
// 007ab56c  e88f8afaff           call 0x754000
// 007ab571  d90540aa8b00         fld dword ptr [0x8baa40]
// 007ab577  51                   push ecx
// 007ab578  d91c24               fstp dword ptr [esp]
// 007ab57b  6860776b00           push 0x6b7760
// 007ab580  68b0c28c00           push 0x8cc2b0
// 007ab585  8d8e9c040000         lea ecx, [esi + 0x49c]
// 007ab58b  e8708afaff           call 0x754000
// 007ab590  d90540aa8b00         fld dword ptr [0x8baa40]
// 007ab596  51                   push ecx
// 007ab597  d91c24               fstp dword ptr [esp]
// 007ab59a  68a4b47800           push 0x78b4a4
// 007ab59f  68e6e6d100           push 0xd1e6e6
// 007ab5a4  8d8edc040000         lea ecx, [esi + 0x4dc]
// 007ab5aa  e8518afaff           call 0x754000
// 007ab5af  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab5b5  51                   push ecx
// 007ab5b6  d91c24               fstp dword ptr [esp]
// 007ab5b9  68b8c69300           push 0x93c6b8
// 007ab5be  68ecf0d500           push 0xd5f0ec
// 007ab5c3  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 007ab5c9  e8328afaff           call 0x754000
// 007ab5ce  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab5d4  51                   push ecx
// 007ab5d5  d91c24               fstp dword ptr [esp]
// 007ab5d8  6883907100           push 0x719083
// 007ab5dd  68f3f4f000           push 0xf0f4f3
// 007ab5e2  8d4e28               lea ecx, [esi + 0x28]
// 007ab5e5  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 007ab5ef  c746201f221900       mov dword ptr [esi + 0x20], 0x19221f
// 007ab5f6  e8058afaff           call 0x754000
// 007ab5fb  b83f5d3800           mov eax, 0x385d3f
// 007ab600  89442460             mov dword ptr [esp + 0x60], eax
// 007ab604  89442464             mov dword ptr [esp + 0x64], eax
// 007ab608  89442468             mov dword ptr [esp + 0x68], eax
// 007ab60c  8d442448             lea eax, [esp + 0x48]
// 007ab610  50                   push eax
// 007ab611  8d4c2418             lea ecx, [esp + 0x18]
// 007ab615  c78638050000c5d49f00 mov dword ptr [esi + 0x538], 0x9fd4c5
// 007ab61f  c786e4030000d8e3b600 mov dword ptr [esi + 0x3e4], 0xb6e3d8
// 007ab629  c786cc030000e2e7bf00 mov dword ptr [esi + 0x3cc], 0xbfe7e2
// 007ab633  c786d8030000abc08a00 mov dword ptr [esi + 0x3d8], 0x8ac0ab
// 007ab63d  c786f801000097a07b00 mov dword ptr [esi + 0x1f8], 0x7ba097
// 007ab647  c78608040000dee3bd00 mov dword ptr [esi + 0x408], 0xbde3de
// 007ab651  c744244c515e3300     mov dword ptr [esp + 0x4c], 0x335e51
// 007ab659  897c2450             mov dword ptr [esp + 0x50], edi
// 007ab65d  c74424549fae7a00     mov dword ptr [esp + 0x54], 0x7aae9f
// 007ab665  c7442458f4f4ee00     mov dword ptr [esp + 0x58], 0xeef4f4
// 007ab66d  c744245c758d5e00     mov dword ptr [esp + 0x5c], 0x5e8d75
// 007ab675  c7442478d1dead00     mov dword ptr [esp + 0x78], 0xadded1
// 007ab67d  51                   push ecx
// 007ab67e  e970010000           jmp 0x7ab7f3
// 007ab683  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab689  51                   push ecx
// 007ab68a  d91c24               fstp dword ptr [esp]
// 007ab68d  68f3f3f700           push 0xf7f3f3
// 007ab692  68d7d7e500           push 0xe5d7d7
// 007ab697  8bcb                 mov ecx, ebx
// 007ab699  e86289faff           call 0x754000
// 007ab69e  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007ab6a4  51                   push ecx
// 007ab6a5  d91c24               fstp dword ptr [esp]
// 007ab6a8  689c9bb700           push 0xb79b9c
// 007ab6ad  bb7c7c9400           mov ebx, 0x947c7c
// 007ab6b2  68f9f9ff00           push 0xfff9f9
// 007ab6b7  8bcf                 mov ecx, edi
// 007ab6b9  899e20050000         mov dword ptr [esi + 0x520], ebx
// 007ab6bf  e83c89faff           call 0x754000
// 007ab6c4  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab6ca  51                   push ecx
// 007ab6cb  d91c24               fstp dword ptr [esp]
// 007ab6ce  68bab9cd00           push 0xcdb9ba
// 007ab6d3  68e9e7f100           push 0xf1e7e9
// 007ab6d8  8bcd                 mov ecx, ebp
// 007ab6da  c7464c7a799900       mov dword ptr [esi + 0x4c], 0x99797a
// 007ab6e1  e81a89faff           call 0x754000
// 007ab6e6  d9050c7d8d00         fld dword ptr [0x8d7d0c]
// 007ab6ec  51                   push ecx
// 007ab6ed  d91c24               fstp dword ptr [esp]
// 007ab6f0  6876749200           push 0x927476
// 007ab6f5  68b3b2c800           push 0xc8b2b3
// 007ab6fa  8d8e9c040000         lea ecx, [esi + 0x49c]
// 007ab700  e8fb88faff           call 0x754000
// 007ab705  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab70b  51                   push ecx
// 007ab70c  d91c24               fstp dword ptr [esp]
// 007ab70f  688583a200           push 0xa28385
// 007ab714  68d7d7e200           push 0xe2d7d7
// 007ab719  8d8edc040000         lea ecx, [esi + 0x4dc]
// 007ab71f  e8dc88faff           call 0x754000
// 007ab724  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab72a  51                   push ecx
// 007ab72b  d91c24               fstp dword ptr [esp]
// 007ab72e  68b0aec500           push 0xc5aeb0
// 007ab733  68e8e8f100           push 0xf1e8e8
// 007ab738  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 007ab73e  e8bd88faff           call 0x754000
// 007ab743  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007ab749  51                   push ecx
// 007ab74a  d91c24               fstp dword ptr [esp]
// 007ab74d  687a799900           push 0x99797a
// 007ab752  68f7f5f900           push 0xf9f5f7
// 007ab757  8d4e28               lea ecx, [esi + 0x28]
// 007ab75a  c7862c050000eceada00 mov dword ptr [esi + 0x52c], 0xdaeaec
// 007ab764  c7462024202900       mov dword ptr [esi + 0x20], 0x292024
// 007ab76b  e89088faff           call 0x754000
// 007ab770  b84b4b6f00           mov eax, 0x6f4b4b
// 007ab775  8d542448             lea edx, [esp + 0x48]
// 007ab779  89442460             mov dword ptr [esp + 0x60], eax
// 007ab77d  89442464             mov dword ptr [esp + 0x64], eax
// 007ab781  89442468             mov dword ptr [esp + 0x68], eax
// 007ab785  52                   push edx
// 007ab786  8d442418             lea eax, [esp + 0x18]
// 007ab78a  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 007ab794  c786e4030000d6d3e700 mov dword ptr [esi + 0x3e4], 0xe7d3d6
// 007ab79e  c786cc030000dfdfea00 mov dword ptr [esi + 0x3cc], 0xeadfdf
// 007ab7a8  c786d8030000b1b0c300 mov dword ptr [esi + 0x3d8], 0xc3b0b1
// 007ab7b2  c786f80100009b9ab300 mov dword ptr [esi + 0x1f8], 0xb39a9b
// 007ab7bc  c78608040000d6d7e700 mov dword ptr [esi + 0x408], 0xe7d7d6
// 007ab7c6  c744244c54547500     mov dword ptr [esp + 0x4c], 0x755454
// 007ab7ce  c74424506e6d8f00     mov dword ptr [esp + 0x50], 0x8f6d6e
// 007ab7d6  c7442454a8a7be00     mov dword ptr [esp + 0x54], 0xbea7a8
// 007ab7de  c7442458fdfaff00     mov dword ptr [esp + 0x58], 0xfffafd
// 007ab7e6  895c245c             mov dword ptr [esp + 0x5c], ebx
// 007ab7ea  c7442478dbdae400     mov dword ptr [esp + 0x78], 0xe4dadb
// 007ab7f2  50                   push eax
// 007ab7f3  c74424301f000000     mov dword ptr [esp + 0x30], 0x1f
// 007ab7fb  c744242c2b000000     mov dword ptr [esp + 0x2c], 0x2b
// 007ab803  c744242829000000     mov dword ptr [esp + 0x28], 0x29
// 007ab80b  c744242428000000     mov dword ptr [esp + 0x24], 0x28
// 007ab813  c744242027000000     mov dword ptr [esp + 0x20], 0x27
// 007ab81b  c744241c26000000     mov dword ptr [esp + 0x1c], 0x26
// 007ab823  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 007ab82e  c7442478ffc06f00     mov dword ptr [esp + 0x78], 0x6fc0ff
// 007ab836  c7442474fe803e00     mov dword ptr [esp + 0x74], 0x3e80fe
// 007ab83e  c7442464ffeec200     mov dword ptr [esp + 0x64], 0xc2eeff
// 007ab846  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 007ab84e  c74424481e000000     mov dword ptr [esp + 0x48], 0x1e
// 007ab856  c744244424000000     mov dword ptr [esp + 0x44], 0x24
// 007ab85e  c744244021000000     mov dword ptr [esp + 0x40], 0x21
// 007ab866  c744243c32000000     mov dword ptr [esp + 0x3c], 0x32
// 007ab86e  c744243825000000     mov dword ptr [esp + 0x38], 0x25
// 007ab876  c744243420000000     mov dword ptr [esp + 0x34], 0x20
// 007ab87e  6a0d                 push 0xd
// 007ab880  8bce                 mov ecx, esi
// 007ab882  e8296ff7ff           call 0x7227b0
// 007ab887  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 007ab891  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 007ab898  5f                   pop edi
// 007ab899  5d                   pop ebp
// 007ab89a  5b                   pop ebx
// 007ab89b  7428                 je 0x7ab8c5
// 007ab89d  b88d8d8d00           mov eax, 0x8d8d8d
// 007ab8a2  898620040000         mov dword ptr [esi + 0x420], eax
// 007ab8a8  898638040000         mov dword ptr [esi + 0x438], eax
// 007ab8ae  89860c030000         mov dword ptr [esi + 0x30c], eax
// 007ab8b4  8b4650               mov eax, dword ptr [esi + 0x50]
// 007ab8b7  83f8ff               cmp eax, -1
// 007ab8ba  7503                 jne 0x7ab8bf
// 007ab8bc  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007ab8bf  898644040000         mov dword ptr [esi + 0x444], eax
// 007ab8c5  8bce                 mov ecx, esi
// 007ab8c7  5e                   pop esi
// 007ab8c8  83c46c               add esp, 0x6c
// 007ab8cb  e950e8ffff           jmp 0x7aa120
// 007ab8d0  0e                   push cs
// 007ab8d1  b37a                 mov bl, 0x7a
// 007ab8d3  000e                 add byte ptr [esi], cl
// 007ab8d5  b57a                 mov ch, 0x7a
// 007ab8d7  0083b67a000e         add byte ptr [ebx + 0xe007ab6], al
// 007ab8dd  b37a                 mov bl, 0x7a
// 007ab8df  000e                 add byte ptr [esi], cl
// 007ab8e1  b37a                 mov bl, 0x7a
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2003Theme@XTPPaintThemes@@MAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp