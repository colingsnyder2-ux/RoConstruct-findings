// from server: 100% by colin
// roc 2008-06 00528050  unit: G3D::Line  size: 995 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00528050
//
// 00528050  d9ee                 fldz 
// 00528052  83ec28               sub esp, 0x28
// 00528055  dd442430             fld qword ptr [esp + 0x30]
// 00528059  d8d1                 fcom st(1)
// 0052805b  dfe0                 fnstsw ax
// 0052805d  dd442438             fld qword ptr [esp + 0x38]
// 00528061  f6c405               test ah, 5
// 00528064  0f8b73030000         jnp 0x5283dd
// 0052806a  dd05f0658200         fld qword ptr [0x8265f0]
// 00528070  d8d2                 fcom st(2)
// 00528072  dfe0                 fnstsw ax
// 00528074  f6c405               test ah, 5
// 00528077  0f8b64030000         jnp 0x5283e1
// 0052807d  d9c9                 fxch st(1)
// 0052807f  d8d3                 fcom st(3)
// 00528081  dfe0                 fnstsw ax
// 00528083  f6c405               test ah, 5
// 00528086  0f8b59030000         jnp 0x5283e5
// 0052808c  d8d1                 fcom st(1)
// 0052808e  dfe0                 fnstsw ax
// 00528090  f6c441               test ah, 0x41
// 00528093  0f844c030000         je 0x5283e5
// 00528099  d9c2                 fld st(2)
// 0052809b  d8c1                 fadd st(1)
// 0052809d  d9e8                 fld1 
// 0052809f  d8d1                 fcom st(1)
// 005280a1  dfe0                 fnstsw ax
// 005280a3  ddd9                 fstp st(1)
// 005280a5  f6c405               test ah, 5
// 005280a8  0f8b3f030000         jnp 0x5283ed
// 005280ae  dd05708f8200         fld qword ptr [0x828f70]
// 005280b4  8d4c2408             lea ecx, [esp + 8]
// 005280b8  d97c2430             fnstcw word ptr [esp + 0x30]
// 005280bc  0fb7442430           movzx eax, word ptr [esp + 0x30]
// 005280c1  dccc                 fmul st(4), st(0)
// 005280c3  dd0538e78100         fld qword ptr [0x81e738]
// 005280c9  0d000c0000           or eax, 0xc00
// 005280ce  890424               mov dword ptr [esp], eax
// 005280d1  dcc5                 fadd st(5), st(0)
// 005280d3  d92c24               fldcw word ptr [esp]
// 005280d6  d9cd                 fxch st(5)
// 005280d8  df3c24               fistp qword ptr [esp]
// 005280db  8b0424               mov eax, dword ptr [esp]
// 005280de  50                   push eax
// 005280df  51                   push ecx
// 005280e0  d96c2438             fldcw word ptr [esp + 0x38]
// 005280e4  e807e3ffff           call 0x5263f0
// 005280e9  d97c2438             fnstcw word ptr [esp + 0x38]
// 005280ed  dcca                 fmul st(2), st(0)
// 005280ef  0fb7442438           movzx eax, word ptr [esp + 0x38]
// 005280f4  d9ca                 fxch st(2)
// 005280f6  0d000c0000           or eax, 0xc00
// 005280fb  89442408             mov dword ptr [esp + 8], eax
// 005280ff  8d442414             lea eax, [esp + 0x14]
// 00528103  d8c4                 fadd st(4)
// 00528105  d96c2408             fldcw word ptr [esp + 8]
// 00528109  df7c2408             fistp qword ptr [esp + 8]
// 0052810d  8b542408             mov edx, dword ptr [esp + 8]
// 00528111  52                   push edx
// 00528112  50                   push eax
// 00528113  d96c2440             fldcw word ptr [esp + 0x40]
// 00528117  e8d4e2ffff           call 0x5263f0
// 0052811c  83c410               add esp, 0x10
// 0052811f  dd442440             fld qword ptr [esp + 0x40]
// 00528123  d8d5                 fcom st(5)
// 00528125  dfe0                 fnstsw ax
// 00528127  f6c405               test ah, 5
// 0052812a  0f8b7d020000         jnp 0x5283ad
// 00528130  d8d3                 fcom st(3)
// 00528132  dfe0                 fnstsw ax
// 00528134  f6c441               test ah, 0x41
// 00528137  0f8470020000         je 0x5283ad
// 0052813d  dd442448             fld qword ptr [esp + 0x48]
// 00528141  d8d6                 fcom st(6)
// 00528143  dfe0                 fnstsw ax
// 00528145  f6c405               test ah, 5
// 00528148  0f8b6b020000         jnp 0x5283b9
// 0052814e  d8d4                 fcom st(4)
// 00528150  dfe0                 fnstsw ax
// 00528152  f6c441               test ah, 0x41
// 00528155  0f845e020000         je 0x5283b9
// 0052815b  d9c1                 fld st(1)
// 0052815d  d8c1                 fadd st(1)
// 0052815f  d8db                 fcomp st(3)
// 00528161  dfe0                 fnstsw ax
// 00528163  f6c441               test ah, 0x41
// 00528166  0f844d020000         je 0x5283b9
// 0052816c  d97c2430             fnstcw word ptr [esp + 0x30]
// 00528170  8d542410             lea edx, [esp + 0x10]
// 00528174  0fb7442430           movzx eax, word ptr [esp + 0x30]
// 00528179  d9c9                 fxch st(1)
// 0052817b  d8cb                 fmul st(3)
// 0052817d  0d000c0000           or eax, 0xc00
// 00528182  890424               mov dword ptr [esp], eax
// 00528185  d8c5                 fadd st(5)
// 00528187  d92c24               fldcw word ptr [esp]
// 0052818a  df3c24               fistp qword ptr [esp]
// 0052818d  8b0c24               mov ecx, dword ptr [esp]
// 00528190  51                   push ecx
// 00528191  52                   push edx
// 00528192  d96c2438             fldcw word ptr [esp + 0x38]
// 00528196  e855e2ffff           call 0x5263f0
// 0052819b  8d4c241c             lea ecx, [esp + 0x1c]
// 0052819f  d97c2438             fnstcw word ptr [esp + 0x38]
// 005281a3  d8ca                 fmul st(2)
// 005281a5  0fb7442438           movzx eax, word ptr [esp + 0x38]
// 005281aa  0d000c0000           or eax, 0xc00
// 005281af  89442408             mov dword ptr [esp + 8], eax
// 005281b3  d8c4                 fadd st(4)
// 005281b5  d96c2408             fldcw word ptr [esp + 8]
// 005281b9  df7c2408             fistp qword ptr [esp + 8]
// 005281bd  8b442408             mov eax, dword ptr [esp + 8]
// 005281c1  50                   push eax
// 005281c2  51                   push ecx
// 005281c3  d96c2440             fldcw word ptr [esp + 0x40]
// 005281c7  e824e2ffff           call 0x5263f0
// 005281cc  83c410               add esp, 0x10
// 005281cf  dd442450             fld qword ptr [esp + 0x50]
// 005281d3  d8d5                 fcom st(5)
// 005281d5  dfe0                 fnstsw ax
// 005281d7  f6c405               test ah, 5
// 005281da  0f8b9d010000         jnp 0x52837d
// 005281e0  d8d3                 fcom st(3)
// 005281e2  dfe0                 fnstsw ax
// 005281e4  f6c441               test ah, 0x41
// 005281e7  0f8490010000         je 0x52837d
// 005281ed  dd442458             fld qword ptr [esp + 0x58]
// 005281f1  d8d6                 fcom st(6)
// 005281f3  dfe0                 fnstsw ax
// 005281f5  f6c405               test ah, 5
// 005281f8  0f8b8b010000         jnp 0x528389
// 005281fe  d8d4                 fcom st(4)
// 00528200  dfe0                 fnstsw ax
// 00528202  f6c441               test ah, 0x41
// 00528205  0f847e010000         je 0x528389
// 0052820b  d9c1                 fld st(1)
// 0052820d  d8c1                 fadd st(1)
// 0052820f  d8db                 fcomp st(3)
// 00528211  dfe0                 fnstsw ax
// 00528213  f6c441               test ah, 0x41
// 00528216  0f846d010000         je 0x528389
// 0052821c  d97c2430             fnstcw word ptr [esp + 0x30]
// 00528220  0fb7442430           movzx eax, word ptr [esp + 0x30]
// 00528225  d9c9                 fxch st(1)
// 00528227  d8cb                 fmul st(3)
// 00528229  0d000c0000           or eax, 0xc00
// 0052822e  890424               mov dword ptr [esp], eax
// 00528231  8d442418             lea eax, [esp + 0x18]
// 00528235  d8c5                 fadd st(5)
// 00528237  d92c24               fldcw word ptr [esp]
// 0052823a  df3c24               fistp qword ptr [esp]
// 0052823d  8b1424               mov edx, dword ptr [esp]
// 00528240  52                   push edx
// 00528241  50                   push eax
// 00528242  d96c2438             fldcw word ptr [esp + 0x38]
// 00528246  e8a5e1ffff           call 0x5263f0
// 0052824b  8d542424             lea edx, [esp + 0x24]
// 0052824f  d97c2438             fnstcw word ptr [esp + 0x38]
// 00528253  d8ca                 fmul st(2)
// 00528255  0fb7442438           movzx eax, word ptr [esp + 0x38]
// 0052825a  0d000c0000           or eax, 0xc00
// 0052825f  89442408             mov dword ptr [esp + 8], eax
// 00528263  d8c4                 fadd st(4)
// 00528265  d96c2408             fldcw word ptr [esp + 8]
// 00528269  df7c2408             fistp qword ptr [esp + 8]
// 0052826d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00528271  51                   push ecx
// 00528272  52                   push edx
// 00528273  d96c2440             fldcw word ptr [esp + 0x40]
// 00528277  e874e1ffff           call 0x5263f0
// 0052827c  83c410               add esp, 0x10
// 0052827f  dd442460             fld qword ptr [esp + 0x60]
// 00528283  d8d5                 fcom st(5)
// 00528285  dfe0                 fnstsw ax
// 00528287  f6c405               test ah, 5
// 0052828a  0f8bbd000000         jnp 0x52834d
// 00528290  d8d3                 fcom st(3)
// 00528292  dfe0                 fnstsw ax
// 00528294  f6c441               test ah, 0x41
// 00528297  0f84b0000000         je 0x52834d
// 0052829d  dd442468             fld qword ptr [esp + 0x68]
// 005282a1  d8d6                 fcom st(6)
// 005282a3  dfe0                 fnstsw ax
// 005282a5  ddde                 fstp st(6)
// 005282a7  f6c405               test ah, 5
// 005282aa  0f8b9d000000         jnp 0x52834d
// 005282b0  d9cb                 fxch st(3)
// 005282b2  d8dd                 fcomp st(5)
// 005282b4  dfe0                 fnstsw ax
// 005282b6  f6c405               test ah, 5
// 005282b9  0f8b98000000         jnp 0x528357
// 005282bf  d9c2                 fld st(2)
// 005282c1  d8c5                 fadd st(5)
// 005282c3  ded9                 fcompp 
// 005282c5  dfe0                 fnstsw ax
// 005282c7  f6c441               test ah, 0x41
// 005282ca  0f848f000000         je 0x52835f
// 005282d0  d97c2430             fnstcw word ptr [esp + 0x30]
// 005282d4  8d4c2420             lea ecx, [esp + 0x20]
// 005282d8  0fb7442430           movzx eax, word ptr [esp + 0x30]
// 005282dd  dcc9                 fmul st(1), st(0)
// 005282df  0d000c0000           or eax, 0xc00
// 005282e4  d9c9                 fxch st(1)
// 005282e6  890424               mov dword ptr [esp], eax
// 005282e9  d8c2                 fadd st(2)
// 005282eb  d92c24               fldcw word ptr [esp]
// 005282ee  df3c24               fistp qword ptr [esp]
// 005282f1  8b0424               mov eax, dword ptr [esp]
// 005282f4  50                   push eax
// 005282f5  51                   push ecx
// 005282f6  d96c2438             fldcw word ptr [esp + 0x38]
// 005282fa  e8f1e0ffff           call 0x5263f0
// 005282ff  d97c2438             fnstcw word ptr [esp + 0x38]
// 00528303  deca                 fmulp st(2)
// 00528305  0fb7442438           movzx eax, word ptr [esp + 0x38]
// 0052830a  0d000c0000           or eax, 0xc00
// 0052830f  89442408             mov dword ptr [esp + 8], eax
// 00528313  8d44242c             lea eax, [esp + 0x2c]
// 00528317  dec1                 faddp st(1)
// 00528319  d96c2408             fldcw word ptr [esp + 8]
// 0052831d  df7c2408             fistp qword ptr [esp + 8]
// 00528321  8b542408             mov edx, dword ptr [esp + 8]
// 00528325  52                   push edx
// 00528326  50                   push eax
// 00528327  d96c2440             fldcw word ptr [esp + 0x40]
// 0052832b  e8c0e0ffff           call 0x5263f0
// 00528330  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00528334  6a20                 push 0x20
// 00528336  8d4c241c             lea ecx, [esp + 0x1c]
// 0052833a  51                   push ecx
// 0052833b  686c948200           push 0x82946c
// 00528340  52                   push edx
// 00528341  e86af2ffff           call 0x5275b0
// 00528346  83c420               add esp, 0x20
// 00528349  83c428               add esp, 0x28
// 0052834c  c3                   ret 
// 0052834d  ddda                 fstp st(2)
// 0052834f  dddb                 fstp st(3)
// 00528351  dddb                 fstp st(3)
// 00528353  ddda                 fstp st(2)
// 00528355  eb0c                 jmp 0x528363
// 00528357  ddd9                 fstp st(1)
// 00528359  ddda                 fstp st(2)
// 0052835b  ddda                 fstp st(2)
// 0052835d  eb04                 jmp 0x528363
// 0052835f  ddd8                 fstp st(0)
// 00528361  ddd9                 fstp st(1)
// 00528363  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00528367  ddd9                 fstp st(1)
// 00528369  6898b88200           push 0x82b898
// 0052836e  ddd8                 fstp st(0)
// 00528370  50                   push eax
// 00528371  e8da160000           call 0x529a50
// 00528376  83c408               add esp, 8
// 00528379  83c428               add esp, 0x28
// 0052837c  c3                   ret 
// 0052837d  ddda                 fstp st(2)
// 0052837f  dddb                 fstp st(3)
// 00528381  dddb                 fstp st(3)
// 00528383  ddda                 fstp st(2)
// 00528385  ddd9                 fstp st(1)
// 00528387  eb0c                 jmp 0x528395
// 00528389  dddb                 fstp st(3)
// 0052838b  dddc                 fstp st(4)
// 0052838d  dddc                 fstp st(4)
// 0052838f  ddda                 fstp st(2)
// 00528391  ddd9                 fstp st(1)
// 00528393  ddd8                 fstp st(0)
// 00528395  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00528399  ddd8                 fstp st(0)
// 0052839b  6874b88200           push 0x82b874
// 005283a0  51                   push ecx
// 005283a1  e8aa160000           call 0x529a50
// 005283a6  83c408               add esp, 8
// 005283a9  83c428               add esp, 0x28
// 005283ac  c3                   ret 
// 005283ad  ddda                 fstp st(2)
// 005283af  dddb                 fstp st(3)
// 005283b1  dddb                 fstp st(3)
// 005283b3  ddda                 fstp st(2)
// 005283b5  ddd9                 fstp st(1)
// 005283b7  eb0c                 jmp 0x5283c5
// 005283b9  dddb                 fstp st(3)
// 005283bb  dddc                 fstp st(4)
// 005283bd  dddc                 fstp st(4)
// 005283bf  ddda                 fstp st(2)
// 005283c1  ddd9                 fstp st(1)
// 005283c3  ddd8                 fstp st(0)
// 005283c5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005283c9  ddd8                 fstp st(0)
// 005283cb  6850b88200           push 0x82b850
// 005283d0  52                   push edx
// 005283d1  e87a160000           call 0x529a50
// 005283d6  83c408               add esp, 8
// 005283d9  83c428               add esp, 0x28
// 005283dc  c3                   ret 
// 005283dd  ddd9                 fstp st(1)
// 005283df  eb12                 jmp 0x5283f3
// 005283e1  ddda                 fstp st(2)
// 005283e3  eb0c                 jmp 0x5283f1
// 005283e5  ddda                 fstp st(2)
// 005283e7  ddda                 fstp st(2)
// 005283e9  ddd8                 fstp st(0)
// 005283eb  eb08                 jmp 0x5283f5
// 005283ed  dddb                 fstp st(3)
// 005283ef  dddb                 fstp st(3)
// 005283f1  ddda                 fstp st(2)
// 005283f3  ddd9                 fstp st(1)
// 005283f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005283f9  ddd8                 fstp st(0)
// 005283fb  682cb88200           push 0x82b82c
// 00528400  50                   push eax
// 00528401  e84a160000           call 0x529a50
// 00528406  dd442440             fld qword ptr [esp + 0x40]
// 0052840a  dd1c24               fstp qword ptr [esp]
// 0052840d  83ec08               sub esp, 8
// 00528410  dd442440             fld qword ptr [esp + 0x40]
// 00528414  dd1c24               fstp qword ptr [esp]
// 00528417  6814b88200           push 0x82b814
// 0052841c  ff1558278000         call dword ptr [0x802758]
// 00528422  83c040               add eax, 0x40
// 00528425  50                   push eax
// 00528426  ff151c288000         call dword ptr [0x80281c]
// 0052842c  83c418               add esp, 0x18
// 0052842f  83c428               add esp, 0x28
// 00528432  c3                   ret 
// library g3d-6.09-png-dll/pngwutil.c (function _png_write_cHRM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngwutil.c
