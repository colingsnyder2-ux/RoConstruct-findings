// roc 2008-06 00615070  unit: RBX::RevoluteLink  size: 514 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615070
//
// 00615070  6aff                 push -1
// 00615072  68c98e7d00           push 0x7d8ec9
// 00615077  64a100000000         mov eax, dword ptr fs:[0]
// 0061507d  50                   push eax
// 0061507e  64892500000000       mov dword ptr fs:[0], esp
// 00615085  83ec1c               sub esp, 0x1c
// 00615088  53                   push ebx
// 00615089  56                   push esi
// 0061508a  57                   push edi
// 0061508b  68205e9500           push 0x955e20
// 00615090  8bf1                 mov esi, ecx
// 00615092  6860398400           push 0x843960
// 00615097  8974242c             mov dword ptr [esp + 0x2c], esi
// 0061509b  e8f074f5ff           call 0x56c590
// 006150a0  8d442423             lea eax, [esp + 0x23]
// 006150a4  50                   push eax
// 006150a5  8d542427             lea edx, [esp + 0x27]
// 006150a9  33ff                 xor edi, edi
// 006150ab  8d4e30               lea ecx, [esi + 0x30]
// 006150ae  52                   push edx
// 006150af  897c2438             mov dword ptr [esp + 0x38], edi
// 006150b3  c70688fe8300         mov dword ptr [esi], 0x83fe88
// 006150b9  e85210e3ff           call 0x446110
// 006150be  8d442423             lea eax, [esp + 0x23]
// 006150c2  50                   push eax
// 006150c3  8d542427             lea edx, [esp + 0x27]
// 006150c7  8d4e50               lea ecx, [esi + 0x50]
// 006150ca  52                   push edx
// 006150cb  c644243801           mov byte ptr [esp + 0x38], 1
// 006150d0  e83b10e3ff           call 0x446110
// 006150d5  6a04                 push 4
// 006150d7  c644243402           mov byte ptr [esp + 0x34], 2
// 006150dc  8d5e70               lea ebx, [esi + 0x70]
// 006150df  e83cb80800           call 0x6a0920
// 006150e4  83c404               add esp, 4
// 006150e7  3bc7                 cmp eax, edi
// 006150e9  7404                 je 0x6150ef
// 006150eb  8918                 mov dword ptr [eax], ebx
// 006150ed  eb02                 jmp 0x6150f1
// 006150ef  33c0                 xor eax, eax
// 006150f1  8903                 mov dword ptr [ebx], eax
// 006150f3  897b0c               mov dword ptr [ebx + 0xc], edi
// 006150f6  897b10               mov dword ptr [ebx + 0x10], edi
// 006150f9  897b14               mov dword ptr [ebx + 0x14], edi
// 006150fc  6a04                 push 4
// 006150fe  c644243404           mov byte ptr [esp + 0x34], 4
// 00615103  8d9e88000000         lea ebx, [esi + 0x88]
// 00615109  e812b80800           call 0x6a0920
// 0061510e  83c404               add esp, 4
// 00615111  3bc7                 cmp eax, edi
// 00615113  7404                 je 0x615119
// 00615115  8918                 mov dword ptr [eax], ebx
// 00615117  eb02                 jmp 0x61511b
// 00615119  33c0                 xor eax, eax
// 0061511b  8903                 mov dword ptr [ebx], eax
// 0061511d  897b0c               mov dword ptr [ebx + 0xc], edi
// 00615120  897b10               mov dword ptr [ebx + 0x10], edi
// 00615123  897b14               mov dword ptr [ebx + 0x14], edi
// 00615126  6a04                 push 4
// 00615128  c644243406           mov byte ptr [esp + 0x34], 6
// 0061512d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 00615133  e8e8b70800           call 0x6a0920
// 00615138  83c404               add esp, 4
// 0061513b  3bc7                 cmp eax, edi
// 0061513d  7404                 je 0x615143
// 0061513f  8918                 mov dword ptr [eax], ebx
// 00615141  eb02                 jmp 0x615145
// 00615143  33c0                 xor eax, eax
// 00615145  8903                 mov dword ptr [ebx], eax
// 00615147  897b0c               mov dword ptr [ebx + 0xc], edi
// 0061514a  897b10               mov dword ptr [ebx + 0x10], edi
// 0061514d  897b14               mov dword ptr [ebx + 0x14], edi
// 00615150  6a04                 push 4
// 00615152  c644243408           mov byte ptr [esp + 0x34], 8
// 00615157  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0061515d  e8beb70800           call 0x6a0920
// 00615162  83c404               add esp, 4
// 00615165  3bc7                 cmp eax, edi
// 00615167  7404                 je 0x61516d
// 00615169  8918                 mov dword ptr [eax], ebx
// 0061516b  eb02                 jmp 0x61516f
// 0061516d  33c0                 xor eax, eax
// 0061516f  8903                 mov dword ptr [ebx], eax
// 00615171  897b0c               mov dword ptr [ebx + 0xc], edi
// 00615174  897b10               mov dword ptr [ebx + 0x10], edi
// 00615177  897b14               mov dword ptr [ebx + 0x14], edi
// 0061517a  6a04                 push 4
// 0061517c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00615181  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00615187  e894b70800           call 0x6a0920
// 0061518c  83c404               add esp, 4
// 0061518f  3bc7                 cmp eax, edi
// 00615191  7404                 je 0x615197
// 00615193  8918                 mov dword ptr [eax], ebx
// 00615195  eb02                 jmp 0x615199
// 00615197  33c0                 xor eax, eax
// 00615199  8903                 mov dword ptr [ebx], eax
// 0061519b  897b0c               mov dword ptr [ebx + 0xc], edi
// 0061519e  897b10               mov dword ptr [ebx + 0x10], edi
// 006151a1  897b14               mov dword ptr [ebx + 0x14], edi
// 006151a4  6858398400           push 0x843958
// 006151a9  57                   push edi
// 006151aa  8bce                 mov ecx, esi
// 006151ac  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 006151b1  e87a830300           call 0x64d530
// 006151b6  684c398400           push 0x84394c
// 006151bb  6a01                 push 1
// 006151bd  8bce                 mov ecx, esi
// 006151bf  e86c830300           call 0x64d530
// 006151c4  6840398400           push 0x843940
// 006151c9  6a02                 push 2
// 006151cb  8bce                 mov ecx, esi
// 006151cd  e85e830300           call 0x64d530
// 006151d2  6838398400           push 0x843938
// 006151d7  6a03                 push 3
// 006151d9  8bce                 mov ecx, esi
// 006151db  e850830300           call 0x64d530
// 006151e0  6830398400           push 0x843930
// 006151e5  6a04                 push 4
// 006151e7  8bce                 mov ecx, esi
// 006151e9  e842830300           call 0x64d530
// 006151ee  6828398400           push 0x843928
// 006151f3  6a06                 push 6
// 006151f5  8bce                 mov ecx, esi
// 006151f7  e834830300           call 0x64d530
// 006151fc  6820398400           push 0x843920
// 00615201  6a07                 push 7
// 00615203  8bce                 mov ecx, esi
// 00615205  e826830300           call 0x64d530
// 0061520a  6818398400           push 0x843918
// 0061520f  6a08                 push 8
// 00615211  8bce                 mov ecx, esi
// 00615213  e818830300           call 0x64d530
// 00615218  6810398400           push 0x843910
// 0061521d  6a09                 push 9
// 0061521f  8bce                 mov ecx, esi
// 00615221  e80a830300           call 0x64d530
// 00615226  6808398400           push 0x843908
// 0061522b  6a0a                 push 0xa
// 0061522d  8bce                 mov ecx, esi
// 0061522f  e8fc820300           call 0x64d530
// 00615234  6800398400           push 0x843900
// 00615239  6a0b                 push 0xb
// 0061523b  8bce                 mov ecx, esi
// 0061523d  e8ee820300           call 0x64d530
// 00615242  68f4388400           push 0x8438f4
// 00615247  6a0c                 push 0xc
// 00615249  8bce                 mov ecx, esi
// 0061524b  e8e0820300           call 0x64d530
// 00615250  68f0388400           push 0x8438f0
// 00615255  6a0d                 push 0xd
// 00615257  8bce                 mov ecx, esi
// 00615259  e8d2820300           call 0x64d530
// 0061525e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00615262  5f                   pop edi
// 00615263  8bc6                 mov eax, esi
// 00615265  5e                   pop esi
// 00615266  5b                   pop ebx
// 00615267  64890d00000000       mov dword ptr fs:[0], ecx
// 0061526e  83c428               add esp, 0x28
// 00615271  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4InputType@Controller@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
