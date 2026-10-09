// roc 2007-03 006387b0  unit: seg_00630000  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006387b0
//
// 006387b0  55                   push ebp
// 006387b1  8bec                 mov ebp, esp
// 006387b3  83e4c0               and esp, 0xffffffc0
// 006387b6  83ec34               sub esp, 0x34
// 006387b9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006387bc  8b5518               mov edx, dword ptr [ebp + 0x18]
// 006387bf  53                   push ebx
// 006387c0  56                   push esi
// 006387c1  8b7510               mov esi, dword ptr [ebp + 0x10]
// 006387c4  57                   push edi
// 006387c5  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 006387c8  8d4c38ff             lea ecx, [eax + edi - 1]
// 006387cc  894c2418             mov dword ptr [esp + 0x18], ecx
// 006387d0  db442418             fild dword ptr [esp + 0x18]
// 006387d4  8d4c32ff             lea ecx, [edx + esi - 1]
// 006387d8  dd05584f7900         fld qword ptr [0x794f58]
// 006387de  894c2418             mov dword ptr [esp + 0x18], ecx
// 006387e2  8bd0                 mov edx, eax
// 006387e4  dcc9                 fmul st(1), st(0)
// 006387e6  2bd7                 sub edx, edi
// 006387e8  d9c9                 fxch st(1)
// 006387ea  83ea01               sub edx, 1
// 006387ed  3bf8                 cmp edi, eax
// 006387ef  dd5c2428             fstp qword ptr [esp + 0x28]
// 006387f3  db442418             fild dword ptr [esp + 0x18]
// 006387f7  89542418             mov dword ptr [esp + 0x18], edx
// 006387fb  d8c9                 fmul st(1)
// 006387fd  dd5c2430             fstp qword ptr [esp + 0x30]
// 00638801  db442418             fild dword ptr [esp + 0x18]
// 00638805  897c2418             mov dword ptr [esp + 0x18], edi
// 00638809  dec9                 fmulp st(1)
// 0063880b  dc2590e97900         fsub qword ptr [0x79e990]
// 00638811  dd5c2420             fstp qword ptr [esp + 0x20]
// 00638815  0f8df5000000         jge 0x638910
// 0063881b  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0063881e  d9e8                 fld1 
// 00638820  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 00638823  89742414             mov dword ptr [esp + 0x14], esi
// 00638827  0f8dd2000000         jge 0x6388ff
// 0063882d  db442418             fild dword ptr [esp + 0x18]
// 00638831  dc6c2428             fsubr qword ptr [esp + 0x28]
// 00638835  dd5c2418             fstp qword ptr [esp + 0x18]
// 00638839  dd442420             fld qword ptr [esp + 0x20]
// 0063883d  d8e1                 fsub st(1)
// 0063883f  dd5c2438             fstp qword ptr [esp + 0x38]
// 00638843  dd442418             fld qword ptr [esp + 0x18]
// 00638847  b802000000           mov eax, 2
// 0063884c  d9c1                 fld st(1)
// 0063884e  a801                 test al, 1
// 00638850  7402                 je 0x638854
// 00638852  d8c9                 fmul st(1)
// 00638854  d1e8                 shr eax, 1
// 00638856  7406                 je 0x63885e
// 00638858  d9c1                 fld st(1)
// 0063885a  deca                 fmulp st(2)
// 0063885c  ebf0                 jmp 0x63884e
// 0063885e  ddd9                 fstp st(1)
// 00638860  b802000000           mov eax, 2
// 00638865  db442414             fild dword ptr [esp + 0x14]
// 00638869  dc6c2430             fsubr qword ptr [esp + 0x30]
// 0063886d  a801                 test al, 1
// 0063886f  7402                 je 0x638873
// 00638871  dcca                 fmul st(2), st(0)
// 00638873  d1e8                 shr eax, 1
// 00638875  7404                 je 0x63887b
// 00638877  dcc8                 fmul st(0), st(0)
// 00638879  ebf2                 jmp 0x63886d
// 0063887b  ddd8                 fstp st(0)
// 0063887d  dec1                 faddp st(1)
// 0063887f  e8286afeff           call 0x61f2ac
// 00638884  dd442438             fld qword ptr [esp + 0x38]
// 00638888  d8d1                 fcom st(1)
// 0063888a  dfe0                 fnstsw ax
// 0063888c  f6c441               test ah, 0x41
// 0063888f  7a3d                 jp 0x6388ce
// 00638891  dd442420             fld qword ptr [esp + 0x20]
// 00638895  dd05a81f7900         fld qword ptr [0x791fa8]
// 0063889b  d8c1                 fadd st(1)
// 0063889d  d8db                 fcomp st(3)
// 0063889f  dfe0                 fnstsw ax
// 006388a1  f6c401               test ah, 1
// 006388a4  7526                 jne 0x6388cc
// 006388a6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006388a9  ddd9                 fstp st(1)
// 006388ab  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 006388ae  dee9                 fsubp st(1)
// 006388b0  83ec08               sub esp, 8
// 006388b3  dd1c24               fstp qword ptr [esp]
// 006388b6  50                   push eax
// 006388b7  51                   push ecx
// 006388b8  56                   push esi
// 006388b9  57                   push edi
// 006388ba  53                   push ebx
// 006388bb  e8c0a9ffff           call 0x633280
// 006388c0  8b5304               mov edx, dword ptr [ebx + 4]
// 006388c3  83c41c               add esp, 0x1c
// 006388c6  50                   push eax
// 006388c7  56                   push esi
// 006388c8  57                   push edi
// 006388c9  52                   push edx
// 006388ca  eb15                 jmp 0x6388e1
// 006388cc  ddd8                 fstp st(0)
// 006388ce  ded9                 fcompp 
// 006388d0  dfe0                 fnstsw ax
// 006388d2  f6c441               test ah, 0x41
// 006388d5  7510                 jne 0x6388e7
// 006388d7  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006388da  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006388dd  50                   push eax
// 006388de  56                   push esi
// 006388df  57                   push edi
// 006388e0  51                   push ecx
// 006388e1  ff1504d17700         call dword ptr [0x77d104]
// 006388e7  d9e8                 fld1 
// 006388e9  83c601               add esi, 1
// 006388ec  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 006388ef  89742414             mov dword ptr [esp + 0x14], esi
// 006388f3  0f8c4affffff         jl 0x638843
// 006388f9  8b7510               mov esi, dword ptr [ebp + 0x10]
// 006388fc  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006388ff  83c701               add edi, 1
// 00638902  3bf8                 cmp edi, eax
// 00638904  897c2418             mov dword ptr [esp + 0x18], edi
// 00638908  0f8c12ffffff         jl 0x638820
// 0063890e  ddd8                 fstp st(0)
// 00638910  5f                   pop edi
// 00638911  5e                   pop esi
// 00638912  5b                   pop ebx
// 00638913  8be5                 mov esp, ebp
// 00638915  5d                   pop ebp
// 00638916  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?AlphaEllipse@CXTPPaintManager@@QAEXPAVCDC@@VCRect@@KK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
