// roc 2008-06 00483550  unit: G3D::Win32Window  size: 445 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483550
//
// 00483550  55                   push ebp
// 00483551  8bec                 mov ebp, esp
// 00483553  83e4f8               and esp, 0xfffffff8
// 00483556  81ec70010000         sub esp, 0x170
// 0048355c  56                   push esi
// 0048355d  8b35cc2a8000         mov esi, dword ptr [0x802acc]
// 00483563  57                   push edi
// 00483564  8d8424f8000000       lea eax, [esp + 0xf8]
// 0048356b  50                   push eax
// 0048356c  68a60b0000           push 0xba6
// 00483571  ffd6                 call esi
// 00483573  8d4c2478             lea ecx, [esp + 0x78]
// 00483577  51                   push ecx
// 00483578  68a70b0000           push 0xba7
// 0048357d  ffd6                 call esi
// 0048357f  8d542458             lea edx, [esp + 0x58]
// 00483583  52                   push edx
// 00483584  68a20b0000           push 0xba2
// 00483589  ffd6                 call esi
// 0048358b  8d442448             lea eax, [esp + 0x48]
// 0048358f  50                   push eax
// 00483590  68700b0000           push 0xb70
// 00483595  ffd6                 call esi
// 00483597  d9ee                 fldz 
// 00483599  d9542414             fst dword ptr [esp + 0x14]
// 0048359d  8d4c2408             lea ecx, [esp + 8]
// 004835a1  d9542410             fst dword ptr [esp + 0x10]
// 004835a5  8d942498000000       lea edx, [esp + 0x98]
// 004835ac  d954240c             fst dword ptr [esp + 0xc]
// 004835b0  bf04000000           mov edi, 4
// 004835b5  d9542408             fst dword ptr [esp + 8]
// 004835b9  d9542424             fst dword ptr [esp + 0x24]
// 004835bd  d9542420             fst dword ptr [esp + 0x20]
// 004835c1  d954241c             fst dword ptr [esp + 0x1c]
// 004835c5  d9542418             fst dword ptr [esp + 0x18]
// 004835c9  d9542434             fst dword ptr [esp + 0x34]
// 004835cd  d9542430             fst dword ptr [esp + 0x30]
// 004835d1  d954242c             fst dword ptr [esp + 0x2c]
// 004835d5  d9542428             fst dword ptr [esp + 0x28]
// 004835d9  d9542444             fst dword ptr [esp + 0x44]
// 004835dd  d9542440             fst dword ptr [esp + 0x40]
// 004835e1  d954243c             fst dword ptr [esp + 0x3c]
// 004835e5  d9542438             fst dword ptr [esp + 0x38]
// 004835e9  8d842400010000       lea eax, [esp + 0x100]
// 004835f0  be04000000           mov esi, 4
// 004835f5  d911                 fst dword ptr [ecx]
// 004835f7  83c104               add ecx, 4
// 004835fa  dd40f8               fld qword ptr [eax - 8]
// 004835fd  83c020               add eax, 0x20
// 00483600  83ee01               sub esi, 1
// 00483603  dc4ae0               fmul qword ptr [edx - 0x20]
// 00483606  d841fc               fadd dword ptr [ecx - 4]
// 00483609  dd40e0               fld qword ptr [eax - 0x20]
// 0048360c  dc0a                 fmul qword ptr [edx]
// 0048360e  dec1                 faddp st(1)
// 00483610  dd40e8               fld qword ptr [eax - 0x18]
// 00483613  dc4a20               fmul qword ptr [edx + 0x20]
// 00483616  dec1                 faddp st(1)
// 00483618  dd40f0               fld qword ptr [eax - 0x10]
// 0048361b  dc4a40               fmul qword ptr [edx + 0x40]
// 0048361e  dec1                 faddp st(1)
// 00483620  d959fc               fstp dword ptr [ecx - 4]
// 00483623  75d0                 jne 0x4835f5
// 00483625  83c208               add edx, 8
// 00483628  83ef01               sub edi, 1
// 0048362b  75bc                 jne 0x4835e9
// 0048362d  ddd8                 fstp st(0)
// 0048362f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00483632  d9400c               fld dword ptr [eax + 0xc]
// 00483635  5f                   pop edi
// 00483636  d84c2410             fmul dword ptr [esp + 0x10]
// 0048363a  5e                   pop esi
// 0048363b  d94004               fld dword ptr [eax + 4]
// 0048363e  d84c2404             fmul dword ptr [esp + 4]
// 00483642  dec1                 faddp st(1)
// 00483644  d94008               fld dword ptr [eax + 8]
// 00483647  d84c2408             fmul dword ptr [esp + 8]
// 0048364b  dec1                 faddp st(1)
// 0048364d  d900                 fld dword ptr [eax]
// 0048364f  d80c24               fmul dword ptr [esp]
// 00483652  dec1                 faddp st(1)
// 00483654  d9400c               fld dword ptr [eax + 0xc]
// 00483657  d84c241c             fmul dword ptr [esp + 0x1c]
// 0048365b  d94004               fld dword ptr [eax + 4]
// 0048365e  d84c2414             fmul dword ptr [esp + 0x14]
// 00483662  dec1                 faddp st(1)
// 00483664  d94008               fld dword ptr [eax + 8]
// 00483667  d84c2418             fmul dword ptr [esp + 0x18]
// 0048366b  dec1                 faddp st(1)
// 0048366d  d900                 fld dword ptr [eax]
// 0048366f  d84c2410             fmul dword ptr [esp + 0x10]
// 00483673  dec1                 faddp st(1)
// 00483675  d9400c               fld dword ptr [eax + 0xc]
// 00483678  d84c242c             fmul dword ptr [esp + 0x2c]
// 0048367c  d94004               fld dword ptr [eax + 4]
// 0048367f  d84c2424             fmul dword ptr [esp + 0x24]
// 00483683  dec1                 faddp st(1)
// 00483685  d94008               fld dword ptr [eax + 8]
// 00483688  d84c2428             fmul dword ptr [esp + 0x28]
// 0048368c  dec1                 faddp st(1)
// 0048368e  d900                 fld dword ptr [eax]
// 00483690  d84c2420             fmul dword ptr [esp + 0x20]
// 00483694  dec1                 faddp st(1)
// 00483696  d9442434             fld dword ptr [esp + 0x34]
// 0048369a  d84804               fmul dword ptr [eax + 4]
// 0048369d  d9442438             fld dword ptr [esp + 0x38]
// 004836a1  d84808               fmul dword ptr [eax + 8]
// 004836a4  dec1                 faddp st(1)
// 004836a6  d9400c               fld dword ptr [eax + 0xc]
// 004836a9  d84c243c             fmul dword ptr [esp + 0x3c]
// 004836ad  dec1                 faddp st(1)
// 004836af  d9442430             fld dword ptr [esp + 0x30]
// 004836b3  d808                 fmul dword ptr [eax]
// 004836b5  8b4508               mov eax, dword ptr [ebp + 8]
// 004836b8  dec1                 faddp st(1)
// 004836ba  d9e8                 fld1 
// 004836bc  def1                 fdivrp st(1)
// 004836be  dccb                 fmul st(3), st(0)
// 004836c0  d9e8                 fld1 
// 004836c2  dcc4                 fadd st(4), st(0)
// 004836c4  d9cc                 fxch st(4)
// 004836c6  dc4c2460             fmul qword ptr [esp + 0x60]
// 004836ca  dd0538e78100         fld qword ptr [0x81e738]
// 004836d0  dcc9                 fmul st(1), st(0)
// 004836d2  d9c9                 fxch st(1)
// 004836d4  dc442450             fadd qword ptr [esp + 0x50]
// 004836d8  d918                 fstp dword ptr [eax]
// 004836da  d9cb                 fxch st(3)
// 004836dc  d8c9                 fmul st(1)
// 004836de  deec                 fsubp st(4)
// 004836e0  d9cb                 fxch st(3)
// 004836e2  dc4c2468             fmul qword ptr [esp + 0x68]
// 004836e6  deca                 fmulp st(2)
// 004836e8  d9c9                 fxch st(1)
// 004836ea  dc442458             fadd qword ptr [esp + 0x58]
// 004836ee  d95804               fstp dword ptr [eax + 4]
// 004836f1  d8c9                 fmul st(1)
// 004836f3  dd442448             fld qword ptr [esp + 0x48]
// 004836f7  dd442440             fld qword ptr [esp + 0x40]
// 004836fb  dce9                 fsub st(1), st(0)
// 004836fd  d9ca                 fxch st(2)
// 004836ff  dec9                 fmulp st(1)
// 00483701  dec1                 faddp st(1)
// 00483703  d95808               fstp dword ptr [eax + 8]
// 00483706  d9580c               fstp dword ptr [eax + 0xc]
// 00483709  8be5                 mov esp, ebp
// 0048370b  5d                   pop ebp
// 0048370c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glToScreen@G3D@@YA?AVVector4@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
