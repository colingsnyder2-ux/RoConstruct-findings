// from server: 100% by auto
// roc 2008-06 00626050  unit: seg_00620000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626050
//
// 00626050  55                   push ebp
// 00626051  8bec                 mov ebp, esp
// 00626053  83e4c0               and esp, 0xffffffc0
// 00626056  83ec34               sub esp, 0x34
// 00626059  53                   push ebx
// 0062605a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0062605d  56                   push esi
// 0062605e  57                   push edi
// 0062605f  53                   push ebx
// 00626060  e8abbbfeff           call 0x611c10
// 00626065  6a01                 push 1
// 00626067  53                   push ebx
// 00626068  8bf8                 mov edi, eax
// 0062606a  e811b7feff           call 0x611780
// 0062606f  dd542444             fst qword ptr [esp + 0x44]
// 00626073  be02000000           mov esi, 2
// 00626078  83c40c               add esp, 0xc
// 0062607b  3bfe                 cmp edi, esi
// 0062607d  7c28                 jl 0x6260a7
// 0062607f  56                   push esi
// 00626080  ddd8                 fstp st(0)
// 00626082  53                   push ebx
// 00626083  e8f8b6feff           call 0x611780
// 00626088  dd442440             fld qword ptr [esp + 0x40]
// 0062608c  d8d1                 fcom st(1)
// 0062608e  83c408               add esp, 8
// 00626091  dfe0                 fnstsw ax
// 00626093  f6c441               test ah, 0x41
// 00626096  7508                 jne 0x6260a0
// 00626098  ddd8                 fstp st(0)
// 0062609a  dd542438             fst qword ptr [esp + 0x38]
// 0062609e  eb02                 jmp 0x6260a2
// 006260a0  ddd9                 fstp st(1)
// 006260a2  46                   inc esi
// 006260a3  3bf7                 cmp esi, edi
// 006260a5  7ed8                 jle 0x62607f
// 006260a7  83ec08               sub esp, 8
// 006260aa  dd1c24               fstp qword ptr [esp]
// 006260ad  53                   push ebx
// 006260ae  e84dc1feff           call 0x612200
// 006260b3  83c40c               add esp, 0xc
// 006260b6  5f                   pop edi
// 006260b7  5e                   pop esi
// 006260b8  b801000000           mov eax, 1
// 006260bd  5b                   pop ebx
// 006260be  8be5                 mov esp, ebp
// 006260c0  5d                   pop ebp
// 006260c1  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_min)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
