// roc 2009-12 008304e0  unit: CXTPColorManager  size: 576 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008304e0
//
// 008304e0  83ec38               sub esp, 0x38
// 008304e3  8b542440             mov edx, dword ptr [esp + 0x40]
// 008304e7  56                   push esi
// 008304e8  57                   push edi
// 008304e9  52                   push edx
// 008304ea  8bf1                 mov esi, ecx
// 008304ec  e88feeffff           call 0x82f380
// 008304f1  dd542418             fst qword ptr [esp + 0x18]
// 008304f5  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008304f9  57                   push edi
// 008304fa  e881eeffff           call 0x82f380
// 008304ff  dee1                 fsubrp st(1)
// 00830501  b802000000           mov eax, 2
// 00830506  dd542410             fst qword ptr [esp + 0x10]
// 0083050a  d9e8                 fld1 
// 0083050c  d9c0                 fld st(0)
// 0083050e  a801                 test al, 1
// 00830510  7402                 je 0x830514
// 00830512  d8ca                 fmul st(2)
// 00830514  d1e8                 shr eax, 1
// 00830516  7406                 je 0x83051e
// 00830518  d9c2                 fld st(2)
// 0083051a  decb                 fmulp st(3)
// 0083051c  ebf0                 jmp 0x83050e
// 0083051e  52                   push edx
// 0083051f  ddda                 fstp st(2)
// 00830521  e87aeeffff           call 0x82f3a0
// 00830526  dd542428             fst qword ptr [esp + 0x28]
// 0083052a  57                   push edi
// 0083052b  8bce                 mov ecx, esi
// 0083052d  e86eeeffff           call 0x82f3a0
// 00830532  dee1                 fsubrp st(1)
// 00830534  b802000000           mov eax, 2
// 00830539  dd542420             fst qword ptr [esp + 0x20]
// 0083053d  d9c1                 fld st(1)
// 0083053f  a801                 test al, 1
// 00830541  7402                 je 0x830545
// 00830543  d8c9                 fmul st(1)
// 00830545  d1e8                 shr eax, 1
// 00830547  7406                 je 0x83054f
// 00830549  d9c1                 fld st(1)
// 0083054b  deca                 fmulp st(2)
// 0083054d  ebf0                 jmp 0x83053f
// 0083054f  52                   push edx
// 00830550  ddd9                 fstp st(1)
// 00830552  8bce                 mov ecx, esi
// 00830554  e867eeffff           call 0x82f3c0
// 00830559  dd542438             fst qword ptr [esp + 0x38]
// 0083055d  57                   push edi
// 0083055e  8bce                 mov ecx, esi
// 00830560  e85beeffff           call 0x82f3c0
// 00830565  dee1                 fsubrp st(1)
// 00830567  b802000000           mov eax, 2
// 0083056c  dd542430             fst qword ptr [esp + 0x30]
// 00830570  a801                 test al, 1
// 00830572  7402                 je 0x830576
// 00830574  dcca                 fmul st(2), st(0)
// 00830576  d1e8                 shr eax, 1
// 00830578  7404                 je 0x83057e
// 0083057a  dcc8                 fmul st(0), st(0)
// 0083057c  ebf2                 jmp 0x830570
// 0083057e  ddd8                 fstp st(0)
// 00830580  dec2                 faddp st(2)
// 00830582  dec1                 faddp st(1)
// 00830584  e89d4bfcff           call 0x7f5126
// 00830589  d95c2448             fstp dword ptr [esp + 0x48]
// 0083058d  d9442448             fld dword ptr [esp + 0x48]
// 00830591  dd5c2408             fstp qword ptr [esp + 8]
// 00830595  d944244c             fld dword ptr [esp + 0x4c]
// 00830599  e85247fcff           call 0x7f4cf0
// 0083059e  50                   push eax
// 0083059f  57                   push edi
// 008305a0  6a00                 push 0
// 008305a2  8bce                 mov ecx, esi
// 008305a4  e857f8ffff           call 0x82fe00
// 008305a9  e84247fcff           call 0x7f4cf0
// 008305ae  50                   push eax
// 008305af  8bce                 mov ecx, esi
// 008305b1  e86aeaffff           call 0x82f020
// 008305b6  dc6c2408             fsubr qword ptr [esp + 8]
// 008305ba  d8742448             fdiv dword ptr [esp + 0x48]
// 008305be  d95c2448             fstp dword ptr [esp + 0x48]
// 008305c2  d9442448             fld dword ptr [esp + 0x48]
// 008305c6  dd442410             fld qword ptr [esp + 0x10]
// 008305ca  d8c9                 fmul st(1)
// 008305cc  dc442418             fadd qword ptr [esp + 0x18]
// 008305d0  d95c2448             fstp dword ptr [esp + 0x48]
// 008305d4  dd442420             fld qword ptr [esp + 0x20]
// 008305d8  d8c9                 fmul st(1)
// 008305da  dc442428             fadd qword ptr [esp + 0x28]
// 008305de  d95c2444             fstp dword ptr [esp + 0x44]
// 008305e2  dc4c2430             fmul qword ptr [esp + 0x30]
// 008305e6  dc442438             fadd qword ptr [esp + 0x38]
// 008305ea  d95c244c             fstp dword ptr [esp + 0x4c]
// 008305ee  d9ee                 fldz 
// 008305f0  d9442448             fld dword ptr [esp + 0x48]
// 008305f4  d8d1                 fcom st(1)
// 008305f6  dfe0                 fnstsw ax
// 008305f8  d9ee                 fldz 
// 008305fa  f6c405               test ah, 5
// 008305fd  7a06                 jp 0x830605
// 008305ff  ddd9                 fstp st(1)
// 00830601  d9c0                 fld st(0)
// 00830603  eb1b                 jmp 0x830620
// 00830605  d90530659f00         fld dword ptr [0x9f6530]
// 0083060b  d8da                 fcomp st(2)
// 0083060d  dfe0                 fnstsw ax
// 0083060f  f6c405               test ah, 5
// 00830612  7a0a                 jp 0x83061e
// 00830614  ddd9                 fstp st(1)
// 00830616  dd0548659f00         fld qword ptr [0x9f6548]
// 0083061c  eb02                 jmp 0x830620
// 0083061e  d9c9                 fxch st(1)
// 00830620  d95c2448             fstp dword ptr [esp + 0x48]
// 00830624  d9442444             fld dword ptr [esp + 0x44]
// 00830628  d8d2                 fcom st(2)
// 0083062a  dfe0                 fnstsw ax
// 0083062c  f6c405               test ah, 5
// 0083062f  7a06                 jp 0x830637
// 00830631  ddd8                 fstp st(0)
// 00830633  d9c0                 fld st(0)
// 00830635  eb17                 jmp 0x83064e
// 00830637  d9052c659f00         fld dword ptr [0x9f652c]
// 0083063d  d8d9                 fcomp st(1)
// 0083063f  dfe0                 fnstsw ax
// 00830641  f6c405               test ah, 5
// 00830644  7a08                 jp 0x83064e
// 00830646  ddd8                 fstp st(0)
// 00830648  dd0540659f00         fld qword ptr [0x9f6540]
// 0083064e  d95c2444             fstp dword ptr [esp + 0x44]
// 00830652  d944244c             fld dword ptr [esp + 0x4c]
// 00830656  d8d2                 fcom st(2)
// 00830658  dfe0                 fnstsw ax
// 0083065a  ddda                 fstp st(2)
// 0083065c  f6c405               test ah, 5
// 0083065f  7a04                 jp 0x830665
// 00830661  ddd9                 fstp st(1)
// 00830663  eb19                 jmp 0x83067e
// 00830665  ddd8                 fstp st(0)
// 00830667  d90528659f00         fld dword ptr [0x9f6528]
// 0083066d  d8d9                 fcomp st(1)
// 0083066f  dfe0                 fnstsw ax
// 00830671  f6c405               test ah, 5
// 00830674  7a08                 jp 0x83067e
// 00830676  ddd8                 fstp st(0)
// 00830678  dd0538659f00         fld qword ptr [0x9f6538]
// 0083067e  d9442448             fld dword ptr [esp + 0x48]
// 00830682  dc0d20659f00         fmul qword ptr [0x9f6520]
// 00830688  dd0510329b00         fld qword ptr [0x9b3210]
// 0083068e  dcc1                 fadd st(1), st(0)
// 00830690  d9c9                 fxch st(1)
// 00830692  e85946fcff           call 0x7f4cf0
// 00830697  d9442444             fld dword ptr [esp + 0x44]
// 0083069b  dc0d18659f00         fmul qword ptr [0x9f6518]
// 008306a1  8bf0                 mov esi, eax
// 008306a3  d8c1                 fadd st(1)
// 008306a5  e84646fcff           call 0x7f4cf0
// 008306aa  d9c9                 fxch st(1)
// 008306ac  d95c2448             fstp dword ptr [esp + 0x48]
// 008306b0  8bf8                 mov edi, eax
// 008306b2  d9442448             fld dword ptr [esp + 0x48]
// 008306b6  dc0d10659f00         fmul qword ptr [0x9f6510]
// 008306bc  dec1                 faddp st(1)
// 008306be  e82d46fcff           call 0x7f4cf0
// 008306c3  85f6                 test esi, esi
// 008306c5  7d04                 jge 0x8306cb
// 008306c7  33d2                 xor edx, edx
// 008306c9  eb0f                 jmp 0x8306da
// 008306cb  81feff000000         cmp esi, 0xff
// 008306d1  baff000000           mov edx, 0xff
// 008306d6  7f02                 jg 0x8306da
// 008306d8  8bd6                 mov edx, esi
// 008306da  85ff                 test edi, edi
// 008306dc  7d04                 jge 0x8306e2
// 008306de  33c9                 xor ecx, ecx
// 008306e0  eb0f                 jmp 0x8306f1
// 008306e2  81ffff000000         cmp edi, 0xff
// 008306e8  b9ff000000           mov ecx, 0xff
// 008306ed  7f02                 jg 0x8306f1
// 008306ef  8bcf                 mov ecx, edi
// 008306f1  5f                   pop edi
// 008306f2  5e                   pop esi
// 008306f3  85c0                 test eax, eax
// 008306f5  7d04                 jge 0x8306fb
// 008306f7  33c0                 xor eax, eax
// 008306f9  eb0c                 jmp 0x830707
// 008306fb  3dff000000           cmp eax, 0xff
// 00830700  7e05                 jle 0x830707
// 00830702  b8ff000000           mov eax, 0xff
// 00830707  0fb6c0               movzx eax, al
// 0083070a  c1e008               shl eax, 8
// 0083070d  0fb6c9               movzx ecx, cl
// 00830710  0bc1                 or eax, ecx
// 00830712  0fb6d2               movzx edx, dl
// 00830715  c1e008               shl eax, 8
// 00830718  0bc2                 or eax, edx
// 0083071a  83c438               add esp, 0x38
// 0083071d  c20c00               ret 0xc
// copied from an identical function in another client (function ?AdjustColor@CXTPColorManager@@AAEKKKM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp