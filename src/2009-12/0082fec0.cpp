// roc 2009-12 0082fec0  unit: CXTPColorManager  size: 1564 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082fec0
//
// 0082fec0  83ec24               sub esp, 0x24
// 0082fec3  53                   push ebx
// 0082fec4  55                   push ebp
// 0082fec5  56                   push esi
// 0082fec6  57                   push edi
// 0082fec7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0082fecb  6a00                 push 0
// 0082fecd  57                   push edi
// 0082fece  8bf1                 mov esi, ecx
// 0082fed0  e82bffffff           call 0x82fe00
// 0082fed5  d95c2438             fstp dword ptr [esp + 0x38]
// 0082fed9  d9442440             fld dword ptr [esp + 0x40]
// 0082fedd  e80e4efcff           call 0x7f4cf0
// 0082fee2  d9442438             fld dword ptr [esp + 0x38]
// 0082fee6  50                   push eax
// 0082fee7  e8044efcff           call 0x7f4cf0
// 0082feec  50                   push eax
// 0082feed  8bce                 mov ecx, esi
// 0082feef  e82cf1ffff           call 0x82f020
// 0082fef4  d95c2420             fstp dword ptr [esp + 0x20]
// 0082fef8  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0082fefc  6a00                 push 0
// 0082fefe  53                   push ebx
// 0082feff  bd01000000           mov ebp, 1
// 0082ff04  e8f7feffff           call 0x82fe00
// 0082ff09  d9442438             fld dword ptr [esp + 0x38]
// 0082ff0d  d8d1                 fcom st(1)
// 0082ff0f  dfe0                 fnstsw ax
// 0082ff11  ddd9                 fstp st(1)
// 0082ff13  d9442420             fld dword ptr [esp + 0x20]
// 0082ff17  f6c405               test ah, 5
// 0082ff1a  7a06                 jp 0x82ff22
// 0082ff1c  dc2d50659f00         fsubr qword ptr [0x9f6550]
// 0082ff22  ded9                 fcompp 
// 0082ff24  dfe0                 fnstsw ax
// 0082ff26  f6c405               test ah, 5
// 0082ff29  7a02                 jp 0x82ff2d
// 0082ff2b  33ed                 xor ebp, ebp
// 0082ff2d  53                   push ebx
// 0082ff2e  8bce                 mov ecx, esi
// 0082ff30  e84bf4ffff           call 0x82f380
// 0082ff35  d95c2438             fstp dword ptr [esp + 0x38]
// 0082ff39  53                   push ebx
// 0082ff3a  e861f4ffff           call 0x82f3a0
// 0082ff3f  d95c2410             fstp dword ptr [esp + 0x10]
// 0082ff43  53                   push ebx
// 0082ff44  8bce                 mov ecx, esi
// 0082ff46  e875f4ffff           call 0x82f3c0
// 0082ff4b  d95c2414             fstp dword ptr [esp + 0x14]
// 0082ff4f  57                   push edi
// 0082ff50  8bce                 mov ecx, esi
// 0082ff52  e829f4ffff           call 0x82f380
// 0082ff57  d95c2418             fstp dword ptr [esp + 0x18]
// 0082ff5b  57                   push edi
// 0082ff5c  e83ff4ffff           call 0x82f3a0
// 0082ff61  d95c243c             fstp dword ptr [esp + 0x3c]
// 0082ff65  57                   push edi
// 0082ff66  8bce                 mov ecx, esi
// 0082ff68  e853f4ffff           call 0x82f3c0
// 0082ff6d  d95c241c             fstp dword ptr [esp + 0x1c]
// 0082ff71  dd0548659f00         fld qword ptr [0x9f6548]
// 0082ff77  dd0540659f00         fld qword ptr [0x9f6540]
// 0082ff7d  dd0538659f00         fld qword ptr [0x9f6538]
// 0082ff83  85ed                 test ebp, ebp
// 0082ff85  743c                 je 0x82ffc3
// 0082ff87  d9442438             fld dword ptr [esp + 0x38]
// 0082ff8b  d8eb                 fsubr st(3)
// 0082ff8d  d95c2438             fstp dword ptr [esp + 0x38]
// 0082ff91  d9442410             fld dword ptr [esp + 0x10]
// 0082ff95  d8ea                 fsubr st(2)
// 0082ff97  d95c2410             fstp dword ptr [esp + 0x10]
// 0082ff9b  d9442414             fld dword ptr [esp + 0x14]
// 0082ff9f  d8e9                 fsubr st(1)
// 0082ffa1  d95c2414             fstp dword ptr [esp + 0x14]
// 0082ffa5  d9442418             fld dword ptr [esp + 0x18]
// 0082ffa9  deeb                 fsubp st(3)
// 0082ffab  d9ca                 fxch st(2)
// 0082ffad  d95c2418             fstp dword ptr [esp + 0x18]
// 0082ffb1  d864243c             fsub dword ptr [esp + 0x3c]
// 0082ffb5  d95c243c             fstp dword ptr [esp + 0x3c]
// 0082ffb9  d864241c             fsub dword ptr [esp + 0x1c]
// 0082ffbd  d95c241c             fstp dword ptr [esp + 0x1c]
// 0082ffc1  eb06                 jmp 0x82ffc9
// 0082ffc3  ddda                 fstp st(2)
// 0082ffc5  ddd8                 fstp st(0)
// 0082ffc7  ddd8                 fstp st(0)
// 0082ffc9  d9442438             fld dword ptr [esp + 0x38]
// 0082ffcd  b802000000           mov eax, 2
// 0082ffd2  d95c2424             fstp dword ptr [esp + 0x24]
// 0082ffd6  d9e8                 fld1 
// 0082ffd8  d9542440             fst dword ptr [esp + 0x40]
// 0082ffdc  d9442424             fld dword ptr [esp + 0x24]
// 0082ffe0  a801                 test al, 1
// 0082ffe2  740a                 je 0x82ffee
// 0082ffe4  d9442440             fld dword ptr [esp + 0x40]
// 0082ffe8  d8c9                 fmul st(1)
// 0082ffea  d95c2440             fstp dword ptr [esp + 0x40]
// 0082ffee  d1e8                 shr eax, 1
// 0082fff0  7408                 je 0x82fffa
// 0082fff2  dcc8                 fmul st(0), st(0)
// 0082fff4  d95c2424             fstp dword ptr [esp + 0x24]
// 0082fff8  ebe2                 jmp 0x82ffdc
// 0082fffa  ddd8                 fstp st(0)
// 0082fffc  b802000000           mov eax, 2
// 00830001  d9442440             fld dword ptr [esp + 0x40]
// 00830005  d95c2430             fstp dword ptr [esp + 0x30]
// 00830009  d9442410             fld dword ptr [esp + 0x10]
// 0083000d  d95c2424             fstp dword ptr [esp + 0x24]
// 00830011  d9542440             fst dword ptr [esp + 0x40]
// 00830015  d9442424             fld dword ptr [esp + 0x24]
// 00830019  a801                 test al, 1
// 0083001b  740a                 je 0x830027
// 0083001d  d9442440             fld dword ptr [esp + 0x40]
// 00830021  d8c9                 fmul st(1)
// 00830023  d95c2440             fstp dword ptr [esp + 0x40]
// 00830027  d1e8                 shr eax, 1
// 00830029  7408                 je 0x830033
// 0083002b  dcc8                 fmul st(0), st(0)
// 0083002d  d95c2424             fstp dword ptr [esp + 0x24]
// 00830031  ebe2                 jmp 0x830015
// 00830033  ddd8                 fstp st(0)
// 00830035  b802000000           mov eax, 2
// 0083003a  d9442440             fld dword ptr [esp + 0x40]
// 0083003e  d95c2428             fstp dword ptr [esp + 0x28]
// 00830042  d9442414             fld dword ptr [esp + 0x14]
// 00830046  d95c2424             fstp dword ptr [esp + 0x24]
// 0083004a  d95c2440             fstp dword ptr [esp + 0x40]
// 0083004e  8bff                 mov edi, edi
// 00830050  d9442424             fld dword ptr [esp + 0x24]
// 00830054  a801                 test al, 1
// 00830056  740a                 je 0x830062
// 00830058  d9442440             fld dword ptr [esp + 0x40]
// 0083005c  d8c9                 fmul st(1)
// 0083005e  d95c2440             fstp dword ptr [esp + 0x40]
// 00830062  d1e8                 shr eax, 1
// 00830064  7408                 je 0x83006e
// 00830066  dcc8                 fmul st(0), st(0)
// 00830068  d95c2424             fstp dword ptr [esp + 0x24]
// 0083006c  ebe2                 jmp 0x830050
// 0083006e  ddd8                 fstp st(0)
// 00830070  d9442440             fld dword ptr [esp + 0x40]
// 00830074  d9442428             fld dword ptr [esp + 0x28]
// 00830078  d8442430             fadd dword ptr [esp + 0x30]
// 0083007c  d9c9                 fxch st(1)
// 0083007e  d95c2440             fstp dword ptr [esp + 0x40]
// 00830082  d8442440             fadd dword ptr [esp + 0x40]
// 00830086  d95c2440             fstp dword ptr [esp + 0x40]
// 0083008a  d9442440             fld dword ptr [esp + 0x40]
// 0083008e  e89350fcff           call 0x7f5126
// 00830093  d95c2440             fstp dword ptr [esp + 0x40]
// 00830097  d9442440             fld dword ptr [esp + 0x40]
// 0083009b  dd05d8319b00         fld qword ptr [0x9b31d8]
// 008300a1  d8d1                 fcom st(1)
// 008300a3  dfe0                 fnstsw ax
// 008300a5  ddd9                 fstp st(1)
// 008300a7  f6c441               test ah, 0x41
// 008300aa  0f84d2000000         je 0x830182
// 008300b0  ddd8                 fstp st(0)
// 008300b2  b802000000           mov eax, 2
// 008300b7  d9442438             fld dword ptr [esp + 0x38]
// 008300bb  d95c2424             fstp dword ptr [esp + 0x24]
// 008300bf  d9e8                 fld1 
// 008300c1  d9542440             fst dword ptr [esp + 0x40]
// 008300c5  d9442424             fld dword ptr [esp + 0x24]
// 008300c9  a801                 test al, 1
// 008300cb  740a                 je 0x8300d7
// 008300cd  d9442440             fld dword ptr [esp + 0x40]
// 008300d1  d8c9                 fmul st(1)
// 008300d3  d95c2440             fstp dword ptr [esp + 0x40]
// 008300d7  d1e8                 shr eax, 1
// 008300d9  7408                 je 0x8300e3
// 008300db  dcc8                 fmul st(0), st(0)
// 008300dd  d95c2424             fstp dword ptr [esp + 0x24]
// 008300e1  ebe2                 jmp 0x8300c5
// 008300e3  ddd8                 fstp st(0)
// 008300e5  b802000000           mov eax, 2
// 008300ea  d9442440             fld dword ptr [esp + 0x40]
// 008300ee  d95c2428             fstp dword ptr [esp + 0x28]
// 008300f2  d9442410             fld dword ptr [esp + 0x10]
// 008300f6  d95c2424             fstp dword ptr [esp + 0x24]
// 008300fa  d9542440             fst dword ptr [esp + 0x40]
// 008300fe  d9442424             fld dword ptr [esp + 0x24]
// 00830102  a801                 test al, 1
// 00830104  740a                 je 0x830110
// 00830106  d9442440             fld dword ptr [esp + 0x40]
// 0083010a  d8c9                 fmul st(1)
// 0083010c  d95c2440             fstp dword ptr [esp + 0x40]
// 00830110  d1e8                 shr eax, 1
// 00830112  7408                 je 0x83011c
// 00830114  dcc8                 fmul st(0), st(0)
// 00830116  d95c2424             fstp dword ptr [esp + 0x24]
// 0083011a  ebe2                 jmp 0x8300fe
// 0083011c  ddd8                 fstp st(0)
// 0083011e  b802000000           mov eax, 2
// 00830123  d9442440             fld dword ptr [esp + 0x40]
// 00830127  d95c2430             fstp dword ptr [esp + 0x30]
// 0083012b  d9442414             fld dword ptr [esp + 0x14]
// 0083012f  d95c2424             fstp dword ptr [esp + 0x24]
// 00830133  d95c2440             fstp dword ptr [esp + 0x40]
// 00830137  d9442424             fld dword ptr [esp + 0x24]
// 0083013b  a801                 test al, 1
// 0083013d  740a                 je 0x830149
// 0083013f  d9442440             fld dword ptr [esp + 0x40]
// 00830143  d8c9                 fmul st(1)
// 00830145  d95c2440             fstp dword ptr [esp + 0x40]
// 00830149  d1e8                 shr eax, 1
// 0083014b  7408                 je 0x830155
// 0083014d  dcc8                 fmul st(0), st(0)
// 0083014f  d95c2424             fstp dword ptr [esp + 0x24]
// 00830153  ebe2                 jmp 0x830137
// 00830155  ddd8                 fstp st(0)
// 00830157  d9442440             fld dword ptr [esp + 0x40]
// 0083015b  d9442430             fld dword ptr [esp + 0x30]
// 0083015f  d8442428             fadd dword ptr [esp + 0x28]
// 00830163  d9c9                 fxch st(1)
// 00830165  d95c2440             fstp dword ptr [esp + 0x40]
// 00830169  d8442440             fadd dword ptr [esp + 0x40]
// 0083016d  d95c2440             fstp dword ptr [esp + 0x40]
// 00830171  d9442440             fld dword ptr [esp + 0x40]
// 00830175  e8ac4ffcff           call 0x7f5126
// 0083017a  d95c2440             fstp dword ptr [esp + 0x40]
// 0083017e  d9442440             fld dword ptr [esp + 0x40]
// 00830182  d95c2424             fstp dword ptr [esp + 0x24]
// 00830186  b802000000           mov eax, 2
// 0083018b  d944243c             fld dword ptr [esp + 0x3c]
// 0083018f  d9c0                 fld st(0)
// 00830191  d9442410             fld dword ptr [esp + 0x10]
// 00830195  d9c0                 fld st(0)
// 00830197  deca                 fmulp st(2)
// 00830199  d9442418             fld dword ptr [esp + 0x18]
// 0083019d  d9c0                 fld st(0)
// 0083019f  d84c2438             fmul dword ptr [esp + 0x38]
// 008301a3  dec3                 faddp st(3)
// 008301a5  d944241c             fld dword ptr [esp + 0x1c]
// 008301a9  d9c0                 fld st(0)
// 008301ab  d9442414             fld dword ptr [esp + 0x14]
// 008301af  d9c0                 fld st(0)
// 008301b1  deca                 fmulp st(2)
// 008301b3  d9cd                 fxch st(5)
// 008301b5  dec1                 faddp st(1)
// 008301b7  d95c2428             fstp dword ptr [esp + 0x28]
// 008301bb  d9442424             fld dword ptr [esp + 0x24]
// 008301bf  d95c243c             fstp dword ptr [esp + 0x3c]
// 008301c3  d9e8                 fld1 
// 008301c5  d95c2440             fstp dword ptr [esp + 0x40]
// 008301c9  d944243c             fld dword ptr [esp + 0x3c]
// 008301cd  a801                 test al, 1
// 008301cf  740a                 je 0x8301db
// 008301d1  d9442440             fld dword ptr [esp + 0x40]
// 008301d5  d8c9                 fmul st(1)
// 008301d7  d95c2440             fstp dword ptr [esp + 0x40]
// 008301db  d1e8                 shr eax, 1
// 008301dd  7408                 je 0x8301e7
// 008301df  dcc8                 fmul st(0), st(0)
// 008301e1  d95c243c             fstp dword ptr [esp + 0x3c]
// 008301e5  ebe2                 jmp 0x8301c9
// 008301e7  ddd8                 fstp st(0)
// 008301e9  b802000000           mov eax, 2
// 008301ee  d9442428             fld dword ptr [esp + 0x28]
// 008301f2  d9442440             fld dword ptr [esp + 0x40]
// 008301f6  d95c2440             fstp dword ptr [esp + 0x40]
// 008301fa  d8742440             fdiv dword ptr [esp + 0x40]
// 008301fe  d95c2440             fstp dword ptr [esp + 0x40]
// 00830202  d9442440             fld dword ptr [esp + 0x40]
// 00830206  d9c0                 fld st(0)
// 00830208  d84c2438             fmul dword ptr [esp + 0x38]
// 0083020c  dee3                 fsubrp st(3)
// 0083020e  d9ca                 fxch st(2)
// 00830210  d95c2440             fstp dword ptr [esp + 0x40]
// 00830214  d9c1                 fld st(1)
// 00830216  decb                 fmulp st(3)
// 00830218  d9ca                 fxch st(2)
// 0083021a  dee4                 fsubrp st(4)
// 0083021c  d9cb                 fxch st(3)
// 0083021e  d95c243c             fstp dword ptr [esp + 0x3c]
// 00830222  d9ca                 fxch st(2)
// 00830224  dec9                 fmulp st(1)
// 00830226  dee1                 fsubrp st(1)
// 00830228  d95c2418             fstp dword ptr [esp + 0x18]
// 0083022c  d9442420             fld dword ptr [esp + 0x20]
// 00830230  d95c241c             fstp dword ptr [esp + 0x1c]
// 00830234  d9e8                 fld1 
// 00830236  d9542420             fst dword ptr [esp + 0x20]
// 0083023a  d944241c             fld dword ptr [esp + 0x1c]
// 0083023e  a801                 test al, 1
// 00830240  740a                 je 0x83024c
// 00830242  d9442420             fld dword ptr [esp + 0x20]
// 00830246  d8c9                 fmul st(1)
// 00830248  d95c2420             fstp dword ptr [esp + 0x20]
// 0083024c  d1e8                 shr eax, 1
// 0083024e  7408                 je 0x830258
// 00830250  dcc8                 fmul st(0), st(0)
// 00830252  d95c241c             fstp dword ptr [esp + 0x1c]
// 00830256  ebe2                 jmp 0x83023a
// 00830258  ddd8                 fstp st(0)
// 0083025a  b802000000           mov eax, 2
// 0083025f  d9442420             fld dword ptr [esp + 0x20]
// 00830263  d95c2430             fstp dword ptr [esp + 0x30]
// 00830267  d9442440             fld dword ptr [esp + 0x40]
// 0083026b  d95c2420             fstp dword ptr [esp + 0x20]
// 0083026f  d9542440             fst dword ptr [esp + 0x40]
// 00830273  d9442420             fld dword ptr [esp + 0x20]
// 00830277  a801                 test al, 1
// 00830279  740a                 je 0x830285
// 0083027b  d9442440             fld dword ptr [esp + 0x40]
// 0083027f  d8c9                 fmul st(1)
// 00830281  d95c2440             fstp dword ptr [esp + 0x40]
// 00830285  d1e8                 shr eax, 1
// 00830287  7408                 je 0x830291
// 00830289  dcc8                 fmul st(0), st(0)
// 0083028b  d95c2420             fstp dword ptr [esp + 0x20]
// 0083028f  ebe2                 jmp 0x830273
// 00830291  ddd8                 fstp st(0)
// 00830293  b802000000           mov eax, 2
// 00830298  d9442440             fld dword ptr [esp + 0x40]
// 0083029c  d95c241c             fstp dword ptr [esp + 0x1c]
// 008302a0  d944243c             fld dword ptr [esp + 0x3c]
// 008302a4  d95c243c             fstp dword ptr [esp + 0x3c]
// 008302a8  d9542440             fst dword ptr [esp + 0x40]
// 008302ac  d944243c             fld dword ptr [esp + 0x3c]
// 008302b0  a801                 test al, 1
// 008302b2  740a                 je 0x8302be
// 008302b4  d9442440             fld dword ptr [esp + 0x40]
// 008302b8  d8c9                 fmul st(1)
// 008302ba  d95c2440             fstp dword ptr [esp + 0x40]
// 008302be  d1e8                 shr eax, 1
// 008302c0  7408                 je 0x8302ca
// 008302c2  dcc8                 fmul st(0), st(0)
// 008302c4  d95c243c             fstp dword ptr [esp + 0x3c]
// 008302c8  ebe2                 jmp 0x8302ac
// 008302ca  ddd8                 fstp st(0)
// 008302cc  b802000000           mov eax, 2
// 008302d1  d9442440             fld dword ptr [esp + 0x40]
// 008302d5  d95c2420             fstp dword ptr [esp + 0x20]
// 008302d9  d9442418             fld dword ptr [esp + 0x18]
// 008302dd  d95c243c             fstp dword ptr [esp + 0x3c]
// 008302e1  d95c2440             fstp dword ptr [esp + 0x40]
// 008302e5  d944243c             fld dword ptr [esp + 0x3c]
// 008302e9  a801                 test al, 1
// 008302eb  740a                 je 0x8302f7
// 008302ed  d9442440             fld dword ptr [esp + 0x40]
// 008302f1  d8c9                 fmul st(1)
// 008302f3  d95c2440             fstp dword ptr [esp + 0x40]
// 008302f7  d1e8                 shr eax, 1
// 008302f9  7408                 je 0x830303
// 008302fb  dcc8                 fmul st(0), st(0)
// 008302fd  d95c243c             fstp dword ptr [esp + 0x3c]
// 00830301  ebe2                 jmp 0x8302e5
// 00830303  ddd8                 fstp st(0)
// 00830305  d9442440             fld dword ptr [esp + 0x40]
// 00830309  d9442428             fld dword ptr [esp + 0x28]
// 0083030d  d8742424             fdiv dword ptr [esp + 0x24]
// 00830311  dd5c2428             fstp qword ptr [esp + 0x28]
// 00830315  d9442420             fld dword ptr [esp + 0x20]
// 00830319  d844241c             fadd dword ptr [esp + 0x1c]
// 0083031d  d9c9                 fxch st(1)
// 0083031f  d95c2440             fstp dword ptr [esp + 0x40]
// 00830323  d9442440             fld dword ptr [esp + 0x40]
// 00830327  dec1                 faddp st(1)
// 00830329  d86c2430             fsubr dword ptr [esp + 0x30]
// 0083032d  d95c2440             fstp dword ptr [esp + 0x40]
// 00830331  d9442440             fld dword ptr [esp + 0x40]
// 00830335  e8ec4dfcff           call 0x7f5126
// 0083033a  d95c2440             fstp dword ptr [esp + 0x40]
// 0083033e  d9442440             fld dword ptr [esp + 0x40]
// 00830342  dc6c2428             fsubr qword ptr [esp + 0x28]
// 00830346  d95c2440             fstp dword ptr [esp + 0x40]
// 0083034a  d9442440             fld dword ptr [esp + 0x40]
// 0083034e  d9c0                 fld st(0)
// 00830350  d84c2438             fmul dword ptr [esp + 0x38]
// 00830354  d9442424             fld dword ptr [esp + 0x24]
// 00830358  d9c0                 fld st(0)
// 0083035a  defa                 fdivp st(2)
// 0083035c  d9c9                 fxch st(1)
// 0083035e  d95c2440             fstp dword ptr [esp + 0x40]
// 00830362  d9c1                 fld st(1)
// 00830364  d84c2410             fmul dword ptr [esp + 0x10]
// 00830368  d8f1                 fdiv st(1)
// 0083036a  d95c243c             fstp dword ptr [esp + 0x3c]
// 0083036e  d9442414             fld dword ptr [esp + 0x14]
// 00830372  deca                 fmulp st(2)
// 00830374  def9                 fdivp st(1)
// 00830376  d95c2418             fstp dword ptr [esp + 0x18]
// 0083037a  85ed                 test ebp, ebp
// 0083037c  742a                 je 0x8303a8
// 0083037e  d9442440             fld dword ptr [esp + 0x40]
// 00830382  dc2d48659f00         fsubr qword ptr [0x9f6548]
// 00830388  d95c2440             fstp dword ptr [esp + 0x40]
// 0083038c  d944243c             fld dword ptr [esp + 0x3c]
// 00830390  dc2d40659f00         fsubr qword ptr [0x9f6540]
// 00830396  d95c243c             fstp dword ptr [esp + 0x3c]
// 0083039a  d9442418             fld dword ptr [esp + 0x18]
// 0083039e  dc2d38659f00         fsubr qword ptr [0x9f6538]
// 008303a4  d95c2418             fstp dword ptr [esp + 0x18]
// 008303a8  d9ee                 fldz 
// 008303aa  d9442440             fld dword ptr [esp + 0x40]
// 008303ae  d8d1                 fcom st(1)
// 008303b0  dfe0                 fnstsw ax
// 008303b2  d9ee                 fldz 
// 008303b4  f6c405               test ah, 5
// 008303b7  7a06                 jp 0x8303bf
// 008303b9  ddd9                 fstp st(1)
// 008303bb  d9c0                 fld st(0)
// 008303bd  eb1b                 jmp 0x8303da
// 008303bf  d90530659f00         fld dword ptr [0x9f6530]
// 008303c5  d8da                 fcomp st(2)
// 008303c7  dfe0                 fnstsw ax
// 008303c9  f6c405               test ah, 5
// 008303cc  7a0a                 jp 0x8303d8
// 008303ce  ddd9                 fstp st(1)
// 008303d0  dd0548659f00         fld qword ptr [0x9f6548]
// 008303d6  eb02                 jmp 0x8303da
// 008303d8  d9c9                 fxch st(1)
// 008303da  d95c2440             fstp dword ptr [esp + 0x40]
// 008303de  d944243c             fld dword ptr [esp + 0x3c]
// 008303e2  d8d2                 fcom st(2)
// 008303e4  dfe0                 fnstsw ax
// 008303e6  f6c405               test ah, 5
// 008303e9  7a06                 jp 0x8303f1
// 008303eb  ddd8                 fstp st(0)
// 008303ed  d9c0                 fld st(0)
// 008303ef  eb17                 jmp 0x830408
// 008303f1  d9052c659f00         fld dword ptr [0x9f652c]
// 008303f7  d8d9                 fcomp st(1)
// 008303f9  dfe0                 fnstsw ax
// 008303fb  f6c405               test ah, 5
// 008303fe  7a08                 jp 0x830408
// 00830400  ddd8                 fstp st(0)
// 00830402  dd0540659f00         fld qword ptr [0x9f6540]
// 00830408  d95c243c             fstp dword ptr [esp + 0x3c]
// 0083040c  d9442418             fld dword ptr [esp + 0x18]
// 00830410  d8d2                 fcom st(2)
// 00830412  dfe0                 fnstsw ax
// 00830414  ddda                 fstp st(2)
// 00830416  f6c405               test ah, 5
// 00830419  7a04                 jp 0x83041f
// 0083041b  ddd9                 fstp st(1)
// 0083041d  eb19                 jmp 0x830438
// 0083041f  ddd8                 fstp st(0)
// 00830421  d90528659f00         fld dword ptr [0x9f6528]
// 00830427  d8d9                 fcomp st(1)
// 00830429  dfe0                 fnstsw ax
// 0083042b  f6c405               test ah, 5
// 0083042e  7a08                 jp 0x830438
// 00830430  ddd8                 fstp st(0)
// 00830432  dd0538659f00         fld qword ptr [0x9f6538]
// 00830438  d9442440             fld dword ptr [esp + 0x40]
// 0083043c  dc0d20659f00         fmul qword ptr [0x9f6520]
// 00830442  dd0510329b00         fld qword ptr [0x9b3210]
// 00830448  dcc1                 fadd st(1), st(0)
// 0083044a  d9c9                 fxch st(1)
// 0083044c  e89f48fcff           call 0x7f4cf0
// 00830451  d944243c             fld dword ptr [esp + 0x3c]
// 00830455  dc0d18659f00         fmul qword ptr [0x9f6518]
// 0083045b  8bf0                 mov esi, eax
// 0083045d  d8c1                 fadd st(1)
// 0083045f  e88c48fcff           call 0x7f4cf0
// 00830464  d9c9                 fxch st(1)
// 00830466  d95c2438             fstp dword ptr [esp + 0x38]
// 0083046a  8bf8                 mov edi, eax
// 0083046c  d9442438             fld dword ptr [esp + 0x38]
// 00830470  dc0d10659f00         fmul qword ptr [0x9f6510]
// 00830476  dec1                 faddp st(1)
// 00830478  e87348fcff           call 0x7f4cf0
// 0083047d  85f6                 test esi, esi
// 0083047f  7d04                 jge 0x830485
// 00830481  33d2                 xor edx, edx
// 00830483  eb0f                 jmp 0x830494
// 00830485  81feff000000         cmp esi, 0xff
// 0083048b  baff000000           mov edx, 0xff
// 00830490  7f02                 jg 0x830494
// 00830492  8bd6                 mov edx, esi
// 00830494  85ff                 test edi, edi
// 00830496  7d04                 jge 0x83049c
// 00830498  33c9                 xor ecx, ecx
// 0083049a  eb0f                 jmp 0x8304ab
// 0083049c  81ffff000000         cmp edi, 0xff
// 008304a2  b9ff000000           mov ecx, 0xff
// 008304a7  7f02                 jg 0x8304ab
// 008304a9  8bcf                 mov ecx, edi
// 008304ab  5f                   pop edi
// 008304ac  5e                   pop esi
// 008304ad  5d                   pop ebp
// 008304ae  5b                   pop ebx
// 008304af  85c0                 test eax, eax
// 008304b1  7d04                 jge 0x8304b7
// 008304b3  33c0                 xor eax, eax
// 008304b5  eb0c                 jmp 0x8304c3
// 008304b7  3dff000000           cmp eax, 0xff
// 008304bc  7e05                 jle 0x8304c3
// 008304be  b8ff000000           mov eax, 0xff
// 008304c3  0fb6c0               movzx eax, al
// 008304c6  c1e008               shl eax, 8
// 008304c9  0fb6c9               movzx ecx, cl
// 008304cc  0bc1                 or eax, ecx
// 008304ce  0fb6d2               movzx edx, dl
// 008304d1  c1e008               shl eax, 8
// 008304d4  0bc2                 or eax, edx
// 008304d6  83c424               add esp, 0x24
// 008304d9  c20c00               ret 0xc
// copied from an identical function in another client (function ?MixColor@CXTPColorManager@@AAEKKKM@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp