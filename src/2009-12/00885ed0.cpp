// roc 2009-12 00885ed0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 2260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00885ed0
//
// 00885ed0  83ec6c               sub esp, 0x6c
// 00885ed3  56                   push esi
// 00885ed4  8bf1                 mov esi, ecx
// 00885ed6  e8e577f7ff           call 0x7fd6c0
// 00885edb  e836e1f6ff           call 0x7f4016
// 00885ee0  85c0                 test eax, eax
// 00885ee2  7428                 je 0x885f0c
// 00885ee4  8b10                 mov edx, dword ptr [eax]
// 00885ee6  8bc8                 mov ecx, eax
// 00885ee8  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00885eeb  ffd0                 call eax
// 00885eed  85c0                 test eax, eax
// 00885eef  741b                 je 0x885f0c
// 00885ef1  e820e1f6ff           call 0x7f4016
// 00885ef6  85c0                 test eax, eax
// 00885ef8  7412                 je 0x885f0c
// 00885efa  8b10                 mov edx, dword ptr [eax]
// 00885efc  8bc8                 mov ecx, eax
// 00885efe  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00885f01  ffd0                 call eax
// 00885f03  85c0                 test eax, eax
// 00885f05  7405                 je 0x885f0c
// 00885f07  8b4020               mov eax, dword ptr [eax + 0x20]
// 00885f0a  eb02                 jmp 0x885f0e
// 00885f0c  33c0                 xor eax, eax
// 00885f0e  53                   push ebx
// 00885f0f  55                   push ebp
// 00885f10  57                   push edi
// 00885f11  6830299f00           push 0x9f2930
// 00885f16  50                   push eax
// 00885f17  8d8e2c010000         lea ecx, [esi + 0x12c]
// 00885f1d  e8de5dfeff           call 0x86bd00
// 00885f22  e8a99afaff           call 0x82f9d0
// 00885f27  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00885f2d  51                   push ecx
// 00885f2e  d91c24               fstp dword ptr [esp]
// 00885f31  6a2a                 push 0x2a
// 00885f33  8bce                 mov ecx, esi
// 00885f35  8bf8                 mov edi, eax
// 00885f37  8d9edc040000         lea ebx, [esi + 0x4dc]
// 00885f3d  e8fe76f7ff           call 0x7fd640
// 00885f42  50                   push eax
// 00885f43  6826020000           push 0x226
// 00885f48  6a2a                 push 0x2a
// 00885f4a  8bce                 mov ecx, esi
// 00885f4c  e8ef76f7ff           call 0x7fd640
// 00885f51  50                   push eax
// 00885f52  6a05                 push 5
// 00885f54  8bce                 mov ecx, esi
// 00885f56  e8e576f7ff           call 0x7fd640
// 00885f5b  50                   push eax
// 00885f5c  8bcf                 mov ecx, edi
// 00885f5e  e8ed90faff           call 0x82f050
// 00885f63  50                   push eax
// 00885f64  8bcb                 mov ecx, ebx
// 00885f66  e8f58efaff           call 0x82ee60
// 00885f6b  e8609afaff           call 0x82f9d0
// 00885f70  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00885f76  51                   push ecx
// 00885f77  d91c24               fstp dword ptr [esp]
// 00885f7a  6a0f                 push 0xf
// 00885f7c  8bce                 mov ecx, esi
// 00885f7e  8bd8                 mov ebx, eax
// 00885f80  8dbe7c040000         lea edi, [esi + 0x47c]
// 00885f86  e8b576f7ff           call 0x7fd640
// 00885f8b  50                   push eax
// 00885f8c  68cd000000           push 0xcd
// 00885f91  6a05                 push 5
// 00885f93  8bce                 mov ecx, esi
// 00885f95  e8a676f7ff           call 0x7fd640
// 00885f9a  50                   push eax
// 00885f9b  6a0f                 push 0xf
// 00885f9d  8bce                 mov ecx, esi
// 00885f9f  e89c76f7ff           call 0x7fd640
// 00885fa4  50                   push eax
// 00885fa5  8bcb                 mov ecx, ebx
// 00885fa7  e8a490faff           call 0x82f050
// 00885fac  50                   push eax
// 00885fad  8bcf                 mov ecx, edi
// 00885faf  e8ac8efaff           call 0x82ee60
// 00885fb4  e8179afaff           call 0x82f9d0
// 00885fb9  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00885fbf  51                   push ecx
// 00885fc0  d91c24               fstp dword ptr [esp]
// 00885fc3  68cd000000           push 0xcd
// 00885fc8  6a05                 push 5
// 00885fca  8bce                 mov ecx, esi
// 00885fcc  8be8                 mov ebp, eax
// 00885fce  8d9e5c040000         lea ebx, [esi + 0x45c]
// 00885fd4  e86776f7ff           call 0x7fd640
// 00885fd9  50                   push eax
// 00885fda  6a0f                 push 0xf
// 00885fdc  8bce                 mov ecx, esi
// 00885fde  e85d76f7ff           call 0x7fd640
// 00885fe3  50                   push eax
// 00885fe4  8bcd                 mov ecx, ebp
// 00885fe6  e86590faff           call 0x82f050
// 00885feb  50                   push eax
// 00885fec  6a0f                 push 0xf
// 00885fee  8bce                 mov ecx, esi
// 00885ff0  e84b76f7ff           call 0x7fd640
// 00885ff5  50                   push eax
// 00885ff6  8bcb                 mov ecx, ebx
// 00885ff8  e8638efaff           call 0x82ee60
// 00885ffd  6a1e                 push 0x1e
// 00885fff  8bce                 mov ecx, esi
// 00886001  e83a76f7ff           call 0x7fd640
// 00886006  6a1e                 push 0x1e
// 00886008  8bce                 mov ecx, esi
// 0088600a  898638050000         mov dword ptr [esi + 0x538], eax
// 00886010  e82b76f7ff           call 0x7fd640
// 00886015  6a10                 push 0x10
// 00886017  8bce                 mov ecx, esi
// 00886019  898620050000         mov dword ptr [esi + 0x520], eax
// 0088601f  e81c76f7ff           call 0x7fd640
// 00886024  89464c               mov dword ptr [esi + 0x4c], eax
// 00886027  e8a499faff           call 0x82f9d0
// 0088602c  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886032  51                   push ecx
// 00886033  d91c24               fstp dword ptr [esp]
// 00886036  6826020000           push 0x226
// 0088603b  6a0f                 push 0xf
// 0088603d  8bce                 mov ecx, esi
// 0088603f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00886043  8daefc040000         lea ebp, [esi + 0x4fc]
// 00886049  e8f275f7ff           call 0x7fd640
// 0088604e  50                   push eax
// 0088604f  6a05                 push 5
// 00886051  8bce                 mov ecx, esi
// 00886053  e8e875f7ff           call 0x7fd640
// 00886058  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088605c  50                   push eax
// 0088605d  e8ee8ffaff           call 0x82f050
// 00886062  50                   push eax
// 00886063  6a29                 push 0x29
// 00886065  8bce                 mov ecx, esi
// 00886067  e8d475f7ff           call 0x7fd640
// 0088606c  50                   push eax
// 0088606d  8bcd                 mov ecx, ebp
// 0088606f  e8ec8dfaff           call 0x82ee60
// 00886074  e85799faff           call 0x82f9d0
// 00886079  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0088607f  51                   push ecx
// 00886080  d91c24               fstp dword ptr [esp]
// 00886083  6a10                 push 0x10
// 00886085  8bce                 mov ecx, esi
// 00886087  89442418             mov dword ptr [esp + 0x18], eax
// 0088608b  e8b075f7ff           call 0x7fd640
// 00886090  50                   push eax
// 00886091  6a33                 push 0x33
// 00886093  6a10                 push 0x10
// 00886095  8bce                 mov ecx, esi
// 00886097  e8a475f7ff           call 0x7fd640
// 0088609c  50                   push eax
// 0088609d  6a33                 push 0x33
// 0088609f  8bce                 mov ecx, esi
// 008860a1  e89a75f7ff           call 0x7fd640
// 008860a6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008860aa  50                   push eax
// 008860ab  e8a08ffaff           call 0x82f050
// 008860b0  50                   push eax
// 008860b1  8d8e9c040000         lea ecx, [esi + 0x49c]
// 008860b7  e8a48dfaff           call 0x82ee60
// 008860bc  c7864005000000000000 mov dword ptr [esi + 0x540], 0
// 008860c6  e80599faff           call 0x82f9d0
// 008860cb  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008860d1  51                   push ecx
// 008860d2  d91c24               fstp dword ptr [esp]
// 008860d5  6826020000           push 0x226
// 008860da  6a0f                 push 0xf
// 008860dc  8bce                 mov ecx, esi
// 008860de  8944241c             mov dword ptr [esp + 0x1c], eax
// 008860e2  e85975f7ff           call 0x7fd640
// 008860e7  50                   push eax
// 008860e8  6a05                 push 5
// 008860ea  8bce                 mov ecx, esi
// 008860ec  e84f75f7ff           call 0x7fd640
// 008860f1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008860f5  50                   push eax
// 008860f6  e8558ffaff           call 0x82f050
// 008860fb  50                   push eax
// 008860fc  6a29                 push 0x29
// 008860fe  8bce                 mov ecx, esi
// 00886100  e83b75f7ff           call 0x7fd640
// 00886105  50                   push eax
// 00886106  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0088610c  e84f8dfaff           call 0x82ee60
// 00886111  e8ba98faff           call 0x82f9d0
// 00886116  6a46                 push 0x46
// 00886118  6a05                 push 5
// 0088611a  8bce                 mov ecx, esi
// 0088611c  89442418             mov dword ptr [esp + 0x18], eax
// 00886120  e81b75f7ff           call 0x7fd640
// 00886125  50                   push eax
// 00886126  6a0f                 push 0xf
// 00886128  8bce                 mov ecx, esi
// 0088612a  e81175f7ff           call 0x7fd640
// 0088612f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00886133  50                   push eax
// 00886134  e8178ffaff           call 0x82f050
// 00886139  89862c050000         mov dword ptr [esi + 0x52c], eax
// 0088613f  e88c98faff           call 0x82f9d0
// 00886144  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00886147  83c050               add eax, 0x50
// 0088614a  83f9ff               cmp ecx, -1
// 0088614d  7505                 jne 0x886154
// 0088614f  8b4004               mov eax, dword ptr [eax + 4]
// 00886152  eb02                 jmp 0x886156
// 00886154  8bc1                 mov eax, ecx
// 00886156  8986fc030000         mov dword ptr [esi + 0x3fc], eax
// 0088615c  e86f98faff           call 0x82f9d0
// 00886161  6a00                 push 0
// 00886163  8bc8                 mov ecx, eax
// 00886165  e85691faff           call 0x82f2c0
// 0088616a  85c0                 test eax, eax
// 0088616c  7448                 je 0x8861b6
// 0088616e  6a0f                 push 0xf
// 00886170  8bce                 mov ecx, esi
// 00886172  e8c974f7ff           call 0x7fd640
// 00886177  50                   push eax
// 00886178  8bcf                 mov ecx, edi
// 0088617a  e8a197faff           call 0x82f920
// 0088617f  6a0f                 push 0xf
// 00886181  8bce                 mov ecx, esi
// 00886183  e8b874f7ff           call 0x7fd640
// 00886188  50                   push eax
// 00886189  8bcb                 mov ecx, ebx
// 0088618b  e89097faff           call 0x82f920
// 00886190  6a0f                 push 0xf
// 00886192  8bce                 mov ecx, esi
// 00886194  e8a774f7ff           call 0x7fd640
// 00886199  50                   push eax
// 0088619a  8bcd                 mov ecx, ebp
// 0088619c  e87f97faff           call 0x82f920
// 008861a1  6a0f                 push 0xf
// 008861a3  8bce                 mov ecx, esi
// 008861a5  e89674f7ff           call 0x7fd640
// 008861aa  50                   push eax
// 008861ab  8d8e9c040000         lea ecx, [esi + 0x49c]
// 008861b1  e86a97faff           call 0x82f920
// 008861b6  8bce                 mov ecx, esi
// 008861b8  e84374f7ff           call 0x7fd600
// 008861bd  48                   dec eax
// 008861be  83f804               cmp eax, 4
// 008861c1  0f878a050000         ja 0x886751
// 008861c7  ff248590678800       jmp dword ptr [eax*4 + 0x886790]
// 008861ce  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008861d4  51                   push ecx
// 008861d5  d91c24               fstp dword ptr [esp]
// 008861d8  68c4dafa00           push 0xfadac4
// 008861dd  689ebef500           push 0xf5be9e
// 008861e2  8bcb                 mov ecx, ebx
// 008861e4  e8778cfaff           call 0x82ee60
// 008861e9  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 008861ef  51                   push ecx
// 008861f0  d91c24               fstp dword ptr [esp]
// 008861f3  6881a9e200           push 0xe2a981
// 008861f8  68ddecfe00           push 0xfeecdd
// 008861fd  8bcf                 mov ecx, edi
// 008861ff  c786200500003b619c00 mov dword ptr [esi + 0x520], 0x9c613b
// 00886209  e8528cfaff           call 0x82ee60
// 0088620e  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886214  51                   push ecx
// 00886215  d91c24               fstp dword ptr [esp]
// 00886218  6893b5e700           push 0xe7b593
// 0088621d  68e3efff00           push 0xffefe3
// 00886222  8bcd                 mov ecx, ebp
// 00886224  c7464c2a66c900       mov dword ptr [esi + 0x4c], 0xc9662a
// 0088622b  e8308cfaff           call 0x82ee60
// 00886230  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 00886236  51                   push ecx
// 00886237  d91c24               fstp dword ptr [esp]
// 0088623a  6800359100           push 0x913500
// 0088623f  6875a6f100           push 0xf1a675
// 00886244  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0088624a  e8118cfaff           call 0x82ee60
// 0088624f  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886255  51                   push ecx
// 00886256  d91c24               fstp dword ptr [esp]
// 00886259  6879a1dc00           push 0xdca179
// 0088625e  68cbddf600           push 0xf6ddcb
// 00886263  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00886269  e8f28bfaff           call 0x82ee60
// 0088626e  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886274  51                   push ecx
// 00886275  d91c24               fstp dword ptr [esp]
// 00886278  6881a9e200           push 0xe2a981
// 0088627d  68e3effe00           push 0xfeefe3
// 00886282  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00886288  e8d38bfaff           call 0x82ee60
// 0088628d  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886293  51                   push ecx
// 00886294  d91c24               fstp dword ptr [esp]
// 00886297  68617aac00           push 0xac7a61
// 0088629c  68e9ecf200           push 0xf2ece9
// 008862a1  8d4e28               lea ecx, [esi + 0x28]
// 008862a4  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 008862ae  c74620161e3600       mov dword ptr [esi + 0x20], 0x361e16
// 008862b5  c78638050000a9c7f000 mov dword ptr [esi + 0x538], 0xf0c7a9
// 008862bf  e89c8bfaff           call 0x82ee60
// 008862c4  b800008000           mov eax, 0x800000
// 008862c9  c786e4030000cbe1fc00 mov dword ptr [esi + 0x3e4], 0xfce1cb
// 008862d3  c786cc030000d8e7fc00 mov dword ptr [esi + 0x3cc], 0xfce7d8
// 008862dd  c786d80300009ebef500 mov dword ptr [esi + 0x3d8], 0xf5be9e
// 008862e7  c786f80100009099ae00 mov dword ptr [esi + 0x1f8], 0xae9990
// 008862f1  c78608040000bdd3f700 mov dword ptr [esi + 0x408], 0xf7d3bd
// 008862fb  c744244826000000     mov dword ptr [esp + 0x48], 0x26
// 00886303  c744244c27000000     mov dword ptr [esp + 0x4c], 0x27
// 0088630b  c744245028000000     mov dword ptr [esp + 0x50], 0x28
// 00886313  c744245429000000     mov dword ptr [esp + 0x54], 0x29
// 0088631b  c74424582b000000     mov dword ptr [esp + 0x58], 0x2b
// 00886323  c744245c1f000000     mov dword ptr [esp + 0x5c], 0x1f
// 0088632b  c744246020000000     mov dword ptr [esp + 0x60], 0x20
// 00886333  c744246432000000     mov dword ptr [esp + 0x64], 0x32
// 0088633b  c744246825000000     mov dword ptr [esp + 0x68], 0x25
// 00886343  c744246c21000000     mov dword ptr [esp + 0x6c], 0x21
// 0088634b  c744247024000000     mov dword ptr [esp + 0x70], 0x24
// 00886353  c74424741e000000     mov dword ptr [esp + 0x74], 0x1e
// 0088635b  c74424782f000000     mov dword ptr [esp + 0x78], 0x2f
// 00886363  c744241427417600     mov dword ptr [esp + 0x14], 0x764127
// 0088636b  c74424186a8ccb00     mov dword ptr [esp + 0x18], 0xcb8c6a
// 00886373  c744241c6d96d000     mov dword ptr [esp + 0x1c], 0xd0966d
// 0088637b  c7442420f6f6f600     mov dword ptr [esp + 0x20], 0xf6f6f6
// 00886383  c7442424002d9600     mov dword ptr [esp + 0x24], 0x962d00
// 0088638b  c7442428ffeec200     mov dword ptr [esp + 0x28], 0xc2eeff
// 00886393  8944242c             mov dword ptr [esp + 0x2c], eax
// 00886397  89442430             mov dword ptr [esp + 0x30], eax
// 0088639b  8d4c2414             lea ecx, [esp + 0x14]
// 0088639f  51                   push ecx
// 008863a0  8d54244c             lea edx, [esp + 0x4c]
// 008863a4  89442438             mov dword ptr [esp + 0x38], eax
// 008863a8  c744243cfe803e00     mov dword ptr [esp + 0x3c], 0x3e80fe
// 008863b0  c7442440ffc06f00     mov dword ptr [esp + 0x40], 0x6fc0ff
// 008863b8  c7442444c4dbf900     mov dword ptr [esp + 0x44], 0xf9dbc4
// 008863c0  c744244800000000     mov dword ptr [esp + 0x48], 0
// 008863c8  52                   push edx
// 008863c9  e970030000           jmp 0x88673e
// 008863ce  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008863d4  51                   push ecx
// 008863d5  d91c24               fstp dword ptr [esp]
// 008863d8  68f2f1e400           push 0xe4f1f2
// 008863dd  68d9d9a700           push 0xa7d9d9
// 008863e2  8bcb                 mov ecx, ebx
// 008863e4  e8778afaff           call 0x82ee60
// 008863e9  d905fcf29a00         fld dword ptr [0x9af2fc]
// 008863ef  51                   push ecx
// 008863f0  d91c24               fstp dword ptr [esp]
// 008863f3  68b7c69100           push 0x91c6b7
// 008863f8  68f4f7de00           push 0xdef7f4
// 008863fd  8bcf                 mov ecx, edi
// 008863ff  e85c8afaff           call 0x82ee60
// 00886404  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0088640a  51                   push ecx
// 0088640b  d91c24               fstp dword ptr [esp]
// 0088640e  68c2ce9f00           push 0x9fcec2
// 00886413  bf60805800           mov edi, 0x588060
// 00886418  68ecf0d500           push 0xd5f0ec
// 0088641d  8bcd                 mov ecx, ebp
// 0088641f  89be20050000         mov dword ptr [esi + 0x520], edi
// 00886425  c7464c74865e00       mov dword ptr [esi + 0x4c], 0x5e8674
// 0088642c  e82f8afaff           call 0x82ee60
// 00886431  d905fcf29a00         fld dword ptr [0x9af2fc]
// 00886437  51                   push ecx
// 00886438  d91c24               fstp dword ptr [esp]
// 0088643b  6860776b00           push 0x6b7760
// 00886440  68b0c28c00           push 0x8cc2b0
// 00886445  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0088644b  e8108afaff           call 0x82ee60
// 00886450  d905fcf29a00         fld dword ptr [0x9af2fc]
// 00886456  51                   push ecx
// 00886457  d91c24               fstp dword ptr [esp]
// 0088645a  68a4b47800           push 0x78b4a4
// 0088645f  68e6e6d100           push 0xd1e6e6
// 00886464  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0088646a  e8f189faff           call 0x82ee60
// 0088646f  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886475  51                   push ecx
// 00886476  d91c24               fstp dword ptr [esp]
// 00886479  68b8c69300           push 0x93c6b8
// 0088647e  68ecf0d500           push 0xd5f0ec
// 00886483  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00886489  e8d289faff           call 0x82ee60
// 0088648e  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886494  51                   push ecx
// 00886495  d91c24               fstp dword ptr [esp]
// 00886498  6883907100           push 0x719083
// 0088649d  68f3f4f000           push 0xf0f4f3
// 008864a2  8d4e28               lea ecx, [esi + 0x28]
// 008864a5  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 008864af  c746201f221900       mov dword ptr [esi + 0x20], 0x19221f
// 008864b6  e8a589faff           call 0x82ee60
// 008864bb  b83f5d3800           mov eax, 0x385d3f
// 008864c0  89442460             mov dword ptr [esp + 0x60], eax
// 008864c4  89442464             mov dword ptr [esp + 0x64], eax
// 008864c8  89442468             mov dword ptr [esp + 0x68], eax
// 008864cc  8d442448             lea eax, [esp + 0x48]
// 008864d0  50                   push eax
// 008864d1  8d4c2418             lea ecx, [esp + 0x18]
// 008864d5  c78638050000c5d49f00 mov dword ptr [esi + 0x538], 0x9fd4c5
// 008864df  c786e4030000d8e3b600 mov dword ptr [esi + 0x3e4], 0xb6e3d8
// 008864e9  c786cc030000e2e7bf00 mov dword ptr [esi + 0x3cc], 0xbfe7e2
// 008864f3  c786d8030000abc08a00 mov dword ptr [esi + 0x3d8], 0x8ac0ab
// 008864fd  c786f801000097a07b00 mov dword ptr [esi + 0x1f8], 0x7ba097
// 00886507  c78608040000dee3bd00 mov dword ptr [esi + 0x408], 0xbde3de
// 00886511  c744244c515e3300     mov dword ptr [esp + 0x4c], 0x335e51
// 00886519  897c2450             mov dword ptr [esp + 0x50], edi
// 0088651d  c74424549fae7a00     mov dword ptr [esp + 0x54], 0x7aae9f
// 00886525  c7442458f4f4ee00     mov dword ptr [esp + 0x58], 0xeef4f4
// 0088652d  c744245c758d5e00     mov dword ptr [esp + 0x5c], 0x5e8d75
// 00886535  c7442478d1dead00     mov dword ptr [esp + 0x78], 0xadded1
// 0088653d  51                   push ecx
// 0088653e  e970010000           jmp 0x8866b3
// 00886543  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886549  51                   push ecx
// 0088654a  d91c24               fstp dword ptr [esp]
// 0088654d  68f3f3f700           push 0xf7f3f3
// 00886552  68d7d7e500           push 0xe5d7d7
// 00886557  8bcb                 mov ecx, ebx
// 00886559  e80289faff           call 0x82ee60
// 0088655e  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 00886564  51                   push ecx
// 00886565  d91c24               fstp dword ptr [esp]
// 00886568  689c9bb700           push 0xb79b9c
// 0088656d  bb7c7c9400           mov ebx, 0x947c7c
// 00886572  68f9f9ff00           push 0xfff9f9
// 00886577  8bcf                 mov ecx, edi
// 00886579  899e20050000         mov dword ptr [esi + 0x520], ebx
// 0088657f  e8dc88faff           call 0x82ee60
// 00886584  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0088658a  51                   push ecx
// 0088658b  d91c24               fstp dword ptr [esp]
// 0088658e  68bab9cd00           push 0xcdb9ba
// 00886593  68e9e7f100           push 0xf1e7e9
// 00886598  8bcd                 mov ecx, ebp
// 0088659a  c7464c7a799900       mov dword ptr [esi + 0x4c], 0x99797a
// 008865a1  e8ba88faff           call 0x82ee60
// 008865a6  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 008865ac  51                   push ecx
// 008865ad  d91c24               fstp dword ptr [esp]
// 008865b0  6876749200           push 0x927476
// 008865b5  68b3b2c800           push 0xc8b2b3
// 008865ba  8d8e9c040000         lea ecx, [esi + 0x49c]
// 008865c0  e89b88faff           call 0x82ee60
// 008865c5  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008865cb  51                   push ecx
// 008865cc  d91c24               fstp dword ptr [esp]
// 008865cf  688583a200           push 0xa28385
// 008865d4  68d7d7e200           push 0xe2d7d7
// 008865d9  8d8edc040000         lea ecx, [esi + 0x4dc]
// 008865df  e87c88faff           call 0x82ee60
// 008865e4  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008865ea  51                   push ecx
// 008865eb  d91c24               fstp dword ptr [esp]
// 008865ee  68b0aec500           push 0xc5aeb0
// 008865f3  68e8e8f100           push 0xf1e8e8
// 008865f8  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 008865fe  e85d88faff           call 0x82ee60
// 00886603  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00886609  51                   push ecx
// 0088660a  d91c24               fstp dword ptr [esp]
// 0088660d  687a799900           push 0x99797a
// 00886612  68f7f5f900           push 0xf9f5f7
// 00886617  8d4e28               lea ecx, [esi + 0x28]
// 0088661a  c7862c050000eceada00 mov dword ptr [esi + 0x52c], 0xdaeaec
// 00886624  c7462024202900       mov dword ptr [esi + 0x20], 0x292024
// 0088662b  e83088faff           call 0x82ee60
// 00886630  b84b4b6f00           mov eax, 0x6f4b4b
// 00886635  8d542448             lea edx, [esp + 0x48]
// 00886639  89442460             mov dword ptr [esp + 0x60], eax
// 0088663d  89442464             mov dword ptr [esp + 0x64], eax
// 00886641  89442468             mov dword ptr [esp + 0x68], eax
// 00886645  52                   push edx
// 00886646  8d442418             lea eax, [esp + 0x18]
// 0088664a  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 00886654  c786e4030000d6d3e700 mov dword ptr [esi + 0x3e4], 0xe7d3d6
// 0088665e  c786cc030000dfdfea00 mov dword ptr [esi + 0x3cc], 0xeadfdf
// 00886668  c786d8030000b1b0c300 mov dword ptr [esi + 0x3d8], 0xc3b0b1
// 00886672  c786f80100009b9ab300 mov dword ptr [esi + 0x1f8], 0xb39a9b
// 0088667c  c78608040000d6d7e700 mov dword ptr [esi + 0x408], 0xe7d7d6
// 00886686  c744244c54547500     mov dword ptr [esp + 0x4c], 0x755454
// 0088668e  c74424506e6d8f00     mov dword ptr [esp + 0x50], 0x8f6d6e
// 00886696  c7442454a8a7be00     mov dword ptr [esp + 0x54], 0xbea7a8
// 0088669e  c7442458fdfaff00     mov dword ptr [esp + 0x58], 0xfffafd
// 008866a6  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008866aa  c7442478dbdae400     mov dword ptr [esp + 0x78], 0xe4dadb
// 008866b2  50                   push eax
// 008866b3  c74424301f000000     mov dword ptr [esp + 0x30], 0x1f
// 008866bb  c744242c2b000000     mov dword ptr [esp + 0x2c], 0x2b
// 008866c3  c744242829000000     mov dword ptr [esp + 0x28], 0x29
// 008866cb  c744242428000000     mov dword ptr [esp + 0x24], 0x28
// 008866d3  c744242027000000     mov dword ptr [esp + 0x20], 0x27
// 008866db  c744241c26000000     mov dword ptr [esp + 0x1c], 0x26
// 008866e3  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008866ee  c7442478ffc06f00     mov dword ptr [esp + 0x78], 0x6fc0ff
// 008866f6  c7442474fe803e00     mov dword ptr [esp + 0x74], 0x3e80fe
// 008866fe  c7442464ffeec200     mov dword ptr [esp + 0x64], 0xc2eeff
// 00886706  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 0088670e  c74424481e000000     mov dword ptr [esp + 0x48], 0x1e
// 00886716  c744244424000000     mov dword ptr [esp + 0x44], 0x24
// 0088671e  c744244021000000     mov dword ptr [esp + 0x40], 0x21
// 00886726  c744243c32000000     mov dword ptr [esp + 0x3c], 0x32
// 0088672e  c744243825000000     mov dword ptr [esp + 0x38], 0x25
// 00886736  c744243420000000     mov dword ptr [esp + 0x34], 0x20
// 0088673e  6a0d                 push 0xd
// 00886740  8bce                 mov ecx, esi
// 00886742  e8296ff7ff           call 0x7fd670
// 00886747  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 00886751  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 00886758  5f                   pop edi
// 00886759  5d                   pop ebp
// 0088675a  5b                   pop ebx
// 0088675b  7428                 je 0x886785
// 0088675d  b88d8d8d00           mov eax, 0x8d8d8d
// 00886762  898620040000         mov dword ptr [esi + 0x420], eax
// 00886768  898638040000         mov dword ptr [esi + 0x438], eax
// 0088676e  89860c030000         mov dword ptr [esi + 0x30c], eax
// 00886774  8b4650               mov eax, dword ptr [esi + 0x50]
// 00886777  83f8ff               cmp eax, -1
// 0088677a  7503                 jne 0x88677f
// 0088677c  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0088677f  898644040000         mov dword ptr [esi + 0x444], eax
// 00886785  8bce                 mov ecx, esi
// 00886787  5e                   pop esi
// 00886788  83c46c               add esp, 0x6c
// 0088678b  e950e8ffff           jmp 0x884fe0
// 00886790  ce                   into 
// 00886791  61                   popal 
// 00886792  8800                 mov byte ptr [eax], al
// 00886794  ce                   into 
// 00886795  638800436588         arpl word ptr [eax - 0x779abd00], cx
// 0088679b  00ce                 add dh, cl
// 0088679d  61                   popal 
// 0088679e  8800                 mov byte ptr [eax], al
// 008867a0  ce                   into 
// 008867a1  61                   popal 
// 008867a2  8800                 mov byte ptr [eax], al
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2003Theme@XTPPaintThemes@@MAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp