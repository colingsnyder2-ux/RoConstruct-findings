// roc 2008-06 006b4880  unit: CXTPPaintManager  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4880
//
// 006b4880  55                   push ebp
// 006b4881  8bec                 mov ebp, esp
// 006b4883  83e4c0               and esp, 0xffffffc0
// 006b4886  83ec34               sub esp, 0x34
// 006b4889  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006b488c  8b5518               mov edx, dword ptr [ebp + 0x18]
// 006b488f  53                   push ebx
// 006b4890  56                   push esi
// 006b4891  8b7510               mov esi, dword ptr [ebp + 0x10]
// 006b4894  57                   push edi
// 006b4895  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 006b4898  8d4c38ff             lea ecx, [eax + edi - 1]
// 006b489c  894c2418             mov dword ptr [esp + 0x18], ecx
// 006b48a0  db442418             fild dword ptr [esp + 0x18]
// 006b48a4  8d4c32ff             lea ecx, [edx + esi - 1]
// 006b48a8  dd0538e78100         fld qword ptr [0x81e738]
// 006b48ae  894c2418             mov dword ptr [esp + 0x18], ecx
// 006b48b2  8bd0                 mov edx, eax
// 006b48b4  dcc9                 fmul st(1), st(0)
// 006b48b6  2bd7                 sub edx, edi
// 006b48b8  d9c9                 fxch st(1)
// 006b48ba  4a                   dec edx
// 006b48bb  3bf8                 cmp edi, eax
// 006b48bd  dd5c2428             fstp qword ptr [esp + 0x28]
// 006b48c1  db442418             fild dword ptr [esp + 0x18]
// 006b48c5  89542418             mov dword ptr [esp + 0x18], edx
// 006b48c9  d8c9                 fmul st(1)
// 006b48cb  dd5c2430             fstp qword ptr [esp + 0x30]
// 006b48cf  db442418             fild dword ptr [esp + 0x18]
// 006b48d3  897c2418             mov dword ptr [esp + 0x18], edi
// 006b48d7  dec9                 fmulp st(1)
// 006b48d9  dc25f81a8500         fsub qword ptr [0x851af8]
// 006b48df  dd5c2420             fstp qword ptr [esp + 0x20]
// 006b48e3  0f8df1000000         jge 0x6b49da
// 006b48e9  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006b48ec  d9e8                 fld1 
// 006b48ee  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 006b48f1  89742414             mov dword ptr [esp + 0x14], esi
// 006b48f5  0f8dd0000000         jge 0x6b49cb
// 006b48fb  db442418             fild dword ptr [esp + 0x18]
// 006b48ff  dc6c2428             fsubr qword ptr [esp + 0x28]
// 006b4903  dd5c2418             fstp qword ptr [esp + 0x18]
// 006b4907  dd442420             fld qword ptr [esp + 0x20]
// 006b490b  d8e1                 fsub st(1)
// 006b490d  dd5c2438             fstp qword ptr [esp + 0x38]
// 006b4911  dd442418             fld qword ptr [esp + 0x18]
// 006b4915  b802000000           mov eax, 2
// 006b491a  d9c1                 fld st(1)
// 006b491c  a801                 test al, 1
// 006b491e  7402                 je 0x6b4922
// 006b4920  d8c9                 fmul st(1)
// 006b4922  d1e8                 shr eax, 1
// 006b4924  7406                 je 0x6b492c
// 006b4926  d9c1                 fld st(1)
// 006b4928  deca                 fmulp st(2)
// 006b492a  ebf0                 jmp 0x6b491c
// 006b492c  ddd9                 fstp st(1)
// 006b492e  b802000000           mov eax, 2
// 006b4933  db442414             fild dword ptr [esp + 0x14]
// 006b4937  dc6c2430             fsubr qword ptr [esp + 0x30]
// 006b493b  a801                 test al, 1
// 006b493d  7402                 je 0x6b4941
// 006b493f  dcca                 fmul st(2), st(0)
// 006b4941  d1e8                 shr eax, 1
// 006b4943  7404                 je 0x6b4949
// 006b4945  dcc8                 fmul st(0), st(0)
// 006b4947  ebf2                 jmp 0x6b493b
// 006b4949  ddd8                 fstp st(0)
// 006b494b  dec1                 faddp st(1)
// 006b494d  e8e4801000           call 0x7bca36
// 006b4952  dd442438             fld qword ptr [esp + 0x38]
// 006b4956  d8d1                 fcom st(1)
// 006b4958  dfe0                 fnstsw ax
// 006b495a  f6c441               test ah, 0x41
// 006b495d  7a3d                 jp 0x6b499c
// 006b495f  dd442420             fld qword ptr [esp + 0x20]
// 006b4963  dd0538128100         fld qword ptr [0x811238]
// 006b4969  d8c1                 fadd st(1)
// 006b496b  d8db                 fcomp st(3)
// 006b496d  dfe0                 fnstsw ax
// 006b496f  f6c401               test ah, 1
// 006b4972  7526                 jne 0x6b499a
// 006b4974  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006b4977  ddd9                 fstp st(1)
// 006b4979  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 006b497c  dee9                 fsubp st(1)
// 006b497e  83ec08               sub esp, 8
// 006b4981  dd1c24               fstp qword ptr [esp]
// 006b4984  50                   push eax
// 006b4985  51                   push ecx
// 006b4986  56                   push esi
// 006b4987  57                   push edi
// 006b4988  53                   push ebx
// 006b4989  e802a9ffff           call 0x6af290
// 006b498e  8b5304               mov edx, dword ptr [ebx + 4]
// 006b4991  83c41c               add esp, 0x1c
// 006b4994  50                   push eax
// 006b4995  56                   push esi
// 006b4996  57                   push edi
// 006b4997  52                   push edx
// 006b4998  eb15                 jmp 0x6b49af
// 006b499a  ddd8                 fstp st(0)
// 006b499c  ded9                 fcompp 
// 006b499e  dfe0                 fnstsw ax
// 006b49a0  f6c441               test ah, 0x41
// 006b49a3  7510                 jne 0x6b49b5
// 006b49a5  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006b49a8  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006b49ab  50                   push eax
// 006b49ac  56                   push esi
// 006b49ad  57                   push edi
// 006b49ae  51                   push ecx
// 006b49af  ff15b8208000         call dword ptr [0x8020b8]
// 006b49b5  d9e8                 fld1 
// 006b49b7  46                   inc esi
// 006b49b8  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 006b49bb  89742414             mov dword ptr [esp + 0x14], esi
// 006b49bf  0f8c4cffffff         jl 0x6b4911
// 006b49c5  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006b49c8  8b7510               mov esi, dword ptr [ebp + 0x10]
// 006b49cb  47                   inc edi
// 006b49cc  3bf8                 cmp edi, eax
// 006b49ce  897c2418             mov dword ptr [esp + 0x18], edi
// 006b49d2  0f8c16ffffff         jl 0x6b48ee
// 006b49d8  ddd8                 fstp st(0)
// 006b49da  5f                   pop edi
// 006b49db  5e                   pop esi
// 006b49dc  5b                   pop ebx
// 006b49dd  8be5                 mov esp, ebp
// 006b49df  5d                   pop ebp
// 006b49e0  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?AlphaEllipse@CXTPPaintManager@@QAEXPAVCDC@@VCRect@@KK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
