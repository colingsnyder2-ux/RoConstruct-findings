// from server: 100% by EspClaude
// roc 2008-06 004f51a0  unit: RBX::ViewNew::PBBBuilder  size: 804 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f51a0
//
// 004f51a0  83ec6c               sub esp, 0x6c
// 004f51a3  53                   push ebx
// 004f51a4  55                   push ebp
// 004f51a5  8be9                 mov ebp, ecx
// 004f51a7  56                   push esi
// 004f51a8  57                   push edi
// 004f51a9  8d4504               lea eax, [ebp + 4]
// 004f51ac  50                   push eax
// 004f51ad  8d4c2474             lea ecx, [esp + 0x74]
// 004f51b1  51                   push ecx
// 004f51b2  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f51b6  e805700f00           call 0x5ec1c0
// 004f51bb  0fbf8424b4000000     movsx eax, word ptr [esp + 0xb4]
// 004f51c3  89442424             mov dword ptr [esp + 0x24], eax
// 004f51c7  0fbf8c24b6000000     movsx ecx, word ptr [esp + 0xb6]
// 004f51cf  db442424             fild dword ptr [esp + 0x24]
// 004f51d3  d9842494000000       fld dword ptr [esp + 0x94]
// 004f51da  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f51de  d8a4248c000000       fsub dword ptr [esp + 0x8c]
// 004f51e5  40                   inc eax
// 004f51e6  41                   inc ecx
// 004f51e7  0fafc8               imul ecx, eax
// 004f51ea  d8f1                 fdiv st(1)
// 004f51ec  33db                 xor ebx, ebx
// 004f51ee  8bc1                 mov eax, ecx
// 004f51f0  ba04000000           mov edx, 4
// 004f51f5  894c2430             mov dword ptr [esp + 0x30], ecx
// 004f51f9  d95c243c             fstp dword ptr [esp + 0x3c]
// 004f51fd  f7e2                 mul edx
// 004f51ff  db442424             fild dword ptr [esp + 0x24]
// 004f5203  d9842498000000       fld dword ptr [esp + 0x98]
// 004f520a  d8a42490000000       fsub dword ptr [esp + 0x90]
// 004f5211  d8f1                 fdiv st(1)
// 004f5213  0f90c3               seto bl
// 004f5216  f7db                 neg ebx
// 004f5218  0bd8                 or ebx, eax
// 004f521a  53                   push ebx
// 004f521b  d95c2444             fstp dword ptr [esp + 0x44]
// 004f521f  d98424ac000000       fld dword ptr [esp + 0xac]
// 004f5226  def2                 fdivrp st(2)
// 004f5228  d9c9                 fxch st(1)
// 004f522a  d95c2448             fstp dword ptr [esp + 0x48]
// 004f522e  d8bc24b0000000       fdivr dword ptr [esp + 0xb0]
// 004f5235  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f5239  e818b71a00           call 0x6a0956
// 004f523e  d9842490000000       fld dword ptr [esp + 0x90]
// 004f5245  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 004f524c  d954241c             fst dword ptr [esp + 0x1c]
// 004f5250  d98424a4000000       fld dword ptr [esp + 0xa4]
// 004f5257  8bf0                 mov esi, eax
// 004f5259  33c0                 xor eax, eax
// 004f525b  d95c2420             fstp dword ptr [esp + 0x20]
// 004f525f  83c40c               add esp, 0xc
// 004f5262  33db                 xor ebx, ebx
// 004f5264  663bc2               cmp ax, dx
// 004f5267  668b8424ae000000     mov ax, word ptr [esp + 0xae]
// 004f526f  0f8fc1010000         jg 0x4f5436
// 004f5275  d9ee                 fldz 
// 004f5277  eb02                 jmp 0x4f527b
// 004f5279  d9c9                 fxch st(1)
// 004f527b  d9842488000000       fld dword ptr [esp + 0x88]
// 004f5282  33c9                 xor ecx, ecx
// 004f5284  d9542418             fst dword ptr [esp + 0x18]
// 004f5288  33ff                 xor edi, edi
// 004f528a  663bc8               cmp cx, ax
// 004f528d  d984249c000000       fld dword ptr [esp + 0x9c]
// 004f5294  d954241c             fst dword ptr [esp + 0x1c]
// 004f5298  0f8f6e010000         jg 0x4f540c
// 004f529e  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 004f52a5  03c0                 add eax, eax
// 004f52a7  03c0                 add eax, eax
// 004f52a9  8d6c2430             lea ebp, [esp + 0x30]
// 004f52ad  8d54042c             lea edx, [esp + eax + 0x2c]
// 004f52b1  2be8                 sub ebp, eax
// 004f52b3  89542420             mov dword ptr [esp + 0x20], edx
// 004f52b7  eb0c                 jmp 0x4f52c5
// 004f52b9  d9ee                 fldz 
// 004f52bb  d9442410             fld dword ptr [esp + 0x10]
// 004f52bf  d9cb                 fxch st(3)
// 004f52c1  d9c9                 fxch st(1)
// 004f52c3  d9ca                 fxch st(2)
// 004f52c5  d9842494000000       fld dword ptr [esp + 0x94]
// 004f52cc  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f52d0  d95c2454             fstp dword ptr [esp + 0x54]
// 004f52d4  d9ca                 fxch st(2)
// 004f52d6  d954242c             fst dword ptr [esp + 0x2c]
// 004f52da  d9542430             fst dword ptr [esp + 0x30]
// 004f52de  d9442414             fld dword ptr [esp + 0x14]
// 004f52e2  d95d00               fstp dword ptr [ebp]
// 004f52e5  d9ca                 fxch st(2)
// 004f52e7  d918                 fstp dword ptr [eax]
// 004f52e9  d9c9                 fxch st(1)
// 004f52eb  d9542458             fst dword ptr [esp + 0x58]
// 004f52ef  d954245c             fst dword ptr [esp + 0x5c]
// 004f52f3  d9e8                 fld1 
// 004f52f5  d95c2460             fstp dword ptr [esp + 0x60]
// 004f52f9  d8d2                 fcom st(2)
// 004f52fb  dfe0                 fnstsw ax
// 004f52fd  d9842480000000       fld dword ptr [esp + 0x80]
// 004f5304  d9c0                 fld st(0)
// 004f5306  f6c405               test ah, 5
// 004f5309  7a06                 jp 0x4f5311
// 004f530b  d8c1                 fadd st(1)
// 004f530d  deec                 fsubp st(4)
// 004f530f  eb02                 jmp 0x4f5313
// 004f5311  dec4                 faddp st(4)
// 004f5313  d9cb                 fxch st(3)
// 004f5315  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f5319  d8d9                 fcomp st(1)
// 004f531b  dfe0                 fnstsw ax
// 004f531d  f6c405               test ah, 5
// 004f5320  7b02                 jnp 0x4f5324
// 004f5322  d9e0                 fchs 
// 004f5324  dee1                 fsubrp st(1)
// 004f5326  d95c2450             fstp dword ptr [esp + 0x50]
// 004f532a  e871480100           call 0x509ba0
// 004f532f  8bc8                 mov ecx, eax
// 004f5331  d901                 fld dword ptr [ecx]
// 004f5333  d89c24a0000000       fcomp dword ptr [esp + 0xa0]
// 004f533a  dfe0                 fnstsw ax
// 004f533c  f6c444               test ah, 0x44
// 004f533f  7a21                 jp 0x4f5362
// 004f5341  d94104               fld dword ptr [ecx + 4]
// 004f5344  d89c24a4000000       fcomp dword ptr [esp + 0xa4]
// 004f534b  dfe0                 fnstsw ax
// 004f534d  f6c444               test ah, 0x44
// 004f5350  7a10                 jp 0x4f5362
// 004f5352  d9842498000000       fld dword ptr [esp + 0x98]
// 004f5359  d984249c000000       fld dword ptr [esp + 0x9c]
// 004f5360  eb08                 jmp 0x4f536a
// 004f5362  d944242c             fld dword ptr [esp + 0x2c]
// 004f5366  d9442430             fld dword ptr [esp + 0x30]
// 004f536a  d905ac9b8100         fld dword ptr [0x819bac]
// 004f5370  8d4c2458             lea ecx, [esp + 0x58]
// 004f5374  dcca                 fmul st(2), st(0)
// 004f5376  51                   push ecx
// 004f5377  d9ca                 fxch st(2)
// 004f5379  8d542468             lea edx, [esp + 0x68]
// 004f537d  52                   push edx
// 004f537e  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f5382  dec9                 fmulp st(1)
// 004f5384  d95c2450             fstp dword ptr [esp + 0x50]
// 004f5388  e8336e0f00           call 0x5ec1c0
// 004f538d  8d442454             lea eax, [esp + 0x54]
// 004f5391  50                   push eax
// 004f5392  8d4c247c             lea ecx, [esp + 0x7c]
// 004f5396  51                   push ecx
// 004f5397  e8246e0f00           call 0x5ec1c0
// 004f539c  6a01                 push 1
// 004f539e  8d542458             lea edx, [esp + 0x58]
// 004f53a2  52                   push edx
// 004f53a3  8d44247c             lea eax, [esp + 0x7c]
// 004f53a7  50                   push eax
// 004f53a8  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004f53af  51                   push ecx
// 004f53b0  e84b2c0500           call 0x548000
// 004f53b5  d9442458             fld dword ptr [esp + 0x58]
// 004f53b9  0fbf9424ce000000     movsx edx, word ptr [esp + 0xce]
// 004f53c1  d8442438             fadd dword ptr [esp + 0x38]
// 004f53c5  42                   inc edx
// 004f53c6  0fafd3               imul edx, ebx
// 004f53c9  d9542438             fst dword ptr [esp + 0x38]
// 004f53cd  d9442460             fld dword ptr [esp + 0x60]
// 004f53d1  d844243c             fadd dword ptr [esp + 0x3c]
// 004f53d5  d954243c             fst dword ptr [esp + 0x3c]
// 004f53d9  03d7                 add edx, edi
// 004f53db  890496               mov dword ptr [esi + edx*4], eax
// 004f53de  668b8424ce000000     mov ax, word ptr [esp + 0xce]
// 004f53e6  0fbfc8               movsx ecx, ax
// 004f53e9  47                   inc edi
// 004f53ea  83c420               add esp, 0x20
// 004f53ed  3bf9                 cmp edi, ecx
// 004f53ef  0f8ec4feffff         jle 0x4f52b9
// 004f53f5  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004f53fc  ddd8                 fstp st(0)
// 004f53fe  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004f5402  ddd8                 fstp st(0)
// 004f5404  d9442410             fld dword ptr [esp + 0x10]
// 004f5408  d9ee                 fldz 
// 004f540a  eb04                 jmp 0x4f5410
// 004f540c  ddd8                 fstp st(0)
// 004f540e  ddd8                 fstp st(0)
// 004f5410  d9442434             fld dword ptr [esp + 0x34]
// 004f5414  0fbfca               movsx ecx, dx
// 004f5417  dec2                 faddp st(2)
// 004f5419  43                   inc ebx
// 004f541a  3bd9                 cmp ebx, ecx
// 004f541c  d9c9                 fxch st(1)
// 004f541e  d9542410             fst dword ptr [esp + 0x10]
// 004f5422  d944243c             fld dword ptr [esp + 0x3c]
// 004f5426  d8442414             fadd dword ptr [esp + 0x14]
// 004f542a  d95c2414             fstp dword ptr [esp + 0x14]
// 004f542e  0f8e45feffff         jle 0x4f5279
// 004f5434  ddd9                 fstp st(1)
// 004f5436  33c9                 xor ecx, ecx
// 004f5438  ddd8                 fstp st(0)
// 004f543a  33db                 xor ebx, ebx
// 004f543c  663bca               cmp cx, dx
// 004f543f  7d4f                 jge 0x4f5490
// 004f5441  0fbfc8               movsx ecx, ax
// 004f5444  33ff                 xor edi, edi
// 004f5446  85c9                 test ecx, ecx
// 004f5448  7e3e                 jle 0x4f5488
// 004f544a  8d9b00000000         lea ebx, [ebx]
// 004f5450  8d4101               lea eax, [ecx + 1]
// 004f5453  0fafc3               imul eax, ebx
// 004f5456  03c7                 add eax, edi
// 004f5458  03c8                 add ecx, eax
// 004f545a  8b548e08             mov edx, dword ptr [esi + ecx*4 + 8]
// 004f545e  8b4c8e04             mov ecx, dword ptr [esi + ecx*4 + 4]
// 004f5462  52                   push edx
// 004f5463  8b1486               mov edx, dword ptr [esi + eax*4]
// 004f5466  8b448604             mov eax, dword ptr [esi + eax*4 + 4]
// 004f546a  51                   push ecx
// 004f546b  52                   push edx
// 004f546c  50                   push eax
// 004f546d  8bcd                 mov ecx, ebp
// 004f546f  e83cba0000           call 0x500eb0
// 004f5474  0fbf8c24ae000000     movsx ecx, word ptr [esp + 0xae]
// 004f547c  47                   inc edi
// 004f547d  3bf9                 cmp edi, ecx
// 004f547f  7ccf                 jl 0x4f5450
// 004f5481  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004f5488  0fbfc2               movsx eax, dx
// 004f548b  43                   inc ebx
// 004f548c  3bd8                 cmp ebx, eax
// 004f548e  7cb4                 jl 0x4f5444
// 004f5490  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f5494  33ff                 xor edi, edi
// 004f5496  85db                 test ebx, ebx
// 004f5498  7617                 jbe 0x4f54b1
// 004f549a  8d9b00000000         lea ebx, [ebx]
// 004f54a0  8b0cbe               mov ecx, dword ptr [esi + edi*4]
// 004f54a3  51                   push ecx
// 004f54a4  e897310500           call 0x548640
// 004f54a9  47                   inc edi
// 004f54aa  83c404               add esp, 4
// 004f54ad  3bfb                 cmp edi, ebx
// 004f54af  72ef                 jb 0x4f54a0
// 004f54b1  56                   push esi
// 004f54b2  e893b41a00           call 0x6a094a
// 004f54b7  83c404               add esp, 4
// 004f54ba  5f                   pop edi
// 004f54bb  5e                   pop esi
// 004f54bc  5d                   pop ebp
// 004f54bd  5b                   pop ebx
// 004f54be  83c46c               add esp, 0x6c
// 004f54c1  c23000               ret 0x30

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
    void operator()(Vec3* p, Vec3* n, Vec2* t, const Vec3* dims, const GridSize* idx)
    {
        if (p->x > 0)
            p->x -= inset + inset;
        else
            p->x += inset;
        if (p->y > 0)
            p->y = p->y - inset;
        else
            p->y = -p->y - inset;
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
