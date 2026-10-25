// from server: 100% by EspClaude
// roc 2008-06 004f7d90  unit: RBX::ViewNew::WedgeBuilder  size: 836 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f7d90
//
// 004f7d90  83ec6c               sub esp, 0x6c
// 004f7d93  53                   push ebx
// 004f7d94  55                   push ebp
// 004f7d95  8be9                 mov ebp, ecx
// 004f7d97  56                   push esi
// 004f7d98  57                   push edi
// 004f7d99  8d4504               lea eax, [ebp + 4]
// 004f7d9c  50                   push eax
// 004f7d9d  8d4c2474             lea ecx, [esp + 0x74]
// 004f7da1  51                   push ecx
// 004f7da2  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f7da6  e8f5430f00           call 0x5ec1a0
// 004f7dab  0fbf8424b8000000     movsx eax, word ptr [esp + 0xb8]
// 004f7db3  89442424             mov dword ptr [esp + 0x24], eax
// 004f7db7  0fbf8c24ba000000     movsx ecx, word ptr [esp + 0xba]
// 004f7dbf  db442424             fild dword ptr [esp + 0x24]
// 004f7dc3  d9842498000000       fld dword ptr [esp + 0x98]
// 004f7dca  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f7dce  d8a42490000000       fsub dword ptr [esp + 0x90]
// 004f7dd5  40                   inc eax
// 004f7dd6  41                   inc ecx
// 004f7dd7  0fafc8               imul ecx, eax
// 004f7dda  d8f1                 fdiv st(1)
// 004f7ddc  33db                 xor ebx, ebx
// 004f7dde  8bc1                 mov eax, ecx
// 004f7de0  ba04000000           mov edx, 4
// 004f7de5  894c2430             mov dword ptr [esp + 0x30], ecx
// 004f7de9  d95c243c             fstp dword ptr [esp + 0x3c]
// 004f7ded  f7e2                 mul edx
// 004f7def  db442424             fild dword ptr [esp + 0x24]
// 004f7df3  d984249c000000       fld dword ptr [esp + 0x9c]
// 004f7dfa  d8a42494000000       fsub dword ptr [esp + 0x94]
// 004f7e01  d8f1                 fdiv st(1)
// 004f7e03  0f90c3               seto bl
// 004f7e06  f7db                 neg ebx
// 004f7e08  0bd8                 or ebx, eax
// 004f7e0a  53                   push ebx
// 004f7e0b  d95c2444             fstp dword ptr [esp + 0x44]
// 004f7e0f  d98424b0000000       fld dword ptr [esp + 0xb0]
// 004f7e16  def2                 fdivrp st(2)
// 004f7e18  d9c9                 fxch st(1)
// 004f7e1a  d95c2448             fstp dword ptr [esp + 0x48]
// 004f7e1e  d8bc24b4000000       fdivr dword ptr [esp + 0xb4]
// 004f7e25  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f7e29  e8288b1a00           call 0x6a0956
// 004f7e2e  d9842494000000       fld dword ptr [esp + 0x94]
// 004f7e35  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 004f7e3c  d954241c             fst dword ptr [esp + 0x1c]
// 004f7e40  d98424a8000000       fld dword ptr [esp + 0xa8]
// 004f7e47  8bf0                 mov esi, eax
// 004f7e49  33c0                 xor eax, eax
// 004f7e4b  d95c2420             fstp dword ptr [esp + 0x20]
// 004f7e4f  83c40c               add esp, 0xc
// 004f7e52  33db                 xor ebx, ebx
// 004f7e54  663bc2               cmp ax, dx
// 004f7e57  668b8424b2000000     mov ax, word ptr [esp + 0xb2]
// 004f7e5f  0f8fea010000         jg 0x4f804f
// 004f7e65  d9842498000000       fld dword ptr [esp + 0x98]
// 004f7e6c  d9ee                 fldz 
// 004f7e6e  eb02                 jmp 0x4f7e72
// 004f7e70  d9ca                 fxch st(2)
// 004f7e72  d984248c000000       fld dword ptr [esp + 0x8c]
// 004f7e79  33c9                 xor ecx, ecx
// 004f7e7b  d9542418             fst dword ptr [esp + 0x18]
// 004f7e7f  33ff                 xor edi, edi
// 004f7e81  663bc8               cmp cx, ax
// 004f7e84  d98424a0000000       fld dword ptr [esp + 0xa0]
// 004f7e8b  d954241c             fst dword ptr [esp + 0x1c]
// 004f7e8f  0f8f8e010000         jg 0x4f8023
// 004f7e95  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 004f7e9c  03c0                 add eax, eax
// 004f7e9e  03c0                 add eax, eax
// 004f7ea0  8d6c2430             lea ebp, [esp + 0x30]
// 004f7ea4  8d54042c             lea edx, [esp + eax + 0x2c]
// 004f7ea8  2be8                 sub ebp, eax
// 004f7eaa  89542420             mov dword ptr [esp + 0x20], edx
// 004f7eae  eb15                 jmp 0x4f7ec5
// 004f7eb0  d9442410             fld dword ptr [esp + 0x10]
// 004f7eb4  d9842498000000       fld dword ptr [esp + 0x98]
// 004f7ebb  d9ee                 fldz 
// 004f7ebd  d9ca                 fxch st(2)
// 004f7ebf  d9cc                 fxch st(4)
// 004f7ec1  d9c9                 fxch st(1)
// 004f7ec3  d9cb                 fxch st(3)
// 004f7ec5  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f7ec9  d9cb                 fxch st(3)
// 004f7ecb  d9542454             fst dword ptr [esp + 0x54]
// 004f7ecf  d9ca                 fxch st(2)
// 004f7ed1  d954242c             fst dword ptr [esp + 0x2c]
// 004f7ed5  d9542430             fst dword ptr [esp + 0x30]
// 004f7ed9  d9442414             fld dword ptr [esp + 0x14]
// 004f7edd  d95d00               fstp dword ptr [ebp]
// 004f7ee0  d9cb                 fxch st(3)
// 004f7ee2  d918                 fstp dword ptr [eax]
// 004f7ee4  d9ca                 fxch st(2)
// 004f7ee6  d9542458             fst dword ptr [esp + 0x58]
// 004f7eea  d954245c             fst dword ptr [esp + 0x5c]
// 004f7eee  d9e8                 fld1 
// 004f7ef0  d95c2460             fstp dword ptr [esp + 0x60]
// 004f7ef4  d8d3                 fcom st(3)
// 004f7ef6  dfe0                 fnstsw ax
// 004f7ef8  d9842480000000       fld dword ptr [esp + 0x80]
// 004f7eff  f6c405               test ah, 5
// 004f7f02  7a04                 jp 0x4f7f08
// 004f7f04  dcec                 fsub st(4), st(0)
// 004f7f06  eb04                 jmp 0x4f7f0c
// 004f7f08  d9c0                 fld st(0)
// 004f7f0a  dec5                 faddp st(5)
// 004f7f0c  d9cc                 fxch st(4)
// 004f7f0e  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f7f12  d8da                 fcomp st(2)
// 004f7f14  dfe0                 fnstsw ax
// 004f7f16  f6c405               test ah, 5
// 004f7f19  7a17                 jp 0x4f7f32
// 004f7f1b  d9c9                 fxch st(1)
// 004f7f1d  dee2                 fsubrp st(2)
// 004f7f1f  d9c9                 fxch st(1)
// 004f7f21  d95c2450             fstp dword ptr [esp + 0x50]
// 004f7f25  d8a42484000000       fsub dword ptr [esp + 0x84]
// 004f7f2c  d95c2454             fstp dword ptr [esp + 0x54]
// 004f7f30  eb08                 jmp 0x4f7f3a
// 004f7f32  ddd8                 fstp st(0)
// 004f7f34  dec1                 faddp st(1)
// 004f7f36  d95c2450             fstp dword ptr [esp + 0x50]
// 004f7f3a  e8611c0100           call 0x509ba0
// 004f7f3f  8bc8                 mov ecx, eax
// 004f7f41  d901                 fld dword ptr [ecx]
// 004f7f43  d89c24a4000000       fcomp dword ptr [esp + 0xa4]
// 004f7f4a  dfe0                 fnstsw ax
// 004f7f4c  f6c444               test ah, 0x44
// 004f7f4f  7a21                 jp 0x4f7f72
// 004f7f51  d94104               fld dword ptr [ecx + 4]
// 004f7f54  d89c24a8000000       fcomp dword ptr [esp + 0xa8]
// 004f7f5b  dfe0                 fnstsw ax
// 004f7f5d  f6c444               test ah, 0x44
// 004f7f60  7a10                 jp 0x4f7f72
// 004f7f62  d984249c000000       fld dword ptr [esp + 0x9c]
// 004f7f69  d98424a0000000       fld dword ptr [esp + 0xa0]
// 004f7f70  eb08                 jmp 0x4f7f7a
// 004f7f72  d944242c             fld dword ptr [esp + 0x2c]
// 004f7f76  d9442430             fld dword ptr [esp + 0x30]
// 004f7f7a  d905ac9b8100         fld dword ptr [0x819bac]
// 004f7f80  8d4c2458             lea ecx, [esp + 0x58]
// 004f7f84  dcca                 fmul st(2), st(0)
// 004f7f86  51                   push ecx
// 004f7f87  d9ca                 fxch st(2)
// 004f7f89  8d542468             lea edx, [esp + 0x68]
// 004f7f8d  52                   push edx
// 004f7f8e  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f7f92  dec9                 fmulp st(1)
// 004f7f94  d95c2450             fstp dword ptr [esp + 0x50]
// 004f7f98  e803420f00           call 0x5ec1a0
// 004f7f9d  8d442454             lea eax, [esp + 0x54]
// 004f7fa1  50                   push eax
// 004f7fa2  8d4c247c             lea ecx, [esp + 0x7c]
// 004f7fa6  51                   push ecx
// 004f7fa7  e8f4410f00           call 0x5ec1a0
// 004f7fac  6a01                 push 1
// 004f7fae  8d542458             lea edx, [esp + 0x58]
// 004f7fb2  52                   push edx
// 004f7fb3  8d44247c             lea eax, [esp + 0x7c]
// 004f7fb7  50                   push eax
// 004f7fb8  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004f7fbf  51                   push ecx
// 004f7fc0  e83b000500           call 0x548000
// 004f7fc5  d9442458             fld dword ptr [esp + 0x58]
// 004f7fc9  0fbf9424d2000000     movsx edx, word ptr [esp + 0xd2]
// 004f7fd1  d8442438             fadd dword ptr [esp + 0x38]
// 004f7fd5  42                   inc edx
// 004f7fd6  0fafd3               imul edx, ebx
// 004f7fd9  d9542438             fst dword ptr [esp + 0x38]
// 004f7fdd  d9442460             fld dword ptr [esp + 0x60]
// 004f7fe1  d844243c             fadd dword ptr [esp + 0x3c]
// 004f7fe5  d954243c             fst dword ptr [esp + 0x3c]
// 004f7fe9  03d7                 add edx, edi
// 004f7feb  890496               mov dword ptr [esi + edx*4], eax
// 004f7fee  668b8424d2000000     mov ax, word ptr [esp + 0xd2]
// 004f7ff6  0fbfc8               movsx ecx, ax
// 004f7ff9  47                   inc edi
// 004f7ffa  83c420               add esp, 0x20
// 004f7ffd  3bf9                 cmp edi, ecx
// 004f7fff  0f8eabfeffff         jle 0x4f7eb0
// 004f8005  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 004f800c  ddd8                 fstp st(0)
// 004f800e  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004f8012  ddd8                 fstp st(0)
// 004f8014  d9442410             fld dword ptr [esp + 0x10]
// 004f8018  d9842498000000       fld dword ptr [esp + 0x98]
// 004f801f  d9ee                 fldz 
// 004f8021  eb04                 jmp 0x4f8027
// 004f8023  ddd8                 fstp st(0)
// 004f8025  ddd8                 fstp st(0)
// 004f8027  d9442434             fld dword ptr [esp + 0x34]
// 004f802b  0fbfca               movsx ecx, dx
// 004f802e  dec3                 faddp st(3)
// 004f8030  43                   inc ebx
// 004f8031  3bd9                 cmp ebx, ecx
// 004f8033  d9ca                 fxch st(2)
// 004f8035  d9542410             fst dword ptr [esp + 0x10]
// 004f8039  d944243c             fld dword ptr [esp + 0x3c]
// 004f803d  d8442414             fadd dword ptr [esp + 0x14]
// 004f8041  d95c2414             fstp dword ptr [esp + 0x14]
// 004f8045  0f8e25feffff         jle 0x4f7e70
// 004f804b  ddda                 fstp st(2)
// 004f804d  ddd9                 fstp st(1)
// 004f804f  33c9                 xor ecx, ecx
// 004f8051  ddd8                 fstp st(0)
// 004f8053  33db                 xor ebx, ebx
// 004f8055  663bca               cmp cx, dx
// 004f8058  7d4c                 jge 0x4f80a6
// 004f805a  0fbfc8               movsx ecx, ax
// 004f805d  8d4900               lea ecx, [ecx]
// 004f8060  33ff                 xor edi, edi
// 004f8062  85c9                 test ecx, ecx
// 004f8064  7e38                 jle 0x4f809e
// 004f8066  8d4101               lea eax, [ecx + 1]
// 004f8069  0fafc3               imul eax, ebx
// 004f806c  03c7                 add eax, edi
// 004f806e  03c8                 add ecx, eax
// 004f8070  8b548e08             mov edx, dword ptr [esi + ecx*4 + 8]
// 004f8074  8b4c8e04             mov ecx, dword ptr [esi + ecx*4 + 4]
// 004f8078  52                   push edx
// 004f8079  8b1486               mov edx, dword ptr [esi + eax*4]
// 004f807c  8b448604             mov eax, dword ptr [esi + eax*4 + 4]
// 004f8080  51                   push ecx
// 004f8081  52                   push edx
// 004f8082  50                   push eax
// 004f8083  8bcd                 mov ecx, ebp
// 004f8085  e8268e0000           call 0x500eb0
// 004f808a  0fbf8c24b2000000     movsx ecx, word ptr [esp + 0xb2]
// 004f8092  47                   inc edi
// 004f8093  3bf9                 cmp edi, ecx
// 004f8095  7ccf                 jl 0x4f8066
// 004f8097  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 004f809e  0fbfc2               movsx eax, dx
// 004f80a1  43                   inc ebx
// 004f80a2  3bd8                 cmp ebx, eax
// 004f80a4  7cba                 jl 0x4f8060
// 004f80a6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f80aa  33ff                 xor edi, edi
// 004f80ac  85db                 test ebx, ebx
// 004f80ae  7611                 jbe 0x4f80c1
// 004f80b0  8b0cbe               mov ecx, dword ptr [esi + edi*4]
// 004f80b3  51                   push ecx
// 004f80b4  e887050500           call 0x548640
// 004f80b9  47                   inc edi
// 004f80ba  83c404               add esp, 4
// 004f80bd  3bfb                 cmp edi, ebx
// 004f80bf  72ef                 jb 0x4f80b0
// 004f80c1  56                   push esi
// 004f80c2  e883881a00           call 0x6a094a
// 004f80c7  83c404               add esp, 4
// 004f80ca  5f                   pop edi
// 004f80cb  5e                   pop esi
// 004f80cc  5d                   pop ebp
// 004f80cd  5b                   pop ebx
// 004f80ce  83c46c               add esp, 0x6c
// 004f80d1  c23400               ret 0x34

// from server: 93% by EspClaude
// roc-flags: /O2 /fp:fast /GS- /EHsc /MD
// from server: 98% by coldek
// roc 2008-06 004fac10  unit: RBX::ViewNew::TorsoBuilder  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fac10
//
// 004fac10  55                   push ebp
// 004fac11  8bec                 mov ebp, esp
// 004fac13  83e4f8               and esp, 0xfffffff8
// 004fac16  81ec84000000         sub esp, 0x84
// 004fac1c  53                   push ebx
// 004fac1d  56                   push esi
// 004fac1e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 004fac22  57                   push edi
// 004fac23  83c104               add ecx, 4
// 004fac26  51                   push ecx
// 004fac27  8d442464             lea eax, [esp + 0x64]
// 004fac2b  50                   push eax
// 004fac2c  e86f150f00           call 0x5ec1a0
// 004fac31  d9442468             fld dword ptr [esp + 0x68]
// 004fac35  0fbf4534             movsx eax, word ptr [ebp + 0x34]
// 004fac39  d9e1                 fabs 
// 004fac3b  d95c2474             fstp dword ptr [esp + 0x74]
// 004fac3f  8944242c             mov dword ptr [esp + 0x2c], eax
// 004fac43  d944246c             fld dword ptr [esp + 0x6c]
// 004fac47  0fbf7d36             movsx edi, word ptr [ebp + 0x36]
// 004fac4b  d9e1                 fabs 
// 004fac4d  d95c2478             fstp dword ptr [esp + 0x78]
// 004fac51  d9442470             fld dword ptr [esp + 0x70]
// 004fac55  40                   inc eax
// 004fac56  d9e1                 fabs 
// 004fac58  33c9                 xor ecx, ecx
// 004fac5a  d95c247c             fstp dword ptr [esp + 0x7c]
// 004fac5e  ba04000000           mov edx, 4
// 004fac63  db44242c             fild dword ptr [esp + 0x2c]
// 004fac67  897c242c             mov dword ptr [esp + 0x2c], edi
// 004fac6b  d94514               fld dword ptr [ebp + 0x14]
// 004fac6e  47                   inc edi
// 004fac6f  d8650c               fsub dword ptr [ebp + 0xc]
// 004fac72  0faff8               imul edi, eax
// 004fac75  d8f1                 fdiv st(1)
// 004fac77  8bc7                 mov eax, edi
// 004fac79  d95c2444             fstp dword ptr [esp + 0x44]
// 004fac7d  f7e2                 mul edx
// 004fac7f  db44242c             fild dword ptr [esp + 0x2c]
// 004fac83  d94518               fld dword ptr [ebp + 0x18]
// 004fac86  d86510               fsub dword ptr [ebp + 0x10]
// 004fac89  d8f1                 fdiv st(1)
// 004fac8b  0f90c1               seto cl
// 004fac8e  897c242c             mov dword ptr [esp + 0x2c], edi
// 004fac92  f7d9                 neg ecx
// 004fac94  0bc8                 or ecx, eax
// 004fac96  51                   push ecx
// 004fac97  d95c244c             fstp dword ptr [esp + 0x4c]
// 004fac9b  d94528               fld dword ptr [ebp + 0x28]
// 004fac9e  def2                 fdivrp st(2)
// 004faca0  d9c9                 fxch st(1)
// 004faca2  d95c2450             fstp dword ptr [esp + 0x50]
// 004faca6  d87d2c               fdivr dword ptr [ebp + 0x2c]
// 004faca9  d95c2454             fstp dword ptr [esp + 0x54]
// 004facad  e8a45c1a00           call 0x6a0956
// 004facb2  d9450c               fld dword ptr [ebp + 0xc]
// 004facb5  8b5534               mov edx, dword ptr [ebp + 0x34]
// 004facb8  d95c241c             fstp dword ptr [esp + 0x1c]
// 004facbc  d94520               fld dword ptr [ebp + 0x20]
// 004facbf  8bf0                 mov esi, eax
// 004facc1  33c0                 xor eax, eax
// 004facc3  d95c2420             fstp dword ptr [esp + 0x20]
// 004facc7  83c40c               add esp, 0xc
// 004facca  33db                 xor ebx, ebx
// 004faccc  663bc2               cmp ax, dx
// 004faccf  668b4536             mov ax, word ptr [ebp + 0x36]
// 004facd3  0f8f9c010000         jg 0x4fae75
// 004facd9  d9ee                 fldz 
// 004facdb  d94510               fld dword ptr [ebp + 0x10]
// 004facde  33c9                 xor ecx, ecx
// 004face0  d954241c             fst dword ptr [esp + 0x1c]
// 004face4  33ff                 xor edi, edi
// 004face6  663bc8               cmp cx, ax
// 004face9  d94524               fld dword ptr [ebp + 0x24]
// 004facec  d9542420             fst dword ptr [esp + 0x20]
// 004facf0  0f8f51010000         jg 0x4fae47
// 004facf6  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 004facf9  03c9                 add ecx, ecx
// 004facfb  03c9                 add ecx, ecx
// 004facfd  8d442438             lea eax, [esp + 0x38]
// 004fad01  2bc1                 sub eax, ecx
// 004fad03  8d540c34             lea edx, [esp + ecx + 0x34]
// 004fad07  89442428             mov dword ptr [esp + 0x28], eax
// 004fad0b  8954242c             mov dword ptr [esp + 0x2c], edx
// 004fad0f  eb0a                 jmp 0x4fad1b
// 004fad11  d9ee                 fldz 
// 004fad13  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fad17  d9ca                 fxch st(2)
// 004fad19  d9c9                 fxch st(1)
// 004fad1b  d9442410             fld dword ptr [esp + 0x10]
// 004fad1f  8d4c2418             lea ecx, [esp + 0x18]
// 004fad23  d95c2460             fstp dword ptr [esp + 0x60]
// 004fad27  51                   push ecx
// 004fad28  d9c9                 fxch st(1)
// 004fad2a  8d542470             lea edx, [esp + 0x70]
// 004fad2e  d95c2468             fstp dword ptr [esp + 0x68]
// 004fad32  52                   push edx
// 004fad33  d9451c               fld dword ptr [ebp + 0x1c]
// 004fad36  8d4c245c             lea ecx, [esp + 0x5c]
// 004fad3a  d95c2470             fstp dword ptr [esp + 0x70]
// 004fad3e  8d542468             lea edx, [esp + 0x68]
// 004fad42  d9c9                 fxch st(1)
// 004fad44  66895c2420           mov word ptr [esp + 0x20], bx
// 004fad49  d954243c             fst dword ptr [esp + 0x3c]
// 004fad4d  66897c2422           mov word ptr [esp + 0x22], di
// 004fad52  d9542440             fst dword ptr [esp + 0x40]
// 004fad56  d944241c             fld dword ptr [esp + 0x1c]
// 004fad5a  d918                 fstp dword ptr [eax]
// 004fad5c  8b442434             mov eax, dword ptr [esp + 0x34]
// 004fad60  d9c9                 fxch st(1)
// 004fad62  d918                 fstp dword ptr [eax]
// 004fad64  8d44243c             lea eax, [esp + 0x3c]
// 004fad68  50                   push eax
// 004fad69  d9542460             fst dword ptr [esp + 0x60]
// 004fad6d  51                   push ecx
// 004fad6e  d95c2468             fstp dword ptr [esp + 0x68]
// 004fad72  52                   push edx
// 004fad73  d9e8                 fld1 
// 004fad75  d95c2470             fstp dword ptr [esp + 0x70]
// 004fad79  ff5508               call dword ptr [ebp + 8]
// 004fad7c  83c414               add esp, 0x14
// 004fad7f  e81cee0000           call 0x509ba0
// 004fad84  8bc8                 mov ecx, eax
// 004fad86  d901                 fld dword ptr [ecx]
// 004fad88  d85d28               fcomp dword ptr [ebp + 0x28]
// 004fad8b  dfe0                 fnstsw ax
// 004fad8d  f6c444               test ah, 0x44
// 004fad90  7a1b                 jp 0x4fadad
// 004fad92  d94104               fld dword ptr [ecx + 4]
// 004fad95  d85d2c               fcomp dword ptr [ebp + 0x2c]
// 004fad98  dfe0                 fnstsw ax
// 004fad9a  f6c444               test ah, 0x44
// 004fad9d  7a0e                 jp 0x4fadad
// 004fad9f  d94520               fld dword ptr [ebp + 0x20]
// 004fada2  d95c2434             fstp dword ptr [esp + 0x34]
// 004fada6  d94524               fld dword ptr [ebp + 0x24]
// 004fada9  d95c2438             fstp dword ptr [esp + 0x38]
// 004fadad  d9442434             fld dword ptr [esp + 0x34]
// 004fadb1  8d442454             lea eax, [esp + 0x54]
// 004fadb5  d905ac9b8100         fld dword ptr [0x819bac]
// 004fadbb  50                   push eax
// 004fadbc  dcc9                 fmul st(1), st(0)
// 004fadbe  8d4c247c             lea ecx, [esp + 0x7c]
// 004fadc2  d9c9                 fxch st(1)
// 004fadc4  51                   push ecx
// 004fadc5  d95c2454             fstp dword ptr [esp + 0x54]
// 004fadc9  d84c2440             fmul dword ptr [esp + 0x40]
// 004fadcd  d95c2458             fstp dword ptr [esp + 0x58]
// 004fadd1  e8ca130f00           call 0x5ec1a0
// 004fadd6  8d542468             lea edx, [esp + 0x68]
// 004fadda  52                   push edx
// 004faddb  8d842490000000       lea eax, [esp + 0x90]
// 004fade2  50                   push eax
// 004fade3  e8b8130f00           call 0x5ec1a0
// 004fade8  6a01                 push 1
// 004fadea  8d4c2460             lea ecx, [esp + 0x60]
// 004fadee  51                   push ecx
// 004fadef  8d942490000000       lea edx, [esp + 0x90]
// 004fadf6  52                   push edx
// 004fadf7  8d8424a0000000       lea eax, [esp + 0xa0]
// 004fadfe  50                   push eax
// 004fadff  e8fcd10400           call 0x548000
// 004fae04  d9442460             fld dword ptr [esp + 0x60]
// 004fae08  0fbf4d36             movsx ecx, word ptr [ebp + 0x36]
// 004fae0c  d844243c             fadd dword ptr [esp + 0x3c]
// 004fae10  41                   inc ecx
// 004fae11  0fafcb               imul ecx, ebx
// 004fae14  d954243c             fst dword ptr [esp + 0x3c]
// 004fae18  d9442468             fld dword ptr [esp + 0x68]
// 004fae1c  d8442440             fadd dword ptr [esp + 0x40]
// 004fae20  d9542440             fst dword ptr [esp + 0x40]
// 004fae24  03cf                 add ecx, edi
// 004fae26  89048e               mov dword ptr [esi + ecx*4], eax
// 004fae29  668b4536             mov ax, word ptr [ebp + 0x36]
// 004fae2d  0fbfd0               movsx edx, ax
// 004fae30  47                   inc edi
// 004fae31  83c420               add esp, 0x20
// 004fae34  3bfa                 cmp edi, edx
// 004fae36  0f8ed5feffff         jle 0x4fad11
// 004fae3c  8b5534               mov edx, dword ptr [ebp + 0x34]
// 004fae3f  ddd9                 fstp st(1)
// 004fae41  ddd8                 fstp st(0)
// 004fae43  d9ee                 fldz 
// 004fae45  eb04                 jmp 0x4fae4b
// 004fae47  ddd9                 fstp st(1)
// 004fae49  ddd8                 fstp st(0)
// 004fae4b  d944243c             fld dword ptr [esp + 0x3c]
// 004fae4f  0fbfca               movsx ecx, dx
// 004fae52  d8442410             fadd dword ptr [esp + 0x10]
// 004fae56  43                   inc ebx
// 004fae57  3bd9                 cmp ebx, ecx
// 004fae59  d95c2410             fstp dword ptr [esp + 0x10]
// 004fae5d  d9442444             fld dword ptr [esp + 0x44]
// 004fae61  d8442414             fadd dword ptr [esp + 0x14]
// 004fae65  d95c2414             fstp dword ptr [esp + 0x14]
// 004fae69  0f8e6cfeffff         jle 0x4facdb
// 004fae6f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004fae73  ddd8                 fstp st(0)
// 004fae75  33c9                 xor ecx, ecx
// 004fae77  33db                 xor ebx, ebx
// 004fae79  663bca               cmp cx, dx
// 004fae7c  7d47                 jge 0x4faec5
// 004fae7e  0fbfc8               movsx ecx, ax
// 004fae81  33ff                 xor edi, edi
// 004fae83  85c9                 test ecx, ecx
// 004fae85  7e32                 jle 0x4faeb9
// 004fae87  8d4101               lea eax, [ecx + 1]
// 004fae8a  0fafc3               imul eax, ebx
// 004fae8d  03c7                 add eax, edi
// 004fae8f  03c8                 add ecx, eax
// 004fae91  8b548e08             mov edx, dword ptr [esi + ecx*4 + 8]
// 004fae95  8b4c8e04             mov ecx, dword ptr [esi + ecx*4 + 4]
// 004fae99  52                   push edx
// 004fae9a  8b1486               mov edx, dword ptr [esi + eax*4]
// 004fae9d  8b448604             mov eax, dword ptr [esi + eax*4 + 4]
// 004faea1  51                   push ecx
// 004faea2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004faea6  52                   push edx
// 004faea7  50                   push eax
// 004faea8  e803600000           call 0x500eb0
// 004faead  0fbf4d36             movsx ecx, word ptr [ebp + 0x36]
// 004faeb1  47                   inc edi
// 004faeb2  3bf9                 cmp edi, ecx
// 004faeb4  7cd1                 jl 0x4fae87
// 004faeb6  8b5534               mov edx, dword ptr [ebp + 0x34]
// 004faeb9  0fbfc2               movsx eax, dx
// 004faebc  43                   inc ebx
// 004faebd  3bd8                 cmp ebx, eax
// 004faebf  7cc0                 jl 0x4fae81
// 004faec1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004faec5  33db                 xor ebx, ebx
// 004faec7  85ff                 test edi, edi
// 004faec9  7616                 jbe 0x4faee1
// 004faecb  eb03                 jmp 0x4faed0
// 004faecd  8d4900               lea ecx, [ecx]
// 004faed0  8b0c9e               mov ecx, dword ptr [esi + ebx*4]
// 004faed3  51                   push ecx
// 004faed4  e867d70400           call 0x548640
// 004faed9  43                   inc ebx
// 004faeda  83c404               add esp, 4
// 004faedd  3bdf                 cmp ebx, edi
// 004faedf  72ef                 jb 0x4faed0
// 004faee1  56                   push esi
// 004faee2  e8635a1a00           call 0x6a094a
// 004faee7  83c404               add esp, 4
// 004faeea  5f                   pop edi
// 004faeeb  5e                   pop esi
// 004faeec  5b                   pop ebx
// 004faeed  8be5                 mov esp, ebp
// 004faeef  5d                   pop ebp
// 004faef0  c23000               ret 0x30

extern "C" double __cdecl fabs(double);

struct Vec2 {
    float x, y;
};

struct Vec3 {
    float x, y, z;
};

struct GridSize {
    short x, y;
};

extern void __cdecl copyVector(Vec3*, const Vec3*);
extern const Vec2& __cdecl currentTextureSize();
extern int __cdecl allocateVertex(const Vec3*, const Vec3*, const Vec2*, int);
extern void __cdecl releaseVertex(int);
extern const float textureScale;

struct VertexCallback {
    float inset;
    float bevel;
    void operator()(Vec3* p, Vec3* n, Vec2* t, const Vec3* dims, const GridSize* idx)
    {
        if (p->x > 0)
            p->x -= inset;
        else
            p->x += inset;
        if (p->y > 0) {
            p->y -= inset;
            p->z -= bevel;
        } else {
            p->y += inset;
        }
    }
};

struct TorsoBuilder {
    char prefix[4];
    Vec3 dimensions;

    void build(VertexCallback, Vec2, Vec2, float, Vec2, Vec2, int, GridSize);
    void quad(int, int, int, int);
};

//#pragma float_control(precise, off, push)

void TorsoBuilder::build(
    VertexCallback callback,
    Vec2 minimum,
    Vec2 maximum,
    float depth,
    Vec2 textureOrigin,
    Vec2 textureExtent,
    int axis,
    GridSize divisions)
{
    Vec3 absoluteDimensions;
    {
        Vec3 copiedDimensions;
        copyVector(&copiedDimensions, &dimensions);
        absoluteDimensions.x = (float)fabs(copiedDimensions.x);
        absoluteDimensions.y = (float)fabs(copiedDimensions.y);
        absoluteDimensions.z = (float)fabs(copiedDimensions.z);
    }

    float x = 0, u = 0, y = 0, v = 0;

    Vec2 positionStep;
    positionStep.x = (maximum.x - minimum.x) / divisions.x;
    positionStep.y = (maximum.y - minimum.y) / divisions.y;

    Vec2 textureStep;
    textureStep.x = textureExtent.x / divisions.x;
    textureStep.y = textureExtent.y / divisions.y;

    unsigned count = (divisions.x + 1) * (divisions.y + 1);
    int* vertices = new int[count];

    x = minimum.x;
    u = textureOrigin.x;

    for (int i = 0; i <= divisions.x; ++i) {
        y = minimum.y;
        v = textureOrigin.y;
        GridSize index;
        index.x = (short)i;

        for (int j = 0; j <= divisions.y; ++j) {
            Vec3 position;
            position.x = x;
            position.y = y;
            position.z = depth;

            Vec2 texture;
            texture.x = 0.0f;
            texture.y = 0.0f;
            (&texture.y)[-axis] = u;
            (&texture.x)[axis] = v;

            Vec3 normal;
            normal.x = 0.0f;
            normal.y = 0.0f;
            normal.z = 1.0f;

            index.y = (short)j;

            callback(&position, &normal, &texture, &absoluteDimensions, &index);

            const Vec2& size = currentTextureSize();
            float tx, ty;
            if (textureExtent.x == size.x && textureExtent.y == size.y) {
                tx = textureOrigin.x;
                ty = textureOrigin.y;
            } else {
                tx = texture.x;
                ty = texture.y;
            }

            Vec2 scaledTexture;
            scaledTexture.x = tx * textureScale;
            scaledTexture.y = ty * textureScale;

            Vec3 copiedNormal;
            Vec3 copiedPosition;
            copyVector(&copiedNormal, &normal);
            copyVector(&copiedPosition, &position);

            vertices[i * (divisions.y + 1) + j] =
                allocateVertex(&copiedPosition, &copiedNormal, &scaledTexture, 1);

            y += positionStep.y;
            v += textureStep.y;
        }

        x += positionStep.x;
        u += textureStep.x;
    }

    for (int i = 0; i < divisions.x; ++i) {
        for (int j = 0; j < divisions.y; ++j) {
            int index = (divisions.y + 1) * i + j;
            int next = index + divisions.y;
            quad(vertices[index + 1], vertices[index],
                 vertices[next + 1], vertices[next + 2]);
        }
    }

    for (unsigned i = 0; i < count; ++i)
        releaseVertex(vertices[i]);

    delete[] vertices;
}

//#pragma float_control(pop)
