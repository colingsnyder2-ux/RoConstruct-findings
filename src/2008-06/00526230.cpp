// roc 2008-06 00526230  unit: G3D::Line  size: 435 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526230
//
// 00526230  83ec20               sub esp, 0x20
// 00526233  8b442428             mov eax, dword ptr [esp + 0x28]
// 00526237  8b5004               mov edx, dword ptr [eax + 4]
// 0052623a  56                   push esi
// 0052623b  8bf1                 mov esi, ecx
// 0052623d  8b08                 mov ecx, dword ptr [eax]
// 0052623f  d94604               fld dword ptr [esi + 4]
// 00526242  89542408             mov dword ptr [esp + 8], edx
// 00526246  d9442408             fld dword ptr [esp + 8]
// 0052624a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052624d  dcc9                 fmul st(1), st(0)
// 0052624f  d94608               fld dword ptr [esi + 8]
// 00526252  894c2404             mov dword ptr [esp + 4], ecx
// 00526256  8b4808               mov ecx, dword ptr [eax + 8]
// 00526259  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052625d  d944240c             fld dword ptr [esp + 0xc]
// 00526261  dcc9                 fmul st(1), st(0)
// 00526263  89542410             mov dword ptr [esp + 0x10], edx
// 00526267  d9cb                 fxch st(3)
// 00526269  dec1                 faddp st(1)
// 0052626b  d906                 fld dword ptr [esi]
// 0052626d  d9442404             fld dword ptr [esp + 4]
// 00526271  dcc9                 fmul st(1), st(0)
// 00526273  d9ca                 fxch st(2)
// 00526275  dec1                 faddp st(1)
// 00526277  d9442410             fld dword ptr [esp + 0x10]
// 0052627b  d9c0                 fld st(0)
// 0052627d  d84e0c               fmul dword ptr [esi + 0xc]
// 00526280  dec2                 faddp st(2)
// 00526282  d9ee                 fldz 
// 00526284  d8da                 fcomp st(2)
// 00526286  dfe0                 fnstsw ax
// 00526288  f6c441               test ah, 0x41
// 0052628b  755f                 jne 0x5262ec
// 0052628d  ddd9                 fstp st(1)
// 0052628f  d9c9                 fxch st(1)
// 00526291  d9e0                 fchs 
// 00526293  d9542414             fst dword ptr [esp + 0x14]
// 00526297  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052629b  d9ca                 fxch st(2)
// 0052629d  89442404             mov dword ptr [esp + 4], eax
// 005262a1  d9e0                 fchs 
// 005262a3  d9542418             fst dword ptr [esp + 0x18]
// 005262a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005262ab  d9cb                 fxch st(3)
// 005262ad  894c2408             mov dword ptr [esp + 8], ecx
// 005262b1  d9e0                 fchs 
// 005262b3  d954241c             fst dword ptr [esp + 0x1c]
// 005262b7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005262bb  d9c9                 fxch st(1)
// 005262bd  8954240c             mov dword ptr [esp + 0xc], edx
// 005262c1  d9e0                 fchs 
// 005262c3  d9542420             fst dword ptr [esp + 0x20]
// 005262c7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005262cb  d94604               fld dword ptr [esi + 4]
// 005262ce  89442410             mov dword ptr [esp + 0x10], eax
// 005262d2  decc                 fmulp st(4)
// 005262d4  d94608               fld dword ptr [esi + 8]
// 005262d7  deca                 fmulp st(2)
// 005262d9  d9cb                 fxch st(3)
// 005262db  dec1                 faddp st(1)
// 005262dd  d906                 fld dword ptr [esi]
// 005262df  deca                 fmulp st(2)
// 005262e1  dec1                 faddp st(1)
// 005262e3  d9c9                 fxch st(1)
// 005262e5  d84e0c               fmul dword ptr [esi + 0xc]
// 005262e8  dec1                 faddp st(1)
// 005262ea  eb08                 jmp 0x5262f4
// 005262ec  dddb                 fstp st(3)
// 005262ee  dddb                 fstp st(3)
// 005262f0  ddd9                 fstp st(1)
// 005262f2  ddd8                 fstp st(0)
// 005262f4  dc15e0cd8100         fcom qword ptr [0x81cde0]
// 005262fa  dfe0                 fnstsw ax
// 005262fc  f6c441               test ah, 0x41
// 005262ff  7518                 jne 0x526319
// 00526301  d9e8                 fld1 
// 00526303  d8d9                 fcomp st(1)
// 00526305  dfe0                 fnstsw ax
// 00526307  f6c441               test ah, 0x41
// 0052630a  7507                 jne 0x526313
// 0052630c  e8b5ba1700           call 0x6a1dc6
// 00526311  eb0e                 jmp 0x526321
// 00526313  ddd8                 fstp st(0)
// 00526315  d9ee                 fldz 
// 00526317  eb08                 jmp 0x526321
// 00526319  ddd8                 fstp st(0)
// 0052631b  dd0528888200         fld qword ptr [0x828828]
// 00526321  d9442434             fld dword ptr [esp + 0x34]
// 00526325  d8d9                 fcomp st(1)
// 00526327  dfe0                 fnstsw ax
// 00526329  f6c441               test ah, 0x41
// 0052632c  0f8a8d000000         jp 0x5263bf
// 00526332  d9e8                 fld1 
// 00526334  8b442428             mov eax, dword ptr [esp + 0x28]
// 00526338  d9c0                 fld st(0)
// 0052633a  d9442430             fld dword ptr [esp + 0x30]
// 0052633e  dce9                 fsub st(1), st(0)
// 00526340  d9c9                 fxch st(1)
// 00526342  d8cb                 fmul st(3)
// 00526344  d9fe                 fsin 
// 00526346  d9c3                 fld st(3)
// 00526348  deca                 fmulp st(2)
// 0052634a  d9c9                 fxch st(1)
// 0052634c  d9fe                 fsin 
// 0052634e  d9cb                 fxch st(3)
// 00526350  d9fe                 fsin 
// 00526352  d9442404             fld dword ptr [esp + 4]
// 00526356  d8cc                 fmul st(4)
// 00526358  d9442408             fld dword ptr [esp + 8]
// 0052635c  d8cd                 fmul st(5)
// 0052635e  d944240c             fld dword ptr [esp + 0xc]
// 00526362  d8ce                 fmul st(6)
// 00526364  d9442410             fld dword ptr [esp + 0x10]
// 00526368  decf                 fmulp st(7)
// 0052636a  d906                 fld dword ptr [esi]
// 0052636c  d8cd                 fmul st(5)
// 0052636e  d95c2414             fstp dword ptr [esp + 0x14]
// 00526372  d94604               fld dword ptr [esi + 4]
// 00526375  d8cd                 fmul st(5)
// 00526377  d95c2418             fstp dword ptr [esp + 0x18]
// 0052637b  d94608               fld dword ptr [esi + 8]
// 0052637e  d8cd                 fmul st(5)
// 00526380  d9cd                 fxch st(5)
// 00526382  d84e0c               fmul dword ptr [esi + 0xc]
// 00526385  5e                   pop esi
// 00526386  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052638a  d9442410             fld dword ptr [esp + 0x10]
// 0052638e  dec3                 faddp st(3)
// 00526390  d9442414             fld dword ptr [esp + 0x14]
// 00526394  dec2                 faddp st(2)
// 00526396  dec4                 faddp st(4)
// 00526398  d944241c             fld dword ptr [esp + 0x1c]
// 0052639c  dec6                 faddp st(6)
// 0052639e  d9cc                 fxch st(4)
// 005263a0  def2                 fdivrp st(2)
// 005263a2  d8c9                 fmul st(1)
// 005263a4  d918                 fstp dword ptr [eax]
// 005263a6  d9c0                 fld st(0)
// 005263a8  decb                 fmulp st(3)
// 005263aa  d9ca                 fxch st(2)
// 005263ac  d95804               fstp dword ptr [eax + 4]
// 005263af  d8c9                 fmul st(1)
// 005263b1  d95808               fstp dword ptr [eax + 8]
// 005263b4  dec9                 fmulp st(1)
// 005263b6  d9580c               fstp dword ptr [eax + 0xc]
// 005263b9  83c420               add esp, 0x20
// 005263bc  c21000               ret 0x10
// 005263bf  8b542428             mov edx, dword ptr [esp + 0x28]
// 005263c3  ddd8                 fstp st(0)
// 005263c5  d9442430             fld dword ptr [esp + 0x30]
// 005263c9  51                   push ecx
// 005263ca  d91c24               fstp dword ptr [esp]
// 005263cd  8d4c2408             lea ecx, [esp + 8]
// 005263d1  51                   push ecx
// 005263d2  52                   push edx
// 005263d3  8bce                 mov ecx, esi
// 005263d5  e886fdffff           call 0x526160
// 005263da  8bc2                 mov eax, edx
// 005263dc  5e                   pop esi
// 005263dd  83c420               add esp, 0x20
// 005263e0  c21000               ret 0x10
// library g3d-6.09-rbx2008/G3Dcpp\Quat.cpp (function ?slerp@Quat@G3D@@QBE?AV12@ABV12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Quat.cpp
