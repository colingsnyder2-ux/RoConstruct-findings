// roc 2009-06 00578250  unit: G3D::LineSegment  size: 435 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578250
//
// 00578250  55                   push ebp
// 00578251  8bec                 mov ebp, esp
// 00578253  83e4c0               and esp, 0xffffffc0
// 00578256  83ec40               sub esp, 0x40
// 00578259  d901                 fld dword ptr [ecx]
// 0057825b  d9542428             fst dword ptr [esp + 0x28]
// 0057825f  d9410c               fld dword ptr [ecx + 0xc]
// 00578262  d954242c             fst dword ptr [esp + 0x2c]
// 00578266  d94118               fld dword ptr [ecx + 0x18]
// 00578269  d9542430             fst dword ptr [esp + 0x30]
// 0057826d  d94104               fld dword ptr [ecx + 4]
// 00578270  d9542434             fst dword ptr [esp + 0x34]
// 00578274  d94110               fld dword ptr [ecx + 0x10]
// 00578277  d9542438             fst dword ptr [esp + 0x38]
// 0057827b  d9411c               fld dword ptr [ecx + 0x1c]
// 0057827e  d954243c             fst dword ptr [esp + 0x3c]
// 00578282  d94108               fld dword ptr [ecx + 8]
// 00578285  d95c241c             fstp dword ptr [esp + 0x1c]
// 00578289  d94114               fld dword ptr [ecx + 0x14]
// 0057828c  d95c2420             fstp dword ptr [esp + 0x20]
// 00578290  d94120               fld dword ptr [ecx + 0x20]
// 00578293  d95c2424             fstp dword ptr [esp + 0x24]
// 00578297  d9c0                 fld st(0)
// 00578299  decc                 fmulp st(4)
// 0057829b  d9c1                 fld st(1)
// 0057829d  decd                 fmulp st(5)
// 0057829f  d9cb                 fxch st(3)
// 005782a1  dec4                 faddp st(4)
// 005782a3  d9c1                 fld st(1)
// 005782a5  decd                 fmulp st(5)
// 005782a7  d9cb                 fxch st(3)
// 005782a9  dec4                 faddp st(4)
// 005782ab  d9ee                 fldz 
// 005782ad  d9c0                 fld st(0)
// 005782af  dded                 fucomp st(5)
// 005782b1  dfe0                 fnstsw ax
// 005782b3  f6c444               test ah, 0x44
// 005782b6  0f8b3a010000         jnp 0x5783f6
// 005782bc  ddd9                 fstp st(1)
// 005782be  83ec10               sub esp, 0x10
// 005782c1  ddda                 fstp st(2)
// 005782c3  ddd8                 fstp st(0)
// 005782c5  d9c1                 fld st(1)
// 005782c7  d9e1                 fabs 
// 005782c9  dd5c2420             fstp qword ptr [esp + 0x20]
// 005782cd  dd5c2408             fstp qword ptr [esp + 8]
// 005782d1  dd1c24               fstp qword ptr [esp]
// 005782d4  e857e0ffff           call 0x576330
// 005782d9  dc5c2420             fcomp qword ptr [esp + 0x20]
// 005782dd  83c410               add esp, 0x10
// 005782e0  dfe0                 fnstsw ax
// 005782e2  f6c401               test ah, 1
// 005782e5  0f8512010000         jne 0x5783fd
// 005782eb  d9442434             fld dword ptr [esp + 0x34]
// 005782ef  d9442438             fld dword ptr [esp + 0x38]
// 005782f3  d944243c             fld dword ptr [esp + 0x3c]
// 005782f7  d9ee                 fldz 
// 005782f9  d9cb                 fxch st(3)
// 005782fb  83ec10               sub esp, 0x10
// 005782fe  d9cb                 fxch st(3)
// 00578300  dd5c2408             fstp qword ptr [esp + 8]
// 00578304  d84c2434             fmul dword ptr [esp + 0x34]
// 00578308  d9442430             fld dword ptr [esp + 0x30]
// 0057830c  deca                 fmulp st(2)
// 0057830e  dec1                 faddp st(1)
// 00578310  d944242c             fld dword ptr [esp + 0x2c]
// 00578314  deca                 fmulp st(2)
// 00578316  dec1                 faddp st(1)
// 00578318  dd1c24               fstp qword ptr [esp]
// 0057831b  e860e0ffff           call 0x576380
// 00578320  83c410               add esp, 0x10
// 00578323  84c0                 test al, al
// 00578325  0f84d2000000         je 0x5783fd
// 0057832b  d9ee                 fldz 
// 0057832d  83ec10               sub esp, 0x10
// 00578330  dd5c2408             fstp qword ptr [esp + 8]
// 00578334  d9442434             fld dword ptr [esp + 0x34]
// 00578338  d84c2440             fmul dword ptr [esp + 0x40]
// 0057833c  d9442430             fld dword ptr [esp + 0x30]
// 00578340  d84c243c             fmul dword ptr [esp + 0x3c]
// 00578344  dec1                 faddp st(1)
// 00578346  d944242c             fld dword ptr [esp + 0x2c]
// 0057834a  d84c2438             fmul dword ptr [esp + 0x38]
// 0057834e  dec1                 faddp st(1)
// 00578350  dd1c24               fstp qword ptr [esp]
// 00578353  e828e0ffff           call 0x576380
// 00578358  83c410               add esp, 0x10
// 0057835b  84c0                 test al, al
// 0057835d  0f849a000000         je 0x5783fd
// 00578363  d9e8                 fld1 
// 00578365  83ec10               sub esp, 0x10
// 00578368  dd5c2408             fstp qword ptr [esp + 8]
// 0057836c  d9442440             fld dword ptr [esp + 0x40]
// 00578370  dcc8                 fmul st(0), st(0)
// 00578372  d944243c             fld dword ptr [esp + 0x3c]
// 00578376  dcc8                 fmul st(0), st(0)
// 00578378  dec1                 faddp st(1)
// 0057837a  d9442438             fld dword ptr [esp + 0x38]
// 0057837e  dcc8                 fmul st(0), st(0)
// 00578380  dec1                 faddp st(1)
// 00578382  dd1c24               fstp qword ptr [esp]
// 00578385  e8f6dfffff           call 0x576380
// 0057838a  83c410               add esp, 0x10
// 0057838d  84c0                 test al, al
// 0057838f  746c                 je 0x5783fd
// 00578391  d9e8                 fld1 
// 00578393  83ec10               sub esp, 0x10
// 00578396  dd5c2408             fstp qword ptr [esp + 8]
// 0057839a  d944244c             fld dword ptr [esp + 0x4c]
// 0057839e  dcc8                 fmul st(0), st(0)
// 005783a0  d9442448             fld dword ptr [esp + 0x48]
// 005783a4  dcc8                 fmul st(0), st(0)
// 005783a6  dec1                 faddp st(1)
// 005783a8  d9442444             fld dword ptr [esp + 0x44]
// 005783ac  dcc8                 fmul st(0), st(0)
// 005783ae  dec1                 faddp st(1)
// 005783b0  dd1c24               fstp qword ptr [esp]
// 005783b3  e8c8dfffff           call 0x576380
// 005783b8  83c410               add esp, 0x10
// 005783bb  84c0                 test al, al
// 005783bd  743e                 je 0x5783fd
// 005783bf  d9e8                 fld1 
// 005783c1  83ec10               sub esp, 0x10
// 005783c4  dd5c2408             fstp qword ptr [esp + 8]
// 005783c8  d9442434             fld dword ptr [esp + 0x34]
// 005783cc  dcc8                 fmul st(0), st(0)
// 005783ce  d9442430             fld dword ptr [esp + 0x30]
// 005783d2  dcc8                 fmul st(0), st(0)
// 005783d4  dec1                 faddp st(1)
// 005783d6  d944242c             fld dword ptr [esp + 0x2c]
// 005783da  dcc8                 fmul st(0), st(0)
// 005783dc  dec1                 faddp st(1)
// 005783de  dd1c24               fstp qword ptr [esp]
// 005783e1  e89adfffff           call 0x576380
// 005783e6  83c410               add esp, 0x10
// 005783e9  84c0                 test al, al
// 005783eb  7410                 je 0x5783fd
// 005783ed  b801000000           mov eax, 1
// 005783f2  8be5                 mov esp, ebp
// 005783f4  5d                   pop ebp
// 005783f5  c3                   ret 
// 005783f6  dddc                 fstp st(4)
// 005783f8  e9fefeffff           jmp 0x5782fb
// 005783fd  33c0                 xor eax, eax
// 005783ff  8be5                 mov esp, ebp
// 00578401  5d                   pop ebp
// 00578402  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?isOrthonormal@Matrix3@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
