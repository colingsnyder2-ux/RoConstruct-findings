// roc 2009-06 00580200  unit: G3D::_internal::DialogTemplate  size: 815 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00580200
//
// 00580200  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00580204  85c9                 test ecx, ecx
// 00580206  0f8422030000         je 0x58052e
// 0058020c  56                   push esi
// 0058020d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00580211  85f6                 test esi, esi
// 00580213  0f8414030000         je 0x58052d
// 00580219  d9ee                 fldz 
// 0058021b  d9c0                 fld st(0)
// 0058021d  dd442410             fld qword ptr [esp + 0x10]
// 00580221  dde1                 fucom st(1)
// 00580223  dfe0                 fnstsw ax
// 00580225  ddd9                 fstp st(1)
// 00580227  dd442448             fld qword ptr [esp + 0x48]
// 0058022b  dd442440             fld qword ptr [esp + 0x40]
// 0058022f  dd442438             fld qword ptr [esp + 0x38]
// 00580233  dd442430             fld qword ptr [esp + 0x30]
// 00580237  f6c444               test ah, 0x44
// 0058023a  7a6f                 jp 0x5802ab
// 0058023c  d9c5                 fld st(5)
// 0058023e  dc5c2418             fcomp qword ptr [esp + 0x18]
// 00580242  dfe0                 fnstsw ax
// 00580244  f6c444               test ah, 0x44
// 00580247  7a62                 jp 0x5802ab
// 00580249  d9c5                 fld st(5)
// 0058024b  dc5c2420             fcomp qword ptr [esp + 0x20]
// 0058024f  dfe0                 fnstsw ax
// 00580251  f6c444               test ah, 0x44
// 00580254  7a55                 jp 0x5802ab
// 00580256  d9c5                 fld st(5)
// 00580258  dc5c2428             fcomp qword ptr [esp + 0x28]
// 0058025c  dfe0                 fnstsw ax
// 0058025e  f6c444               test ah, 0x44
// 00580261  7a48                 jp 0x5802ab
// 00580263  d9c5                 fld st(5)
// 00580265  dde9                 fucomp st(1)
// 00580267  dfe0                 fnstsw ax
// 00580269  f6c444               test ah, 0x44
// 0058026c  7a3d                 jp 0x5802ab
// 0058026e  d9c5                 fld st(5)
// 00580270  ddea                 fucomp st(2)
// 00580272  dfe0                 fnstsw ax
// 00580274  f6c444               test ah, 0x44
// 00580277  7a32                 jp 0x5802ab
// 00580279  d9c5                 fld st(5)
// 0058027b  ddeb                 fucomp st(3)
// 0058027d  dfe0                 fnstsw ax
// 0058027f  f6c444               test ah, 0x44
// 00580282  7a27                 jp 0x5802ab
// 00580284  d9c5                 fld st(5)
// 00580286  ddec                 fucomp st(4)
// 00580288  dfe0                 fnstsw ax
// 0058028a  f6c444               test ah, 0x44
// 0058028d  7a1c                 jp 0x5802ab
// 0058028f  dddd                 fstp st(5)
// 00580291  6880c48c00           push 0x8cc480
// 00580296  dddb                 fstp st(3)
// 00580298  51                   push ecx
// 00580299  ddd9                 fstp st(1)
// 0058029b  ddd8                 fstp st(0)
// 0058029d  ddd8                 fstp st(0)
// 0058029f  ddd8                 fstp st(0)
// 005802a1  e86adf0000           call 0x58e210
// 005802a6  83c408               add esp, 8
// 005802a9  5e                   pop esi
// 005802aa  c3                   ret 
// 005802ab  d9cc                 fxch st(4)
// 005802ad  d8d5                 fcom st(5)
// 005802af  dfe0                 fnstsw ax
// 005802b1  f6c405               test ah, 5
// 005802b4  0f8b55020000         jnp 0x58050f
// 005802ba  d9cd                 fxch st(5)
// 005802bc  dc542418             fcom qword ptr [esp + 0x18]
// 005802c0  dfe0                 fnstsw ax
// 005802c2  f6c441               test ah, 0x41
// 005802c5  0f8448020000         je 0x580513
// 005802cb  dc542420             fcom qword ptr [esp + 0x20]
// 005802cf  dfe0                 fnstsw ax
// 005802d1  f6c441               test ah, 0x41
// 005802d4  0f8439020000         je 0x580513
// 005802da  dc542428             fcom qword ptr [esp + 0x28]
// 005802de  dfe0                 fnstsw ax
// 005802e0  f6c441               test ah, 0x41
// 005802e3  0f842a020000         je 0x580513
// 005802e9  d8d4                 fcom st(4)
// 005802eb  dfe0                 fnstsw ax
// 005802ed  f6c441               test ah, 0x41
// 005802f0  0f841d020000         je 0x580513
// 005802f6  d8d1                 fcom st(1)
// 005802f8  dfe0                 fnstsw ax
// 005802fa  f6c441               test ah, 0x41
// 005802fd  0f8410020000         je 0x580513
// 00580303  d8d2                 fcom st(2)
// 00580305  dfe0                 fnstsw ax
// 00580307  f6c441               test ah, 0x41
// 0058030a  0f8403020000         je 0x580513
// 00580310  d8db                 fcomp st(3)
// 00580312  dfe0                 fnstsw ax
// 00580314  f6c441               test ah, 0x41
// 00580317  0f84f8010000         je 0x580515
// 0058031d  dd0578c48c00         fld qword ptr [0x8cc478]
// 00580323  d8d5                 fcom st(5)
// 00580325  dfe0                 fnstsw ax
// 00580327  f6c405               test ah, 5
// 0058032a  0f8b4b010000         jnp 0x58047b
// 00580330  dc542418             fcom qword ptr [esp + 0x18]
// 00580334  dfe0                 fnstsw ax
// 00580336  f6c405               test ah, 5
// 00580339  0f8b3c010000         jnp 0x58047b
// 0058033f  dc542420             fcom qword ptr [esp + 0x20]
// 00580343  dfe0                 fnstsw ax
// 00580345  f6c405               test ah, 5
// 00580348  0f8b2d010000         jnp 0x58047b
// 0058034e  dd442428             fld qword ptr [esp + 0x28]
// 00580352  d8d1                 fcom st(1)
// 00580354  dfe0                 fnstsw ax
// 00580356  f6c441               test ah, 0x41
// 00580359  0f8438010000         je 0x580497
// 0058035f  d9cd                 fxch st(5)
// 00580361  d8d1                 fcom st(1)
// 00580363  dfe0                 fnstsw ax
// 00580365  f6c441               test ah, 0x41
// 00580368  0f8447010000         je 0x5804b5
// 0058036e  d9ca                 fxch st(2)
// 00580370  d8d1                 fcom st(1)
// 00580372  dfe0                 fnstsw ax
// 00580374  f6c441               test ah, 0x41
// 00580377  0f8456010000         je 0x5804d3
// 0058037d  d9cb                 fxch st(3)
// 0058037f  d8d1                 fcom st(1)
// 00580381  dfe0                 fnstsw ax
// 00580383  f6c441               test ah, 0x41
// 00580386  0f8465010000         je 0x5804f1
// 0058038c  d9c9                 fxch st(1)
// 0058038e  d8dc                 fcomp st(4)
// 00580390  dfe0                 fnstsw ax
// 00580392  f6c405               test ah, 5
// 00580395  0f8b58010000         jnp 0x5804f3
// 0058039b  d9cd                 fxch st(5)
// 0058039d  d99680000000         fst dword ptr [esi + 0x80]
// 005803a3  dd442418             fld qword ptr [esp + 0x18]
// 005803a7  d99e84000000         fstp dword ptr [esi + 0x84]
// 005803ad  dd442420             fld qword ptr [esp + 0x20]
// 005803b1  d99e88000000         fstp dword ptr [esi + 0x88]
// 005803b7  d9cc                 fxch st(4)
// 005803b9  d99e8c000000         fstp dword ptr [esi + 0x8c]
// 005803bf  d99690000000         fst dword ptr [esi + 0x90]
// 005803c5  d9c9                 fxch st(1)
// 005803c7  d99694000000         fst dword ptr [esi + 0x94]
// 005803cd  d9cc                 fxch st(4)
// 005803cf  d99698000000         fst dword ptr [esi + 0x98]
// 005803d5  d9ca                 fxch st(2)
// 005803d7  d9969c000000         fst dword ptr [esi + 0x9c]
// 005803dd  dd0570c48c00         fld qword ptr [0x8cc470]
// 005803e3  dccc                 fmul st(4), st(0)
// 005803e5  dd05f8018c00         fld qword ptr [0x8c01f8]
// 005803eb  dcc5                 fadd st(5), st(0)
// 005803ed  d9cd                 fxch st(5)
// 005803ef  e8cc9a1900           call 0x719ec0
// 005803f4  dd442418             fld qword ptr [esp + 0x18]
// 005803f8  d8c9                 fmul st(1)
// 005803fa  898600010000         mov dword ptr [esi + 0x100], eax
// 00580400  d8c5                 fadd st(5)
// 00580402  e8b99a1900           call 0x719ec0
// 00580407  dd442420             fld qword ptr [esp + 0x20]
// 0058040b  d8c9                 fmul st(1)
// 0058040d  898604010000         mov dword ptr [esi + 0x104], eax
// 00580413  d8c5                 fadd st(5)
// 00580415  e8a69a1900           call 0x719ec0
// 0058041a  dd442428             fld qword ptr [esp + 0x28]
// 0058041e  d8c9                 fmul st(1)
// 00580420  898608010000         mov dword ptr [esi + 0x108], eax
// 00580426  d8c5                 fadd st(5)
// 00580428  e8939a1900           call 0x719ec0
// 0058042d  dcca                 fmul st(2), st(0)
// 0058042f  d9ca                 fxch st(2)
// 00580431  89860c010000         mov dword ptr [esi + 0x10c], eax
// 00580437  d8c4                 fadd st(4)
// 00580439  e8829a1900           call 0x719ec0
// 0058043e  d9cc                 fxch st(4)
// 00580440  d8c9                 fmul st(1)
// 00580442  898610010000         mov dword ptr [esi + 0x110], eax
// 00580448  d8c3                 fadd st(3)
// 0058044a  e8719a1900           call 0x719ec0
// 0058044f  dcc9                 fmul st(1), st(0)
// 00580451  d9c9                 fxch st(1)
// 00580453  898614010000         mov dword ptr [esi + 0x114], eax
// 00580459  d8c2                 fadd st(2)
// 0058045b  e8609a1900           call 0x719ec0
// 00580460  deca                 fmulp st(2)
// 00580462  898618010000         mov dword ptr [esi + 0x118], eax
// 00580468  dec1                 faddp st(1)
// 0058046a  e8519a1900           call 0x719ec0
// 0058046f  834e0804             or dword ptr [esi + 8], 4
// 00580473  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00580479  5e                   pop esi
// 0058047a  c3                   ret 
// 0058047b  ddd8                 fstp st(0)
// 0058047d  682cc48c00           push 0x8cc42c
// 00580482  dddc                 fstp st(4)
// 00580484  51                   push ecx
// 00580485  ddd9                 fstp st(1)
// 00580487  ddd8                 fstp st(0)
// 00580489  ddd9                 fstp st(1)
// 0058048b  ddd8                 fstp st(0)
// 0058048d  e87edd0000           call 0x58e210
// 00580492  83c408               add esp, 8
// 00580495  5e                   pop esi
// 00580496  c3                   ret 
// 00580497  ddd9                 fstp st(1)
// 00580499  682cc48c00           push 0x8cc42c
// 0058049e  dddd                 fstp st(5)
// 005804a0  51                   push ecx
// 005804a1  dddc                 fstp st(4)
// 005804a3  ddd9                 fstp st(1)
// 005804a5  ddd8                 fstp st(0)
// 005804a7  ddd9                 fstp st(1)
// 005804a9  ddd8                 fstp st(0)
// 005804ab  e860dd0000           call 0x58e210
// 005804b0  83c408               add esp, 8
// 005804b3  5e                   pop esi
// 005804b4  c3                   ret 
// 005804b5  ddd9                 fstp st(1)
// 005804b7  682cc48c00           push 0x8cc42c
// 005804bc  dddd                 fstp st(5)
// 005804be  51                   push ecx
// 005804bf  dddb                 fstp st(3)
// 005804c1  ddd9                 fstp st(1)
// 005804c3  ddd8                 fstp st(0)
// 005804c5  ddd8                 fstp st(0)
// 005804c7  ddd8                 fstp st(0)
// 005804c9  e842dd0000           call 0x58e210
// 005804ce  83c408               add esp, 8
// 005804d1  5e                   pop esi
// 005804d2  c3                   ret 
// 005804d3  ddd9                 fstp st(1)
// 005804d5  682cc48c00           push 0x8cc42c
// 005804da  dddd                 fstp st(5)
// 005804dc  51                   push ecx
// 005804dd  dddb                 fstp st(3)
// 005804df  ddd9                 fstp st(1)
// 005804e1  ddd8                 fstp st(0)
// 005804e3  ddd9                 fstp st(1)
// 005804e5  ddd8                 fstp st(0)
// 005804e7  e824dd0000           call 0x58e210
// 005804ec  83c408               add esp, 8
// 005804ef  5e                   pop esi
// 005804f0  c3                   ret 
// 005804f1  ddd9                 fstp st(1)
// 005804f3  dddd                 fstp st(5)
// 005804f5  682cc48c00           push 0x8cc42c
// 005804fa  dddb                 fstp st(3)
// 005804fc  51                   push ecx
// 005804fd  ddd9                 fstp st(1)
// 005804ff  ddda                 fstp st(2)
// 00580501  ddd9                 fstp st(1)
// 00580503  ddd8                 fstp st(0)
// 00580505  e806dd0000           call 0x58e210
// 0058050a  83c408               add esp, 8
// 0058050d  5e                   pop esi
// 0058050e  c3                   ret 
// 0058050f  dddd                 fstp st(5)
// 00580511  eb02                 jmp 0x580515
// 00580513  ddd8                 fstp st(0)
// 00580515  dddc                 fstp st(4)
// 00580517  68f8c38c00           push 0x8cc3f8
// 0058051c  ddd9                 fstp st(1)
// 0058051e  51                   push ecx
// 0058051f  ddd8                 fstp st(0)
// 00580521  ddd9                 fstp st(1)
// 00580523  ddd8                 fstp st(0)
// 00580525  e8e6dc0000           call 0x58e210
// 0058052a  83c408               add esp, 8
// 0058052d  5e                   pop esi
// 0058052e  c3                   ret 
// copied from an identical function in another client (function _png_set_cHRM)

// roc-cl: 30729
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.24 pngset.c