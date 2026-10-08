// from server: 100% by auto
// roc 2007-08 004801c0  unit: G3D::Win32Window  size: 502 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004801c0
//
// 004801c0  55                   push ebp
// 004801c1  8bec                 mov ebp, esp
// 004801c3  83e4f8               and esp, 0xfffffff8
// 004801c6  81ec88010000         sub esp, 0x188
// 004801cc  56                   push esi
// 004801cd  8b351ceb7700         mov esi, dword ptr [0x77eb1c]
// 004801d3  57                   push edi
// 004801d4  8d842410010000       lea eax, [esp + 0x110]
// 004801db  50                   push eax
// 004801dc  68a60b0000           push 0xba6
// 004801e1  ffd6                 call esi
// 004801e3  8d8c2490000000       lea ecx, [esp + 0x90]
// 004801ea  51                   push ecx
// 004801eb  68a70b0000           push 0xba7
// 004801f0  ffd6                 call esi
// 004801f2  8d542470             lea edx, [esp + 0x70]
// 004801f6  52                   push edx
// 004801f7  68a20b0000           push 0xba2
// 004801fc  ffd6                 call esi
// 004801fe  8d442460             lea eax, [esp + 0x60]
// 00480202  50                   push eax
// 00480203  68700b0000           push 0xb70
// 00480208  ffd6                 call esi
// 0048020a  d9ee                 fldz 
// 0048020c  d954241c             fst dword ptr [esp + 0x1c]
// 00480210  8d4c2410             lea ecx, [esp + 0x10]
// 00480214  d9542418             fst dword ptr [esp + 0x18]
// 00480218  8d9424b0000000       lea edx, [esp + 0xb0]
// 0048021f  d9542414             fst dword ptr [esp + 0x14]
// 00480223  bf04000000           mov edi, 4
// 00480228  d9542410             fst dword ptr [esp + 0x10]
// 0048022c  d954242c             fst dword ptr [esp + 0x2c]
// 00480230  d9542428             fst dword ptr [esp + 0x28]
// 00480234  d9542424             fst dword ptr [esp + 0x24]
// 00480238  d9542420             fst dword ptr [esp + 0x20]
// 0048023c  d954243c             fst dword ptr [esp + 0x3c]
// 00480240  d9542438             fst dword ptr [esp + 0x38]
// 00480244  d9542434             fst dword ptr [esp + 0x34]
// 00480248  d9542430             fst dword ptr [esp + 0x30]
// 0048024c  d954244c             fst dword ptr [esp + 0x4c]
// 00480250  d9542448             fst dword ptr [esp + 0x48]
// 00480254  d9542444             fst dword ptr [esp + 0x44]
// 00480258  d9542440             fst dword ptr [esp + 0x40]
// 0048025c  8d842418010000       lea eax, [esp + 0x118]
// 00480263  be04000000           mov esi, 4
// 00480268  d911                 fst dword ptr [ecx]
// 0048026a  83c104               add ecx, 4
// 0048026d  dd40f8               fld qword ptr [eax - 8]
// 00480270  83c020               add eax, 0x20
// 00480273  83ee01               sub esi, 1
// 00480276  dc4ae0               fmul qword ptr [edx - 0x20]
// 00480279  d841fc               fadd dword ptr [ecx - 4]
// 0048027c  d95c240c             fstp dword ptr [esp + 0xc]
// 00480280  d944240c             fld dword ptr [esp + 0xc]
// 00480284  dd40e0               fld qword ptr [eax - 0x20]
// 00480287  dc0a                 fmul qword ptr [edx]
// 00480289  dec1                 faddp st(1)
// 0048028b  d95c240c             fstp dword ptr [esp + 0xc]
// 0048028f  d944240c             fld dword ptr [esp + 0xc]
// 00480293  dd40e8               fld qword ptr [eax - 0x18]
// 00480296  dc4a20               fmul qword ptr [edx + 0x20]
// 00480299  dec1                 faddp st(1)
// 0048029b  d95c240c             fstp dword ptr [esp + 0xc]
// 0048029f  d944240c             fld dword ptr [esp + 0xc]
// 004802a3  dd40f0               fld qword ptr [eax - 0x10]
// 004802a6  dc4a40               fmul qword ptr [edx + 0x40]
// 004802a9  dec1                 faddp st(1)
// 004802ab  d959fc               fstp dword ptr [ecx - 4]
// 004802ae  75b8                 jne 0x480268
// 004802b0  83c208               add edx, 8
// 004802b3  83ef01               sub edi, 1
// 004802b6  75a4                 jne 0x48025c
// 004802b8  ddd8                 fstp st(0)
// 004802ba  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004802bd  d94004               fld dword ptr [eax + 4]
// 004802c0  d900                 fld dword ptr [eax]
// 004802c2  d94008               fld dword ptr [eax + 8]
// 004802c5  d9400c               fld dword ptr [eax + 0xc]
// 004802c8  8b4508               mov eax, dword ptr [ebp + 8]
// 004802cb  d9442410             fld dword ptr [esp + 0x10]
// 004802cf  d8cb                 fmul st(3)
// 004802d1  d9442414             fld dword ptr [esp + 0x14]
// 004802d5  d8cd                 fmul st(5)
// 004802d7  dec1                 faddp st(1)
// 004802d9  d9442418             fld dword ptr [esp + 0x18]
// 004802dd  d8cb                 fmul st(3)
// 004802df  dec1                 faddp st(1)
// 004802e1  d944241c             fld dword ptr [esp + 0x1c]
// 004802e5  d8ca                 fmul st(2)
// 004802e7  dec1                 faddp st(1)
// 004802e9  d95c2450             fstp dword ptr [esp + 0x50]
// 004802ed  d9442420             fld dword ptr [esp + 0x20]
// 004802f1  d8cb                 fmul st(3)
// 004802f3  d9442424             fld dword ptr [esp + 0x24]
// 004802f7  d8cd                 fmul st(5)
// 004802f9  dec1                 faddp st(1)
// 004802fb  d9442428             fld dword ptr [esp + 0x28]
// 004802ff  d8cb                 fmul st(3)
// 00480301  dec1                 faddp st(1)
// 00480303  d944242c             fld dword ptr [esp + 0x2c]
// 00480307  d8ca                 fmul st(2)
// 00480309  dec1                 faddp st(1)
// 0048030b  d95c2454             fstp dword ptr [esp + 0x54]
// 0048030f  d9442430             fld dword ptr [esp + 0x30]
// 00480313  d8cb                 fmul st(3)
// 00480315  d9442434             fld dword ptr [esp + 0x34]
// 00480319  d8cd                 fmul st(5)
// 0048031b  dec1                 faddp st(1)
// 0048031d  d9442438             fld dword ptr [esp + 0x38]
// 00480321  d8cb                 fmul st(3)
// 00480323  dec1                 faddp st(1)
// 00480325  d944243c             fld dword ptr [esp + 0x3c]
// 00480329  d8ca                 fmul st(2)
// 0048032b  dec1                 faddp st(1)
// 0048032d  d95c2458             fstp dword ptr [esp + 0x58]
// 00480331  d9442440             fld dword ptr [esp + 0x40]
// 00480335  decb                 fmulp st(3)
// 00480337  d9442444             fld dword ptr [esp + 0x44]
// 0048033b  decc                 fmulp st(4)
// 0048033d  d9ca                 fxch st(2)
// 0048033f  dec3                 faddp st(3)
// 00480341  d84c2448             fmul dword ptr [esp + 0x48]
// 00480345  dec2                 faddp st(2)
// 00480347  d84c244c             fmul dword ptr [esp + 0x4c]
// 0048034b  dec1                 faddp st(1)
// 0048034d  d95c245c             fstp dword ptr [esp + 0x5c]
// 00480351  d944245c             fld dword ptr [esp + 0x5c]
// 00480355  d9e8                 fld1 
// 00480357  d9c0                 fld st(0)
// 00480359  def2                 fdivrp st(2)
// 0048035b  d9442450             fld dword ptr [esp + 0x50]
// 0048035f  d8ca                 fmul st(2)
// 00480361  d8c1                 fadd st(1)
// 00480363  dc8c2480000000       fmul qword ptr [esp + 0x80]
// 0048036a  dd05485b7900         fld qword ptr [0x795b48]
// 00480370  dcc9                 fmul st(1), st(0)
// 00480372  d9c9                 fxch st(1)
// 00480374  dc442470             fadd qword ptr [esp + 0x70]
// 00480378  d918                 fstp dword ptr [eax]
// 0048037a  d9442454             fld dword ptr [esp + 0x54]
// 0048037e  d8cb                 fmul st(3)
// 00480380  deea                 fsubp st(2)
// 00480382  d9c9                 fxch st(1)
// 00480384  dc8c2488000000       fmul qword ptr [esp + 0x88]
// 0048038b  dec9                 fmulp st(1)
// 0048038d  dc442478             fadd qword ptr [esp + 0x78]
// 00480391  d95804               fstp dword ptr [eax + 4]
// 00480394  d9442458             fld dword ptr [esp + 0x58]
// 00480398  d8c9                 fmul st(1)
// 0048039a  dd442468             fld qword ptr [esp + 0x68]
// 0048039e  dd442460             fld qword ptr [esp + 0x60]
// 004803a2  dce9                 fsub st(1), st(0)
// 004803a4  d9ca                 fxch st(2)
// 004803a6  dec9                 fmulp st(1)
// 004803a8  5f                   pop edi
// 004803a9  5e                   pop esi
// 004803aa  dec1                 faddp st(1)
// 004803ac  d95808               fstp dword ptr [eax + 8]
// 004803af  d9580c               fstp dword ptr [eax + 0xc]
// 004803b2  8be5                 mov esp, ebp
// 004803b4  5d                   pop ebp
// 004803b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glToScreen@G3D@@YA?AVVector4@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
