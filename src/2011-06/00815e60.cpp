// roc 2011-06 00815e60  unit: CFont  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00815e60
//
// 00815e60  55                   push ebp
// 00815e61  8bec                 mov ebp, esp
// 00815e63  83e4c0               and esp, 0xffffffc0
// 00815e66  83ec34               sub esp, 0x34
// 00815e69  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00815e6c  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00815e6f  53                   push ebx
// 00815e70  56                   push esi
// 00815e71  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00815e74  57                   push edi
// 00815e75  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00815e78  8d4c38ff             lea ecx, [eax + edi - 1]
// 00815e7c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00815e80  db442418             fild dword ptr [esp + 0x18]
// 00815e84  8d4c32ff             lea ecx, [edx + esi - 1]
// 00815e88  dd0508afa700         fld qword ptr [0xa7af08]
// 00815e8e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00815e92  8bd0                 mov edx, eax
// 00815e94  dcc9                 fmul st(1), st(0)
// 00815e96  2bd7                 sub edx, edi
// 00815e98  d9c9                 fxch st(1)
// 00815e9a  4a                   dec edx
// 00815e9b  3bf8                 cmp edi, eax
// 00815e9d  dd5c2428             fstp qword ptr [esp + 0x28]
// 00815ea1  db442418             fild dword ptr [esp + 0x18]
// 00815ea5  89542418             mov dword ptr [esp + 0x18], edx
// 00815ea9  d8c9                 fmul st(1)
// 00815eab  dd5c2430             fstp qword ptr [esp + 0x30]
// 00815eaf  db442418             fild dword ptr [esp + 0x18]
// 00815eb3  897c2418             mov dword ptr [esp + 0x18], edi
// 00815eb7  dec9                 fmulp st(1)
// 00815eb9  dc2518c6a700         fsub qword ptr [0xa7c618]
// 00815ebf  dd5c2420             fstp qword ptr [esp + 0x20]
// 00815ec3  0f8df1000000         jge 0x815fba
// 00815ec9  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00815ecc  d9e8                 fld1 
// 00815ece  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 00815ed1  89742414             mov dword ptr [esp + 0x14], esi
// 00815ed5  0f8dd0000000         jge 0x815fab
// 00815edb  db442418             fild dword ptr [esp + 0x18]
// 00815edf  dc6c2428             fsubr qword ptr [esp + 0x28]
// 00815ee3  dd5c2418             fstp qword ptr [esp + 0x18]
// 00815ee7  dd442420             fld qword ptr [esp + 0x20]
// 00815eeb  d8e1                 fsub st(1)
// 00815eed  dd5c2438             fstp qword ptr [esp + 0x38]
// 00815ef1  dd442418             fld qword ptr [esp + 0x18]
// 00815ef5  b802000000           mov eax, 2
// 00815efa  d9c1                 fld st(1)
// 00815efc  a801                 test al, 1
// 00815efe  7402                 je 0x815f02
// 00815f00  d8c9                 fmul st(1)
// 00815f02  d1e8                 shr eax, 1
// 00815f04  7406                 je 0x815f0c
// 00815f06  d9c1                 fld st(1)
// 00815f08  deca                 fmulp st(2)
// 00815f0a  ebf0                 jmp 0x815efc
// 00815f0c  ddd9                 fstp st(1)
// 00815f0e  b802000000           mov eax, 2
// 00815f13  db442414             fild dword ptr [esp + 0x14]
// 00815f17  dc6c2430             fsubr qword ptr [esp + 0x30]
// 00815f1b  a801                 test al, 1
// 00815f1d  7402                 je 0x815f21
// 00815f1f  dcca                 fmul st(2), st(0)
// 00815f21  d1e8                 shr eax, 1
// 00815f23  7404                 je 0x815f29
// 00815f25  dcc8                 fmul st(0), st(0)
// 00815f27  ebf2                 jmp 0x815f1b
// 00815f29  ddd8                 fstp st(0)
// 00815f2b  dec1                 faddp st(1)
// 00815f2d  e89e5bffff           call 0x80bad0
// 00815f32  dd442438             fld qword ptr [esp + 0x38]
// 00815f36  d8d1                 fcom st(1)
// 00815f38  dfe0                 fnstsw ax
// 00815f3a  f6c441               test ah, 0x41
// 00815f3d  7a3d                 jp 0x815f7c
// 00815f3f  dd442420             fld qword ptr [esp + 0x20]
// 00815f43  dd058862a600         fld qword ptr [0xa66288]
// 00815f49  d8c1                 fadd st(1)
// 00815f4b  d8db                 fcomp st(3)
// 00815f4d  dfe0                 fnstsw ax
// 00815f4f  f6c401               test ah, 1
// 00815f52  7526                 jne 0x815f7a
// 00815f54  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00815f57  ddd9                 fstp st(1)
// 00815f59  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 00815f5c  dee9                 fsubp st(1)
// 00815f5e  83ec08               sub esp, 8
// 00815f61  dd1c24               fstp qword ptr [esp]
// 00815f64  50                   push eax
// 00815f65  51                   push ecx
// 00815f66  56                   push esi
// 00815f67  57                   push edi
// 00815f68  53                   push ebx
// 00815f69  e8d2a8ffff           call 0x810840
// 00815f6e  8b5304               mov edx, dword ptr [ebx + 4]
// 00815f71  83c41c               add esp, 0x1c
// 00815f74  50                   push eax
// 00815f75  56                   push esi
// 00815f76  57                   push edi
// 00815f77  52                   push edx
// 00815f78  eb15                 jmp 0x815f8f
// 00815f7a  ddd8                 fstp st(0)
// 00815f7c  ded9                 fcompp 
// 00815f7e  dfe0                 fnstsw ax
// 00815f80  f6c441               test ah, 0x41
// 00815f83  7510                 jne 0x815f95
// 00815f85  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00815f88  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00815f8b  50                   push eax
// 00815f8c  56                   push esi
// 00815f8d  57                   push edi
// 00815f8e  51                   push ecx
// 00815f8f  ff150c01a400         call dword ptr [0xa4010c]
// 00815f95  d9e8                 fld1 
// 00815f97  46                   inc esi
// 00815f98  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 00815f9b  89742414             mov dword ptr [esp + 0x14], esi
// 00815f9f  0f8c4cffffff         jl 0x815ef1
// 00815fa5  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00815fa8  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00815fab  47                   inc edi
// 00815fac  3bf8                 cmp edi, eax
// 00815fae  897c2418             mov dword ptr [esp + 0x18], edi
// 00815fb2  0f8c16ffffff         jl 0x815ece
// 00815fb8  ddd8                 fstp st(0)
// 00815fba  5f                   pop edi
// 00815fbb  5e                   pop esi
// 00815fbc  5b                   pop ebx
// 00815fbd  8be5                 mov esp, ebp
// 00815fbf  5d                   pop ebp
// 00815fc0  c21c00               ret 0x1c
// library xtp-15.2.1/Source\Controls\Button\XTPButtonTheme.cpp (function ?AlphaEllipse@CXTPButtonTheme@@QAEXPAVCDC@@VCRect@@KK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Button/XTPButtonTheme.cpp
