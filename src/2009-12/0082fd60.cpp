// roc 2009-12 0082fd60  unit: CXTPColorManager  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082fd60
//
// 0082fd60  56                   push esi
// 0082fd61  8b742408             mov esi, dword ptr [esp + 8]
// 0082fd65  57                   push edi
// 0082fd66  56                   push esi
// 0082fd67  8bd1                 mov edx, ecx
// 0082fd69  e812f6ffff           call 0x82f380
// 0082fd6e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0082fd72  57                   push edi
// 0082fd73  e808f6ffff           call 0x82f380
// 0082fd78  dee9                 fsubp st(1)
// 0082fd7a  d9e8                 fld1 
// 0082fd7c  b802000000           mov eax, 2
// 0082fd81  d9c0                 fld st(0)
// 0082fd83  a801                 test al, 1
// 0082fd85  7402                 je 0x82fd89
// 0082fd87  d8ca                 fmul st(2)
// 0082fd89  d1e8                 shr eax, 1
// 0082fd8b  7406                 je 0x82fd93
// 0082fd8d  d9c2                 fld st(2)
// 0082fd8f  decb                 fmulp st(3)
// 0082fd91  ebf0                 jmp 0x82fd83
// 0082fd93  56                   push esi
// 0082fd94  ddda                 fstp st(2)
// 0082fd96  e805f6ffff           call 0x82f3a0
// 0082fd9b  57                   push edi
// 0082fd9c  8bca                 mov ecx, edx
// 0082fd9e  e8fdf5ffff           call 0x82f3a0
// 0082fda3  dee9                 fsubp st(1)
// 0082fda5  b802000000           mov eax, 2
// 0082fdaa  d9c1                 fld st(1)
// 0082fdac  a801                 test al, 1
// 0082fdae  7402                 je 0x82fdb2
// 0082fdb0  d8c9                 fmul st(1)
// 0082fdb2  d1e8                 shr eax, 1
// 0082fdb4  7406                 je 0x82fdbc
// 0082fdb6  d9c1                 fld st(1)
// 0082fdb8  deca                 fmulp st(2)
// 0082fdba  ebf0                 jmp 0x82fdac
// 0082fdbc  56                   push esi
// 0082fdbd  ddd9                 fstp st(1)
// 0082fdbf  8bca                 mov ecx, edx
// 0082fdc1  e8faf5ffff           call 0x82f3c0
// 0082fdc6  57                   push edi
// 0082fdc7  8bca                 mov ecx, edx
// 0082fdc9  e8f2f5ffff           call 0x82f3c0
// 0082fdce  dee9                 fsubp st(1)
// 0082fdd0  5f                   pop edi
// 0082fdd1  b802000000           mov eax, 2
// 0082fdd6  5e                   pop esi
// 0082fdd7  a801                 test al, 1
// 0082fdd9  7402                 je 0x82fddd
// 0082fddb  dcca                 fmul st(2), st(0)
// 0082fddd  d1e8                 shr eax, 1
// 0082fddf  7404                 je 0x82fde5
// 0082fde1  dcc8                 fmul st(0), st(0)
// 0082fde3  ebf2                 jmp 0x82fdd7
// 0082fde5  ddd8                 fstp st(0)
// 0082fde7  dec2                 faddp st(2)
// 0082fde9  dec1                 faddp st(1)
// 0082fdeb  d95c2404             fstp dword ptr [esp + 4]
// 0082fdef  d9442404             fld dword ptr [esp + 4]
// 0082fdf3  c20800               ret 8
// copied from an identical function in another client (function ?ColorDelta@CXTPColorManager@@AAEMKK@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp