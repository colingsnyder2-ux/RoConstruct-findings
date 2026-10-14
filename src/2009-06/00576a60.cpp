// roc 2009-06 00576a60  unit: G3D::LineSegment  size: 1286 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576a60
//
// 00576a60  83ec60               sub esp, 0x60
// 00576a63  53                   push ebx
// 00576a64  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 00576a68  55                   push ebp
// 00576a69  8d442420             lea eax, [esp + 0x20]
// 00576a6d  50                   push eax
// 00576a6e  8bcb                 mov ecx, ebx
// 00576a70  e8db360100           call 0x58a150
// 00576a75  8d4c245c             lea ecx, [esp + 0x5c]
// 00576a79  51                   push ecx
// 00576a7a  8bcb                 mov ecx, ebx
// 00576a7c  8be8                 mov ebp, eax
// 00576a7e  e8ed360100           call 0x58a170
// 00576a83  d900                 fld dword ptr [eax]
// 00576a85  d86500               fsub dword ptr [ebp]
// 00576a88  51                   push ecx
// 00576a89  8d4c2418             lea ecx, [esp + 0x18]
// 00576a8d  d9542454             fst dword ptr [esp + 0x54]
// 00576a91  d94004               fld dword ptr [eax + 4]
// 00576a94  d86504               fsub dword ptr [ebp + 4]
// 00576a97  d9542458             fst dword ptr [esp + 0x58]
// 00576a9b  d94008               fld dword ptr [eax + 8]
// 00576a9e  d86508               fsub dword ptr [ebp + 8]
// 00576aa1  d954245c             fst dword ptr [esp + 0x5c]
// 00576aa5  d9ee                 fldz 
// 00576aa7  d9542430             fst dword ptr [esp + 0x30]
// 00576aab  d9542434             fst dword ptr [esp + 0x34]
// 00576aaf  d9542438             fst dword ptr [esp + 0x38]
// 00576ab3  d954243c             fst dword ptr [esp + 0x3c]
// 00576ab7  d9542440             fst dword ptr [esp + 0x40]
// 00576abb  d95c2444             fstp dword ptr [esp + 0x44]
// 00576abf  d9ca                 fxch st(2)
// 00576ac1  d95c2418             fstp dword ptr [esp + 0x18]
// 00576ac5  d95c241c             fstp dword ptr [esp + 0x1c]
// 00576ac9  d95c2420             fstp dword ptr [esp + 0x20]
// 00576acd  d90574a48c00         fld dword ptr [0x8ca474]
// 00576ad3  d91c24               fstp dword ptr [esp]
// 00576ad6  e855e9ffff           call 0x575430
// 00576adb  6a01                 push 1
// 00576add  d95c2410             fstp dword ptr [esp + 0x10]
// 00576ae1  8d542418             lea edx, [esp + 0x18]
// 00576ae5  52                   push edx
// 00576ae6  8d442440             lea eax, [esp + 0x40]
// 00576aea  50                   push eax
// 00576aeb  8d4c2438             lea ecx, [esp + 0x38]
// 00576aef  51                   push ecx
// 00576af0  e88be9ffff           call 0x575480
// 00576af5  d906                 fld dword ptr [esi]
// 00576af7  d84c243c             fmul dword ptr [esp + 0x3c]
// 00576afb  83c40c               add esp, 0xc
// 00576afe  d94608               fld dword ptr [esi + 8]
// 00576b01  8d4c2448             lea ecx, [esp + 0x48]
// 00576b05  d84c2438             fmul dword ptr [esp + 0x38]
// 00576b09  dec1                 faddp st(1)
// 00576b0b  d94604               fld dword ptr [esi + 4]
// 00576b0e  d84c2434             fmul dword ptr [esp + 0x34]
// 00576b12  dec1                 faddp st(1)
// 00576b14  d95c2448             fstp dword ptr [esp + 0x48]
// 00576b18  d906                 fld dword ptr [esi]
// 00576b1a  d84c243c             fmul dword ptr [esp + 0x3c]
// 00576b1e  d94608               fld dword ptr [esi + 8]
// 00576b21  d84c2444             fmul dword ptr [esp + 0x44]
// 00576b25  dec1                 faddp st(1)
// 00576b27  d94604               fld dword ptr [esi + 4]
// 00576b2a  d84c2440             fmul dword ptr [esp + 0x40]
// 00576b2e  dec1                 faddp st(1)
// 00576b30  d95c244c             fstp dword ptr [esp + 0x4c]
// 00576b34  d906                 fld dword ptr [esi]
// 00576b36  d84c2418             fmul dword ptr [esp + 0x18]
// 00576b3a  d94608               fld dword ptr [esi + 8]
// 00576b3d  d84c2420             fmul dword ptr [esp + 0x20]
// 00576b41  dec1                 faddp st(1)
// 00576b43  d94604               fld dword ptr [esi + 4]
// 00576b46  d84c241c             fmul dword ptr [esp + 0x1c]
// 00576b4a  dec1                 faddp st(1)
// 00576b4c  d95c2450             fstp dword ptr [esp + 0x50]
// 00576b50  d90574a48c00         fld dword ptr [0x8ca474]
// 00576b56  d91c24               fstp dword ptr [esp]
// 00576b59  e8d2e8ffff           call 0x575430
// 00576b5e  d9542410             fst dword ptr [esp + 0x10]
// 00576b62  d9e8                 fld1 
// 00576b64  def1                 fdivrp st(1)
// 00576b66  8d54245c             lea edx, [esp + 0x5c]
// 00576b6a  d95c2408             fstp dword ptr [esp + 8]
// 00576b6e  52                   push edx
// 00576b6f  8bcb                 mov ecx, ebx
// 00576b71  e8da350100           call 0x58a150
// 00576b76  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00576b7a  d901                 fld dword ptr [ecx]
// 00576b7c  d820                 fsub dword ptr [eax]
// 00576b7e  d94104               fld dword ptr [ecx + 4]
// 00576b81  d86004               fsub dword ptr [eax + 4]
// 00576b84  d94108               fld dword ptr [ecx + 8]
// 00576b87  8bcb                 mov ecx, ebx
// 00576b89  d86008               fsub dword ptr [eax + 8]
// 00576b8c  d9442434             fld dword ptr [esp + 0x34]
// 00576b90  d8c9                 fmul st(1)
// 00576b92  d9c2                 fld st(2)
// 00576b94  d84c2430             fmul dword ptr [esp + 0x30]
// 00576b98  dec1                 faddp st(1)
// 00576b9a  d9c3                 fld st(3)
// 00576b9c  d84c242c             fmul dword ptr [esp + 0x2c]
// 00576ba0  dec1                 faddp st(1)
// 00576ba2  d95c2420             fstp dword ptr [esp + 0x20]
// 00576ba6  d9442440             fld dword ptr [esp + 0x40]
// 00576baa  d8c9                 fmul st(1)
// 00576bac  d9c2                 fld st(2)
// 00576bae  d84c243c             fmul dword ptr [esp + 0x3c]
// 00576bb2  dec1                 faddp st(1)
// 00576bb4  d9c3                 fld st(3)
// 00576bb6  d84c2438             fmul dword ptr [esp + 0x38]
// 00576bba  dec1                 faddp st(1)
// 00576bbc  d95c2424             fstp dword ptr [esp + 0x24]
// 00576bc0  d84c241c             fmul dword ptr [esp + 0x1c]
// 00576bc4  d9c9                 fxch st(1)
// 00576bc6  d84c2418             fmul dword ptr [esp + 0x18]
// 00576bca  dec1                 faddp st(1)
// 00576bcc  d9c9                 fxch st(1)
// 00576bce  d84c2414             fmul dword ptr [esp + 0x14]
// 00576bd2  dec1                 faddp st(1)
// 00576bd4  d95c2428             fstp dword ptr [esp + 0x28]
// 00576bd8  e8b3350100           call 0x58a190
// 00576bdd  dcc8                 fmul st(0), st(0)
// 00576bdf  5d                   pop ebp
// 00576be0  d9442448             fld dword ptr [esp + 0x48]
// 00576be4  5b                   pop ebx
// 00576be5  d9c0                 fld st(0)
// 00576be7  d9e1                 fabs 
// 00576be9  dc1da0b88c00         fcomp qword ptr [0x8cb8a0]
// 00576bef  dfe0                 fnstsw ax
// 00576bf1  f6c401               test ah, 1
// 00576bf4  0f84b4020000         je 0x576eae
// 00576bfa  d90574a48c00         fld dword ptr [0x8ca474]
// 00576c00  d85c2408             fcomp dword ptr [esp + 8]
// 00576c04  dfe0                 fnstsw ax
// 00576c06  f6c441               test ah, 0x41
// 00576c09  0f849f020000         je 0x576eae
// 00576c0f  d9442440             fld dword ptr [esp + 0x40]
// 00576c13  d9c0                 fld st(0)
// 00576c15  d8c9                 fmul st(1)
// 00576c17  d944243c             fld dword ptr [esp + 0x3c]
// 00576c1b  d9c0                 fld st(0)
// 00576c1d  d8c9                 fmul st(1)
// 00576c1f  dec2                 faddp st(2)
// 00576c21  d944241c             fld dword ptr [esp + 0x1c]
// 00576c25  dccb                 fmul st(3), st(0)
// 00576c27  d9442418             fld dword ptr [esp + 0x18]
// 00576c2b  dcca                 fmul st(2), st(0)
// 00576c2d  d9cc                 fxch st(4)
// 00576c2f  dec2                 faddp st(2)
// 00576c31  dcc8                 fmul st(0), st(0)
// 00576c33  d9c3                 fld st(3)
// 00576c35  decc                 fmulp st(4)
// 00576c37  dec3                 faddp st(3)
// 00576c39  d9ca                 fxch st(2)
// 00576c3b  dee4                 fsubrp st(4)
// 00576c3d  d9cb                 fxch st(3)
// 00576c3f  d9542408             fst dword ptr [esp + 8]
// 00576c43  d9c1                 fld st(1)
// 00576c45  d8ca                 fmul st(2)
// 00576c47  d9c1                 fld st(1)
// 00576c49  d8cd                 fmul st(5)
// 00576c4b  dee9                 fsubp st(1)
// 00576c4d  d9ee                 fldz 
// 00576c4f  d8d1                 fcom st(1)
// 00576c51  dfe0                 fnstsw ax
// 00576c53  f6c441               test ah, 0x41
// 00576c56  7512                 jne 0x576c6a
// 00576c58  ddd9                 fstp st(1)
// 00576c5a  dddc                 fstp st(4)
// 00576c5c  ddda                 fstp st(2)
// 00576c5e  ddda                 fstp st(2)
// 00576c60  ddd9                 fstp st(1)
// 00576c62  33c0                 xor eax, eax
// 00576c64  ddd8                 fstp st(0)
// 00576c66  83c460               add esp, 0x60
// 00576c69  c3                   ret 
// 00576c6a  d8d1                 fcom st(1)
// 00576c6c  33c9                 xor ecx, ecx
// 00576c6e  dfe0                 fnstsw ax
// 00576c70  f6c405               test ah, 5
// 00576c73  0f8a93000000         jp 0x576d0c
// 00576c79  ddda                 fstp st(2)
// 00576c7b  d9fa                 fsqrt 
// 00576c7d  d9e8                 fld1 
// 00576c7f  def5                 fdivrp st(5)
// 00576c81  d9c2                 fld st(2)
// 00576c83  d9e0                 fchs 
// 00576c85  d8e1                 fsub st(1)
// 00576c87  d8cd                 fmul st(5)
// 00576c89  d9542464             fst dword ptr [esp + 0x64]
// 00576c8d  d8cc                 fmul st(4)
// 00576c8f  d9442420             fld dword ptr [esp + 0x20]
// 00576c93  dcc1                 fadd st(1), st(0)
// 00576c95  d9cb                 fxch st(3)
// 00576c97  d8d1                 fcom st(1)
// 00576c99  dfe0                 fnstsw ax
// 00576c9b  f6c441               test ah, 0x41
// 00576c9e  7a1f                 jp 0x576cbf
// 00576ca0  d9442404             fld dword ptr [esp + 4]
// 00576ca4  d8da                 fcomp st(2)
// 00576ca6  dfe0                 fnstsw ax
// 00576ca8  ddd9                 fstp st(1)
// 00576caa  f6c401               test ah, 1
// 00576cad  7512                 jne 0x576cc1
// 00576caf  d9442464             fld dword ptr [esp + 0x64]
// 00576cb3  b901000000           mov ecx, 1
// 00576cb8  d80c24               fmul dword ptr [esp]
// 00576cbb  dd1f                 fstp qword ptr [edi]
// 00576cbd  eb02                 jmp 0x576cc1
// 00576cbf  ddd9                 fstp st(1)
// 00576cc1  d9442404             fld dword ptr [esp + 4]
// 00576cc5  d9ca                 fxch st(2)
// 00576cc7  d8e4                 fsub st(4)
// 00576cc9  dece                 fmulp st(6)
// 00576ccb  d9c5                 fld st(5)
// 00576ccd  d8cd                 fmul st(5)
// 00576ccf  d8c3                 fadd st(3)
// 00576cd1  d8d1                 fcom st(1)
// 00576cd3  dfe0                 fnstsw ax
// 00576cd5  f6c401               test ah, 1
// 00576cd8  7515                 jne 0x576cef
// 00576cda  d8da                 fcomp st(2)
// 00576cdc  dfe0                 fnstsw ax
// 00576cde  f6c441               test ah, 0x41
// 00576ce1  7a0e                 jp 0x576cf1
// 00576ce3  d9cd                 fxch st(5)
// 00576ce5  41                   inc ecx
// 00576ce6  d80c24               fmul dword ptr [esp]
// 00576ce9  dd5ccff8             fstp qword ptr [edi + ecx*8 - 8]
// 00576ced  eb04                 jmp 0x576cf3
// 00576cef  ddd8                 fstp st(0)
// 00576cf1  dddd                 fstp st(5)
// 00576cf3  83f902               cmp ecx, 2
// 00576cf6  0f85bf000000         jne 0x576dbb
// 00576cfc  ddd9                 fstp st(1)
// 00576cfe  8bc1                 mov eax, ecx
// 00576d00  ddda                 fstp st(2)
// 00576d02  ddda                 fstp st(2)
// 00576d04  ddd9                 fstp st(1)
// 00576d06  ddd8                 fstp st(0)
// 00576d08  83c460               add esp, 0x60
// 00576d0b  c3                   ret 
// 00576d0c  ddd9                 fstp st(1)
// 00576d0e  d9c2                 fld st(2)
// 00576d10  def5                 fdivrp st(5)
// 00576d12  d9cc                 fxch st(4)
// 00576d14  d9e0                 fchs 
// 00576d16  d9542464             fst dword ptr [esp + 0x64]
// 00576d1a  d8cb                 fmul st(3)
// 00576d1c  d9442420             fld dword ptr [esp + 0x20]
// 00576d20  dcc1                 fadd st(1), st(0)
// 00576d22  d9cd                 fxch st(5)
// 00576d24  d8d1                 fcom st(1)
// 00576d26  dfe0                 fnstsw ax
// 00576d28  f6c441               test ah, 0x41
// 00576d2b  7a2d                 jp 0x576d5a
// 00576d2d  d9442404             fld dword ptr [esp + 4]
// 00576d31  d8d2                 fcom st(2)
// 00576d33  dfe0                 fnstsw ax
// 00576d35  ddda                 fstp st(2)
// 00576d37  f6c401               test ah, 1
// 00576d3a  7526                 jne 0x576d62
// 00576d3c  dddd                 fstp st(5)
// 00576d3e  b801000000           mov eax, 1
// 00576d43  dddb                 fstp st(3)
// 00576d45  dddb                 fstp st(3)
// 00576d47  ddd8                 fstp st(0)
// 00576d49  ddd9                 fstp st(1)
// 00576d4b  ddd8                 fstp st(0)
// 00576d4d  d9442464             fld dword ptr [esp + 0x64]
// 00576d51  d80c24               fmul dword ptr [esp]
// 00576d54  dd1f                 fstp qword ptr [edi]
// 00576d56  83c460               add esp, 0x60
// 00576d59  c3                   ret 
// 00576d5a  ddd9                 fstp st(1)
// 00576d5c  d9442404             fld dword ptr [esp + 4]
// 00576d60  d9c9                 fxch st(1)
// 00576d62  d9cd                 fxch st(5)
// 00576d64  d9ca                 fxch st(2)
// 00576d66  d9c2                 fld st(2)
// 00576d68  d8cd                 fmul st(5)
// 00576d6a  dec4                 faddp st(4)
// 00576d6c  d9c2                 fld st(2)
// 00576d6e  d8cb                 fmul st(3)
// 00576d70  dec1                 faddp st(1)
// 00576d72  d9542408             fst dword ptr [esp + 8]
// 00576d76  d9c3                 fld st(3)
// 00576d78  d8cc                 fmul st(4)
// 00576d7a  dee1                 fsubrp st(1)
// 00576d7c  d8d5                 fcom st(5)
// 00576d7e  dfe0                 fnstsw ax
// 00576d80  f6c441               test ah, 0x41
// 00576d83  756c                 jne 0x576df1
// 00576d85  d9fa                 fsqrt 
// 00576d87  d9c3                 fld st(3)
// 00576d89  d9e0                 fchs 
// 00576d8b  d8e1                 fsub st(1)
// 00576d8d  d9c0                 fld st(0)
// 00576d8f  d8ce                 fmul st(6)
// 00576d91  d8c4                 fadd st(4)
// 00576d93  d8df                 fcomp st(7)
// 00576d95  dfe0                 fnstsw ax
// 00576d97  f6c441               test ah, 0x41
// 00576d9a  7a25                 jp 0x576dc1
// 00576d9c  d80c24               fmul dword ptr [esp]
// 00576d9f  41                   inc ecx
// 00576da0  dd5ccff8             fstp qword ptr [edi + ecx*8 - 8]
// 00576da4  83f902               cmp ecx, 2
// 00576da7  751a                 jne 0x576dc3
// 00576da9  ddd8                 fstp st(0)
// 00576dab  8bc1                 mov eax, ecx
// 00576dad  ddd9                 fstp st(1)
// 00576daf  ddda                 fstp st(2)
// 00576db1  ddda                 fstp st(2)
// 00576db3  ddd9                 fstp st(1)
// 00576db5  ddd8                 fstp st(0)
// 00576db7  83c460               add esp, 0x60
// 00576dba  c3                   ret 
// 00576dbb  d9442408             fld dword ptr [esp + 8]
// 00576dbf  eba5                 jmp 0x576d66
// 00576dc1  ddd8                 fstp st(0)
// 00576dc3  d8e3                 fsub st(3)
// 00576dc5  d9c0                 fld st(0)
// 00576dc7  d8cd                 fmul st(5)
// 00576dc9  d8c3                 fadd st(3)
// 00576dcb  d8de                 fcomp st(6)
// 00576dcd  dfe0                 fnstsw ax
// 00576dcf  f6c441               test ah, 0x41
// 00576dd2  7a2e                 jp 0x576e02
// 00576dd4  d80c24               fmul dword ptr [esp]
// 00576dd7  41                   inc ecx
// 00576dd8  dd5ccff8             fstp qword ptr [edi + ecx*8 - 8]
// 00576ddc  83f902               cmp ecx, 2
// 00576ddf  7523                 jne 0x576e04
// 00576de1  ddd9                 fstp st(1)
// 00576de3  8bc1                 mov eax, ecx
// 00576de5  ddda                 fstp st(2)
// 00576de7  ddda                 fstp st(2)
// 00576de9  ddd9                 fstp st(1)
// 00576deb  ddd8                 fstp st(0)
// 00576ded  83c460               add esp, 0x60
// 00576df0  c3                   ret 
// 00576df1  d9c5                 fld st(5)
// 00576df3  dae9                 fucompp 
// 00576df5  dfe0                 fnstsw ax
// 00576df7  f6c444               test ah, 0x44
// 00576dfa  7a08                 jp 0x576e04
// 00576dfc  d9c2                 fld st(2)
// 00576dfe  d9e0                 fchs 
// 00576e00  ebc3                 jmp 0x576dc5
// 00576e02  ddd8                 fstp st(0)
// 00576e04  d9c3                 fld st(3)
// 00576e06  d8c9                 fmul st(1)
// 00576e08  deeb                 fsubp st(3)
// 00576e0a  d9c2                 fld st(2)
// 00576e0c  d8cb                 fmul st(3)
// 00576e0e  d9c2                 fld st(2)
// 00576e10  dcc0                 fadd st(0), st(0)
// 00576e12  d8ea                 fsubr st(2)
// 00576e14  d8ca                 fmul st(2)
// 00576e16  d8442408             fadd dword ptr [esp + 8]
// 00576e1a  dee9                 fsubp st(1)
// 00576e1c  d8d5                 fcom st(5)
// 00576e1e  dfe0                 fnstsw ax
// 00576e20  f6c441               test ah, 0x41
// 00576e23  7562                 jne 0x576e87
// 00576e25  dddd                 fstp st(5)
// 00576e27  d9cc                 fxch st(4)
// 00576e29  d9fa                 fsqrt 
// 00576e2b  d9c2                 fld st(2)
// 00576e2d  d9e0                 fchs 
// 00576e2f  d8e1                 fsub st(1)
// 00576e31  d9c0                 fld st(0)
// 00576e33  d8cd                 fmul st(5)
// 00576e35  d8c3                 fadd st(3)
// 00576e37  d8de                 fcomp st(6)
// 00576e39  dfe0                 fnstsw ax
// 00576e3b  f6c401               test ah, 1
// 00576e3e  751d                 jne 0x576e5d
// 00576e40  d80c24               fmul dword ptr [esp]
// 00576e43  41                   inc ecx
// 00576e44  dd5ccff8             fstp qword ptr [edi + ecx*8 - 8]
// 00576e48  83f902               cmp ecx, 2
// 00576e4b  7512                 jne 0x576e5f
// 00576e4d  ddd8                 fstp st(0)
// 00576e4f  8bc1                 mov eax, ecx
// 00576e51  ddd8                 fstp st(0)
// 00576e53  ddd9                 fstp st(1)
// 00576e55  ddd8                 fstp st(0)
// 00576e57  ddd8                 fstp st(0)
// 00576e59  83c460               add esp, 0x60
// 00576e5c  c3                   ret 
// 00576e5d  ddd8                 fstp st(0)
// 00576e5f  dee2                 fsubrp st(2)
// 00576e61  d9c1                 fld st(1)
// 00576e63  decb                 fmulp st(3)
// 00576e65  dec2                 faddp st(2)
// 00576e67  d9c9                 fxch st(1)
// 00576e69  d8da                 fcomp st(2)
// 00576e6b  dfe0                 fnstsw ax
// 00576e6d  ddd9                 fstp st(1)
// 00576e6f  f6c401               test ah, 1
// 00576e72  7532                 jne 0x576ea6
// 00576e74  d80c24               fmul dword ptr [esp]
// 00576e77  41                   inc ecx
// 00576e78  dd5ccff8             fstp qword ptr [edi + ecx*8 - 8]
// 00576e7c  83f902               cmp ecx, 2
// 00576e7f  7527                 jne 0x576ea8
// 00576e81  8bc1                 mov eax, ecx
// 00576e83  83c460               add esp, 0x60
// 00576e86  c3                   ret 
// 00576e87  dded                 fucomp st(5)
// 00576e89  dfe0                 fnstsw ax
// 00576e8b  dddc                 fstp st(4)
// 00576e8d  f6c444               test ah, 0x44
// 00576e90  7a0e                 jp 0x576ea0
// 00576e92  d9c9                 fxch st(1)
// 00576e94  d9e0                 fchs 
// 00576e96  d9c0                 fld st(0)
// 00576e98  decb                 fmulp st(3)
// 00576e9a  d9ca                 fxch st(2)
// 00576e9c  dec1                 faddp st(1)
// 00576e9e  ebc9                 jmp 0x576e69
// 00576ea0  ddd8                 fstp st(0)
// 00576ea2  ddd9                 fstp st(1)
// 00576ea4  ddd8                 fstp st(0)
// 00576ea6  ddd8                 fstp st(0)
// 00576ea8  8bc1                 mov eax, ecx
// 00576eaa  83c460               add esp, 0x60
// 00576ead  c3                   ret 
// 00576eae  ddd8                 fstp st(0)
// 00576eb0  d94604               fld dword ptr [esi + 4]
// 00576eb3  d84c244c             fmul dword ptr [esp + 0x4c]
// 00576eb7  d94608               fld dword ptr [esi + 8]
// 00576eba  d84c2450             fmul dword ptr [esp + 0x50]
// 00576ebe  dec1                 faddp st(1)
// 00576ec0  d906                 fld dword ptr [esi]
// 00576ec2  d84c2448             fmul dword ptr [esp + 0x48]
// 00576ec6  dec1                 faddp st(1)
// 00576ec8  d9442418             fld dword ptr [esp + 0x18]
// 00576ecc  dcc8                 fmul st(0), st(0)
// 00576ece  deea                 fsubp st(2)
// 00576ed0  d944241c             fld dword ptr [esp + 0x1c]
// 00576ed4  dcc8                 fmul st(0), st(0)
// 00576ed6  deea                 fsubp st(2)
// 00576ed8  d9ee                 fldz 
// 00576eda  d8d1                 fcom st(1)
// 00576edc  dfe0                 fnstsw ax
// 00576ede  f6c441               test ah, 0x41
// 00576ee1  753a                 jne 0x576f1d
// 00576ee3  d8d2                 fcom st(2)
// 00576ee5  dfe0                 fnstsw ax
// 00576ee7  f6c441               test ah, 0x41
// 00576eea  7a31                 jp 0x576f1d
// 00576eec  ddd9                 fstp st(1)
// 00576eee  b802000000           mov eax, 2
// 00576ef3  ddd8                 fstp st(0)
// 00576ef5  d9fa                 fsqrt 
// 00576ef7  d9442420             fld dword ptr [esp + 0x20]
// 00576efb  d9c0                 fld st(0)
// 00576efd  d8c2                 fadd st(2)
// 00576eff  d90424               fld dword ptr [esp]
// 00576f02  dcc9                 fmul st(1), st(0)
// 00576f04  d9c9                 fxch st(1)
// 00576f06  dd1f                 fstp qword ptr [edi]
// 00576f08  d9442404             fld dword ptr [esp + 4]
// 00576f0c  dee2                 fsubrp st(2)
// 00576f0e  d9c9                 fxch st(1)
// 00576f10  dec2                 faddp st(2)
// 00576f12  dec9                 fmulp st(1)
// 00576f14  d9e0                 fchs 
// 00576f16  dd5f08               fstp qword ptr [edi + 8]
// 00576f19  83c460               add esp, 0x60
// 00576f1c  c3                   ret 
// 00576f1d  d8d1                 fcom st(1)
// 00576f1f  dfe0                 fnstsw ax
// 00576f21  ddd9                 fstp st(1)
// 00576f23  f6c405               test ah, 5
// 00576f26  0f8a34fdffff         jp 0x576c60
// 00576f2c  d8d9                 fcomp st(1)
// 00576f2e  dfe0                 fnstsw ax
// 00576f30  f6c441               test ah, 0x41
// 00576f33  0f8a29fdffff         jp 0x576c62
// 00576f39  d9fa                 fsqrt 
// 00576f3b  b802000000           mov eax, 2
// 00576f40  d9442420             fld dword ptr [esp + 0x20]
// 00576f44  d9c0                 fld st(0)
// 00576f46  d8c2                 fadd st(2)
// 00576f48  d90424               fld dword ptr [esp]
// 00576f4b  dcc9                 fmul st(1), st(0)
// 00576f4d  d9c9                 fxch st(1)
// 00576f4f  d9e0                 fchs 
// 00576f51  dd1f                 fstp qword ptr [edi]
// 00576f53  d9442404             fld dword ptr [esp + 4]
// 00576f57  dee2                 fsubrp st(2)
// 00576f59  d9c9                 fxch st(1)
// 00576f5b  dec2                 faddp st(2)
// 00576f5d  dec9                 fmulp st(1)
// 00576f5f  dd5f08               fstp qword ptr [edi + 8]
// 00576f62  83c460               add esp, 0x60
// 00576f65  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?findRayCapsuleIntersectionAux@G3D@@YAHABVVector3@1@0ABVCapsule@1@QAN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
