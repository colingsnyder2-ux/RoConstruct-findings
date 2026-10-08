// roc 2007-03 0047e670  unit: seg_00470000  size: 502 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e670
//
// 0047e670  55                   push ebp
// 0047e671  8bec                 mov ebp, esp
// 0047e673  83e4f8               and esp, 0xfffffff8
// 0047e676  81ec88010000         sub esp, 0x188
// 0047e67c  56                   push esi
// 0047e67d  8b35a0eb7700         mov esi, dword ptr [0x77eba0]
// 0047e683  57                   push edi
// 0047e684  8d842410010000       lea eax, [esp + 0x110]
// 0047e68b  50                   push eax
// 0047e68c  68a60b0000           push 0xba6
// 0047e691  ffd6                 call esi
// 0047e693  8d8c2490000000       lea ecx, [esp + 0x90]
// 0047e69a  51                   push ecx
// 0047e69b  68a70b0000           push 0xba7
// 0047e6a0  ffd6                 call esi
// 0047e6a2  8d542470             lea edx, [esp + 0x70]
// 0047e6a6  52                   push edx
// 0047e6a7  68a20b0000           push 0xba2
// 0047e6ac  ffd6                 call esi
// 0047e6ae  8d442460             lea eax, [esp + 0x60]
// 0047e6b2  50                   push eax
// 0047e6b3  68700b0000           push 0xb70
// 0047e6b8  ffd6                 call esi
// 0047e6ba  d9ee                 fldz 
// 0047e6bc  d954241c             fst dword ptr [esp + 0x1c]
// 0047e6c0  8d4c2410             lea ecx, [esp + 0x10]
// 0047e6c4  d9542418             fst dword ptr [esp + 0x18]
// 0047e6c8  8d9424b0000000       lea edx, [esp + 0xb0]
// 0047e6cf  d9542414             fst dword ptr [esp + 0x14]
// 0047e6d3  bf04000000           mov edi, 4
// 0047e6d8  d9542410             fst dword ptr [esp + 0x10]
// 0047e6dc  d954242c             fst dword ptr [esp + 0x2c]
// 0047e6e0  d9542428             fst dword ptr [esp + 0x28]
// 0047e6e4  d9542424             fst dword ptr [esp + 0x24]
// 0047e6e8  d9542420             fst dword ptr [esp + 0x20]
// 0047e6ec  d954243c             fst dword ptr [esp + 0x3c]
// 0047e6f0  d9542438             fst dword ptr [esp + 0x38]
// 0047e6f4  d9542434             fst dword ptr [esp + 0x34]
// 0047e6f8  d9542430             fst dword ptr [esp + 0x30]
// 0047e6fc  d954244c             fst dword ptr [esp + 0x4c]
// 0047e700  d9542448             fst dword ptr [esp + 0x48]
// 0047e704  d9542444             fst dword ptr [esp + 0x44]
// 0047e708  d9542440             fst dword ptr [esp + 0x40]
// 0047e70c  8d842418010000       lea eax, [esp + 0x118]
// 0047e713  be04000000           mov esi, 4
// 0047e718  d911                 fst dword ptr [ecx]
// 0047e71a  83c104               add ecx, 4
// 0047e71d  dd40f8               fld qword ptr [eax - 8]
// 0047e720  83c020               add eax, 0x20
// 0047e723  83ee01               sub esi, 1
// 0047e726  dc4ae0               fmul qword ptr [edx - 0x20]
// 0047e729  d841fc               fadd dword ptr [ecx - 4]
// 0047e72c  d95c240c             fstp dword ptr [esp + 0xc]
// 0047e730  d944240c             fld dword ptr [esp + 0xc]
// 0047e734  dd40e0               fld qword ptr [eax - 0x20]
// 0047e737  dc0a                 fmul qword ptr [edx]
// 0047e739  dec1                 faddp st(1)
// 0047e73b  d95c240c             fstp dword ptr [esp + 0xc]
// 0047e73f  d944240c             fld dword ptr [esp + 0xc]
// 0047e743  dd40e8               fld qword ptr [eax - 0x18]
// 0047e746  dc4a20               fmul qword ptr [edx + 0x20]
// 0047e749  dec1                 faddp st(1)
// 0047e74b  d95c240c             fstp dword ptr [esp + 0xc]
// 0047e74f  d944240c             fld dword ptr [esp + 0xc]
// 0047e753  dd40f0               fld qword ptr [eax - 0x10]
// 0047e756  dc4a40               fmul qword ptr [edx + 0x40]
// 0047e759  dec1                 faddp st(1)
// 0047e75b  d959fc               fstp dword ptr [ecx - 4]
// 0047e75e  75b8                 jne 0x47e718
// 0047e760  83c208               add edx, 8
// 0047e763  83ef01               sub edi, 1
// 0047e766  75a4                 jne 0x47e70c
// 0047e768  ddd8                 fstp st(0)
// 0047e76a  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0047e76d  d94004               fld dword ptr [eax + 4]
// 0047e770  d900                 fld dword ptr [eax]
// 0047e772  d94008               fld dword ptr [eax + 8]
// 0047e775  d9400c               fld dword ptr [eax + 0xc]
// 0047e778  8b4508               mov eax, dword ptr [ebp + 8]
// 0047e77b  d9442410             fld dword ptr [esp + 0x10]
// 0047e77f  d8cb                 fmul st(3)
// 0047e781  d9442414             fld dword ptr [esp + 0x14]
// 0047e785  d8cd                 fmul st(5)
// 0047e787  dec1                 faddp st(1)
// 0047e789  d9442418             fld dword ptr [esp + 0x18]
// 0047e78d  d8cb                 fmul st(3)
// 0047e78f  dec1                 faddp st(1)
// 0047e791  d944241c             fld dword ptr [esp + 0x1c]
// 0047e795  d8ca                 fmul st(2)
// 0047e797  dec1                 faddp st(1)
// 0047e799  d95c2450             fstp dword ptr [esp + 0x50]
// 0047e79d  d9442420             fld dword ptr [esp + 0x20]
// 0047e7a1  d8cb                 fmul st(3)
// 0047e7a3  d9442424             fld dword ptr [esp + 0x24]
// 0047e7a7  d8cd                 fmul st(5)
// 0047e7a9  dec1                 faddp st(1)
// 0047e7ab  d9442428             fld dword ptr [esp + 0x28]
// 0047e7af  d8cb                 fmul st(3)
// 0047e7b1  dec1                 faddp st(1)
// 0047e7b3  d944242c             fld dword ptr [esp + 0x2c]
// 0047e7b7  d8ca                 fmul st(2)
// 0047e7b9  dec1                 faddp st(1)
// 0047e7bb  d95c2454             fstp dword ptr [esp + 0x54]
// 0047e7bf  d9442430             fld dword ptr [esp + 0x30]
// 0047e7c3  d8cb                 fmul st(3)
// 0047e7c5  d9442434             fld dword ptr [esp + 0x34]
// 0047e7c9  d8cd                 fmul st(5)
// 0047e7cb  dec1                 faddp st(1)
// 0047e7cd  d9442438             fld dword ptr [esp + 0x38]
// 0047e7d1  d8cb                 fmul st(3)
// 0047e7d3  dec1                 faddp st(1)
// 0047e7d5  d944243c             fld dword ptr [esp + 0x3c]
// 0047e7d9  d8ca                 fmul st(2)
// 0047e7db  dec1                 faddp st(1)
// 0047e7dd  d95c2458             fstp dword ptr [esp + 0x58]
// 0047e7e1  d9442440             fld dword ptr [esp + 0x40]
// 0047e7e5  decb                 fmulp st(3)
// 0047e7e7  d9442444             fld dword ptr [esp + 0x44]
// 0047e7eb  decc                 fmulp st(4)
// 0047e7ed  d9ca                 fxch st(2)
// 0047e7ef  dec3                 faddp st(3)
// 0047e7f1  d84c2448             fmul dword ptr [esp + 0x48]
// 0047e7f5  dec2                 faddp st(2)
// 0047e7f7  d84c244c             fmul dword ptr [esp + 0x4c]
// 0047e7fb  dec1                 faddp st(1)
// 0047e7fd  d95c245c             fstp dword ptr [esp + 0x5c]
// 0047e801  d944245c             fld dword ptr [esp + 0x5c]
// 0047e805  d9e8                 fld1 
// 0047e807  d9c0                 fld st(0)
// 0047e809  def2                 fdivrp st(2)
// 0047e80b  d9442450             fld dword ptr [esp + 0x50]
// 0047e80f  d8ca                 fmul st(2)
// 0047e811  d8c1                 fadd st(1)
// 0047e813  dc8c2480000000       fmul qword ptr [esp + 0x80]
// 0047e81a  dd05584f7900         fld qword ptr [0x794f58]
// 0047e820  dcc9                 fmul st(1), st(0)
// 0047e822  d9c9                 fxch st(1)
// 0047e824  dc442470             fadd qword ptr [esp + 0x70]
// 0047e828  d918                 fstp dword ptr [eax]
// 0047e82a  d9442454             fld dword ptr [esp + 0x54]
// 0047e82e  d8cb                 fmul st(3)
// 0047e830  deea                 fsubp st(2)
// 0047e832  d9c9                 fxch st(1)
// 0047e834  dc8c2488000000       fmul qword ptr [esp + 0x88]
// 0047e83b  dec9                 fmulp st(1)
// 0047e83d  dc442478             fadd qword ptr [esp + 0x78]
// 0047e841  d95804               fstp dword ptr [eax + 4]
// 0047e844  d9442458             fld dword ptr [esp + 0x58]
// 0047e848  d8c9                 fmul st(1)
// 0047e84a  dd442468             fld qword ptr [esp + 0x68]
// 0047e84e  dd442460             fld qword ptr [esp + 0x60]
// 0047e852  dce9                 fsub st(1), st(0)
// 0047e854  d9ca                 fxch st(2)
// 0047e856  dec9                 fmulp st(1)
// 0047e858  5f                   pop edi
// 0047e859  5e                   pop esi
// 0047e85a  dec1                 faddp st(1)
// 0047e85c  d95808               fstp dword ptr [eax + 8]
// 0047e85f  d9580c               fstp dword ptr [eax + 0xc]
// 0047e862  8be5                 mov esp, ebp
// 0047e864  5d                   pop ebp
// 0047e865  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\glcalls.cpp (function ?glToScreen@G3D@@YA?AVVector4@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/glcalls.cpp
