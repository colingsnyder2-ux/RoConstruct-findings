// roc 2010-06 008916f0  unit: CXTColorBase  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008916f0
//
// 008916f0  83ec10               sub esp, 0x10
// 008916f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008916f7  0fb6c8               movzx ecx, al
// 008916fa  894c2414             mov dword ptr [esp + 0x14], ecx
// 008916fe  8bd0                 mov edx, eax
// 00891700  c1ea08               shr edx, 8
// 00891703  db442414             fild dword ptr [esp + 0x14]
// 00891707  0fb6ca               movzx ecx, dl
// 0089170a  dd058076a000         fld qword ptr [0xa07680]
// 00891710  dcf9                 fdiv st(1), st(0)
// 00891712  c1e810               shr eax, 0x10
// 00891715  894c2414             mov dword ptr [esp + 0x14], ecx
// 00891719  0fb6d0               movzx edx, al
// 0089171c  d9c9                 fxch st(1)
// 0089171e  dd1424               fst qword ptr [esp]
// 00891721  db442414             fild dword ptr [esp + 0x14]
// 00891725  89542414             mov dword ptr [esp + 0x14], edx
// 00891729  d8f2                 fdiv st(2)
// 0089172b  db442414             fild dword ptr [esp + 0x14]
// 0089172f  def3                 fdivrp st(3)
// 00891731  d8d2                 fcom st(2)
// 00891733  dfe0                 fnstsw ax
// 00891735  f6c441               test ah, 0x41
// 00891738  7504                 jne 0x89173e
// 0089173a  d9c0                 fld st(0)
// 0089173c  eb02                 jmp 0x891740
// 0089173e  d9c2                 fld st(2)
// 00891740  d8da                 fcomp st(2)
// 00891742  dfe0                 fnstsw ax
// 00891744  f6c405               test ah, 5
// 00891747  7a04                 jp 0x89174d
// 00891749  d9c1                 fld st(1)
// 0089174b  eb0f                 jmp 0x89175c
// 0089174d  d8d2                 fcom st(2)
// 0089174f  dfe0                 fnstsw ax
// 00891751  f6c441               test ah, 0x41
// 00891754  7504                 jne 0x89175a
// 00891756  d9c0                 fld st(0)
// 00891758  eb02                 jmp 0x89175c
// 0089175a  d9c2                 fld st(2)
// 0089175c  d9c9                 fxch st(1)
// 0089175e  d8d3                 fcom st(3)
// 00891760  dfe0                 fnstsw ax
// 00891762  f6c405               test ah, 5
// 00891765  7a04                 jp 0x89176b
// 00891767  d9c0                 fld st(0)
// 00891769  eb02                 jmp 0x89176d
// 0089176b  d9c3                 fld st(3)
// 0089176d  d8db                 fcomp st(3)
// 0089176f  dfe0                 fnstsw ax
// 00891771  f6c441               test ah, 0x41
// 00891774  7417                 je 0x89178d
// 00891776  ddda                 fstp st(2)
// 00891778  d9c9                 fxch st(1)
// 0089177a  d8d2                 fcom st(2)
// 0089177c  dfe0                 fnstsw ax
// 0089177e  f6c405               test ah, 5
// 00891781  7a04                 jp 0x891787
// 00891783  d9c0                 fld st(0)
// 00891785  eb02                 jmp 0x891789
// 00891787  d9c2                 fld st(2)
// 00891789  d9ca                 fxch st(2)
// 0089178b  d9c9                 fxch st(1)
// 0089178d  d9c2                 fld st(2)
// 0089178f  d8c2                 fadd st(2)
// 00891791  d9c0                 fld st(0)
// 00891793  dd057850a100         fld qword ptr [0xa15078]
// 00891799  dcc9                 fmul st(1), st(0)
// 0089179b  d9c9                 fxch st(1)
// 0089179d  dd542408             fst qword ptr [esp + 8]
// 008917a1  d9c5                 fld st(5)
// 008917a3  dded                 fucomp st(5)
// 008917a5  dfe0                 fnstsw ax
// 008917a7  f6c444               test ah, 0x44
// 008917aa  7a39                 jp 0x8917e5
// 008917ac  8b442420             mov eax, dword ptr [esp + 0x20]
// 008917b0  ddd9                 fstp st(1)
// 008917b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008917b6  dddc                 fstp st(4)
// 008917b8  ddda                 fstp st(2)
// 008917ba  c70000000000         mov dword ptr [eax], 0
// 008917c0  ddd8                 fstp st(0)
// 008917c2  c70100000000         mov dword ptr [ecx], 0
// 008917c8  ddd8                 fstp st(0)
// 008917ca  ddd9                 fstp st(1)
// 008917cc  dd058076a000         fld qword ptr [0xa07680]
// 008917d2  dec9                 fmulp st(1)
// 008917d4  e85776f1ff           call 0x7a8e30
// 008917d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 008917dd  8902                 mov dword ptr [edx], eax
// 008917df  83c410               add esp, 0x10
// 008917e2  c21000               ret 0x10
// 008917e5  ded9                 fcompp 
// 008917e7  dfe0                 fnstsw ax
// 008917e9  dd05907aa100         fld qword ptr [0xa17a90]
// 008917ef  f6c405               test ah, 5
// 008917f2  7a0a                 jp 0x8917fe
// 008917f4  d9c3                 fld st(3)
// 008917f6  dee5                 fsubrp st(5)
// 008917f8  d9c4                 fld st(4)
// 008917fa  def2                 fdivrp st(2)
// 008917fc  eb14                 jmp 0x891812
// 008917fe  ddd9                 fstp st(1)
// 00891800  d9c2                 fld st(2)
// 00891802  d8e4                 fsub st(4)
// 00891804  d9c1                 fld st(1)
// 00891806  d8e4                 fsub st(4)
// 00891808  dee5                 fsubrp st(5)
// 0089180a  d9c0                 fld st(0)
// 0089180c  def5                 fdivrp st(5)
// 0089180e  d9cc                 fxch st(4)
// 00891810  d9c9                 fxch st(1)
// 00891812  d9c3                 fld st(3)
// 00891814  dd0424               fld qword ptr [esp]
// 00891817  dde1                 fucom st(1)
// 00891819  dfe0                 fnstsw ax
// 0089181b  ddd9                 fstp st(1)
// 0089181d  f6c444               test ah, 0x44
// 00891820  7a0e                 jp 0x891830
// 00891822  ddd8                 fstp st(0)
// 00891824  dddb                 fstp st(3)
// 00891826  ddda                 fstp st(2)
// 00891828  dee3                 fsubrp st(3)
// 0089182a  d9ca                 fxch st(2)
// 0089182c  def1                 fdivrp st(1)
// 0089182e  eb27                 jmp 0x891857
// 00891830  d9cc                 fxch st(4)
// 00891832  ddeb                 fucomp st(3)
// 00891834  dfe0                 fnstsw ax
// 00891836  f6c444               test ah, 0x44
// 00891839  7a0e                 jp 0x891849
// 0089183b  ddda                 fstp st(2)
// 0089183d  d9cc                 fxch st(4)
// 0089183f  dee2                 fsubrp st(2)
// 00891841  d9c9                 fxch st(1)
// 00891843  def2                 fdivrp st(2)
// 00891845  dec1                 faddp st(1)
// 00891847  eb0e                 jmp 0x891857
// 00891849  dddd                 fstp st(5)
// 0089184b  dddc                 fstp st(4)
// 0089184d  dee9                 fsubp st(1)
// 0089184f  def1                 fdivrp st(1)
// 00891851  dc055804a200         fadd qword ptr [0xa20458]
// 00891857  dc35a0f8a600         fdiv qword ptr [0xa6f8a0]
// 0089185d  d9ee                 fldz 
// 0089185f  d8d9                 fcomp st(1)
// 00891861  dfe0                 fnstsw ax
// 00891863  f6c441               test ah, 0x41
// 00891866  7506                 jne 0x89186e
// 00891868  dc054052a000         fadd qword ptr [0xa05240]
// 0089186e  dd058076a000         fld qword ptr [0xa07680]
// 00891874  dcc9                 fmul st(1), st(0)
// 00891876  d9c9                 fxch st(1)
// 00891878  e8b375f1ff           call 0x7a8e30
// 0089187d  dcc9                 fmul st(1), st(0)
// 0089187f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00891883  d9c9                 fxch st(1)
// 00891885  8902                 mov dword ptr [edx], eax
// 00891887  e8a475f1ff           call 0x7a8e30
// 0089188c  dd442408             fld qword ptr [esp + 8]
// 00891890  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00891894  d9c9                 fxch st(1)
// 00891896  dec9                 fmulp st(1)
// 00891898  8901                 mov dword ptr [ecx], eax
// 0089189a  e89175f1ff           call 0x7a8e30
// 0089189f  8b542418             mov edx, dword ptr [esp + 0x18]
// 008918a3  8902                 mov dword ptr [edx], eax
// 008918a5  83c410               add esp, 0x10
// 008918a8  c21000               ret 0x10
// copied from an identical function in another client (function ?RGBtoHSL@CXTPColorPageCustom@@QAEXKPAH00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp