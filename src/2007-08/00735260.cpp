// roc 2007-08 00735260  unit: G3D::Sky  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00735260
//
// 00735260  8b542418             mov edx, dword ptr [esp + 0x18]
// 00735264  83ec18               sub esp, 0x18
// 00735267  83fa01               cmp edx, 1
// 0073526a  56                   push esi
// 0073526b  0f84d1000000         je 0x735342
// 00735271  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00735275  dd06                 fld qword ptr [esi]
// 00735277  dd442424             fld qword ptr [esp + 0x24]
// 0073527b  d8d1                 fcom st(1)
// 0073527d  dfe0                 fnstsw ax
// 0073527f  ddd9                 fstp st(1)
// 00735281  f6c405               test ah, 5
// 00735284  0f8bb6000000         jnp 0x735340
// 0073528a  b901000000           mov ecx, 1
// 0073528f  3bd1                 cmp edx, ecx
// 00735291  7e11                 jle 0x7352a4
// 00735293  dc14ce               fcom qword ptr [esi + ecx*8]
// 00735296  dfe0                 fnstsw ax
// 00735298  f6c405               test ah, 5
// 0073529b  7b19                 jnp 0x7352b6
// 0073529d  83c101               add ecx, 1
// 007352a0  3bca                 cmp ecx, edx
// 007352a2  7cef                 jl 0x735293
// 007352a4  8b442430             mov eax, dword ptr [esp + 0x30]
// 007352a8  ddd8                 fstp st(0)
// 007352aa  8d1452               lea edx, [edx + edx*2]
// 007352ad  8d4c90f4             lea ecx, [eax + edx*4 - 0xc]
// 007352b1  e990000000           jmp 0x735346
// 007352b6  dc2cce               fsubr qword ptr [esi + ecx*8]
// 007352b9  8d0449               lea eax, [ecx + ecx*2]
// 007352bc  dd04ce               fld qword ptr [esi + ecx*8]
// 007352bf  dc64cef8             fsub qword ptr [esi + ecx*8 - 8]
// 007352c3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007352c7  8d0481               lea eax, [ecx + eax*4]
// 007352ca  5e                   pop esi
// 007352cb  def9                 fdivp st(1)
// 007352cd  d9542430             fst dword ptr [esp + 0x30]
// 007352d1  d940f4               fld dword ptr [eax - 0xc]
// 007352d4  d9442430             fld dword ptr [esp + 0x30]
// 007352d8  d9c0                 fld st(0)
// 007352da  deca                 fmulp st(2)
// 007352dc  d9c9                 fxch st(1)
// 007352de  d95c240c             fstp dword ptr [esp + 0xc]
// 007352e2  d940f8               fld dword ptr [eax - 8]
// 007352e5  d8c9                 fmul st(1)
// 007352e7  d95c2410             fstp dword ptr [esp + 0x10]
// 007352eb  d848fc               fmul dword ptr [eax - 4]
// 007352ee  d95c2414             fstp dword ptr [esp + 0x14]
// 007352f2  d9e8                 fld1 
// 007352f4  dee1                 fsubrp st(1)
// 007352f6  d95c2430             fstp dword ptr [esp + 0x30]
// 007352fa  d900                 fld dword ptr [eax]
// 007352fc  d9442430             fld dword ptr [esp + 0x30]
// 00735300  d9c0                 fld st(0)
// 00735302  deca                 fmulp st(2)
// 00735304  d9c9                 fxch st(1)
// 00735306  d91c24               fstp dword ptr [esp]
// 00735309  d94004               fld dword ptr [eax + 4]
// 0073530c  d8c9                 fmul st(1)
// 0073530e  d95c2404             fstp dword ptr [esp + 4]
// 00735312  d84808               fmul dword ptr [eax + 8]
// 00735315  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00735319  d95c2408             fstp dword ptr [esp + 8]
// 0073531d  d90424               fld dword ptr [esp]
// 00735320  d844240c             fadd dword ptr [esp + 0xc]
// 00735324  d918                 fstp dword ptr [eax]
// 00735326  d9442404             fld dword ptr [esp + 4]
// 0073532a  d8442410             fadd dword ptr [esp + 0x10]
// 0073532e  d95804               fstp dword ptr [eax + 4]
// 00735331  d9442408             fld dword ptr [esp + 8]
// 00735335  d8442414             fadd dword ptr [esp + 0x14]
// 00735339  d95808               fstp dword ptr [eax + 8]
// 0073533c  83c418               add esp, 0x18
// 0073533f  c3                   ret 
// 00735340  ddd8                 fstp st(0)
// 00735342  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00735346  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073534a  d901                 fld dword ptr [ecx]
// 0073534c  d918                 fstp dword ptr [eax]
// 0073534e  5e                   pop esi
// 0073534f  d94104               fld dword ptr [ecx + 4]
// 00735352  d95804               fstp dword ptr [eax + 4]
// 00735355  d94108               fld dword ptr [ecx + 8]
// 00735358  d95808               fstp dword ptr [eax + 8]
// 0073535b  83c418               add esp, 0x18
// 0073535e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\LightingParameters.cpp (function ??$linearSpline@NVColor3@G3D@@@G3D@@YA?AVColor3@0@NPBNPBV10@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/LightingParameters.cpp
