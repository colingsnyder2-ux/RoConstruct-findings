// roc 2011-06 008712e0  unit: CXTColorDialog  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008712e0
//
// 008712e0  6aff                 push -1
// 008712e2  68f977a000           push 0xa077f9
// 008712e7  64a100000000         mov eax, dword ptr fs:[0]
// 008712ed  50                   push eax
// 008712ee  83ec18               sub esp, 0x18
// 008712f1  53                   push ebx
// 008712f2  55                   push ebp
// 008712f3  56                   push esi
// 008712f4  57                   push edi
// 008712f5  a12058c900           mov eax, dword ptr [0xc95820]
// 008712fa  33c4                 xor eax, esp
// 008712fc  50                   push eax
// 008712fd  8d44242c             lea eax, [esp + 0x2c]
// 00871301  64a300000000         mov dword ptr fs:[0], eax
// 00871307  8bf1                 mov esi, ecx
// 00871309  e82093f9ff           call 0x80a62e
// 0087130e  83f8ff               cmp eax, -1
// 00871311  7508                 jne 0x87131b
// 00871313  83c8ff               or eax, 0xffffffff
// 00871316  e9bc000000           jmp 0x8713d7
// 0087131b  33db                 xor ebx, ebx
// 0087131d  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 00871324  747f                 je 0x8713a5
// 00871326  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0087132c  50                   push eax
// 0087132d  8d4c241c             lea ecx, [esp + 0x1c]
// 00871331  51                   push ecx
// 00871332  e849f5ffff           call 0x870880
// 00871337  83c408               add esp, 8
// 0087133a  8baeb0000000         mov ebp, dword ptr [esi + 0xb0]
// 00871340  53                   push ebx
// 00871341  6a65                 push 0x65
// 00871343  56                   push esi
// 00871344  8d542428             lea edx, [esp + 0x28]
// 00871348  52                   push edx
// 00871349  8dbeb0000000         lea edi, [esi + 0xb0]
// 0087134f  6800080050           push 0x50000800
// 00871354  8bc8                 mov ecx, eax
// 00871356  895c2448             mov dword ptr [esp + 0x48], ebx
// 0087135a  895c2430             mov dword ptr [esp + 0x30], ebx
// 0087135e  895c2434             mov dword ptr [esp + 0x34], ebx
// 00871362  895c2438             mov dword ptr [esp + 0x38], ebx
// 00871366  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0087136a  ff15c82da400         call dword ptr [0xa42dc8]
// 00871370  50                   push eax
// 00871371  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00871374  683cc8ac00           push 0xacc83c
// 00871379  6800000200           push 0x20000
// 0087137e  8bcf                 mov ecx, edi
// 00871380  ffd0                 call eax
// 00871382  85c0                 test eax, eax
// 00871384  8d4c2418             lea ecx, [esp + 0x18]
// 00871388  0f94442417           sete byte ptr [esp + 0x17]
// 0087138d  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00871395  ff15082ea400         call dword ptr [0xa42e08]
// 0087139b  385c2417             cmp byte ptr [esp + 0x17], bl
// 0087139f  0f856effffff         jne 0x871313
// 008713a5  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 008713ab  7f05                 jg 0x8713b2
// 008713ad  e8588ff9ff           call 0x80a30a
// 008713b2  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 008713b8  8b01                 mov eax, dword ptr [ecx]
// 008713ba  3bc3                 cmp eax, ebx
// 008713bc  7505                 jne 0x8713c3
// 008713be  e8478ff9ff           call 0x80a30a
// 008713c3  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 008713c9  52                   push edx
// 008713ca  8d8888000000         lea ecx, [eax + 0x88]
// 008713d0  e8bb680700           call 0x8e7c90
// 008713d5  33c0                 xor eax, eax
// 008713d7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008713db  64890d00000000       mov dword ptr fs:[0], ecx
// 008713e2  59                   pop ecx
// 008713e3  5f                   pop edi
// 008713e4  5e                   pop esi
// 008713e5  5d                   pop ebp
// 008713e6  5b                   pop ebx
// 008713e7  83c424               add esp, 0x24
// 008713ea  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorDialog@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp