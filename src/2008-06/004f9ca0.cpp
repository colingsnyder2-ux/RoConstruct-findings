// from server: 100% by colin
// roc 2008-06 004f9ca0  unit: RBX::ViewNew::WedgeBuilder  size: 931 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f9ca0
//
// 004f9ca0  6aff                 push -1
// 004f9ca2  68e8af7c00           push 0x7cafe8
// 004f9ca7  64a100000000         mov eax, dword ptr fs:[0]
// 004f9cad  50                   push eax
// 004f9cae  64892500000000       mov dword ptr fs:[0], esp
// 004f9cb5  83ec6c               sub esp, 0x6c
// 004f9cb8  53                   push ebx
// 004f9cb9  55                   push ebp
// 004f9cba  56                   push esi
// 004f9cbb  8be9                 mov ebp, ecx
// 004f9cbd  57                   push edi
// 004f9cbe  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f9cc2  8d4504               lea eax, [ebp + 4]
// 004f9cc5  50                   push eax
// 004f9cc6  8d4c2474             lea ecx, [esp + 0x74]
// 004f9cca  33db                 xor ebx, ebx
// 004f9ccc  51                   push ecx
// 004f9ccd  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 004f9cd4  e827250f00           call 0x5ec200
// 004f9cd9  0fbf8424e4000000     movsx eax, word ptr [esp + 0xe4]
// 004f9ce1  89442424             mov dword ptr [esp + 0x24], eax
// 004f9ce5  0fbf8c24e6000000     movsx ecx, word ptr [esp + 0xe6]
// 004f9ced  db442424             fild dword ptr [esp + 0x24]
// 004f9cf1  d98424c4000000       fld dword ptr [esp + 0xc4]
// 004f9cf8  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f9cfc  d8a424bc000000       fsub dword ptr [esp + 0xbc]
// 004f9d03  41                   inc ecx
// 004f9d04  40                   inc eax
// 004f9d05  0fafc8               imul ecx, eax
// 004f9d08  d8f1                 fdiv st(1)
// 004f9d0a  33c0                 xor eax, eax
// 004f9d0c  8bc1                 mov eax, ecx
// 004f9d0e  ba04000000           mov edx, 4
// 004f9d13  894c2440             mov dword ptr [esp + 0x40], ecx
// 004f9d17  8bcb                 mov ecx, ebx
// 004f9d19  d95c2438             fstp dword ptr [esp + 0x38]
// 004f9d1d  f7e2                 mul edx
// 004f9d1f  db442424             fild dword ptr [esp + 0x24]
// 004f9d23  d98424c8000000       fld dword ptr [esp + 0xc8]
// 004f9d2a  d8a424c0000000       fsub dword ptr [esp + 0xc0]
// 004f9d31  d8f1                 fdiv st(1)
// 004f9d33  0f90c1               seto cl
// 004f9d36  f7d9                 neg ecx
// 004f9d38  0bc8                 or ecx, eax
// 004f9d3a  51                   push ecx
// 004f9d3b  d95c2430             fstp dword ptr [esp + 0x30]
// 004f9d3f  d98424dc000000       fld dword ptr [esp + 0xdc]
// 004f9d46  def2                 fdivrp st(2)
// 004f9d48  d9c9                 fxch st(1)
// 004f9d4a  d95c2440             fstp dword ptr [esp + 0x40]
// 004f9d4e  d8bc24e0000000       fdivr dword ptr [esp + 0xe0]
// 004f9d55  d95c2434             fstp dword ptr [esp + 0x34]
// 004f9d59  e8f86b1a00           call 0x6a0956
// 004f9d5e  d98424c0000000       fld dword ptr [esp + 0xc0]
// 004f9d65  8b9424e8000000       mov edx, dword ptr [esp + 0xe8]
// 004f9d6c  d954241c             fst dword ptr [esp + 0x1c]
// 004f9d70  d98424d4000000       fld dword ptr [esp + 0xd4]
// 004f9d77  8bf0                 mov esi, eax
// 004f9d79  33c0                 xor eax, eax
// 004f9d7b  d95c2420             fstp dword ptr [esp + 0x20]
// 004f9d7f  83c40c               add esp, 0xc
// 004f9d82  663bc2               cmp ax, dx
// 004f9d85  668b8424de000000     mov ax, word ptr [esp + 0xde]
// 004f9d8d  0f8fc1010000         jg 0x4f9f54
// 004f9d93  d9ee                 fldz 
// 004f9d95  eb02                 jmp 0x4f9d99
// 004f9d97  d9c9                 fxch st(1)
// 004f9d99  d98424b8000000       fld dword ptr [esp + 0xb8]
// 004f9da0  33c9                 xor ecx, ecx
// 004f9da2  d9542418             fst dword ptr [esp + 0x18]
// 004f9da6  33ff                 xor edi, edi
// 004f9da8  663bc8               cmp cx, ax
// 004f9dab  d98424cc000000       fld dword ptr [esp + 0xcc]
// 004f9db2  d954241c             fst dword ptr [esp + 0x1c]
// 004f9db6  0f8f6e010000         jg 0x4f9f2a
// 004f9dbc  8b8424d8000000       mov eax, dword ptr [esp + 0xd8]
// 004f9dc3  03c0                 add eax, eax
// 004f9dc5  03c0                 add eax, eax
// 004f9dc7  8d6c2440             lea ebp, [esp + 0x40]
// 004f9dcb  8d54043c             lea edx, [esp + eax + 0x3c]
// 004f9dcf  2be8                 sub ebp, eax
// 004f9dd1  89542420             mov dword ptr [esp + 0x20], edx
// 004f9dd5  eb0c                 jmp 0x4f9de3
// 004f9dd7  d9ee                 fldz 
// 004f9dd9  d9442410             fld dword ptr [esp + 0x10]
// 004f9ddd  d9cb                 fxch st(3)
// 004f9ddf  d9c9                 fxch st(1)
// 004f9de1  d9ca                 fxch st(2)
// 004f9de3  d98424c4000000       fld dword ptr [esp + 0xc4]
// 004f9dea  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f9dee  d95c2454             fstp dword ptr [esp + 0x54]
// 004f9df2  d9ca                 fxch st(2)
// 004f9df4  d954243c             fst dword ptr [esp + 0x3c]
// 004f9df8  d9542440             fst dword ptr [esp + 0x40]
// 004f9dfc  d9442414             fld dword ptr [esp + 0x14]
// 004f9e00  d95d00               fstp dword ptr [ebp]
// 004f9e03  d9ca                 fxch st(2)
// 004f9e05  d918                 fstp dword ptr [eax]
// 004f9e07  d9c9                 fxch st(1)
// 004f9e09  d9542458             fst dword ptr [esp + 0x58]
// 004f9e0d  d954245c             fst dword ptr [esp + 0x5c]
// 004f9e11  d9e8                 fld1 
// 004f9e13  d95c2460             fstp dword ptr [esp + 0x60]
// 004f9e17  d8d2                 fcom st(2)
// 004f9e19  dfe0                 fnstsw ax
// 004f9e1b  d98424ac000000       fld dword ptr [esp + 0xac]
// 004f9e22  f6c405               test ah, 5
// 004f9e25  7a04                 jp 0x4f9e2b
// 004f9e27  dceb                 fsub st(3), st(0)
// 004f9e29  eb04                 jmp 0x4f9e2f
// 004f9e2b  d9c0                 fld st(0)
// 004f9e2d  dec4                 faddp st(4)
// 004f9e2f  d9cb                 fxch st(3)
// 004f9e31  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f9e35  d8d9                 fcomp st(1)
// 004f9e37  dfe0                 fnstsw ax
// 004f9e39  f6c405               test ah, 5
// 004f9e3c  7a04                 jp 0x4f9e42
// 004f9e3e  dee1                 fsubrp st(1)
// 004f9e40  eb02                 jmp 0x4f9e44
// 004f9e42  dec1                 faddp st(1)
// 004f9e44  d95c2450             fstp dword ptr [esp + 0x50]
// 004f9e48  e853fd0000           call 0x509ba0
// 004f9e4d  8bc8                 mov ecx, eax
// 004f9e4f  d901                 fld dword ptr [ecx]
// 004f9e51  d89c24d0000000       fcomp dword ptr [esp + 0xd0]
// 004f9e58  dfe0                 fnstsw ax
// 004f9e5a  f6c444               test ah, 0x44
// 004f9e5d  7a21                 jp 0x4f9e80
// 004f9e5f  d94104               fld dword ptr [ecx + 4]
// 004f9e62  d89c24d4000000       fcomp dword ptr [esp + 0xd4]
// 004f9e69  dfe0                 fnstsw ax
// 004f9e6b  f6c444               test ah, 0x44
// 004f9e6e  7a10                 jp 0x4f9e80
// 004f9e70  d98424c8000000       fld dword ptr [esp + 0xc8]
// 004f9e77  d98424cc000000       fld dword ptr [esp + 0xcc]
// 004f9e7e  eb08                 jmp 0x4f9e88
// 004f9e80  d944243c             fld dword ptr [esp + 0x3c]
// 004f9e84  d9442440             fld dword ptr [esp + 0x40]
// 004f9e88  d905ac9b8100         fld dword ptr [0x819bac]
// 004f9e8e  8d4c2458             lea ecx, [esp + 0x58]
// 004f9e92  dcca                 fmul st(2), st(0)
// 004f9e94  51                   push ecx
// 004f9e95  dec9                 fmulp st(1)
// 004f9e97  8d542468             lea edx, [esp + 0x68]
// 004f9e9b  d9c9                 fxch st(1)
// 004f9e9d  52                   push edx
// 004f9e9e  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f9ea2  d95c2450             fstp dword ptr [esp + 0x50]
// 004f9ea6  e855230f00           call 0x5ec200
// 004f9eab  8d442454             lea eax, [esp + 0x54]
// 004f9eaf  50                   push eax
// 004f9eb0  8d4c247c             lea ecx, [esp + 0x7c]
// 004f9eb4  51                   push ecx
// 004f9eb5  e846230f00           call 0x5ec200
// 004f9eba  6a01                 push 1
// 004f9ebc  8d542458             lea edx, [esp + 0x58]
// 004f9ec0  52                   push edx
// 004f9ec1  8d44247c             lea eax, [esp + 0x7c]
// 004f9ec5  50                   push eax
// 004f9ec6  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004f9ecd  51                   push ecx
// 004f9ece  e82de10400           call 0x548000
// 004f9ed3  d9442444             fld dword ptr [esp + 0x44]
// 004f9ed7  0fbf9424fe000000     movsx edx, word ptr [esp + 0xfe]
// 004f9edf  d8442438             fadd dword ptr [esp + 0x38]
// 004f9ee3  42                   inc edx
// 004f9ee4  0fafd3               imul edx, ebx
// 004f9ee7  d9542438             fst dword ptr [esp + 0x38]
// 004f9eeb  d9442448             fld dword ptr [esp + 0x48]
// 004f9eef  d844243c             fadd dword ptr [esp + 0x3c]
// 004f9ef3  d954243c             fst dword ptr [esp + 0x3c]
// 004f9ef7  03d7                 add edx, edi
// 004f9ef9  890496               mov dword ptr [esi + edx*4], eax
// 004f9efc  668b8424fe000000     mov ax, word ptr [esp + 0xfe]
// 004f9f04  0fbfc8               movsx ecx, ax
// 004f9f07  47                   inc edi
// 004f9f08  83c420               add esp, 0x20
// 004f9f0b  3bf9                 cmp edi, ecx
// 004f9f0d  0f8ec4feffff         jle 0x4f9dd7
// 004f9f13  8b9424dc000000       mov edx, dword ptr [esp + 0xdc]
// 004f9f1a  ddd8                 fstp st(0)
// 004f9f1c  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004f9f20  ddd8                 fstp st(0)
// 004f9f22  d9442410             fld dword ptr [esp + 0x10]
// 004f9f26  d9ee                 fldz 
// 004f9f28  eb04                 jmp 0x4f9f2e
// 004f9f2a  ddd8                 fstp st(0)
// 004f9f2c  ddd8                 fstp st(0)
// 004f9f2e  d9442430             fld dword ptr [esp + 0x30]
// 004f9f32  0fbfca               movsx ecx, dx
// 004f9f35  dec2                 faddp st(2)
// 004f9f37  43                   inc ebx
// 004f9f38  3bd9                 cmp ebx, ecx
// 004f9f3a  d9c9                 fxch st(1)
// 004f9f3c  d9542410             fst dword ptr [esp + 0x10]
// 004f9f40  d9442434             fld dword ptr [esp + 0x34]
// 004f9f44  d8442414             fadd dword ptr [esp + 0x14]
// 004f9f48  d95c2414             fstp dword ptr [esp + 0x14]
// 004f9f4c  0f8e45feffff         jle 0x4f9d97
// 004f9f52  ddd9                 fstp st(1)
// 004f9f54  33c9                 xor ecx, ecx
// 004f9f56  ddd8                 fstp st(0)
// 004f9f58  33db                 xor ebx, ebx
// 004f9f5a  663bca               cmp cx, dx
// 004f9f5d  7d49                 jge 0x4f9fa8
// 004f9f5f  0fbfc8               movsx ecx, ax
// 004f9f62  33ff                 xor edi, edi
// 004f9f64  85c9                 test ecx, ecx
// 004f9f66  7e38                 jle 0x4f9fa0
// 004f9f68  8d4101               lea eax, [ecx + 1]
// 004f9f6b  0fafc3               imul eax, ebx
// 004f9f6e  03c7                 add eax, edi
// 004f9f70  03c8                 add ecx, eax
// 004f9f72  8b548e08             mov edx, dword ptr [esi + ecx*4 + 8]
// 004f9f76  8b4c8e04             mov ecx, dword ptr [esi + ecx*4 + 4]
// 004f9f7a  52                   push edx
// 004f9f7b  8b1486               mov edx, dword ptr [esi + eax*4]
// 004f9f7e  8b448604             mov eax, dword ptr [esi + eax*4 + 4]
// 004f9f82  51                   push ecx
// 004f9f83  52                   push edx
// 004f9f84  50                   push eax
// 004f9f85  8bcd                 mov ecx, ebp
// 004f9f87  e8246f0000           call 0x500eb0
// 004f9f8c  0fbf8c24de000000     movsx ecx, word ptr [esp + 0xde]
// 004f9f94  47                   inc edi
// 004f9f95  3bf9                 cmp edi, ecx
// 004f9f97  7ccf                 jl 0x4f9f68
// 004f9f99  8b9424dc000000       mov edx, dword ptr [esp + 0xdc]
// 004f9fa0  0fbfc2               movsx eax, dx
// 004f9fa3  43                   inc ebx
// 004f9fa4  3bd8                 cmp ebx, eax
// 004f9fa6  7cba                 jl 0x4f9f62
// 004f9fa8  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004f9fac  33ff                 xor edi, edi
// 004f9fae  85db                 test ebx, ebx
// 004f9fb0  7611                 jbe 0x4f9fc3
// 004f9fb2  8b0cbe               mov ecx, dword ptr [esi + edi*4]
// 004f9fb5  51                   push ecx
// 004f9fb6  e885e60400           call 0x548640
// 004f9fbb  47                   inc edi
// 004f9fbc  83c404               add esp, 4
// 004f9fbf  3bfb                 cmp edi, ebx
// 004f9fc1  72ef                 jb 0x4f9fb2
// 004f9fc3  56                   push esi
// 004f9fc4  e881691a00           call 0x6a094a
// 004f9fc9  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 004f9fd0  83c404               add esp, 4
// 004f9fd3  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 004f9fde  85c0                 test eax, eax
// 004f9fe0  744c                 je 0x4fa02e
// 004f9fe2  83c004               add eax, 4
// 004f9fe5  50                   push eax
// 004f9fe6  ff15ac218000         call dword ptr [0x8021ac]
// 004f9fec  85c0                 test eax, eax
// 004f9fee  753e                 jne 0x4fa02e
// 004f9ff0  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 004f9ff7  8b7108               mov esi, dword ptr [ecx + 8]
// 004f9ffa  85f6                 test esi, esi
// 004f9ffc  7424                 je 0x4fa022
// 004f9ffe  8bff                 mov edi, edi
// 004fa000  8b0e                 mov ecx, dword ptr [esi]
// 004fa002  8b11                 mov edx, dword ptr [ecx]
// 004fa004  8b4204               mov eax, dword ptr [edx + 4]
// 004fa007  ffd0                 call eax
// 004fa009  8bc6                 mov eax, esi
// 004fa00b  8b7604               mov esi, dword ptr [esi + 4]
// 004fa00e  50                   push eax
// 004fa00f  e866661a00           call 0x6a067a
// 004fa014  83c404               add esp, 4
// 004fa017  85f6                 test esi, esi
// 004fa019  75e5                 jne 0x4fa000
// 004fa01b  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 004fa022  85c9                 test ecx, ecx
// 004fa024  7408                 je 0x4fa02e
// 004fa026  8b11                 mov edx, dword ptr [ecx]
// 004fa028  8b02                 mov eax, dword ptr [edx]
// 004fa02a  6a01                 push 1
// 004fa02c  ffd0                 call eax
// 004fa02e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 004fa032  5f                   pop edi
// 004fa033  5e                   pop esi
// 004fa034  5d                   pop ebp
// 004fa035  5b                   pop ebx
// 004fa036  64890d00000000       mov dword ptr fs:[0], ecx
// 004fa03d  83c478               add esp, 0x78
// 004fa040  c25400               ret 0x54

// from server: 100% by EspClaude
// roc 2008-06 004f66d0  unit: RBX::ViewNew::PBBBuilder  size: 931 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f66d0
//
// 004f66d0  6aff                 push -1
// 004f66d2  68e8af7c00           push 0x7cafe8
// 004f66d7  64a100000000         mov eax, dword ptr fs:[0]
// 004f66dd  50                   push eax
// 004f66de  64892500000000       mov dword ptr fs:[0], esp
// 004f66e5  83ec6c               sub esp, 0x6c
// 004f66e8  53                   push ebx
// 004f66e9  55                   push ebp
// 004f66ea  56                   push esi
// 004f66eb  8be9                 mov ebp, ecx
// 004f66ed  57                   push edi
// 004f66ee  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f66f2  8d4504               lea eax, [ebp + 4]
// 004f66f5  50                   push eax
// 004f66f6  8d4c2474             lea ecx, [esp + 0x74]
// 004f66fa  33db                 xor ebx, ebx
// 004f66fc  51                   push ecx
// 004f66fd  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 004f6704  e8c71d1800           call 0x6784d0
// 004f6709  0fbf8424e0000000     movsx eax, word ptr [esp + 0xe0]
// 004f6711  89442424             mov dword ptr [esp + 0x24], eax
// 004f6715  0fbf8c24e2000000     movsx ecx, word ptr [esp + 0xe2]
// 004f671d  db442424             fild dword ptr [esp + 0x24]
// 004f6721  d98424c0000000       fld dword ptr [esp + 0xc0]
// 004f6728  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f672c  d8a424b8000000       fsub dword ptr [esp + 0xb8]
// 004f6733  41                   inc ecx
// 004f6734  40                   inc eax
// 004f6735  0fafc8               imul ecx, eax
// 004f6738  d8f1                 fdiv st(1)
// 004f673a  33c0                 xor eax, eax
// 004f673c  8bc1                 mov eax, ecx
// 004f673e  ba04000000           mov edx, 4
// 004f6743  894c2440             mov dword ptr [esp + 0x40], ecx
// 004f6747  8bcb                 mov ecx, ebx
// 004f6749  d95c2438             fstp dword ptr [esp + 0x38]
// 004f674d  f7e2                 mul edx
// 004f674f  db442424             fild dword ptr [esp + 0x24]
// 004f6753  d98424c4000000       fld dword ptr [esp + 0xc4]
// 004f675a  d8a424bc000000       fsub dword ptr [esp + 0xbc]
// 004f6761  d8f1                 fdiv st(1)
// 004f6763  0f90c1               seto cl
// 004f6766  f7d9                 neg ecx
// 004f6768  0bc8                 or ecx, eax
// 004f676a  51                   push ecx
// 004f676b  d95c2430             fstp dword ptr [esp + 0x30]
// 004f676f  d98424d8000000       fld dword ptr [esp + 0xd8]
// 004f6776  def2                 fdivrp st(2)
// 004f6778  d9c9                 fxch st(1)
// 004f677a  d95c2440             fstp dword ptr [esp + 0x40]
// 004f677e  d8bc24dc000000       fdivr dword ptr [esp + 0xdc]
// 004f6785  d95c2434             fstp dword ptr [esp + 0x34]
// 004f6789  e8c8a11a00           call 0x6a0956
// 004f678e  d98424bc000000       fld dword ptr [esp + 0xbc]
// 004f6795  8b9424e4000000       mov edx, dword ptr [esp + 0xe4]
// 004f679c  d954241c             fst dword ptr [esp + 0x1c]
// 004f67a0  d98424d0000000       fld dword ptr [esp + 0xd0]
// 004f67a7  8bf0                 mov esi, eax
// 004f67a9  33c0                 xor eax, eax
// 004f67ab  d95c2420             fstp dword ptr [esp + 0x20]
// 004f67af  83c40c               add esp, 0xc
// 004f67b2  663bc2               cmp ax, dx
// 004f67b5  668b8424da000000     mov ax, word ptr [esp + 0xda]
// 004f67bd  0f8fc1010000         jg 0x4f6984
// 004f67c3  d9ee                 fldz 
// 004f67c5  eb02                 jmp 0x4f67c9
// 004f67c7  d9c9                 fxch st(1)
// 004f67c9  d98424b4000000       fld dword ptr [esp + 0xb4]
// 004f67d0  33c9                 xor ecx, ecx
// 004f67d2  d9542418             fst dword ptr [esp + 0x18]
// 004f67d6  33ff                 xor edi, edi
// 004f67d8  663bc8               cmp cx, ax
// 004f67db  d98424c8000000       fld dword ptr [esp + 0xc8]
// 004f67e2  d954241c             fst dword ptr [esp + 0x1c]
// 004f67e6  0f8f6e010000         jg 0x4f695a
// 004f67ec  8b8424d4000000       mov eax, dword ptr [esp + 0xd4]
// 004f67f3  03c0                 add eax, eax
// 004f67f5  03c0                 add eax, eax
// 004f67f7  8d6c2440             lea ebp, [esp + 0x40]
// 004f67fb  8d54043c             lea edx, [esp + eax + 0x3c]
// 004f67ff  2be8                 sub ebp, eax
// 004f6801  89542420             mov dword ptr [esp + 0x20], edx
// 004f6805  eb0c                 jmp 0x4f6813
// 004f6807  d9ee                 fldz 
// 004f6809  d9442410             fld dword ptr [esp + 0x10]
// 004f680d  d9cb                 fxch st(3)
// 004f680f  d9c9                 fxch st(1)
// 004f6811  d9ca                 fxch st(2)
// 004f6813  d98424c0000000       fld dword ptr [esp + 0xc0]
// 004f681a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f681e  d95c2454             fstp dword ptr [esp + 0x54]
// 004f6822  d9ca                 fxch st(2)
// 004f6824  d954243c             fst dword ptr [esp + 0x3c]
// 004f6828  d9542440             fst dword ptr [esp + 0x40]
// 004f682c  d9442414             fld dword ptr [esp + 0x14]
// 004f6830  d95d00               fstp dword ptr [ebp]
// 004f6833  d9ca                 fxch st(2)
// 004f6835  d918                 fstp dword ptr [eax]
// 004f6837  d9c9                 fxch st(1)
// 004f6839  d9542458             fst dword ptr [esp + 0x58]
// 004f683d  d954245c             fst dword ptr [esp + 0x5c]
// 004f6841  d9e8                 fld1 
// 004f6843  d95c2460             fstp dword ptr [esp + 0x60]
// 004f6847  d8d2                 fcom st(2)
// 004f6849  dfe0                 fnstsw ax
// 004f684b  d98424ac000000       fld dword ptr [esp + 0xac]
// 004f6852  f6c405               test ah, 5
// 004f6855  7a04                 jp 0x4f685b
// 004f6857  dceb                 fsub st(3), st(0)
// 004f6859  eb04                 jmp 0x4f685f
// 004f685b  d9c0                 fld st(0)
// 004f685d  dec4                 faddp st(4)
// 004f685f  d9cb                 fxch st(3)
// 004f6861  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f6865  d8d9                 fcomp st(1)
// 004f6867  dfe0                 fnstsw ax
// 004f6869  f6c405               test ah, 5
// 004f686c  7a04                 jp 0x4f6872
// 004f686e  dee1                 fsubrp st(1)
// 004f6870  eb02                 jmp 0x4f6874
// 004f6872  dec1                 faddp st(1)
// 004f6874  d95c2450             fstp dword ptr [esp + 0x50]
// 004f6878  e823330100           call 0x509ba0
// 004f687d  8bc8                 mov ecx, eax
// 004f687f  d901                 fld dword ptr [ecx]
// 004f6881  d89c24cc000000       fcomp dword ptr [esp + 0xcc]
// 004f6888  dfe0                 fnstsw ax
// 004f688a  f6c444               test ah, 0x44
// 004f688d  7a21                 jp 0x4f68b0
// 004f688f  d94104               fld dword ptr [ecx + 4]
// 004f6892  d89c24d0000000       fcomp dword ptr [esp + 0xd0]
// 004f6899  dfe0                 fnstsw ax
// 004f689b  f6c444               test ah, 0x44
// 004f689e  7a10                 jp 0x4f68b0
// 004f68a0  d98424c4000000       fld dword ptr [esp + 0xc4]
// 004f68a7  d98424c8000000       fld dword ptr [esp + 0xc8]
// 004f68ae  eb08                 jmp 0x4f68b8
// 004f68b0  d944243c             fld dword ptr [esp + 0x3c]
// 004f68b4  d9442440             fld dword ptr [esp + 0x40]
// 004f68b8  d905ac9b8100         fld dword ptr [0x819bac]
// 004f68be  8d4c2458             lea ecx, [esp + 0x58]
// 004f68c2  dcca                 fmul st(2), st(0)
// 004f68c4  51                   push ecx
// 004f68c5  dec9                 fmulp st(1)
// 004f68c7  8d542468             lea edx, [esp + 0x68]
// 004f68cb  d9c9                 fxch st(1)
// 004f68cd  52                   push edx
// 004f68ce  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f68d2  d95c2450             fstp dword ptr [esp + 0x50]
// 004f68d6  e8f51b1800           call 0x6784d0
// 004f68db  8d442454             lea eax, [esp + 0x54]
// 004f68df  50                   push eax
// 004f68e0  8d4c247c             lea ecx, [esp + 0x7c]
// 004f68e4  51                   push ecx
// 004f68e5  e8e61b1800           call 0x6784d0
// 004f68ea  6a01                 push 1
// 004f68ec  8d542458             lea edx, [esp + 0x58]
// 004f68f0  52                   push edx
// 004f68f1  8d44247c             lea eax, [esp + 0x7c]
// 004f68f5  50                   push eax
// 004f68f6  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004f68fd  51                   push ecx
// 004f68fe  e8fd160500           call 0x548000
// 004f6903  d9442444             fld dword ptr [esp + 0x44]
// 004f6907  0fbf9424fa000000     movsx edx, word ptr [esp + 0xfa]
// 004f690f  d8442438             fadd dword ptr [esp + 0x38]
// 004f6913  42                   inc edx
// 004f6914  0fafd3               imul edx, ebx
// 004f6917  d9542438             fst dword ptr [esp + 0x38]
// 004f691b  d9442448             fld dword ptr [esp + 0x48]
// 004f691f  d844243c             fadd dword ptr [esp + 0x3c]
// 004f6923  d954243c             fst dword ptr [esp + 0x3c]
// 004f6927  03d7                 add edx, edi
// 004f6929  890496               mov dword ptr [esi + edx*4], eax
// 004f692c  668b8424fa000000     mov ax, word ptr [esp + 0xfa]
// 004f6934  0fbfc8               movsx ecx, ax
// 004f6937  47                   inc edi
// 004f6938  83c420               add esp, 0x20
// 004f693b  3bf9                 cmp edi, ecx
// 004f693d  0f8ec4feffff         jle 0x4f6807
// 004f6943  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 004f694a  ddd8                 fstp st(0)
// 004f694c  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004f6950  ddd8                 fstp st(0)
// 004f6952  d9442410             fld dword ptr [esp + 0x10]
// 004f6956  d9ee                 fldz 
// 004f6958  eb04                 jmp 0x4f695e
// 004f695a  ddd8                 fstp st(0)
// 004f695c  ddd8                 fstp st(0)
// 004f695e  d9442430             fld dword ptr [esp + 0x30]
// 004f6962  0fbfca               movsx ecx, dx
// 004f6965  dec2                 faddp st(2)
// 004f6967  43                   inc ebx
// 004f6968  3bd9                 cmp ebx, ecx
// 004f696a  d9c9                 fxch st(1)
// 004f696c  d9542410             fst dword ptr [esp + 0x10]
// 004f6970  d9442434             fld dword ptr [esp + 0x34]
// 004f6974  d8442414             fadd dword ptr [esp + 0x14]
// 004f6978  d95c2414             fstp dword ptr [esp + 0x14]
// 004f697c  0f8e45feffff         jle 0x4f67c7
// 004f6982  ddd9                 fstp st(1)
// 004f6984  33c9                 xor ecx, ecx
// 004f6986  ddd8                 fstp st(0)
// 004f6988  33db                 xor ebx, ebx
// 004f698a  663bca               cmp cx, dx
// 004f698d  7d49                 jge 0x4f69d8
// 004f698f  0fbfc8               movsx ecx, ax
// 004f6992  33ff                 xor edi, edi
// 004f6994  85c9                 test ecx, ecx
// 004f6996  7e38                 jle 0x4f69d0
// 004f6998  8d4101               lea eax, [ecx + 1]
// 004f699b  0fafc3               imul eax, ebx
// 004f699e  03c7                 add eax, edi
// 004f69a0  03c8                 add ecx, eax
// 004f69a2  8b548e08             mov edx, dword ptr [esi + ecx*4 + 8]
// 004f69a6  8b4c8e04             mov ecx, dword ptr [esi + ecx*4 + 4]
// 004f69aa  52                   push edx
// 004f69ab  8b1486               mov edx, dword ptr [esi + eax*4]
// 004f69ae  8b448604             mov eax, dword ptr [esi + eax*4 + 4]
// 004f69b2  51                   push ecx
// 004f69b3  52                   push edx
// 004f69b4  50                   push eax
// 004f69b5  8bcd                 mov ecx, ebp
// 004f69b7  e8f4a40000           call 0x500eb0
// 004f69bc  0fbf8c24da000000     movsx ecx, word ptr [esp + 0xda]
// 004f69c4  47                   inc edi
// 004f69c5  3bf9                 cmp edi, ecx
// 004f69c7  7ccf                 jl 0x4f6998
// 004f69c9  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 004f69d0  0fbfc2               movsx eax, dx
// 004f69d3  43                   inc ebx
// 004f69d4  3bd8                 cmp ebx, eax
// 004f69d6  7cba                 jl 0x4f6992
// 004f69d8  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004f69dc  33ff                 xor edi, edi
// 004f69de  85db                 test ebx, ebx
// 004f69e0  7611                 jbe 0x4f69f3
// 004f69e2  8b0cbe               mov ecx, dword ptr [esi + edi*4]
// 004f69e5  51                   push ecx
// 004f69e6  e8551c0500           call 0x548640
// 004f69eb  47                   inc edi
// 004f69ec  83c404               add esp, 4
// 004f69ef  3bfb                 cmp edi, ebx
// 004f69f1  72ef                 jb 0x4f69e2
// 004f69f3  56                   push esi
// 004f69f4  e8519f1a00           call 0x6a094a
// 004f69f9  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 004f6a00  83c404               add esp, 4
// 004f6a03  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 004f6a0e  85c0                 test eax, eax
// 004f6a10  744c                 je 0x4f6a5e
// 004f6a12  83c004               add eax, 4
// 004f6a15  50                   push eax
// 004f6a16  ff15ac218000         call dword ptr [0x8021ac]
// 004f6a1c  85c0                 test eax, eax
// 004f6a1e  753e                 jne 0x4f6a5e
// 004f6a20  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 004f6a27  8b7108               mov esi, dword ptr [ecx + 8]
// 004f6a2a  85f6                 test esi, esi
// 004f6a2c  7424                 je 0x4f6a52
// 004f6a2e  8bff                 mov edi, edi
// 004f6a30  8b0e                 mov ecx, dword ptr [esi]
// 004f6a32  8b11                 mov edx, dword ptr [ecx]
// 004f6a34  8b4204               mov eax, dword ptr [edx + 4]
// 004f6a37  ffd0                 call eax
// 004f6a39  8bc6                 mov eax, esi
// 004f6a3b  8b7604               mov esi, dword ptr [esi + 4]
// 004f6a3e  50                   push eax
// 004f6a3f  e8369c1a00           call 0x6a067a
// 004f6a44  83c404               add esp, 4
// 004f6a47  85f6                 test esi, esi
// 004f6a49  75e5                 jne 0x4f6a30
// 004f6a4b  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 004f6a52  85c9                 test ecx, ecx
// 004f6a54  7408                 je 0x4f6a5e
// 004f6a56  8b11                 mov edx, dword ptr [ecx]
// 004f6a58  8b02                 mov eax, dword ptr [edx]
// 004f6a5a  6a01                 push 1
// 004f6a5c  ffd0                 call eax
// 004f6a5e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 004f6a62  5f                   pop edi
// 004f6a63  5e                   pop esi
// 004f6a64  5d                   pop ebp
// 004f6a65  5b                   pop ebx
// 004f6a66  64890d00000000       mov dword ptr fs:[0], ecx
// 004f6a6d  83c478               add esp, 0x78
// 004f6a70  c25000               ret 0x50

// from server: 97% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// Complete 931-byte owned-builder grid emitter; RTTI proves ViewNew WedgeBuilder/BevelMesh::Builder/LevelBuilder.
// Native G3D ReferenceCount and the 36-byte by-value builder explain parameter cleanup.
// RTTI tables8270c8/827088/8270a8 prove the native three-level hierarchy.
// Native AtomicInt32 imports and weak-list invalidation account for every cleanup call.
// Remaining local storage/FP differences are retained as partial, not exact.
#include <stddef.h>
#include <math.h>
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
namespace G3D {
struct AtomicInt32 {volatile long value;void increment(){InterlockedIncrement(&value);}unsigned decrement(){return InterlockedDecrement(&value)!=0;}};
struct ReferenceCountedObject;
struct _WeakPtr {virtual ~_WeakPtr(){}protected:friend struct ReferenceCountedObject;virtual void objectCollected()=0;};
struct _WeakPtrLinkedList {_WeakPtr*weakPtr;_WeakPtrLinkedList*next;};
struct ReferenceCountedObject {
 AtomicInt32 ReferenceCountedObject_refCount;_WeakPtrLinkedList*ReferenceCountedObject_weakPointer;
 virtual ~ReferenceCountedObject(){}
 void ReferenceCountedObject_zeroWeakPointers(){_WeakPtrLinkedList*node=ReferenceCountedObject_weakPointer;while(node){node->weakPtr->objectCollected();_WeakPtrLinkedList*tmp=node;node=node->next;delete tmp;}}
};
template<class T>class ReferenceCountedPointer {
 T*m_pointer;
 void zeroPointer(){if(m_pointer){if(m_pointer->ReferenceCountedObject_refCount.decrement()==0){m_pointer->ReferenceCountedObject_zeroWeakPointers();delete m_pointer;}m_pointer=0;}}
 void setPointer(T*x){if(x!=m_pointer){zeroPointer();if(x){m_pointer=x;m_pointer->ReferenceCountedObject_refCount.increment();}}}
public:
 ReferenceCountedPointer():m_pointer(0){}ReferenceCountedPointer(const ReferenceCountedPointer&p):m_pointer(0){setPointer(p.m_pointer);}~ReferenceCountedPointer(){zeroPointer();}
};

struct Vector2 {float x,y;Vector2():x(0),y(0){}Vector2(float a,float b):x(a),y(b){}Vector2(const Vector2&v):x(v.x),y(v.y){}Vector2 operator*(float f)const{return Vector2(x*f,y*f);}Vector2&operator=(const Vector2&v){x=v.x;y=v.y;return *this;}float&operator[](int i){return (&x)[i];}const float&operator[](int i)const{return (&x)[i];}};
struct Vector3 {float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}Vector3 abs()const{return Vector3((float)fabs(x),(float)fabs(y),(float)fabs(z));}};
struct Vector2int16 {short x,y;Vector2int16(short a,short b):x(a),y(b){}};
struct Rect2D {Vector2 min,max;};
}
namespace RBX {namespace ViewNew {
using G3D::Vector2;using G3D::Vector3;using G3D::Rect2D;using G3D::Vector2int16;
class WedgeBuilder;
Vector3 __cdecl mapFace(const Vector3&);
const Vector2&__cdecl zeroVector2();
unsigned __cdecl allocVertex(const Vector3&,const Vector3&,const Vector2&,bool);
void __cdecl freeVertex(unsigned);
struct Level:G3D::ReferenceCountedObject {virtual ~Level();};
class LevelBuilder {
public:
 enum Purpose{Surface,Decal,Shadow};
 virtual void build(Purpose);virtual void buildTop(Purpose)=0;virtual void buildBottom(Purpose)=0;virtual void buildLeft(Purpose)=0;virtual void buildRight(Purpose)=0;virtual void buildFront(Purpose)=0;virtual void buildBack(Purpose)=0;
 const Vector3 halfSize;unsigned surfaceTypes;const G3D::ReferenceCountedPointer<Level>level;Vector2 textureScale;
 void appendQuadFromVertexIndices(unsigned,unsigned,unsigned,unsigned);
 void emit(WedgeBuilder,Rect2D,float,Vector2,Vector2,int,Vector2int16);
};
struct BevelMesh {class Builder:public LevelBuilder {
public:
 const float bevel;virtual void build(Purpose);
 void operator()(Vector3&vertex,Vector3&,Vector2&,const Vector3&,const Vector2int16&){
  if(vertex.x>0)vertex.x-=bevel;else vertex.x+=bevel;
  if(vertex.y>0)vertex.y-=bevel;else vertex.y+=bevel;
 }
};};
class WedgeBuilder:public BevelMesh::Builder {
public:char wedgeField[4];virtual void buildTop(Purpose);virtual void buildBottom(Purpose);virtual void buildLeft(Purpose);virtual void buildRight(Purpose);virtual void buildFront(Purpose);virtual void buildBack(Purpose);
};
void LevelBuilder::emit(WedgeBuilder function,Rect2D rect,float depth,Vector2 origin,Vector2 extent,int axis,Vector2int16 grid){
 Vector3 size=mapFace(halfSize).abs();
 float pointX=0,uvX=0,pointY=0,uvY=0;
 float stepX=(rect.max.x-rect.min.x)/grid.x;float stepY=(rect.max.y-rect.min.y)/grid.y;
 float textureStepX=extent.x/grid.x;float textureStepY=extent.y/grid.y;
 unsigned count=(grid.x+1)*(grid.y+1);
 unsigned*indices=new unsigned[count];
 pointX=rect.min.x;
 uvX=origin.x;
 for(int j=0;j<=grid.x;++j){
  pointY=rect.min.y;uvY=origin.y;
  for(int i=0;i<=grid.y;++i){
   Vector3 vertex(pointX,pointY,depth);
   Vector2 texture;texture[1-axis]=uvX;texture[axis]=uvY;
   Vector3 normal(0,0,1);
   function(vertex,normal,texture,size,Vector2int16(j,i));
   const Vector2&zero=zeroVector2();
   float texU,texV;
   if(extent.x==zero.x&&extent.y==zero.y){texU=origin.x;texV=origin.y;}else{texU=texture.x;texV=texture.y;}
   Vector2 tex=Vector2(texU,texV)*.5f;
   Vector3 mappedNormal=mapFace(normal);Vector3 mappedVertex=mapFace(vertex);
   indices[(grid.y+1)*j+i]=allocVertex(mappedVertex,mappedNormal,tex,true);
   pointY+=stepY;uvY+=textureStepY;
  }
  pointX+=stepX;uvX+=textureStepX;
 }
 for(int j=0;j<grid.x;++j)for(int i=0;i<grid.y;++i){int k=(grid.y+1)*j+i;appendQuadFromVertexIndices(indices[k+1],indices[k],indices[k+grid.y+1],indices[k+grid.y+2]);}
 for(unsigned k=0;k<count;++k)freeVertex(indices[k]);
 delete[]indices;
}
}}
typedef char deformation_extent[sizeof(RBX::ViewNew::WedgeBuilder)==40?1:-1];
typedef char rectangle_extent[sizeof(G3D::Rect2D)==16?1:-1];
typedef char builder_extent[sizeof(RBX::ViewNew::LevelBuilder)==32?1:-1];
typedef char size_offset[offsetof(RBX::ViewNew::LevelBuilder,halfSize)==4?1:-1];

typedef char reference_extent[sizeof(G3D::ReferenceCountedPointer<RBX::ViewNew::Level>)==4?1:-1];
typedef char object_extent[sizeof(G3D::ReferenceCountedObject)==12?1:-1];
typedef char bevel_offset[offsetof(RBX::ViewNew::BevelMesh::Builder,bevel)==0x20?1:-1];

