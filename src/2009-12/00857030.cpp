// roc 2009-12 00857030  unit: CXTPControlTabWorkspace  size: 637 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857030
//
// 00857030  6aff                 push -1
// 00857032  6844e09500           push 0x95e044
// 00857037  64a100000000         mov eax, dword ptr fs:[0]
// 0085703d  50                   push eax
// 0085703e  83ec18               sub esp, 0x18
// 00857041  53                   push ebx
// 00857042  55                   push ebp
// 00857043  56                   push esi
// 00857044  57                   push edi
// 00857045  a10052b600           mov eax, dword ptr [0xb65200]
// 0085704a  33c4                 xor eax, esp
// 0085704c  50                   push eax
// 0085704d  8d44242c             lea eax, [esp + 0x2c]
// 00857051  64a300000000         mov dword ptr fs:[0], eax
// 00857057  8bf1                 mov esi, ecx
// 00857059  89742414             mov dword ptr [esp + 0x14], esi
// 0085705d  e8e6d0f9ff           call 0x7f4148
// 00857062  33ff                 xor edi, edi
// 00857064  897c2434             mov dword ptr [esp + 0x34], edi
// 00857068  c74654c0c69f00       mov dword ptr [esi + 0x54], 0x9fc6c0
// 0085706f  8d4e68               lea ecx, [esi + 0x68]
// 00857072  c706a4cd9f00         mov dword ptr [esi], 0x9fcda4
// 00857078  c7465490cd9f00       mov dword ptr [esi + 0x54], 0x9fcd90
// 0085707f  e86cfcffff           call 0x856cf0
// 00857084  bd01000000           mov ebp, 1
// 00857089  6834010000           push 0x134
// 0085708e  c644243802           mov byte ptr [esp + 0x38], 2
// 00857093  89be84000000         mov dword ptr [esi + 0x84], edi
// 00857099  89aebc000000         mov dword ptr [esi + 0xbc], ebp
// 0085709f  e8bcc7f9ff           call 0x7f3860
// 008570a4  83c404               add esp, 4
// 008570a7  89442418             mov dword ptr [esp + 0x18], eax
// 008570ab  c644243403           mov byte ptr [esp + 0x34], 3
// 008570b0  3bc7                 cmp eax, edi
// 008570b2  7409                 je 0x8570bd
// 008570b4  8bc8                 mov ecx, eax
// 008570b6  e8b5cb0700           call 0x8d3c70
// 008570bb  eb02                 jmp 0x8570bf
// 008570bd  33c0                 xor eax, eax
// 008570bf  89868c000000         mov dword ptr [esi + 0x8c], eax
// 008570c5  896828               mov dword ptr [eax + 0x28], ebp
// 008570c8  c644243402           mov byte ptr [esp + 0x34], 2
// 008570cd  89be90000000         mov dword ptr [esi + 0x90], edi
// 008570d3  89ae94000000         mov dword ptr [esi + 0x94], ebp
// 008570d9  897e5c               mov dword ptr [esi + 0x5c], edi
// 008570dc  897e64               mov dword ptr [esi + 0x64], edi
// 008570df  897e60               mov dword ptr [esi + 0x60], edi
// 008570e2  89be98000000         mov dword ptr [esi + 0x98], edi
// 008570e8  89ae9c000000         mov dword ptr [esi + 0x9c], ebp
// 008570ee  89be88000000         mov dword ptr [esi + 0x88], edi
// 008570f4  89aeb0000000         mov dword ptr [esi + 0xb0], ebp
// 008570fa  89bec4000000         mov dword ptr [esi + 0xc4], edi
// 00857100  89be18010000         mov dword ptr [esi + 0x118], edi
// 00857106  89aecc000000         mov dword ptr [esi + 0xcc], ebp
// 0085710c  89be14010000         mov dword ptr [esi + 0x114], edi
// 00857112  c786d000000005000000 mov dword ptr [esi + 0xd0], 5
// 0085711c  89be10010000         mov dword ptr [esi + 0x110], edi
// 00857122  e879770100           call 0x86e8a0
// 00857127  8b10                 mov edx, dword ptr [eax]
// 00857129  8bc8                 mov ecx, eax
// 0085712b  8b4218               mov eax, dword ptr [edx + 0x18]
// 0085712e  68f2260000           push 0x26f2
// 00857133  ffd0                 call eax
// 00857135  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0085713b  e860770100           call 0x86e8a0
// 00857140  8b10                 mov edx, dword ptr [eax]
// 00857142  8bc8                 mov ecx, eax
// 00857144  8b4218               mov eax, dword ptr [edx + 0x18]
// 00857147  68f3260000           push 0x26f3
// 0085714c  ffd0                 call eax
// 0085714e  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00857154  e847770100           call 0x86e8a0
// 00857159  8b10                 mov edx, dword ptr [eax]
// 0085715b  8bc8                 mov ecx, eax
// 0085715d  8b4218               mov eax, dword ptr [edx + 0x18]
// 00857160  6894230000           push 0x2394
// 00857165  ffd0                 call eax
// 00857167  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0085716d  e82e770100           call 0x86e8a0
// 00857172  8b10                 mov edx, dword ptr [eax]
// 00857174  8bc8                 mov ecx, eax
// 00857176  8b4218               mov eax, dword ptr [edx + 0x18]
// 00857179  6895230000           push 0x2395
// 0085717e  ffd0                 call eax
// 00857180  8b1d30ca9800         mov ebx, dword ptr [0x98ca30]
// 00857186  686ccd9f00           push 0x9fcd6c
// 0085718b  8986ac000000         mov dword ptr [esi + 0xac], eax
// 00857191  89aec0000000         mov dword ptr [esi + 0xc0], ebp
// 00857197  897e7c               mov dword ptr [esi + 0x7c], edi
// 0085719a  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 008571a0  89be80000000         mov dword ptr [esi + 0x80], edi
// 008571a6  ffd3                 call ebx
// 008571a8  6850cd9f00           push 0x9fcd50
// 008571ad  89861c010000         mov dword ptr [esi + 0x11c], eax
// 008571b3  ffd3                 call ebx
// 008571b5  8d4c241c             lea ecx, [esp + 0x1c]
// 008571b9  898620010000         mov dword ptr [esi + 0x120], eax
// 008571bf  e84ccef9ff           call 0x7f4010
// 008571c4  6800ff0000           push 0xff00
// 008571c9  55                   push ebp
// 008571ca  6a10                 push 0x10
// 008571cc  6890230000           push 0x2390
// 008571d1  8d4c242c             lea ecx, [esp + 0x2c]
// 008571d5  c644244404           mov byte ptr [esp + 0x44], 4
// 008571da  e8e1f80c00           call 0x926ac0
// 008571df  b810000000           mov eax, 0x10
// 008571e4  57                   push edi
// 008571e5  8bc8                 mov ecx, eax
// 008571e7  51                   push ecx
// 008571e8  50                   push eax
// 008571e9  6a02                 push 2
// 008571eb  8d4c2434             lea ecx, [esp + 0x34]
// 008571ef  51                   push ecx
// 008571f0  8d542430             lea edx, [esp + 0x30]
// 008571f4  52                   push edx
// 008571f5  c744243cc5230000     mov dword ptr [esp + 0x3c], 0x23c5
// 008571fd  c7442440c6230000     mov dword ptr [esp + 0x40], 0x23c6
// 00857205  e8a692fbff           call 0x8104b0
// 0085720a  8bc8                 mov ecx, eax
// 0085720c  e81f83fbff           call 0x80f530
// 00857211  6a3c                 push 0x3c
// 00857213  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00857219  e842c6f9ff           call 0x7f3860
// 0085721e  8bd8                 mov ebx, eax
// 00857220  83c404               add esp, 4
// 00857223  895c2418             mov dword ptr [esp + 0x18], ebx
// 00857227  c644243405           mov byte ptr [esp + 0x34], 5
// 0085722c  3bdf                 cmp ebx, edi
// 0085722e  740f                 je 0x85723f
// 00857230  8bcb                 mov ecx, ebx
// 00857232  e875d4f9ff           call 0x7f46ac
// 00857237  c7039ccb9f00         mov dword ptr [ebx], 0x9fcb9c
// 0085723d  eb02                 jmp 0x857241
// 0085723f  33db                 xor ebx, ebx
// 00857241  899eec000000         mov dword ptr [esi + 0xec], ebx
// 00857247  68a8000000           push 0xa8
// 0085724c  c644243804           mov byte ptr [esp + 0x38], 4
// 00857251  897338               mov dword ptr [ebx + 0x38], esi
// 00857254  e807c6f9ff           call 0x7f3860
// 00857259  83c404               add esp, 4
// 0085725c  89442418             mov dword ptr [esp + 0x18], eax
// 00857260  c644243406           mov byte ptr [esp + 0x34], 6
// 00857265  3bc7                 cmp eax, edi
// 00857267  7409                 je 0x857272
// 00857269  8bc8                 mov ecx, eax
// 0085726b  e880a70000           call 0x8619f0
// 00857270  eb02                 jmp 0x857274
// 00857272  33c0                 xor eax, eax
// 00857274  8d4c241c             lea ecx, [esp + 0x1c]
// 00857278  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 0085727e  897e58               mov dword ptr [esi + 0x58], edi
// 00857281  89bed4000000         mov dword ptr [esi + 0xd4], edi
// 00857287  89aed8000000         mov dword ptr [esi + 0xd8], ebp
// 0085728d  c644243402           mov byte ptr [esp + 0x34], 2
// 00857292  e85bcdf9ff           call 0x7f3ff2
// 00857297  8bc6                 mov eax, esi
// 00857299  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085729d  64890d00000000       mov dword ptr fs:[0], ecx
// 008572a4  59                   pop ecx
// 008572a5  5f                   pop edi
// 008572a6  5e                   pop esi
// 008572a7  5d                   pop ebp
// 008572a8  5b                   pop ebx
// 008572a9  83c424               add esp, 0x24
// 008572ac  c3                   ret 
// copied from an identical function in another client (function ??0CXTPTabClientWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp