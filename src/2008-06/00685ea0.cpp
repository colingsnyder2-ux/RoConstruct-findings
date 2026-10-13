// roc 2008-06 00685ea0  unit: Ogre::RbxSubEntity  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685ea0
//
// 00685ea0  6aff                 push -1
// 00685ea2  64a100000000         mov eax, dword ptr fs:[0]
// 00685ea8  6882df7d00           push 0x7ddf82
// 00685ead  50                   push eax
// 00685eae  b80c180000           mov eax, 0x180c
// 00685eb3  64892500000000       mov dword ptr fs:[0], esp
// 00685eba  e861b60100           call 0x6a1520
// 00685ebf  55                   push ebp
// 00685ec0  56                   push esi
// 00685ec1  8bb4242c180000       mov esi, dword ptr [esp + 0x182c]
// 00685ec8  57                   push edi
// 00685ec9  8bf9                 mov edi, ecx
// 00685ecb  85f6                 test esi, esi
// 00685ecd  751b                 jne 0x685eea
// 00685ecf  8b8c2428180000       mov ecx, dword ptr [esp + 0x1828]
// 00685ed6  8b01                 mov eax, dword ptr [ecx]
// 00685ed8  8b94242c180000       mov edx, dword ptr [esp + 0x182c]
// 00685edf  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 00685ee5  52                   push edx
// 00685ee6  ffd0                 call eax
// 00685ee8  8bf0                 mov esi, eax
// 00685eea  8bac2440180000       mov ebp, dword ptr [esp + 0x1840]
// 00685ef1  81fdf0000000         cmp ebp, 0xf0
// 00685ef7  7c0e                 jl 0x685f07
// 00685ef9  bdef000000           mov ebp, 0xef
// 00685efe  89ac2440180000       mov dword ptr [esp + 0x1840], ebp
// 00685f05  eb09                 jmp 0x685f10
// 00685f07  83fd02               cmp ebp, 2
// 00685f0a  0f8c1e190000         jl 0x68782e
// 00685f10  83bc244418000001     cmp dword ptr [esp + 0x1844], 1
// 00685f18  0f8c10190000         jl 0x68782e
// 00685f1e  d9ee                 fldz 
// 00685f20  d9842434180000       fld dword ptr [esp + 0x1834]
// 00685f27  d8d1                 fcom st(1)
// 00685f29  dfe0                 fnstsw ax
// 00685f2b  f6c405               test ah, 5
// 00685f2e  0f8bf6180000         jnp 0x68782a
// 00685f34  d9842438180000       fld dword ptr [esp + 0x1838]
// 00685f3b  d8d2                 fcom st(2)
// 00685f3d  dfe0                 fnstsw ax
// 00685f3f  f6c405               test ah, 5
// 00685f42  0f8be0180000         jnp 0x687828
// 00685f48  d984243c180000       fld dword ptr [esp + 0x183c]
// 00685f4f  d8d3                 fcom st(3)
// 00685f51  dfe0                 fnstsw ax
// 00685f53  f6c405               test ah, 5
// 00685f56  0f8bca180000         jnp 0x687826
// 00685f5c  d9c2                 fld st(2)
// 00685f5e  dee2                 fsubrp st(2)
// 00685f60  d9c9                 fxch st(1)
// 00685f62  d9542458             fst dword ptr [esp + 0x58]
// 00685f66  d9c0                 fld st(0)
// 00685f68  d8c9                 fmul st(1)
// 00685f6a  d9c2                 fld st(2)
// 00685f6c  d8cb                 fmul st(3)
// 00685f6e  dec1                 faddp st(1)
// 00685f70  d9fa                 fsqrt 
// 00685f72  dde4                 fucom st(4)
// 00685f74  dfe0                 fnstsw ax
// 00685f76  dddc                 fstp st(4)
// 00685f78  f6c444               test ah, 0x44
// 00685f7b  7a09                 jp 0x685f86
// 00685f7d  dddb                 fstp st(3)
// 00685f7f  ddda                 fstp st(2)
// 00685f81  e9a4180000           jmp 0x68782a
// 00685f86  8b07                 mov eax, dword ptr [edi]
// 00685f88  53                   push ebx
// 00685f89  33db                 xor ebx, ebx
// 00685f8b  33d2                 xor edx, edx
// 00685f8d  85c0                 test eax, eax
// 00685f8f  7503                 jne 0x685f94
// 00685f91  8d5301               lea edx, [ebx + 1]
// 00685f94  83f801               cmp eax, 1
// 00685f97  7513                 jne 0x685fac
// 00685f99  8b470c               mov eax, dword ptr [edi + 0xc]
// 00685f9c  85c0                 test eax, eax
// 00685f9e  7405                 je 0x685fa5
// 00685fa0  bb01000000           mov ebx, 1
// 00685fa5  83f801               cmp eax, 1
// 00685fa8  7502                 jne 0x685fac
// 00685faa  8bd0                 mov edx, eax
// 00685fac  d9e8                 fld1 
// 00685fae  8b0de8468000         mov ecx, dword ptr [0x8046e8]
// 00685fb4  def4                 fdivrp st(4)
// 00685fb6  33c0                 xor eax, eax
// 00685fb8  89442418             mov dword ptr [esp + 0x18], eax
// 00685fbc  d9c3                 fld st(3)
// 00685fbe  d8c9                 fmul st(1)
// 00685fc0  d95c2440             fstp dword ptr [esp + 0x40]
// 00685fc4  d9cb                 fxch st(3)
// 00685fc6  d8c9                 fmul st(1)
// 00685fc8  d90534c48100         fld dword ptr [0x81c434]
// 00685fce  85ed                 test ebp, ebp
// 00685fd0  7e67                 jle 0x686039
// 00685fd2  db842444180000       fild dword ptr [esp + 0x1844]
// 00685fd9  db442418             fild dword ptr [esp + 0x18]
// 00685fdd  d809                 fmul dword ptr [ecx]
// 00685fdf  d8ca                 fmul st(2)
// 00685fe1  d8f1                 fdiv st(1)
// 00685fe3  85d2                 test edx, edx
// 00685fe5  7433                 je 0x68601a
// 00685fe7  837f0800             cmp dword ptr [edi + 8], 0
// 00685feb  d9c0                 fld st(0)
// 00685fed  d9fe                 fsin 
// 00685fef  d8cc                 fmul st(4)
// 00685ff1  750f                 jne 0x686002
// 00685ff3  d99c841c090000       fstp dword ptr [esp + eax*4 + 0x91c]
// 00685ffa  d9c0                 fld st(0)
// 00685ffc  d9ff                 fcos 

void func_00685ea0()
{
}
