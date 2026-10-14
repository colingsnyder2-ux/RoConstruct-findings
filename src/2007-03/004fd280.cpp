// roc 2007-03 004fd280  unit: seg_004f0000  size: 631 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd280
//
// 004fd280  55                   push ebp
// 004fd281  8bec                 mov ebp, esp
// 004fd283  83e4c0               and esp, 0xffffffc0
// 004fd286  6aff                 push -1
// 004fd288  687a097500           push 0x75097a
// 004fd28d  64a100000000         mov eax, dword ptr fs:[0]
// 004fd293  50                   push eax
// 004fd294  83ec68               sub esp, 0x68
// 004fd297  53                   push ebx
// 004fd298  56                   push esi
// 004fd299  57                   push edi
// 004fd29a  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fd29f  33c4                 xor eax, esp
// 004fd2a1  50                   push eax
// 004fd2a2  8d442478             lea eax, [esp + 0x78]
// 004fd2a6  64a300000000         mov dword ptr fs:[0], eax
// 004fd2ac  8bf1                 mov esi, ecx
// 004fd2ae  33ff                 xor edi, edi
// 004fd2b0  897c2424             mov dword ptr [esp + 0x24], edi
// 004fd2b4  0f31                 rdtsc 
// 004fd2b6  89542418             mov dword ptr [esp + 0x18], edx
// 004fd2ba  8944241c             mov dword ptr [esp + 0x1c], eax
// 004fd2be  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fd2c2  6a01                 push 1
// 004fd2c4  57                   push edi
// 004fd2c5  57                   push edi
// 004fd2c6  50                   push eax
// 004fd2c7  e8141e1200           call 0x61f0e0
// 004fd2cc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004fd2d0  33db                 xor ebx, ebx
// 004fd2d2  03c1                 add eax, ecx
// 004fd2d4  13d3                 adc edx, ebx
// 004fd2d6  2b4608               sub eax, dword ptr [esi + 8]
// 004fd2d9  1b560c               sbb edx, dword ptr [esi + 0xc]
// 004fd2dc  894608               mov dword ptr [esi + 8], eax
// 004fd2df  89560c               mov dword ptr [esi + 0xc], edx
// 004fd2e2  e8b967ffff           call 0x4f3aa0
// 004fd2e7  dd54241c             fst qword ptr [esp + 0x1c]
// 004fd2eb  d9c0                 fld st(0)
// 004fd2ed  8d5620               lea edx, [esi + 0x20]
// 004fd2f0  dc6610               fsub qword ptr [esi + 0x10]
// 004fd2f3  8d4e48               lea ecx, [esi + 0x48]
// 004fd2f6  dd12                 fst qword ptr [edx]
// 004fd2f8  dd01                 fld qword ptr [ecx]
// 004fd2fa  d8e1                 fsub st(1)
// 004fd2fc  d9e1                 fabs 
// 004fd2fe  dd02                 fld qword ptr [edx]
// 004fd300  dc19                 fcomp qword ptr [ecx]
// 004fd302  dfe0                 fnstsw ax
// 004fd304  f6c441               test ah, 0x41
// 004fd307  7402                 je 0x4fd30b
// 004fd309  8bd1                 mov edx, ecx
// 004fd30b  dd02                 fld qword ptr [edx]
// 004fd30d  dd05584f7900         fld qword ptr [0x794f58]
// 004fd313  dcc9                 fmul st(1), st(0)
// 004fd315  d9ca                 fxch st(2)
// 004fd317  ded9                 fcompp 
// 004fd319  dfe0                 fnstsw ax
// 004fd31b  f6c441               test ah, 0x41
// 004fd31e  7412                 je 0x4fd332
// 004fd320  dd01                 fld qword ptr [ecx]
// 004fd322  dc0d20fe7900         fmul qword ptr [0x79fe20]
// 004fd328  d9ca                 fxch st(2)
// 004fd32a  dc0d18fe7900         fmul qword ptr [0x79fe18]
// 004fd330  dec2                 faddp st(2)
// 004fd332  8b5608               mov edx, dword ptr [esi + 8]
// 004fd335  d9c9                 fxch st(1)
// 004fd337  2b5650               sub edx, dword ptr [esi + 0x50]
// 004fd33a  dd19                 fstp qword ptr [ecx]
// 004fd33c  8b460c               mov eax, dword ptr [esi + 0xc]
// 004fd33f  1b4654               sbb eax, dword ptr [esi + 0x54]
// 004fd342  895628               mov dword ptr [esi + 0x28], edx
// 004fd345  3bc7                 cmp eax, edi
// 004fd347  89462c               mov dword ptr [esi + 0x2c], eax
// 004fd34a  7f0c                 jg 0x4fd358
// 004fd34c  7c04                 jl 0x4fd352
// 004fd34e  3bd7                 cmp edx, edi
// 004fd350  7306                 jae 0x4fd358
// 004fd352  897e28               mov dword ptr [esi + 0x28], edi
// 004fd355  897e2c               mov dword ptr [esi + 0x2c], edi
// 004fd358  dd05a0597900         fld qword ptr [0x7959a0]
// 004fd35e  dc5e18               fcomp qword ptr [esi + 0x18]
// 004fd361  dfe0                 fnstsw ax
// 004fd363  f6c444               test ah, 0x44
// 004fd366  0f8bd9000000         jnp 0x4fd445
// 004fd36c  d9c1                 fld st(1)
// 004fd36e  8d5630               lea edx, [esi + 0x30]
// 004fd371  dc6618               fsub qword ptr [esi + 0x18]
// 004fd374  8d4e38               lea ecx, [esi + 0x38]
// 004fd377  d9e8                 fld1 
// 004fd379  def1                 fdivrp st(1)
// 004fd37b  dd12                 fst qword ptr [edx]
// 004fd37d  dd01                 fld qword ptr [ecx]
// 004fd37f  dc0d10fe7900         fmul qword ptr [0x79fe10]
// 004fd385  d9c1                 fld st(1)
// 004fd387  dc0d08fe7900         fmul qword ptr [0x79fe08]
// 004fd38d  dec1                 faddp st(1)
// 004fd38f  dd11                 fst qword ptr [ecx]
// 004fd391  d8e1                 fsub st(1)
// 004fd393  d9e1                 fabs 
// 004fd395  dd02                 fld qword ptr [edx]
// 004fd397  dc19                 fcomp qword ptr [ecx]
// 004fd399  dfe0                 fnstsw ax
// 004fd39b  f6c441               test ah, 0x41
// 004fd39e  7402                 je 0x4fd3a2
// 004fd3a0  8bd1                 mov edx, ecx
// 004fd3a2  dd02                 fld qword ptr [edx]
// 004fd3a4  dc0d00fe7900         fmul qword ptr [0x79fe00]
// 004fd3aa  ded9                 fcompp 
// 004fd3ac  dfe0                 fnstsw ax
// 004fd3ae  f6c405               test ah, 5
// 004fd3b1  7a02                 jp 0x4fd3b5
// 004fd3b3  dd11                 fst qword ptr [ecx]
// 004fd3b5  d9ee                 fldz 
// 004fd3b7  dc5e40               fcomp qword ptr [esi + 0x40]
// 004fd3ba  dfe0                 fnstsw ax
// 004fd3bc  f6c444               test ah, 0x44
// 004fd3bf  7a07                 jp 0x4fd3c8
// 004fd3c1  ddd9                 fstp st(1)
// 004fd3c3  dd5e40               fstp qword ptr [esi + 0x40]
// 004fd3c6  eb7f                 jmp 0x4fd447
// 004fd3c8  ddd8                 fstp st(0)
// 004fd3ca  dd05784f7900         fld qword ptr [0x794f78]
// 004fd3d0  dc11                 fcom qword ptr [ecx]
// 004fd3d2  dfe0                 fnstsw ax
// 004fd3d4  f6c401               test ah, 1
// 004fd3d7  7539                 jne 0x4fd412
// 004fd3d9  dd4640               fld qword ptr [esi + 0x40]
// 004fd3dc  dc21                 fsub qword ptr [ecx]
// 004fd3de  d9e1                 fabs 
// 004fd3e0  dc1df8fd7900         fcomp qword ptr [0x79fdf8]
// 004fd3e6  dfe0                 fnstsw ax
// 004fd3e8  f6c441               test ah, 0x41
// 004fd3eb  7556                 jne 0x4fd443
// 004fd3ed  ddda                 fstp st(2)
// 004fd3ef  83ec08               sub esp, 8
// 004fd3f2  dd01                 fld qword ptr [ecx]
// 004fd3f4  deca                 fmulp st(2)
// 004fd3f6  dec1                 faddp st(1)
// 004fd3f8  dd1c24               fstp qword ptr [esp]
// 004fd3fb  e8c8211200           call 0x61f5c8
// 004fd400  dc35784f7900         fdiv qword ptr [0x794f78]
// 004fd406  83c408               add esp, 8
// 004fd409  dd5e40               fstp qword ptr [esi + 0x40]
// 004fd40c  dd44241c             fld qword ptr [esp + 0x1c]
// 004fd410  eb35                 jmp 0x4fd447
// 004fd412  ddd8                 fstp st(0)
// 004fd414  dd4640               fld qword ptr [esi + 0x40]
// 004fd417  dc21                 fsub qword ptr [ecx]
// 004fd419  d9e1                 fabs 
// 004fd41b  dc1df0fd7900         fcomp qword ptr [0x79fdf0]
// 004fd421  dfe0                 fnstsw ax
// 004fd423  f6c441               test ah, 0x41
// 004fd426  751d                 jne 0x4fd445
// 004fd428  ddd9                 fstp st(1)
// 004fd42a  83ec08               sub esp, 8
// 004fd42d  dc01                 fadd qword ptr [ecx]
// 004fd42f  dd1c24               fstp qword ptr [esp]
// 004fd432  e891211200           call 0x61f5c8
// 004fd437  dd5e40               fstp qword ptr [esi + 0x40]
// 004fd43a  83c408               add esp, 8
// 004fd43d  dd44241c             fld qword ptr [esp + 0x1c]
// 004fd441  eb04                 jmp 0x4fd447
// 004fd443  ddd8                 fstp st(0)
// 004fd445  ddd8                 fstp st(0)
// 004fd447  dd5e18               fstp qword ptr [esi + 0x18]
// 004fd44a  381d7dae8b00         cmp byte ptr [0x8bae7d], bl
// 004fd450  0f858b000000         jne 0x4fd4e1
// 004fd456  381e                 cmp byte ptr [esi], bl
// 004fd458  0f8583000000         jne 0x4fd4e1
// 004fd45e  e88d8fffff           call 0x4f63f0
// 004fd463  393d5c628900         cmp dword ptr [0x89625c], edi
// 004fd469  7447                 je 0x4fd4b2
// 004fd46b  68bcfd7900           push 0x79fdbc
// 004fd470  8d4c242c             lea ecx, [esp + 0x2c]
// 004fd474  ff1578e77700         call dword ptr [0x77e778]
// 004fd47a  6a01                 push 1
// 004fd47c  687dae8b00           push 0x8bae7d
// 004fd481  6a5b                 push 0x5b
// 004fd483  686cfd7900           push 0x79fd6c
// 004fd488  8d4c2438             lea ecx, [esp + 0x38]
// 004fd48c  51                   push ecx
// 004fd48d  68b0fd7900           push 0x79fdb0
// 004fd492  89bc2498000000       mov dword ptr [esp + 0x98], edi
// 004fd499  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 004fd4a1  ff155c628900         call dword ptr [0x89625c]
// 004fd4a7  83c418               add esp, 0x18
// 004fd4aa  84c0                 test al, al
// 004fd4ac  7404                 je 0x4fd4b2
// 004fd4ae  b301                 mov bl, 1
// 004fd4b0  eb02                 jmp 0x4fd4b4
// 004fd4b2  32db                 xor bl, bl
// 004fd4b4  f644242401           test byte ptr [esp + 0x24], 1
// 004fd4b9  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 004fd4c4  740a                 je 0x4fd4d0
// 004fd4c6  8d4c2428             lea ecx, [esp + 0x28]
// 004fd4ca  ff158ce77700         call dword ptr [0x77e78c]
// 004fd4d0  84db                 test bl, bl
// 004fd4d2  7408                 je 0x4fd4dc
// 004fd4d4  6aff                 push -1
// 004fd4d6  ff15f8e97700         call dword ptr [0x77e9f8]
// 004fd4dc  e87f8fffff           call 0x4f6460
// 004fd4e1  c60600               mov byte ptr [esi], 0
// 004fd4e4  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 004fd4e8  64890d00000000       mov dword ptr fs:[0], ecx
// 004fd4ef  59                   pop ecx
// 004fd4f0  5f                   pop edi
// 004fd4f1  5e                   pop esi
// 004fd4f2  5b                   pop ebx
// 004fd4f3  8be5                 mov esp, ebp
// 004fd4f5  5d                   pop ebp
// 004fd4f6  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Stopwatch.cpp (function ?tock@Stopwatch@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Stopwatch.cpp
