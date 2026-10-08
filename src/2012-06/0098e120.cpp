// from server: 100% by auto
// roc 2012-06 0098e120  unit: CXTPPaintManager  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e120
//
// 0098e120  55                   push ebp
// 0098e121  8bec                 mov ebp, esp
// 0098e123  83e4c0               and esp, 0xffffffc0
// 0098e126  83ec34               sub esp, 0x34
// 0098e129  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0098e12c  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0098e12f  53                   push ebx
// 0098e130  56                   push esi
// 0098e131  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0098e134  57                   push edi
// 0098e135  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0098e138  8d4c38ff             lea ecx, [eax + edi - 1]
// 0098e13c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0098e140  db442418             fild dword ptr [esp + 0x18]
// 0098e144  8d4c32ff             lea ecx, [edx + esi - 1]
// 0098e148  dd0500a2b600         fld qword ptr [0xb6a200]
// 0098e14e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0098e152  8bd0                 mov edx, eax
// 0098e154  dcc9                 fmul st(1), st(0)
// 0098e156  2bd7                 sub edx, edi
// 0098e158  d9c9                 fxch st(1)
// 0098e15a  4a                   dec edx
// 0098e15b  3bf8                 cmp edi, eax
// 0098e15d  dd5c2428             fstp qword ptr [esp + 0x28]
// 0098e161  db442418             fild dword ptr [esp + 0x18]
// 0098e165  89542418             mov dword ptr [esp + 0x18], edx
// 0098e169  d8c9                 fmul st(1)
// 0098e16b  dd5c2430             fstp qword ptr [esp + 0x30]
// 0098e16f  db442418             fild dword ptr [esp + 0x18]
// 0098e173  897c2418             mov dword ptr [esp + 0x18], edi
// 0098e177  dec9                 fmulp st(1)
// 0098e179  dc252882b700         fsub qword ptr [0xb78228]
// 0098e17f  dd5c2420             fstp qword ptr [esp + 0x20]
// 0098e183  0f8df1000000         jge 0x98e27a
// 0098e189  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0098e18c  d9e8                 fld1 
// 0098e18e  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 0098e191  89742414             mov dword ptr [esp + 0x14], esi
// 0098e195  0f8dd0000000         jge 0x98e26b
// 0098e19b  db442418             fild dword ptr [esp + 0x18]
// 0098e19f  dc6c2428             fsubr qword ptr [esp + 0x28]
// 0098e1a3  dd5c2418             fstp qword ptr [esp + 0x18]
// 0098e1a7  dd442420             fld qword ptr [esp + 0x20]
// 0098e1ab  d8e1                 fsub st(1)
// 0098e1ad  dd5c2438             fstp qword ptr [esp + 0x38]
// 0098e1b1  dd442418             fld qword ptr [esp + 0x18]
// 0098e1b5  b802000000           mov eax, 2
// 0098e1ba  d9c1                 fld st(1)
// 0098e1bc  a801                 test al, 1
// 0098e1be  7402                 je 0x98e1c2
// 0098e1c0  d8c9                 fmul st(1)
// 0098e1c2  d1e8                 shr eax, 1
// 0098e1c4  7406                 je 0x98e1cc
// 0098e1c6  d9c1                 fld st(1)
// 0098e1c8  deca                 fmulp st(2)
// 0098e1ca  ebf0                 jmp 0x98e1bc
// 0098e1cc  ddd9                 fstp st(1)
// 0098e1ce  b802000000           mov eax, 2
// 0098e1d3  db442414             fild dword ptr [esp + 0x14]
// 0098e1d7  dc6c2430             fsubr qword ptr [esp + 0x30]
// 0098e1db  a801                 test al, 1
// 0098e1dd  7402                 je 0x98e1e1
// 0098e1df  dcca                 fmul st(2), st(0)
// 0098e1e1  d1e8                 shr eax, 1
// 0098e1e3  7404                 je 0x98e1e9
// 0098e1e5  dcc8                 fmul st(0), st(0)
// 0098e1e7  ebf2                 jmp 0x98e1db
// 0098e1e9  ddd8                 fstp st(0)
// 0098e1eb  dec1                 faddp st(1)
// 0098e1ed  e8d859ffff           call 0x983bca
// 0098e1f2  dd442438             fld qword ptr [esp + 0x38]
// 0098e1f6  d8d1                 fcom st(1)
// 0098e1f8  dfe0                 fnstsw ax
// 0098e1fa  f6c441               test ah, 0x41
// 0098e1fd  7a3d                 jp 0x98e23c
// 0098e1ff  dd442420             fld qword ptr [esp + 0x20]
// 0098e203  dd0570fdb400         fld qword ptr [0xb4fd70]
// 0098e209  d8c1                 fadd st(1)
// 0098e20b  d8db                 fcomp st(3)
// 0098e20d  dfe0                 fnstsw ax
// 0098e20f  f6c401               test ah, 1
// 0098e212  7526                 jne 0x98e23a
// 0098e214  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0098e217  ddd9                 fstp st(1)
// 0098e219  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 0098e21c  dee9                 fsubp st(1)
// 0098e21e  83ec08               sub esp, 8
// 0098e221  dd1c24               fstp qword ptr [esp]
// 0098e224  50                   push eax
// 0098e225  51                   push ecx
// 0098e226  56                   push esi
// 0098e227  57                   push edi
// 0098e228  53                   push ebx
// 0098e229  e802a9ffff           call 0x988b30
// 0098e22e  8b5304               mov edx, dword ptr [ebx + 4]
// 0098e231  83c41c               add esp, 0x1c
// 0098e234  50                   push eax
// 0098e235  56                   push esi
// 0098e236  57                   push edi
// 0098e237  52                   push edx
// 0098e238  eb15                 jmp 0x98e24f
// 0098e23a  ddd8                 fstp st(0)
// 0098e23c  ded9                 fcompp 
// 0098e23e  dfe0                 fnstsw ax
// 0098e240  f6c441               test ah, 0x41
// 0098e243  7510                 jne 0x98e255
// 0098e245  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0098e248  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0098e24b  50                   push eax
// 0098e24c  56                   push esi
// 0098e24d  57                   push edi
// 0098e24e  51                   push ecx
// 0098e24f  ff15c020b200         call dword ptr [0xb220c0]
// 0098e255  d9e8                 fld1 
// 0098e257  46                   inc esi
// 0098e258  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 0098e25b  89742414             mov dword ptr [esp + 0x14], esi
// 0098e25f  0f8c4cffffff         jl 0x98e1b1
// 0098e265  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0098e268  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0098e26b  47                   inc edi
// 0098e26c  3bf8                 cmp edi, eax
// 0098e26e  897c2418             mov dword ptr [esp + 0x18], edi
// 0098e272  0f8c16ffffff         jl 0x98e18e
// 0098e278  ddd8                 fstp st(0)
// 0098e27a  5f                   pop edi
// 0098e27b  5e                   pop esi
// 0098e27c  5b                   pop ebx
// 0098e27d  8be5                 mov esp, ebp
// 0098e27f  5d                   pop ebp
// 0098e280  c21c00               ret 0x1c
// library xtp-15.2.1/Source\Controls\Button\XTPButtonTheme.cpp (function ?AlphaEllipse@CXTPButtonTheme@@QAEXPAVCDC@@VCRect@@KK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Button/XTPButtonTheme.cpp
