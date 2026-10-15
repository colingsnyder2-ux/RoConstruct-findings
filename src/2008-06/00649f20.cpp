// roc 2008-06 00649f20  unit: RBX::Ball  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649f20
//
// 00649f20  83ec64               sub esp, 0x64
// 00649f23  53                   push ebx
// 00649f24  55                   push ebp
// 00649f25  56                   push esi
// 00649f26  8bf1                 mov esi, ecx
// 00649f28  d9460c               fld dword ptr [esi + 0xc]
// 00649f2b  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00649f2f  d826                 fsub dword ptr [esi]
// 00649f31  57                   push edi
// 00649f32  d94610               fld dword ptr [esi + 0x10]
// 00649f35  8d5c245c             lea ebx, [esp + 0x5c]
// 00649f39  d86604               fsub dword ptr [esi + 4]
// 00649f3c  33ff                 xor edi, edi
// 00649f3e  d94614               fld dword ptr [esi + 0x14]
// 00649f41  d86608               fsub dword ptr [esi + 8]
// 00649f44  d9c1                 fld st(1)
// 00649f46  d8ca                 fmul st(2)
// 00649f48  d9c1                 fld st(1)
// 00649f4a  d8ca                 fmul st(2)
// 00649f4c  dec1                 faddp st(1)
// 00649f4e  d9c3                 fld st(3)
// 00649f50  d8cc                 fmul st(4)
// 00649f52  dec1                 faddp st(1)
// 00649f54  d9fa                 fsqrt 
// 00649f56  d9e8                 fld1 
// 00649f58  d9c0                 fld st(0)
// 00649f5a  def2                 fdivrp st(2)
// 00649f5c  d9c1                 fld st(1)
// 00649f5e  decd                 fmulp st(5)
// 00649f60  d9cc                 fxch st(4)
// 00649f62  d9542438             fst dword ptr [esp + 0x38]
// 00649f66  d9cb                 fxch st(3)
// 00649f68  d8c9                 fmul st(1)
// 00649f6a  d954243c             fst dword ptr [esp + 0x3c]
// 00649f6e  d9ca                 fxch st(2)
// 00649f70  dec9                 fmulp st(1)
// 00649f72  d9542440             fst dword ptr [esp + 0x40]
// 00649f76  d95c2464             fstp dword ptr [esp + 0x64]
// 00649f7a  d9c9                 fxch st(1)
// 00649f7c  d95c245c             fstp dword ptr [esp + 0x5c]
// 00649f80  d95c2460             fstp dword ptr [esp + 0x60]
// 00649f84  d94624               fld dword ptr [esi + 0x24]
// 00649f87  d826                 fsub dword ptr [esi]
// 00649f89  d94628               fld dword ptr [esi + 0x28]
// 00649f8c  d86604               fsub dword ptr [esi + 4]
// 00649f8f  d9462c               fld dword ptr [esi + 0x2c]
// 00649f92  d86608               fsub dword ptr [esi + 8]
// 00649f95  d9c0                 fld st(0)
// 00649f97  d8c9                 fmul st(1)
// 00649f99  d9c2                 fld st(2)
// 00649f9b  d8cb                 fmul st(3)
// 00649f9d  dec1                 faddp st(1)
// 00649f9f  d9c3                 fld st(3)
// 00649fa1  d8cc                 fmul st(4)
// 00649fa3  dec1                 faddp st(1)
// 00649fa5  d9fa                 fsqrt 
// 00649fa7  defc                 fdivp st(4)
// 00649fa9  d9c3                 fld st(3)
// 00649fab  decb                 fmulp st(3)
// 00649fad  d9ca                 fxch st(2)
// 00649faf  d954242c             fst dword ptr [esp + 0x2c]
// 00649fb3  d9c9                 fxch st(1)
// 00649fb5  d8cb                 fmul st(3)
// 00649fb7  d9542430             fst dword ptr [esp + 0x30]
// 00649fbb  d9ca                 fxch st(2)
// 00649fbd  decb                 fmulp st(3)
// 00649fbf  d9ca                 fxch st(2)
// 00649fc1  d9542434             fst dword ptr [esp + 0x34]
// 00649fc5  d95c2470             fstp dword ptr [esp + 0x70]
// 00649fc9  d9c9                 fxch st(1)
// 00649fcb  d95c2468             fstp dword ptr [esp + 0x68]
// 00649fcf  d95c246c             fstp dword ptr [esp + 0x6c]
// 00649fd3  8d442418             lea eax, [esp + 0x18]
// 00649fd7  50                   push eax
// 00649fd8  8d4c2414             lea ecx, [esp + 0x14]
// 00649fdc  51                   push ecx
// 00649fdd  53                   push ebx
// 00649fde  56                   push esi
// 00649fdf  8bce                 mov ecx, esi
// 00649fe1  e84afdffff           call 0x649d30
// 00649fe6  8d542414             lea edx, [esp + 0x14]
// 00649fea  52                   push edx
// 00649feb  8d842480000000       lea eax, [esp + 0x80]
// 00649ff2  50                   push eax
// 00649ff3  53                   push ebx
// 00649ff4  56                   push esi
// 00649ff5  8bcd                 mov ecx, ebp
// 00649ff7  e834fdffff           call 0x649d30
// 00649ffc  d944247c             fld dword ptr [esp + 0x7c]
// 0064a000  d85c2410             fcomp dword ptr [esp + 0x10]
// 0064a004  dfe0                 fnstsw ax
// 0064a006  f6c441               test ah, 0x41
// 0064a009  8d44247c             lea eax, [esp + 0x7c]
// 0064a00d  7404                 je 0x64a013
// 0064a00f  8d442410             lea eax, [esp + 0x10]
// 0064a013  d900                 fld dword ptr [eax]
// 0064a015  d95c3c24             fstp dword ptr [esp + edi + 0x24]
// 0064a019  d9442418             fld dword ptr [esp + 0x18]
// 0064a01d  d85c2414             fcomp dword ptr [esp + 0x14]
// 0064a021  dfe0                 fnstsw ax
// 0064a023  f6c441               test ah, 0x41
// 0064a026  8d442414             lea eax, [esp + 0x14]
// 0064a02a  7404                 je 0x64a030
// 0064a02c  8d442418             lea eax, [esp + 0x18]
// 0064a030  d900                 fld dword ptr [eax]
// 0064a032  83c704               add edi, 4
// 0064a035  d95c3c18             fstp dword ptr [esp + edi + 0x18]
// 0064a039  83c30c               add ebx, 0xc
// 0064a03c  83ff08               cmp edi, 8
// 0064a03f  7c92                 jl 0x649fd3
// 0064a041  d944242c             fld dword ptr [esp + 0x2c]
// 0064a045  d9442428             fld dword ptr [esp + 0x28]
// 0064a049  dcc9                 fmul st(1), st(0)
// 0064a04b  d9c1                 fld st(1)
// 0064a04d  d9442430             fld dword ptr [esp + 0x30]
// 0064a051  d8ca                 fmul st(2)
// 0064a053  d9542454             fst dword ptr [esp + 0x54]
// 0064a057  d9442434             fld dword ptr [esp + 0x34]
// 0064a05b  decb                 fmulp st(3)
// 0064a05d  d9ca                 fxch st(2)
// 0064a05f  d9542458             fst dword ptr [esp + 0x58]
// 0064a063  d9442438             fld dword ptr [esp + 0x38]
// 0064a067  d944241c             fld dword ptr [esp + 0x1c]
// 0064a06b  dcc9                 fmul st(1), st(0)
// 0064a06d  d9c9                 fxch st(1)
// 0064a06f  d9542444             fst dword ptr [esp + 0x44]
// 0064a073  d944243c             fld dword ptr [esp + 0x3c]
// 0064a077  d8ca                 fmul st(2)
// 0064a079  d9542448             fst dword ptr [esp + 0x48]
// 0064a07d  d9442440             fld dword ptr [esp + 0x40]
// 0064a081  decb                 fmulp st(3)
// 0064a083  d9ca                 fxch st(2)
// 0064a085  d954244c             fst dword ptr [esp + 0x4c]
// 0064a089  d9442444             fld dword ptr [esp + 0x44]
// 0064a08d  dec5                 faddp st(5)
// 0064a08f  d9cc                 fxch st(4)
// 0064a091  d95c245c             fstp dword ptr [esp + 0x5c]
// 0064a095  d9442448             fld dword ptr [esp + 0x48]
// 0064a099  d8442454             fadd dword ptr [esp + 0x54]
// 0064a09d  d95c2460             fstp dword ptr [esp + 0x60]
// 0064a0a1  d944244c             fld dword ptr [esp + 0x4c]
// 0064a0a5  d8442458             fadd dword ptr [esp + 0x58]
// 0064a0a9  d944245c             fld dword ptr [esp + 0x5c]
// 0064a0ad  d806                 fadd dword ptr [esi]
// 0064a0af  d95c2450             fstp dword ptr [esp + 0x50]
// 0064a0b3  d9442460             fld dword ptr [esp + 0x60]
// 0064a0b7  d84604               fadd dword ptr [esi + 4]
// 0064a0ba  d95c2454             fstp dword ptr [esp + 0x54]
// 0064a0be  d84608               fadd dword ptr [esi + 8]
// 0064a0c1  d95c2458             fstp dword ptr [esp + 0x58]
// 0064a0c5  d944242c             fld dword ptr [esp + 0x2c]
// 0064a0c9  d9442420             fld dword ptr [esp + 0x20]
// 0064a0cd  dcc9                 fmul st(1), st(0)
// 0064a0cf  d9c9                 fxch st(1)
// 0064a0d1  d954247c             fst dword ptr [esp + 0x7c]
// 0064a0d5  d95c245c             fstp dword ptr [esp + 0x5c]
// 0064a0d9  d9442430             fld dword ptr [esp + 0x30]
// 0064a0dd  d8c9                 fmul st(1)
// 0064a0df  d9542418             fst dword ptr [esp + 0x18]
// 0064a0e3  d95c2460             fstp dword ptr [esp + 0x60]
// 0064a0e7  d84c2434             fmul dword ptr [esp + 0x34]
// 0064a0eb  d9c0                 fld st(0)
// 0064a0ed  d9ca                 fxch st(2)
// 0064a0ef  d844245c             fadd dword ptr [esp + 0x5c]
// 0064a0f3  d9cb                 fxch st(3)
// 0064a0f5  d8442460             fadd dword ptr [esp + 0x60]
// 0064a0f9  d9cd                 fxch st(5)
// 0064a0fb  dec2                 faddp st(2)
// 0064a0fd  d9ca                 fxch st(2)
// 0064a0ff  d806                 fadd dword ptr [esi]
// 0064a101  d95c242c             fstp dword ptr [esp + 0x2c]
// 0064a105  d9cb                 fxch st(3)
// 0064a107  d84604               fadd dword ptr [esi + 4]
// 0064a10a  d95c2430             fstp dword ptr [esp + 0x30]
// 0064a10e  d9ca                 fxch st(2)
// 0064a110  d84608               fadd dword ptr [esi + 8]
// 0064a113  d95c2434             fstp dword ptr [esp + 0x34]
// 0064a117  d944247c             fld dword ptr [esp + 0x7c]
// 0064a11b  d9442418             fld dword ptr [esp + 0x18]
// 0064a11f  d95c2460             fstp dword ptr [esp + 0x60]
// 0064a123  d9ca                 fxch st(2)
// 0064a125  d95c2464             fstp dword ptr [esp + 0x64]
// 0064a129  d9442438             fld dword ptr [esp + 0x38]
// 0064a12d  d9442424             fld dword ptr [esp + 0x24]
// 0064a131  dcc9                 fmul st(1), st(0)
// 0064a133  d9c9                 fxch st(1)
// 0064a135  d9542444             fst dword ptr [esp + 0x44]
// 0064a139  d944243c             fld dword ptr [esp + 0x3c]
// 0064a13d  d8ca                 fmul st(2)
// 0064a13f  d9542448             fst dword ptr [esp + 0x48]
// 0064a143  d9442440             fld dword ptr [esp + 0x40]
// 0064a147  decb                 fmulp st(3)
// 0064a149  8b442478             mov eax, dword ptr [esp + 0x78]
// 0064a14d  d9ca                 fxch st(2)
// 0064a14f  5f                   pop edi
// 0064a150  d9542448             fst dword ptr [esp + 0x48]
// 0064a154  d9442440             fld dword ptr [esp + 0x40]
// 0064a158  dec5                 faddp st(5)
// 0064a15a  d9cc                 fxch st(4)
// 0064a15c  d95c2434             fstp dword ptr [esp + 0x34]
// 0064a160  d9442444             fld dword ptr [esp + 0x44]
// 0064a164  d844245c             fadd dword ptr [esp + 0x5c]
// 0064a168  d95c2438             fstp dword ptr [esp + 0x38]
// 0064a16c  d9442448             fld dword ptr [esp + 0x48]
// 0064a170  d8442460             fadd dword ptr [esp + 0x60]
// 0064a174  d9442434             fld dword ptr [esp + 0x34]
// 0064a178  d806                 fadd dword ptr [esi]
// 0064a17a  d95c2458             fstp dword ptr [esp + 0x58]
// 0064a17e  d9442438             fld dword ptr [esp + 0x38]
// 0064a182  d84604               fadd dword ptr [esi + 4]
// 0064a185  d9c9                 fxch st(1)
// 0064a187  d84608               fadd dword ptr [esi + 8]
// 0064a18a  d9ca                 fxch st(2)
// 0064a18c  dec7                 faddp st(7)
// 0064a18e  d9ca                 fxch st(2)
// 0064a190  dec5                 faddp st(5)
// 0064a192  d9cb                 fxch st(3)
// 0064a194  dec2                 faddp st(2)
// 0064a196  d9cc                 fxch st(4)
// 0064a198  d806                 fadd dword ptr [esi]
// 0064a19a  d9cb                 fxch st(3)
// 0064a19c  d84604               fadd dword ptr [esi + 4]
// 0064a19f  d9c9                 fxch st(1)
// 0064a1a1  d84608               fadd dword ptr [esi + 8]
// 0064a1a4  5e                   pop esi
// 0064a1a5  d9cb                 fxch st(3)
// 0064a1a7  5d                   pop ebp
// 0064a1a8  5b                   pop ebx
// 0064a1a9  d918                 fstp dword ptr [eax]
// 0064a1ab  d95804               fstp dword ptr [eax + 4]
// 0064a1ae  d9c9                 fxch st(1)
// 0064a1b0  d95808               fstp dword ptr [eax + 8]
// 0064a1b3  d944244c             fld dword ptr [esp + 0x4c]
// 0064a1b7  d9580c               fstp dword ptr [eax + 0xc]
// 0064a1ba  d9c9                 fxch st(1)
// 0064a1bc  d95810               fstp dword ptr [eax + 0x10]
// 0064a1bf  d95814               fstp dword ptr [eax + 0x14]
// 0064a1c2  d944241c             fld dword ptr [esp + 0x1c]
// 0064a1c6  d95818               fstp dword ptr [eax + 0x18]
// 0064a1c9  d9442420             fld dword ptr [esp + 0x20]
// 0064a1cd  d9581c               fstp dword ptr [eax + 0x1c]
// 0064a1d0  d9442424             fld dword ptr [esp + 0x24]
// 0064a1d4  d95820               fstp dword ptr [eax + 0x20]
// 0064a1d7  d9442440             fld dword ptr [esp + 0x40]
// 0064a1db  d95824               fstp dword ptr [eax + 0x24]
// 0064a1de  d9442444             fld dword ptr [esp + 0x44]
// 0064a1e2  d95828               fstp dword ptr [eax + 0x28]
// 0064a1e5  d9442448             fld dword ptr [esp + 0x48]
// 0064a1e9  d9582c               fstp dword ptr [eax + 0x2c]
// 0064a1ec  83c464               add esp, 0x64
// 0064a1ef  c20800               ret 8
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?projectOverlapOnMe@Face@RBX@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
