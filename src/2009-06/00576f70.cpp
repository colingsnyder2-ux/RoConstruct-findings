// roc 2009-06 00576f70  unit: G3D::LineSegment  size: 454 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576f70
//
// 00576f70  83ec14               sub esp, 0x14
// 00576f73  56                   push esi
// 00576f74  8b742420             mov esi, dword ptr [esp + 0x20]
// 00576f78  d94608               fld dword ptr [esi + 8]
// 00576f7b  51                   push ecx
// 00576f7c  d94604               fld dword ptr [esi + 4]
// 00576f7f  8d442410             lea eax, [esp + 0x10]
// 00576f83  d906                 fld dword ptr [esi]
// 00576f85  8bce                 mov ecx, esi
// 00576f87  dcc8                 fmul st(0), st(0)
// 00576f89  d9c1                 fld st(1)
// 00576f8b  deca                 fmulp st(2)
// 00576f8d  dec1                 faddp st(1)
// 00576f8f  d9c1                 fld st(1)
// 00576f91  deca                 fmulp st(2)
// 00576f93  dec1                 faddp st(1)
// 00576f95  d9fa                 fsqrt 
// 00576f97  dd542408             fst qword ptr [esp + 8]
// 00576f9b  d91c24               fstp dword ptr [esp]
// 00576f9e  50                   push eax
// 00576f9f  e85ce7ffff           call 0x575700
// 00576fa4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00576fa8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00576fac  d94104               fld dword ptr [ecx + 4]
// 00576faf  d822                 fsub dword ptr [edx]
// 00576fb1  d94108               fld dword ptr [ecx + 8]
// 00576fb4  d86204               fsub dword ptr [edx + 4]
// 00576fb7  d9410c               fld dword ptr [ecx + 0xc]
// 00576fba  d86208               fsub dword ptr [edx + 8]
// 00576fbd  d9442410             fld dword ptr [esp + 0x10]
// 00576fc1  d8ca                 fmul st(2)
// 00576fc3  d9442414             fld dword ptr [esp + 0x14]
// 00576fc7  d8ca                 fmul st(2)
// 00576fc9  dec1                 faddp st(1)
// 00576fcb  d9c3                 fld st(3)
// 00576fcd  d84c240c             fmul dword ptr [esp + 0xc]
// 00576fd1  dec1                 faddp st(1)
// 00576fd3  d9c1                 fld st(1)
// 00576fd5  deca                 fmulp st(2)
// 00576fd7  d9c2                 fld st(2)
// 00576fd9  decb                 fmulp st(3)
// 00576fdb  d9c9                 fxch st(1)
// 00576fdd  dec2                 faddp st(2)
// 00576fdf  d9c2                 fld st(2)
// 00576fe1  decb                 fmulp st(3)
// 00576fe3  d9c9                 fxch st(1)
// 00576fe5  dec2                 faddp st(2)
// 00576fe7  d94110               fld dword ptr [ecx + 0x10]
// 00576fea  dcc8                 fmul st(0), st(0)
// 00576fec  d9c1                 fld st(1)
// 00576fee  d8ca                 fmul st(2)
// 00576ff0  d9ee                 fldz 
// 00576ff2  d8db                 fcomp st(3)
// 00576ff4  dfe0                 fnstsw ax
// 00576ff6  f6c441               test ah, 0x41
// 00576ff9  755a                 jne 0x577055
// 00576ffb  d9cb                 fxch st(3)
// 00576ffd  d8d1                 fcom st(1)
// 00576fff  dfe0                 fnstsw ax
// 00577001  f6c441               test ah, 0x41
// 00577004  754d                 jne 0x577053
// 00577006  dddb                 fstp st(3)
// 00577008  ddd9                 fstp st(1)
// 0057700a  ddd8                 fstp st(0)
// 0057700c  ddd8                 fstp st(0)
// 0057700e  e84dc0ffff           call 0x573060
// 00577013  d900                 fld dword ptr [eax]
// 00577015  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00577019  d919                 fstp dword ptr [ecx]
// 0057701b  d94004               fld dword ptr [eax + 4]
// 0057701e  d95904               fstp dword ptr [ecx + 4]
// 00577021  d94008               fld dword ptr [eax + 8]
// 00577024  b801000000           mov eax, 1
// 00577029  d95908               fstp dword ptr [ecx + 8]
// 0057702c  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 00577032  7514                 jne 0x577048
// 00577034  8b0d44e58900         mov ecx, dword ptr [0x89e544]
// 0057703a  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 00577040  dd01                 fld qword ptr [ecx]
// 00577042  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00577048  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 0057704e  5e                   pop esi
// 0057704f  83c414               add esp, 0x14
// 00577052  c3                   ret 
// 00577053  d9cb                 fxch st(3)
// 00577055  d8eb                 fsubr st(3)
// 00577057  d8d1                 fcom st(1)
// 00577059  dfe0                 fnstsw ax
// 0057705b  f6c441               test ah, 0x41
// 0057705e  754d                 jne 0x5770ad
// 00577060  ddd8                 fstp st(0)
// 00577062  ddd9                 fstp st(1)
// 00577064  ddd8                 fstp st(0)
// 00577066  ddd8                 fstp st(0)
// 00577068  e8f3bfffff           call 0x573060
// 0057706d  d900                 fld dword ptr [eax]
// 0057706f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00577073  d919                 fstp dword ptr [ecx]
// 00577075  d94004               fld dword ptr [eax + 4]
// 00577078  d95904               fstp dword ptr [ecx + 4]
// 0057707b  d94008               fld dword ptr [eax + 8]
// 0057707e  b801000000           mov eax, 1
// 00577083  d95908               fstp dword ptr [ecx + 8]
// 00577086  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 0057708c  7514                 jne 0x5770a2
// 0057708e  8b1544e58900         mov edx, dword ptr [0x89e544]
// 00577094  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 0057709a  dd02                 fld qword ptr [edx]
// 0057709c  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 005770a2  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 005770a8  5e                   pop esi
// 005770a9  83c414               add esp, 0x14
// 005770ac  c3                   ret 
// 005770ad  d8e9                 fsubr st(1)
// 005770af  d9fa                 fsqrt 
// 005770b1  d9cb                 fxch st(3)
// 005770b3  ded9                 fcompp 
// 005770b5  dfe0                 fnstsw ax
// 005770b7  f6c441               test ah, 0x41
// 005770ba  7504                 jne 0x5770c0
// 005770bc  dee1                 fsubrp st(1)
// 005770be  eb02                 jmp 0x5770c2
// 005770c0  dec1                 faddp st(1)
// 005770c2  dc742404             fdiv qword ptr [esp + 4]
// 005770c6  8b442428             mov eax, dword ptr [esp + 0x28]
// 005770ca  d9c0                 fld st(0)
// 005770cc  d906                 fld dword ptr [esi]
// 005770ce  d8c9                 fmul st(1)
// 005770d0  d9c1                 fld st(1)
// 005770d2  d84e04               fmul dword ptr [esi + 4]
// 005770d5  d9ca                 fxch st(2)
// 005770d7  d84e08               fmul dword ptr [esi + 8]
// 005770da  d902                 fld dword ptr [edx]
// 005770dc  5e                   pop esi
// 005770dd  dec2                 faddp st(2)
// 005770df  d94204               fld dword ptr [edx + 4]
// 005770e2  dec3                 faddp st(3)
// 005770e4  d84208               fadd dword ptr [edx + 8]
// 005770e7  d9c9                 fxch st(1)
// 005770e9  d910                 fst dword ptr [eax]
// 005770eb  d9ca                 fxch st(2)
// 005770ed  d95004               fst dword ptr [eax + 4]
// 005770f0  d9c9                 fxch st(1)
// 005770f2  d95008               fst dword ptr [eax + 8]
// 005770f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005770f9  d9ca                 fxch st(2)
// 005770fb  d86104               fsub dword ptr [ecx + 4]
// 005770fe  d9c9                 fxch st(1)
// 00577100  d86108               fsub dword ptr [ecx + 8]
// 00577103  d9ca                 fxch st(2)
// 00577105  d8610c               fsub dword ptr [ecx + 0xc]
// 00577108  d9c0                 fld st(0)
// 0057710a  d8c9                 fmul st(1)
// 0057710c  d9c3                 fld st(3)
// 0057710e  d8cc                 fmul st(4)
// 00577110  dec1                 faddp st(1)
// 00577112  d9c2                 fld st(2)
// 00577114  d8cb                 fmul st(3)
// 00577116  dec1                 faddp st(1)
// 00577118  d9fa                 fsqrt 
// 0057711a  d9e8                 fld1 
// 0057711c  def1                 fdivrp st(1)
// 0057711e  d9c0                 fld st(0)
// 00577120  decb                 fmulp st(3)
// 00577122  dccb                 fmul st(3), st(0)
// 00577124  dec9                 fmulp st(1)
// 00577126  d9c9                 fxch st(1)
// 00577128  d918                 fstp dword ptr [eax]
// 0057712a  d9c9                 fxch st(1)
// 0057712c  d95804               fstp dword ptr [eax + 4]
// 0057712f  d95808               fstp dword ptr [eax + 8]
// 00577132  83c414               add esp, 0x14
// 00577135  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?collisionTimeForMovingPointFixedSphere@CollisionDetection@G3D@@SAMABVVector3@2@0ABVSphere@2@AAV32@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
