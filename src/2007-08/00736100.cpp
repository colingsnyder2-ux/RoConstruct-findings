// roc 2007-08 00736100  unit: G3D::Sky  size: 638 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00736100
//
// 00736100  83ec18               sub esp, 0x18
// 00736103  53                   push ebx
// 00736104  55                   push ebp
// 00736105  57                   push edi
// 00736106  8bf9                 mov edi, ecx
// 00736108  db870c020000         fild dword ptr [edi + 0x20c]
// 0073610e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00736112  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00736115  33db                 xor ebx, ebx
// 00736117  85c0                 test eax, eax
// 00736119  dc7c2440             fdivr qword ptr [esp + 0x40]
// 0073611d  89442418             mov dword ptr [esp + 0x18], eax
// 00736121  895c240c             mov dword ptr [esp + 0xc], ebx
// 00736125  dd54241c             fst qword ptr [esp + 0x1c]
// 00736129  db8710020000         fild dword ptr [edi + 0x210]
// 0073612f  dd442448             fld qword ptr [esp + 0x48]
// 00736133  d9c0                 fld st(0)
// 00736135  def2                 fdivrp st(2)
// 00736137  d9c9                 fxch st(1)
// 00736139  d95c2410             fstp dword ptr [esp + 0x10]
// 0073613d  db8740010000         fild dword ptr [edi + 0x140]
// 00736143  dc0d908d7e00         fmul qword ptr [0x7e8d90]
// 00736149  d8ca                 fmul st(2)
// 0073614b  d95c2414             fstp dword ptr [esp + 0x14]
// 0073614f  0f8e07020000         jle 0x73635c
// 00736155  dd442438             fld qword ptr [esp + 0x38]
// 00736159  56                   push esi
// 0073615a  8b742458             mov esi, dword ptr [esp + 0x58]
// 0073615e  d9442414             fld dword ptr [esp + 0x14]
// 00736162  dd442434             fld qword ptr [esp + 0x34]
// 00736166  83c6f8               add esi, -8
// 00736169  eb04                 jmp 0x73616f
// 0073616b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0073616f  3b5d14               cmp ebx, dword ptr [ebp + 0x14]
// 00736172  762c                 jbe 0x7361a0
// 00736174  dddc                 fstp st(4)
// 00736176  ddd9                 fstp st(1)
// 00736178  ddd8                 fstp st(0)
// 0073617a  ddd9                 fstp st(1)
// 0073617c  ddd8                 fstp st(0)
// 0073617e  ff15d8e67700         call dword ptr [0x77e6d8]
// 00736184  dd442434             fld qword ptr [esp + 0x34]
// 00736188  dd44243c             fld qword ptr [esp + 0x3c]
// 0073618c  dd44244c             fld qword ptr [esp + 0x4c]
// 00736190  d9442414             fld dword ptr [esp + 0x14]
// 00736194  dd442420             fld qword ptr [esp + 0x20]
// 00736198  d9cc                 fxch st(4)
// 0073619a  d9ca                 fxch st(2)
// 0073619c  d9cb                 fxch st(3)
// 0073619e  d9ca                 fxch st(2)
// 007361a0  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 007361a4  7205                 jb 0x7361ab
// 007361a6  8b4504               mov eax, dword ptr [ebp + 4]
// 007361a9  eb03                 jmp 0x7361ae
// 007361ab  8d4504               lea eax, [ebp + 4]
// 007361ae  8a1c18               mov bl, byte ptr [eax + ebx]
// 007361b1  80e37f               and bl, 0x7f
// 007361b4  80fb20               cmp bl, 0x20
// 007361b7  0f8465010000         je 0x736322
// 007361bd  0fbed3               movsx edx, bl
// 007361c0  8bc2                 mov eax, edx
// 007361c2  8bca                 mov ecx, edx
// 007361c4  c1f804               sar eax, 4
// 007361c7  83e10f               and ecx, 0xf
// 007361ca  837c245400           cmp dword ptr [esp + 0x54], 0
// 007361cf  751e                 jne 0x7361ef
// 007361d1  8baf0c020000         mov ebp, dword ptr [edi + 0x20c]
// 007361d7  2b6c970c             sub ebp, dword ptr [edi + edx*4 + 0xc]
// 007361db  896c2458             mov dword ptr [esp + 0x58], ebp
// 007361df  db442458             fild dword ptr [esp + 0x58]
// 007361e3  decd                 fmulp st(5)
// 007361e5  d9cc                 fxch st(4)
// 007361e7  dc0d485b7900         fmul qword ptr [0x795b48]
// 007361ed  eb04                 jmp 0x7361f3
// 007361ef  dddc                 fstp st(4)
// 007361f1  d9ee                 fldz 
// 007361f3  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 007361f9  d95c2458             fstp dword ptr [esp + 0x58]
// 007361fd  d9442458             fld dword ptr [esp + 0x58]
// 00736201  0fafd1               imul edx, ecx
// 00736204  d8ec                 fsubr st(4)
// 00736206  d95c2458             fstp dword ptr [esp + 0x58]
// 0073620a  89542434             mov dword ptr [esp + 0x34], edx
// 0073620e  83c608               add esi, 8
// 00736211  83c608               add esi, 8
// 00736214  db442434             fild dword ptr [esp + 0x34]
// 00736218  83c608               add esi, 8
// 0073621b  83c608               add esi, 8
// 0073621e  83c608               add esi, 8
// 00736221  d95ee0               fstp dword ptr [esi - 0x20]
// 00736224  8b9710020000         mov edx, dword ptr [edi + 0x210]
// 0073622a  0fafd0               imul edx, eax
// 0073622d  83c201               add edx, 1
// 00736230  89542434             mov dword ptr [esp + 0x34], edx
// 00736234  83c608               add esi, 8
// 00736237  83c608               add esi, 8
// 0073623a  db442434             fild dword ptr [esp + 0x34]
// 0073623e  d95ed4               fstp dword ptr [esi - 0x2c]
// 00736241  d9442458             fld dword ptr [esp + 0x58]
// 00736245  d956d8               fst dword ptr [esi - 0x28]
// 00736248  d9c1                 fld st(1)
// 0073624a  d8c3                 fadd st(3)
// 0073624c  d95c2458             fstp dword ptr [esp + 0x58]
// 00736250  d9442458             fld dword ptr [esp + 0x58]
// 00736254  d956dc               fst dword ptr [esi - 0x24]
// 00736257  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 0073625d  0fafd1               imul edx, ecx
// 00736260  89542458             mov dword ptr [esp + 0x58], edx
// 00736264  8d5001               lea edx, [eax + 1]
// 00736267  83c101               add ecx, 1
// 0073626a  db442458             fild dword ptr [esp + 0x58]
// 0073626e  d95ee0               fstp dword ptr [esi - 0x20]
// 00736271  8baf10020000         mov ebp, dword ptr [edi + 0x210]
// 00736277  0fafea               imul ebp, edx
// 0073627a  83ed02               sub ebp, 2
// 0073627d  896c2458             mov dword ptr [esp + 0x58], ebp
// 00736281  db442458             fild dword ptr [esp + 0x58]
// 00736285  d95ee4               fstp dword ptr [esi - 0x1c]
// 00736288  d9c9                 fxch st(1)
// 0073628a  d956e8               fst dword ptr [esi - 0x18]
// 0073628d  d9c3                 fld st(3)
// 0073628f  d8c5                 fadd st(5)
// 00736291  d8e3                 fsub st(3)
// 00736293  d95c2458             fstp dword ptr [esp + 0x58]
// 00736297  d9442458             fld dword ptr [esp + 0x58]
// 0073629b  d956ec               fst dword ptr [esi - 0x14]
// 0073629e  8baf0c020000         mov ebp, dword ptr [edi + 0x20c]
// 007362a4  0fafe9               imul ebp, ecx
// 007362a7  d9c9                 fxch st(1)
// 007362a9  dc442444             fadd qword ptr [esp + 0x44]
// 007362ad  d95c2458             fstp dword ptr [esp + 0x58]
// 007362b1  83ed01               sub ebp, 1
// 007362b4  896c2434             mov dword ptr [esp + 0x34], ebp
// 007362b8  db442434             fild dword ptr [esp + 0x34]
// 007362bc  d95ef0               fstp dword ptr [esi - 0x10]
// 007362bf  8baf10020000         mov ebp, dword ptr [edi + 0x210]
// 007362c5  0fafea               imul ebp, edx
// 007362c8  83ed02               sub ebp, 2
// 007362cb  896c2434             mov dword ptr [esp + 0x34], ebp
// 007362cf  db442434             fild dword ptr [esp + 0x34]
// 007362d3  d95ef4               fstp dword ptr [esi - 0xc]
// 007362d6  d9442458             fld dword ptr [esp + 0x58]
// 007362da  d956f8               fst dword ptr [esi - 8]
// 007362dd  d9c9                 fxch st(1)
// 007362df  d95efc               fstp dword ptr [esi - 4]
// 007362e2  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 007362e8  0fafd1               imul edx, ecx
// 007362eb  83ea01               sub edx, 1
// 007362ee  89542458             mov dword ptr [esp + 0x58], edx
// 007362f2  db442458             fild dword ptr [esp + 0x58]
// 007362f6  d91e                 fstp dword ptr [esi]
// 007362f8  8b8f10020000         mov ecx, dword ptr [edi + 0x210]
// 007362fe  0fafc8               imul ecx, eax
// 00736301  83c101               add ecx, 1
// 00736304  894c2458             mov dword ptr [esp + 0x58], ecx
// 00736308  db442458             fild dword ptr [esp + 0x58]
// 0073630c  d95e04               fstp dword ptr [esi + 4]
// 0073630f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00736313  d95e08               fstp dword ptr [esi + 8]
// 00736316  83c608               add esi, 8
// 00736319  d95e04               fstp dword ptr [esi + 4]
// 0073631c  dd442420             fld qword ptr [esp + 0x20]
// 00736320  d9cc                 fxch st(4)
// 00736322  837c245400           cmp dword ptr [esp + 0x54], 0
// 00736327  750b                 jne 0x736334
// 00736329  0fbed3               movsx edx, bl
// 0073632c  db44970c             fild dword ptr [edi + edx*4 + 0xc]
// 00736330  d8cd                 fmul st(5)
// 00736332  eb04                 jmp 0x736338
// 00736334  d9442418             fld dword ptr [esp + 0x18]
// 00736338  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073633c  dec1                 faddp st(1)
// 0073633e  83c001               add eax, 1
// 00736341  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00736345  dd542434             fst qword ptr [esp + 0x34]
// 00736349  89442410             mov dword ptr [esp + 0x10], eax
// 0073634d  0f8c18feffff         jl 0x73616b
// 00736353  dddc                 fstp st(4)
// 00736355  5e                   pop esi
// 00736356  ddd9                 fstp st(1)
// 00736358  ddd8                 fstp st(0)
// 0073635a  eb08                 jmp 0x736364
// 0073635c  ddd9                 fstp st(1)
// 0073635e  dd442430             fld qword ptr [esp + 0x30]
// 00736362  d9c9                 fxch st(1)
// 00736364  8b442428             mov eax, dword ptr [esp + 0x28]
// 00736368  d9c9                 fxch st(1)
// 0073636a  dc25e0fe7800         fsub qword ptr [0x78fee0]
// 00736370  5f                   pop edi
// 00736371  5d                   pop ebp
// 00736372  5b                   pop ebx
// 00736373  d918                 fstp dword ptr [eax]
// 00736375  d95804               fstp dword ptr [eax + 4]
// 00736378  83c418               add esp, 0x18
// 0073637b  c23000               ret 0x30
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ?computePackedArray@GFont@G3D@@ABE?AVVector2@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NNNNW4Spacing@12@PAV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
