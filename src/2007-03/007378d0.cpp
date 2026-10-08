// roc 2007-03 007378d0  unit: seg_00730000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007378d0
//
// 007378d0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007378d4  83ec18               sub esp, 0x18
// 007378d7  83fa01               cmp edx, 1
// 007378da  56                   push esi
// 007378db  0f84d1000000         je 0x7379b2
// 007378e1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007378e5  dd06                 fld qword ptr [esi]
// 007378e7  dd442424             fld qword ptr [esp + 0x24]
// 007378eb  d8d1                 fcom st(1)
// 007378ed  dfe0                 fnstsw ax
// 007378ef  ddd9                 fstp st(1)
// 007378f1  f6c405               test ah, 5
// 007378f4  0f8bb6000000         jnp 0x7379b0
// 007378fa  b901000000           mov ecx, 1
// 007378ff  3bd1                 cmp edx, ecx
// 00737901  7e11                 jle 0x737914
// 00737903  dc14ce               fcom qword ptr [esi + ecx*8]
// 00737906  dfe0                 fnstsw ax
// 00737908  f6c405               test ah, 5
// 0073790b  7b19                 jnp 0x737926
// 0073790d  83c101               add ecx, 1
// 00737910  3bca                 cmp ecx, edx
// 00737912  7cef                 jl 0x737903
// 00737914  8b442430             mov eax, dword ptr [esp + 0x30]
// 00737918  ddd8                 fstp st(0)
// 0073791a  8d1452               lea edx, [edx + edx*2]
// 0073791d  8d4c90f4             lea ecx, [eax + edx*4 - 0xc]
// 00737921  e990000000           jmp 0x7379b6
// 00737926  dc2cce               fsubr qword ptr [esi + ecx*8]
// 00737929  8d0449               lea eax, [ecx + ecx*2]
// 0073792c  dd04ce               fld qword ptr [esi + ecx*8]
// 0073792f  dc64cef8             fsub qword ptr [esi + ecx*8 - 8]
// 00737933  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00737937  8d0481               lea eax, [ecx + eax*4]
// 0073793a  5e                   pop esi
// 0073793b  def9                 fdivp st(1)
// 0073793d  d9542430             fst dword ptr [esp + 0x30]
// 00737941  d940f4               fld dword ptr [eax - 0xc]
// 00737944  d9442430             fld dword ptr [esp + 0x30]
// 00737948  d9c0                 fld st(0)
// 0073794a  deca                 fmulp st(2)
// 0073794c  d9c9                 fxch st(1)
// 0073794e  d95c240c             fstp dword ptr [esp + 0xc]
// 00737952  d940f8               fld dword ptr [eax - 8]
// 00737955  d8c9                 fmul st(1)
// 00737957  d95c2410             fstp dword ptr [esp + 0x10]
// 0073795b  d848fc               fmul dword ptr [eax - 4]
// 0073795e  d95c2414             fstp dword ptr [esp + 0x14]
// 00737962  d9e8                 fld1 
// 00737964  dee1                 fsubrp st(1)
// 00737966  d95c2430             fstp dword ptr [esp + 0x30]
// 0073796a  d900                 fld dword ptr [eax]
// 0073796c  d9442430             fld dword ptr [esp + 0x30]
// 00737970  d9c0                 fld st(0)
// 00737972  deca                 fmulp st(2)
// 00737974  d9c9                 fxch st(1)
// 00737976  d91c24               fstp dword ptr [esp]
// 00737979  d94004               fld dword ptr [eax + 4]
// 0073797c  d8c9                 fmul st(1)
// 0073797e  d95c2404             fstp dword ptr [esp + 4]
// 00737982  d84808               fmul dword ptr [eax + 8]
// 00737985  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00737989  d95c2408             fstp dword ptr [esp + 8]
// 0073798d  d90424               fld dword ptr [esp]
// 00737990  d844240c             fadd dword ptr [esp + 0xc]
// 00737994  d918                 fstp dword ptr [eax]
// 00737996  d9442404             fld dword ptr [esp + 4]
// 0073799a  d8442410             fadd dword ptr [esp + 0x10]
// 0073799e  d95804               fstp dword ptr [eax + 4]
// 007379a1  d9442408             fld dword ptr [esp + 8]
// 007379a5  d8442414             fadd dword ptr [esp + 0x14]
// 007379a9  d95808               fstp dword ptr [eax + 8]
// 007379ac  83c418               add esp, 0x18
// 007379af  c3                   ret 
// 007379b0  ddd8                 fstp st(0)
// 007379b2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007379b6  8b442420             mov eax, dword ptr [esp + 0x20]
// 007379ba  d901                 fld dword ptr [ecx]
// 007379bc  d918                 fstp dword ptr [eax]
// 007379be  5e                   pop esi
// 007379bf  d94104               fld dword ptr [ecx + 4]
// 007379c2  d95804               fstp dword ptr [eax + 4]
// 007379c5  d94108               fld dword ptr [ecx + 8]
// 007379c8  d95808               fstp dword ptr [eax + 8]
// 007379cb  83c418               add esp, 0x18
// 007379ce  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\LightingParameters.cpp (function ??$linearSpline@NVColor3@G3D@@@G3D@@YA?AVColor3@0@NPBNPBV10@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/LightingParameters.cpp
