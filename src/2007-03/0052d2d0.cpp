// roc 2007-03 0052d2d0  unit: seg_00520000  size: 815 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052d2d0
//
// 0052d2d0  8b542404             mov edx, dword ptr [esp + 4]
// 0052d2d4  dd0570487a00         fld qword ptr [0x7a4870]
// 0052d2da  83ec1c               sub esp, 0x1c
// 0052d2dd  b907000000           mov ecx, 7
// 0052d2e2  8d4208               lea eax, [edx + 8]
// 0052d2e5  d940f8               fld dword ptr [eax - 8]
// 0052d2e8  d84014               fadd dword ptr [eax + 0x14]
// 0052d2eb  d91c24               fstp dword ptr [esp]
// 0052d2ee  d940f8               fld dword ptr [eax - 8]
// 0052d2f1  d86014               fsub dword ptr [eax + 0x14]
// 0052d2f4  d95c2418             fstp dword ptr [esp + 0x18]
// 0052d2f8  d94010               fld dword ptr [eax + 0x10]
// 0052d2fb  d840fc               fadd dword ptr [eax - 4]
// 0052d2fe  d95c2408             fstp dword ptr [esp + 8]
// 0052d302  d940fc               fld dword ptr [eax - 4]
// 0052d305  d86010               fsub dword ptr [eax + 0x10]
// 0052d308  d95c2414             fstp dword ptr [esp + 0x14]
// 0052d30c  d9400c               fld dword ptr [eax + 0xc]
// 0052d30f  d800                 fadd dword ptr [eax]
// 0052d311  d95c2404             fstp dword ptr [esp + 4]
// 0052d315  d900                 fld dword ptr [eax]
// 0052d317  d8600c               fsub dword ptr [eax + 0xc]
// 0052d31a  d95c2410             fstp dword ptr [esp + 0x10]
// 0052d31e  d94004               fld dword ptr [eax + 4]
// 0052d321  d84008               fadd dword ptr [eax + 8]
// 0052d324  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d328  d94004               fld dword ptr [eax + 4]
// 0052d32b  d86008               fsub dword ptr [eax + 8]
// 0052d32e  d95c240c             fstp dword ptr [esp + 0xc]
// 0052d332  d9442420             fld dword ptr [esp + 0x20]
// 0052d336  d9c0                 fld st(0)
// 0052d338  d90424               fld dword ptr [esp]
// 0052d33b  d9c0                 fld st(0)
// 0052d33d  dec2                 faddp st(2)
// 0052d33f  d9c9                 fxch st(1)
// 0052d341  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d345  dee1                 fsubrp st(1)
// 0052d347  d91c24               fstp dword ptr [esp]
// 0052d34a  d9442404             fld dword ptr [esp + 4]
// 0052d34e  d9c0                 fld st(0)
// 0052d350  d9442408             fld dword ptr [esp + 8]
// 0052d354  d9c0                 fld st(0)
// 0052d356  dec2                 faddp st(2)
// 0052d358  d9c9                 fxch st(1)
// 0052d35a  d95c2408             fstp dword ptr [esp + 8]
// 0052d35e  d9442408             fld dword ptr [esp + 8]
// 0052d362  d9c0                 fld st(0)
// 0052d364  d9442420             fld dword ptr [esp + 0x20]
// 0052d368  d9c0                 fld st(0)
// 0052d36a  dec2                 faddp st(2)
// 0052d36c  d9c9                 fxch st(1)
// 0052d36e  d958f8               fstp dword ptr [eax - 8]
// 0052d371  dee1                 fsubrp st(1)
// 0052d373  d95808               fstp dword ptr [eax + 8]
// 0052d376  dee1                 fsubrp st(1)
// 0052d378  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d37c  d9442420             fld dword ptr [esp + 0x20]
// 0052d380  d90424               fld dword ptr [esp]
// 0052d383  d9c0                 fld st(0)
// 0052d385  dec2                 faddp st(2)
// 0052d387  d9c9                 fxch st(1)
// 0052d389  d8ca                 fmul st(2)
// 0052d38b  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d38f  d9442420             fld dword ptr [esp + 0x20]
// 0052d393  d9c0                 fld st(0)
// 0052d395  d8c2                 fadd st(2)
// 0052d397  d918                 fstp dword ptr [eax]
// 0052d399  dee9                 fsubp st(1)
// 0052d39b  d95810               fstp dword ptr [eax + 0x10]
// 0052d39e  d944240c             fld dword ptr [esp + 0xc]
// 0052d3a2  d9442410             fld dword ptr [esp + 0x10]
// 0052d3a6  d9c0                 fld st(0)
// 0052d3a8  dec2                 faddp st(2)
// 0052d3aa  d9c9                 fxch st(1)
// 0052d3ac  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d3b0  d9442414             fld dword ptr [esp + 0x14]
// 0052d3b4  d9c0                 fld st(0)
// 0052d3b6  d9442418             fld dword ptr [esp + 0x18]
// 0052d3ba  d9c0                 fld st(0)
// 0052d3bc  dec2                 faddp st(2)
// 0052d3be  d9c9                 fxch st(1)
// 0052d3c0  d95c2418             fstp dword ptr [esp + 0x18]
// 0052d3c4  d9442420             fld dword ptr [esp + 0x20]
// 0052d3c8  d9c0                 fld st(0)
// 0052d3ca  d9442418             fld dword ptr [esp + 0x18]
// 0052d3ce  d9c0                 fld st(0)
// 0052d3d0  deea                 fsubp st(2)
// 0052d3d2  83c020               add eax, 0x20
// 0052d3d5  83e901               sub ecx, 1
// 0052d3d8  d9c9                 fxch st(1)
// 0052d3da  dc0d68487a00         fmul qword ptr [0x7a4868]
// 0052d3e0  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d3e4  d9c9                 fxch st(1)
// 0052d3e6  dc0d60487a00         fmul qword ptr [0x7a4860]
// 0052d3ec  d9442420             fld dword ptr [esp + 0x20]
// 0052d3f0  d9c0                 fld st(0)
// 0052d3f2  dec2                 faddp st(2)
// 0052d3f4  d9c9                 fxch st(1)
// 0052d3f6  d95c2418             fstp dword ptr [esp + 0x18]
// 0052d3fa  d9c9                 fxch st(1)
// 0052d3fc  dc0d58487a00         fmul qword ptr [0x7a4858]
// 0052d402  dec1                 faddp st(1)
// 0052d404  d95c2410             fstp dword ptr [esp + 0x10]
// 0052d408  d9ca                 fxch st(2)
// 0052d40a  dec1                 faddp st(1)
// 0052d40c  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d410  d9442420             fld dword ptr [esp + 0x20]
// 0052d414  d8ca                 fmul st(2)
// 0052d416  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d41a  d9442420             fld dword ptr [esp + 0x20]
// 0052d41e  d9c0                 fld st(0)
// 0052d420  d8c2                 fadd st(2)
// 0052d422  d95c2414             fstp dword ptr [esp + 0x14]
// 0052d426  dee9                 fsubp st(1)
// 0052d428  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d42c  d9442420             fld dword ptr [esp + 0x20]
// 0052d430  d9c0                 fld st(0)
// 0052d432  d9442418             fld dword ptr [esp + 0x18]
// 0052d436  d9c0                 fld st(0)
// 0052d438  dec2                 faddp st(2)
// 0052d43a  d9c9                 fxch st(1)
// 0052d43c  d958ec               fstp dword ptr [eax - 0x14]
// 0052d43f  dee9                 fsubp st(1)
// 0052d441  d958e4               fstp dword ptr [eax - 0x1c]
// 0052d444  d9442414             fld dword ptr [esp + 0x14]
// 0052d448  d9c0                 fld st(0)
// 0052d44a  d9442410             fld dword ptr [esp + 0x10]
// 0052d44e  d9c0                 fld st(0)
// 0052d450  dec2                 faddp st(2)
// 0052d452  d9c9                 fxch st(1)
// 0052d454  d958dc               fstp dword ptr [eax - 0x24]
// 0052d457  dee9                 fsubp st(1)
// 0052d459  d958f4               fstp dword ptr [eax - 0xc]
// 0052d45c  0f8983feffff         jns 0x52d2e5
// 0052d462  b907000000           mov ecx, 7
// 0052d467  8d4240               lea eax, [edx + 0x40]
// 0052d46a  d940c0               fld dword ptr [eax - 0x40]
// 0052d46d  d880a0000000         fadd dword ptr [eax + 0xa0]
// 0052d473  d91c24               fstp dword ptr [esp]
// 0052d476  d940c0               fld dword ptr [eax - 0x40]
// 0052d479  d8a0a0000000         fsub dword ptr [eax + 0xa0]
// 0052d47f  d95c2418             fstp dword ptr [esp + 0x18]
// 0052d483  d98080000000         fld dword ptr [eax + 0x80]
// 0052d489  d840e0               fadd dword ptr [eax - 0x20]
// 0052d48c  d95c2408             fstp dword ptr [esp + 8]
// 0052d490  d940e0               fld dword ptr [eax - 0x20]
// 0052d493  d8a080000000         fsub dword ptr [eax + 0x80]
// 0052d499  d95c2414             fstp dword ptr [esp + 0x14]
// 0052d49d  d94060               fld dword ptr [eax + 0x60]
// 0052d4a0  d800                 fadd dword ptr [eax]
// 0052d4a2  d95c2404             fstp dword ptr [esp + 4]
// 0052d4a6  d900                 fld dword ptr [eax]
// 0052d4a8  d86060               fsub dword ptr [eax + 0x60]
// 0052d4ab  d95c2410             fstp dword ptr [esp + 0x10]
// 0052d4af  d94040               fld dword ptr [eax + 0x40]
// 0052d4b2  d84020               fadd dword ptr [eax + 0x20]
// 0052d4b5  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d4b9  d94020               fld dword ptr [eax + 0x20]
// 0052d4bc  d86040               fsub dword ptr [eax + 0x40]
// 0052d4bf  d95c240c             fstp dword ptr [esp + 0xc]
// 0052d4c3  d9442420             fld dword ptr [esp + 0x20]
// 0052d4c7  d9c0                 fld st(0)
// 0052d4c9  d90424               fld dword ptr [esp]
// 0052d4cc  d9c0                 fld st(0)
// 0052d4ce  dec2                 faddp st(2)
// 0052d4d0  d9c9                 fxch st(1)
// 0052d4d2  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d4d6  dee1                 fsubrp st(1)
// 0052d4d8  d91c24               fstp dword ptr [esp]
// 0052d4db  d9442404             fld dword ptr [esp + 4]
// 0052d4df  d9c0                 fld st(0)
// 0052d4e1  d9442408             fld dword ptr [esp + 8]
// 0052d4e5  d9c0                 fld st(0)
// 0052d4e7  dec2                 faddp st(2)
// 0052d4e9  d9c9                 fxch st(1)
// 0052d4eb  d95c2408             fstp dword ptr [esp + 8]
// 0052d4ef  d9442408             fld dword ptr [esp + 8]
// 0052d4f3  d9c0                 fld st(0)
// 0052d4f5  d9442420             fld dword ptr [esp + 0x20]
// 0052d4f9  d9c0                 fld st(0)
// 0052d4fb  dec2                 faddp st(2)
// 0052d4fd  d9c9                 fxch st(1)
// 0052d4ff  d958c0               fstp dword ptr [eax - 0x40]
// 0052d502  dee1                 fsubrp st(1)
// 0052d504  d95840               fstp dword ptr [eax + 0x40]
// 0052d507  dee1                 fsubrp st(1)
// 0052d509  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d50d  d9442420             fld dword ptr [esp + 0x20]
// 0052d511  d90424               fld dword ptr [esp]
// 0052d514  d9c0                 fld st(0)
// 0052d516  dec2                 faddp st(2)
// 0052d518  d9c9                 fxch st(1)
// 0052d51a  d8ca                 fmul st(2)
// 0052d51c  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d520  d9442420             fld dword ptr [esp + 0x20]
// 0052d524  d9c0                 fld st(0)
// 0052d526  d8c2                 fadd st(2)
// 0052d528  d918                 fstp dword ptr [eax]
// 0052d52a  dee9                 fsubp st(1)
// 0052d52c  d99880000000         fstp dword ptr [eax + 0x80]
// 0052d532  d944240c             fld dword ptr [esp + 0xc]
// 0052d536  d9442410             fld dword ptr [esp + 0x10]
// 0052d53a  d9c0                 fld st(0)
// 0052d53c  dec2                 faddp st(2)
// 0052d53e  d9c9                 fxch st(1)
// 0052d540  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d544  d9442414             fld dword ptr [esp + 0x14]
// 0052d548  d9c0                 fld st(0)
// 0052d54a  d9442418             fld dword ptr [esp + 0x18]
// 0052d54e  d9c0                 fld st(0)
// 0052d550  dec2                 faddp st(2)
// 0052d552  d9c9                 fxch st(1)
// 0052d554  d95c2418             fstp dword ptr [esp + 0x18]
// 0052d558  d9442420             fld dword ptr [esp + 0x20]
// 0052d55c  d9c0                 fld st(0)
// 0052d55e  d9442418             fld dword ptr [esp + 0x18]
// 0052d562  d9c0                 fld st(0)
// 0052d564  deea                 fsubp st(2)
// 0052d566  83c004               add eax, 4
// 0052d569  83e901               sub ecx, 1
// 0052d56c  d9c9                 fxch st(1)
// 0052d56e  dc0d68487a00         fmul qword ptr [0x7a4868]
// 0052d574  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d578  d9c9                 fxch st(1)
// 0052d57a  dc0d60487a00         fmul qword ptr [0x7a4860]
// 0052d580  d9442420             fld dword ptr [esp + 0x20]
// 0052d584  d9c0                 fld st(0)
// 0052d586  dec2                 faddp st(2)
// 0052d588  d9c9                 fxch st(1)
// 0052d58a  d95c2418             fstp dword ptr [esp + 0x18]
// 0052d58e  d9c9                 fxch st(1)
// 0052d590  dc0d58487a00         fmul qword ptr [0x7a4858]
// 0052d596  dec1                 faddp st(1)
// 0052d598  d95c2410             fstp dword ptr [esp + 0x10]
// 0052d59c  d9ca                 fxch st(2)
// 0052d59e  dec1                 faddp st(1)
// 0052d5a0  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d5a4  d9442420             fld dword ptr [esp + 0x20]
// 0052d5a8  d8ca                 fmul st(2)
// 0052d5aa  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d5ae  d9442420             fld dword ptr [esp + 0x20]
// 0052d5b2  d9c0                 fld st(0)
// 0052d5b4  d8c2                 fadd st(2)
// 0052d5b6  d95c2414             fstp dword ptr [esp + 0x14]
// 0052d5ba  dee9                 fsubp st(1)
// 0052d5bc  d95c2420             fstp dword ptr [esp + 0x20]
// 0052d5c0  d9442420             fld dword ptr [esp + 0x20]
// 0052d5c4  d9c0                 fld st(0)
// 0052d5c6  d9442418             fld dword ptr [esp + 0x18]
// 0052d5ca  d9c0                 fld st(0)
// 0052d5cc  dec2                 faddp st(2)
// 0052d5ce  d9c9                 fxch st(1)
// 0052d5d0  d9585c               fstp dword ptr [eax + 0x5c]
// 0052d5d3  dee9                 fsubp st(1)
// 0052d5d5  d9581c               fstp dword ptr [eax + 0x1c]
// 0052d5d8  d9442414             fld dword ptr [esp + 0x14]
// 0052d5dc  d9c0                 fld st(0)
// 0052d5de  d9442410             fld dword ptr [esp + 0x10]
// 0052d5e2  d9c0                 fld st(0)
// 0052d5e4  dec2                 faddp st(2)
// 0052d5e6  d9c9                 fxch st(1)
// 0052d5e8  d958dc               fstp dword ptr [eax - 0x24]
// 0052d5eb  dee9                 fsubp st(1)
// 0052d5ed  d9989c000000         fstp dword ptr [eax + 0x9c]
// 0052d5f3  0f8971feffff         jns 0x52d46a
// 0052d5f9  ddd8                 fstp st(0)
// 0052d5fb  83c41c               add esp, 0x1c
// 0052d5fe  c3                   ret 
// library jpeg-6b/jfdctflt.c (function _jpeg_fdct_float)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctflt.c
