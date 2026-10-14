// roc 2007-08 005082d0  unit: G3D::GCamera  size: 631 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005082d0
//
// 005082d0  55                   push ebp
// 005082d1  8bec                 mov ebp, esp
// 005082d3  83e4c0               and esp, 0xffffffc0
// 005082d6  6aff                 push -1
// 005082d8  68eaf97400           push 0x74f9ea
// 005082dd  64a100000000         mov eax, dword ptr fs:[0]
// 005082e3  50                   push eax
// 005082e4  83ec68               sub esp, 0x68
// 005082e7  53                   push ebx
// 005082e8  56                   push esi
// 005082e9  57                   push edi
// 005082ea  a188518b00           mov eax, dword ptr [0x8b5188]
// 005082ef  33c4                 xor eax, esp
// 005082f1  50                   push eax
// 005082f2  8d442478             lea eax, [esp + 0x78]
// 005082f6  64a300000000         mov dword ptr fs:[0], eax
// 005082fc  8bf1                 mov esi, ecx
// 005082fe  33ff                 xor edi, edi
// 00508300  897c2424             mov dword ptr [esp + 0x24], edi
// 00508304  0f31                 rdtsc 
// 00508306  89542418             mov dword ptr [esp + 0x18], edx
// 0050830a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050830e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00508312  6a01                 push 1
// 00508314  57                   push edi
// 00508315  57                   push edi
// 00508316  50                   push eax
// 00508317  e834891200           call 0x630c50
// 0050831c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00508320  33db                 xor ebx, ebx
// 00508322  03c1                 add eax, ecx
// 00508324  13d3                 adc edx, ebx
// 00508326  2b4608               sub eax, dword ptr [esi + 8]
// 00508329  1b560c               sbb edx, dword ptr [esi + 0xc]
// 0050832c  894608               mov dword ptr [esi + 8], eax
// 0050832f  89560c               mov dword ptr [esi + 0xc], edx
// 00508332  e8f97bffff           call 0x4fff30
// 00508337  dd54241c             fst qword ptr [esp + 0x1c]
// 0050833b  d9c0                 fld st(0)
// 0050833d  8d5620               lea edx, [esi + 0x20]
// 00508340  dc6610               fsub qword ptr [esi + 0x10]
// 00508343  8d4e48               lea ecx, [esi + 0x48]
// 00508346  dd12                 fst qword ptr [edx]
// 00508348  dd01                 fld qword ptr [ecx]
// 0050834a  d8e1                 fsub st(1)
// 0050834c  d9e1                 fabs 
// 0050834e  dd02                 fld qword ptr [edx]
// 00508350  dc19                 fcomp qword ptr [ecx]
// 00508352  dfe0                 fnstsw ax
// 00508354  f6c441               test ah, 0x41
// 00508357  7402                 je 0x50835b
// 00508359  8bd1                 mov edx, ecx
// 0050835b  dd02                 fld qword ptr [edx]
// 0050835d  dd05485b7900         fld qword ptr [0x795b48]
// 00508363  dcc9                 fmul st(1), st(0)
// 00508365  d9ca                 fxch st(2)
// 00508367  ded9                 fcompp 
// 00508369  dfe0                 fnstsw ax
// 0050836b  f6c441               test ah, 0x41
// 0050836e  7412                 je 0x508382
// 00508370  dd01                 fld qword ptr [ecx]
// 00508372  dc0de0067a00         fmul qword ptr [0x7a06e0]
// 00508378  d9ca                 fxch st(2)
// 0050837a  dc0dd8067a00         fmul qword ptr [0x7a06d8]
// 00508380  dec2                 faddp st(2)
// 00508382  8b5608               mov edx, dword ptr [esi + 8]
// 00508385  d9c9                 fxch st(1)
// 00508387  2b5650               sub edx, dword ptr [esi + 0x50]
// 0050838a  dd19                 fstp qword ptr [ecx]
// 0050838c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050838f  1b4654               sbb eax, dword ptr [esi + 0x54]
// 00508392  895628               mov dword ptr [esi + 0x28], edx
// 00508395  3bc7                 cmp eax, edi
// 00508397  89462c               mov dword ptr [esi + 0x2c], eax
// 0050839a  7f0c                 jg 0x5083a8
// 0050839c  7c04                 jl 0x5083a2
// 0050839e  3bd7                 cmp edx, edi
// 005083a0  7306                 jae 0x5083a8
// 005083a2  897e28               mov dword ptr [esi + 0x28], edi
// 005083a5  897e2c               mov dword ptr [esi + 0x2c], edi
// 005083a8  dd0590657900         fld qword ptr [0x796590]
// 005083ae  dc5e18               fcomp qword ptr [esi + 0x18]
// 005083b1  dfe0                 fnstsw ax
// 005083b3  f6c444               test ah, 0x44
// 005083b6  0f8bd9000000         jnp 0x508495
// 005083bc  d9c1                 fld st(1)
// 005083be  8d5630               lea edx, [esi + 0x30]
// 005083c1  dc6618               fsub qword ptr [esi + 0x18]
// 005083c4  8d4e38               lea ecx, [esi + 0x38]
// 005083c7  d9e8                 fld1 
// 005083c9  def1                 fdivrp st(1)
// 005083cb  dd12                 fst qword ptr [edx]
// 005083cd  dd01                 fld qword ptr [ecx]
// 005083cf  dc0dd0067a00         fmul qword ptr [0x7a06d0]
// 005083d5  d9c1                 fld st(1)
// 005083d7  dc0dc8067a00         fmul qword ptr [0x7a06c8]
// 005083dd  dec1                 faddp st(1)
// 005083df  dd11                 fst qword ptr [ecx]
// 005083e1  d8e1                 fsub st(1)
// 005083e3  d9e1                 fabs 
// 005083e5  dd02                 fld qword ptr [edx]
// 005083e7  dc19                 fcomp qword ptr [ecx]
// 005083e9  dfe0                 fnstsw ax
// 005083eb  f6c441               test ah, 0x41
// 005083ee  7402                 je 0x5083f2
// 005083f0  8bd1                 mov edx, ecx
// 005083f2  dd02                 fld qword ptr [edx]
// 005083f4  dc0dc0067a00         fmul qword ptr [0x7a06c0]
// 005083fa  ded9                 fcompp 
// 005083fc  dfe0                 fnstsw ax
// 005083fe  f6c405               test ah, 5
// 00508401  7a02                 jp 0x508405
// 00508403  dd11                 fst qword ptr [ecx]
// 00508405  d9ee                 fldz 
// 00508407  dc5e40               fcomp qword ptr [esi + 0x40]
// 0050840a  dfe0                 fnstsw ax
// 0050840c  f6c444               test ah, 0x44
// 0050840f  7a07                 jp 0x508418
// 00508411  ddd9                 fstp st(1)
// 00508413  dd5e40               fstp qword ptr [esi + 0x40]
// 00508416  eb7f                 jmp 0x508497
// 00508418  ddd8                 fstp st(0)
// 0050841a  dd05685b7900         fld qword ptr [0x795b68]
// 00508420  dc11                 fcom qword ptr [ecx]
// 00508422  dfe0                 fnstsw ax
// 00508424  f6c401               test ah, 1
// 00508427  7539                 jne 0x508462
// 00508429  dd4640               fld qword ptr [esi + 0x40]
// 0050842c  dc21                 fsub qword ptr [ecx]
// 0050842e  d9e1                 fabs 
// 00508430  dc1db8067a00         fcomp qword ptr [0x7a06b8]
// 00508436  dfe0                 fnstsw ax
// 00508438  f6c441               test ah, 0x41
// 0050843b  7556                 jne 0x508493
// 0050843d  ddda                 fstp st(2)
// 0050843f  83ec08               sub esp, 8
// 00508442  dd01                 fld qword ptr [ecx]
// 00508444  deca                 fmulp st(2)
// 00508446  dec1                 faddp st(1)
// 00508448  dd1c24               fstp qword ptr [esp]
// 0050844b  e8d88c1200           call 0x631128
// 00508450  dc35685b7900         fdiv qword ptr [0x795b68]
// 00508456  83c408               add esp, 8
// 00508459  dd5e40               fstp qword ptr [esi + 0x40]
// 0050845c  dd44241c             fld qword ptr [esp + 0x1c]
// 00508460  eb35                 jmp 0x508497
// 00508462  ddd8                 fstp st(0)
// 00508464  dd4640               fld qword ptr [esi + 0x40]
// 00508467  dc21                 fsub qword ptr [ecx]
// 00508469  d9e1                 fabs 
// 0050846b  dc1db0067a00         fcomp qword ptr [0x7a06b0]
// 00508471  dfe0                 fnstsw ax
// 00508473  f6c441               test ah, 0x41
// 00508476  751d                 jne 0x508495
// 00508478  ddd9                 fstp st(1)
// 0050847a  83ec08               sub esp, 8
// 0050847d  dc01                 fadd qword ptr [ecx]
// 0050847f  dd1c24               fstp qword ptr [esp]
// 00508482  e8a18c1200           call 0x631128
// 00508487  dd5e40               fstp qword ptr [esi + 0x40]
// 0050848a  83c408               add esp, 8
// 0050848d  dd44241c             fld qword ptr [esp + 0x1c]
// 00508491  eb04                 jmp 0x508497
// 00508493  ddd8                 fstp st(0)
// 00508495  ddd8                 fstp st(0)
// 00508497  dd5e18               fstp qword ptr [esi + 0x18]
// 0050849a  381da9098c00         cmp byte ptr [0x8c09a9], bl
// 005084a0  0f858b000000         jne 0x508531
// 005084a6  381e                 cmp byte ptr [esi], bl
// 005084a8  0f8583000000         jne 0x508531
// 005084ae  e8cda3ffff           call 0x502880
// 005084b3  393dfc808900         cmp dword ptr [0x8980fc], edi
// 005084b9  7447                 je 0x508502
// 005084bb  687c067a00           push 0x7a067c
// 005084c0  8d4c242c             lea ecx, [esp + 0x2c]
// 005084c4  ff1598e67700         call dword ptr [0x77e698]
// 005084ca  6a01                 push 1
// 005084cc  68a9098c00           push 0x8c09a9
// 005084d1  6a5b                 push 0x5b
// 005084d3  682c067a00           push 0x7a062c
// 005084d8  8d4c2438             lea ecx, [esp + 0x38]
// 005084dc  51                   push ecx
// 005084dd  6870067a00           push 0x7a0670
// 005084e2  89bc2498000000       mov dword ptr [esp + 0x98], edi
// 005084e9  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 005084f1  ff15fc808900         call dword ptr [0x8980fc]
// 005084f7  83c418               add esp, 0x18
// 005084fa  84c0                 test al, al
// 005084fc  7404                 je 0x508502
// 005084fe  b301                 mov bl, 1
// 00508500  eb02                 jmp 0x508504
// 00508502  32db                 xor bl, bl
// 00508504  f644242401           test byte ptr [esp + 0x24], 1
// 00508509  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 00508514  740a                 je 0x508520
// 00508516  8d4c2428             lea ecx, [esp + 0x28]
// 0050851a  ff15ace67700         call dword ptr [0x77e6ac]
// 00508520  84db                 test bl, bl
// 00508522  7408                 je 0x50852c
// 00508524  6aff                 push -1
// 00508526  ff1538e97700         call dword ptr [0x77e938]
// 0050852c  e8bfa3ffff           call 0x5028f0
// 00508531  c60600               mov byte ptr [esi], 0
// 00508534  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00508538  64890d00000000       mov dword ptr fs:[0], ecx
// 0050853f  59                   pop ecx
// 00508540  5f                   pop edi
// 00508541  5e                   pop esi
// 00508542  5b                   pop ebx
// 00508543  8be5                 mov esp, ebp
// 00508545  5d                   pop ebp
// 00508546  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Stopwatch.cpp (function ?tock@Stopwatch@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Stopwatch.cpp
