// roc 2012-06 00a626e0  unit: CXTColorBase  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a626e0
//
// 00a626e0  83ec10               sub esp, 0x10
// 00a626e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a626e7  0fb6c8               movzx ecx, al
// 00a626ea  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a626ee  8bd0                 mov edx, eax
// 00a626f0  c1ea08               shr edx, 8
// 00a626f3  db442414             fild dword ptr [esp + 0x14]
// 00a626f7  0fb6ca               movzx ecx, dl
// 00a626fa  dd05383bb500         fld qword ptr [0xb53b38]
// 00a62700  dcf9                 fdiv st(1), st(0)
// 00a62702  c1e810               shr eax, 0x10
// 00a62705  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a62709  0fb6d0               movzx edx, al
// 00a6270c  d9c9                 fxch st(1)
// 00a6270e  dd1424               fst qword ptr [esp]
// 00a62711  db442414             fild dword ptr [esp + 0x14]
// 00a62715  89542414             mov dword ptr [esp + 0x14], edx
// 00a62719  d8f2                 fdiv st(2)
// 00a6271b  db442414             fild dword ptr [esp + 0x14]
// 00a6271f  def3                 fdivrp st(3)
// 00a62721  d8d2                 fcom st(2)
// 00a62723  dfe0                 fnstsw ax
// 00a62725  f6c441               test ah, 0x41
// 00a62728  7504                 jne 0xa6272e
// 00a6272a  d9c0                 fld st(0)
// 00a6272c  eb02                 jmp 0xa62730
// 00a6272e  d9c2                 fld st(2)
// 00a62730  d8da                 fcomp st(2)
// 00a62732  dfe0                 fnstsw ax
// 00a62734  f6c405               test ah, 5
// 00a62737  7a04                 jp 0xa6273d
// 00a62739  d9c1                 fld st(1)
// 00a6273b  eb0f                 jmp 0xa6274c
// 00a6273d  d8d2                 fcom st(2)
// 00a6273f  dfe0                 fnstsw ax
// 00a62741  f6c441               test ah, 0x41
// 00a62744  7504                 jne 0xa6274a
// 00a62746  d9c0                 fld st(0)
// 00a62748  eb02                 jmp 0xa6274c
// 00a6274a  d9c2                 fld st(2)
// 00a6274c  d9c9                 fxch st(1)
// 00a6274e  d8d3                 fcom st(3)
// 00a62750  dfe0                 fnstsw ax
// 00a62752  f6c405               test ah, 5
// 00a62755  7a04                 jp 0xa6275b
// 00a62757  d9c0                 fld st(0)
// 00a62759  eb02                 jmp 0xa6275d
// 00a6275b  d9c3                 fld st(3)
// 00a6275d  d8db                 fcomp st(3)
// 00a6275f  dfe0                 fnstsw ax
// 00a62761  f6c441               test ah, 0x41
// 00a62764  7417                 je 0xa6277d
// 00a62766  ddda                 fstp st(2)
// 00a62768  d9c9                 fxch st(1)
// 00a6276a  d8d2                 fcom st(2)
// 00a6276c  dfe0                 fnstsw ax
// 00a6276e  f6c405               test ah, 5
// 00a62771  7a04                 jp 0xa62777
// 00a62773  d9c0                 fld st(0)
// 00a62775  eb02                 jmp 0xa62779
// 00a62777  d9c2                 fld st(2)
// 00a62779  d9ca                 fxch st(2)
// 00a6277b  d9c9                 fxch st(1)
// 00a6277d  d9c2                 fld st(2)
// 00a6277f  d8c2                 fadd st(2)
// 00a62781  d9c0                 fld st(0)
// 00a62783  dd0500a2b600         fld qword ptr [0xb6a200]
// 00a62789  dcc9                 fmul st(1), st(0)
// 00a6278b  d9c9                 fxch st(1)
// 00a6278d  dd542408             fst qword ptr [esp + 8]
// 00a62791  d9c5                 fld st(5)
// 00a62793  dded                 fucomp st(5)
// 00a62795  dfe0                 fnstsw ax
// 00a62797  f6c444               test ah, 0x44
// 00a6279a  7a39                 jp 0xa627d5
// 00a6279c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a627a0  ddd9                 fstp st(1)
// 00a627a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a627a6  dddc                 fstp st(4)
// 00a627a8  ddda                 fstp st(2)
// 00a627aa  c70000000000         mov dword ptr [eax], 0
// 00a627b0  ddd8                 fstp st(0)
// 00a627b2  c70100000000         mov dword ptr [ecx], 0
// 00a627b8  ddd8                 fstp st(0)
// 00a627ba  ddd9                 fstp st(1)
// 00a627bc  dd05383bb500         fld qword ptr [0xb53b38]
// 00a627c2  dec9                 fmulp st(1)
// 00a627c4  e8e70df2ff           call 0x9835b0
// 00a627c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a627cd  8902                 mov dword ptr [edx], eax
// 00a627cf  83c410               add esp, 0x10
// 00a627d2  c21000               ret 0x10
// 00a627d5  ded9                 fcompp 
// 00a627d7  dfe0                 fnstsw ax
// 00a627d9  dd0578cdb500         fld qword ptr [0xb5cd78]
// 00a627df  f6c405               test ah, 5
// 00a627e2  7a0a                 jp 0xa627ee
// 00a627e4  d9c3                 fld st(3)
// 00a627e6  dee5                 fsubrp st(5)
// 00a627e8  d9c4                 fld st(4)
// 00a627ea  def2                 fdivrp st(2)
// 00a627ec  eb14                 jmp 0xa62802
// 00a627ee  ddd9                 fstp st(1)
// 00a627f0  d9c2                 fld st(2)
// 00a627f2  d8e4                 fsub st(4)
// 00a627f4  d9c1                 fld st(1)
// 00a627f6  d8e4                 fsub st(4)
// 00a627f8  dee5                 fsubrp st(5)
// 00a627fa  d9c0                 fld st(0)
// 00a627fc  def5                 fdivrp st(5)
// 00a627fe  d9cc                 fxch st(4)
// 00a62800  d9c9                 fxch st(1)
// 00a62802  d9c3                 fld st(3)
// 00a62804  dd0424               fld qword ptr [esp]
// 00a62807  dde1                 fucom st(1)
// 00a62809  dfe0                 fnstsw ax
// 00a6280b  ddd9                 fstp st(1)
// 00a6280d  f6c444               test ah, 0x44
// 00a62810  7a0e                 jp 0xa62820
// 00a62812  ddd8                 fstp st(0)
// 00a62814  dddb                 fstp st(3)
// 00a62816  ddda                 fstp st(2)
// 00a62818  dee3                 fsubrp st(3)
// 00a6281a  d9ca                 fxch st(2)
// 00a6281c  def1                 fdivrp st(1)
// 00a6281e  eb27                 jmp 0xa62847
// 00a62820  d9cc                 fxch st(4)
// 00a62822  ddeb                 fucomp st(3)
// 00a62824  dfe0                 fnstsw ax
// 00a62826  f6c444               test ah, 0x44
// 00a62829  7a0e                 jp 0xa62839
// 00a6282b  ddda                 fstp st(2)
// 00a6282d  d9cc                 fxch st(4)
// 00a6282f  dee2                 fsubrp st(2)
// 00a62831  d9c9                 fxch st(1)
// 00a62833  def2                 fdivrp st(2)
// 00a62835  dec1                 faddp st(1)
// 00a62837  eb0e                 jmp 0xa62847
// 00a62839  dddd                 fstp st(5)
// 00a6283b  dddc                 fstp st(4)
// 00a6283d  dee9                 fsubp st(1)
// 00a6283f  def1                 fdivrp st(1)
// 00a62841  dc05b0b5b600         fadd qword ptr [0xb6b5b0]
// 00a62847  dc35604ac200         fdiv qword ptr [0xc24a60]
// 00a6284d  d9ee                 fldz 
// 00a6284f  d8d9                 fcomp st(1)
// 00a62851  dfe0                 fnstsw ax
// 00a62853  f6c441               test ah, 0x41
// 00a62856  7506                 jne 0xa6285e
// 00a62858  dc0570fdb400         fadd qword ptr [0xb4fd70]
// 00a6285e  dd05383bb500         fld qword ptr [0xb53b38]
// 00a62864  dcc9                 fmul st(1), st(0)
// 00a62866  d9c9                 fxch st(1)
// 00a62868  e8430df2ff           call 0x9835b0
// 00a6286d  dcc9                 fmul st(1), st(0)
// 00a6286f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a62873  d9c9                 fxch st(1)
// 00a62875  8902                 mov dword ptr [edx], eax
// 00a62877  e8340df2ff           call 0x9835b0
// 00a6287c  dd442408             fld qword ptr [esp + 8]
// 00a62880  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a62884  d9c9                 fxch st(1)
// 00a62886  dec9                 fmulp st(1)
// 00a62888  8901                 mov dword ptr [ecx], eax
// 00a6288a  e8210df2ff           call 0x9835b0
// 00a6288f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a62893  8902                 mov dword ptr [edx], eax
// 00a62895  83c410               add esp, 0x10
// 00a62898  c21000               ret 0x10
// copied from an identical function in another client (function ?RGBtoHSL@CXTPColorPageCustom@@QAEXKPAH00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp