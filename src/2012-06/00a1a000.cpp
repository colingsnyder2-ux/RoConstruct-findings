// roc 2012-06 00a1a000  unit: CXTPDockContext  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1a000
//
// 00a1a000  8b442404             mov eax, dword ptr [esp + 4]
// 00a1a004  83ec38               sub esp, 0x38
// 00a1a007  53                   push ebx
// 00a1a008  55                   push ebp
// 00a1a009  56                   push esi
// 00a1a00a  8bf1                 mov esi, ecx
// 00a1a00c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a1a00f  8b5610               mov edx, dword ptr [esi + 0x10]
// 00a1a012  2bc1                 sub eax, ecx
// 00a1a014  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a1a018  2bca                 sub ecx, edx
// 00a1a01a  8b5608               mov edx, dword ptr [esi + 8]
// 00a1a01d  57                   push edi
// 00a1a01e  bf42000000           mov edi, 0x42
// 00a1a023  83fa0a               cmp edx, 0xa
// 00a1a026  742a                 je 0xa1a052
// 00a1a028  83fa0b               cmp edx, 0xb
// 00a1a02b  7420                 je 0xa1a04d
// 00a1a02d  bf62000000           mov edi, 0x62
// 00a1a032  83fa0c               cmp edx, 0xc
// 00a1a035  750b                 jne 0xa1a042
// 00a1a037  014e44               add dword ptr [esi + 0x44], ecx
// 00a1a03a  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a1a03d  2b4644               sub eax, dword ptr [esi + 0x44]
// 00a1a040  eb1e                 jmp 0xa1a060
// 00a1a042  014e4c               add dword ptr [esi + 0x4c], ecx
// 00a1a045  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a1a048  2b4644               sub eax, dword ptr [esi + 0x44]
// 00a1a04b  eb13                 jmp 0xa1a060
// 00a1a04d  83fa0a               cmp edx, 0xa
// 00a1a050  7505                 jne 0xa1a057
// 00a1a052  014640               add dword ptr [esi + 0x40], eax
// 00a1a055  eb03                 jmp 0xa1a05a
// 00a1a057  014648               add dword ptr [esi + 0x48], eax
// 00a1a05a  8b4648               mov eax, dword ptr [esi + 0x48]
// 00a1a05d  2b4640               sub eax, dword ptr [esi + 0x40]
// 00a1a060  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a1a063  8b11                 mov edx, dword ptr [ecx]
// 00a1a065  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 00a1a06b  33db                 xor ebx, ebx
// 00a1a06d  85c0                 test eax, eax
// 00a1a06f  0f9cc3               setl bl
// 00a1a072  57                   push edi
// 00a1a073  4b                   dec ebx
// 00a1a074  23d8                 and ebx, eax
// 00a1a076  53                   push ebx
// 00a1a077  8d442418             lea eax, [esp + 0x18]
// 00a1a07b  50                   push eax
// 00a1a07c  ffd2                 call edx
// 00a1a07e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a1a081  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a1a084  8d442418             lea eax, [esp + 0x18]
// 00a1a088  50                   push eax
// 00a1a089  52                   push edx
// 00a1a08a  ff15f83ab200         call dword ptr [0xb23af8]
// 00a1a090  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a1a094  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00a1a098  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a1a09c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a1a0a0  8bc7                 mov eax, edi
// 00a1a0a2  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a1a0a6  8bcb                 mov ecx, ebx
// 00a1a0a8  2bcd                 sub ecx, ebp
// 00a1a0aa  3bc2                 cmp eax, edx
// 00a1a0ac  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a1a0b0  7508                 jne 0xa1a0ba
// 00a1a0b2  3bc8                 cmp ecx, eax
// 00a1a0b4  0f840a010000         je 0xa1a1c4
// 00a1a0ba  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a1a0bd  83f90b               cmp ecx, 0xb
// 00a1a0c0  742b                 je 0xa1a0ed
// 00a1a0c2  83f90f               cmp ecx, 0xf
// 00a1a0c5  7426                 je 0xa1a0ed
// 00a1a0c7  83f90a               cmp ecx, 0xa
// 00a1a0ca  750a                 jne 0xa1a0d6
// 00a1a0cc  03c5                 add eax, ebp
// 00a1a0ce  2bfa                 sub edi, edx
// 00a1a0d0  897c2418             mov dword ptr [esp + 0x18], edi
// 00a1a0d4  eb23                 jmp 0xa1a0f9
// 00a1a0d6  83f90c               cmp ecx, 0xc
// 00a1a0d9  7522                 jne 0xa1a0fd
// 00a1a0db  2bd8                 sub ebx, eax
// 00a1a0dd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a1a0e1  03c2                 add eax, edx
// 00a1a0e3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00a1a0e7  89442420             mov dword ptr [esp + 0x20], eax
// 00a1a0eb  eb10                 jmp 0xa1a0fd
// 00a1a0ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a1a0f1  03ca                 add ecx, edx
// 00a1a0f3  03c5                 add eax, ebp
// 00a1a0f5  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a1a0f9  89442424             mov dword ptr [esp + 0x24], eax
// 00a1a0fd  8b5604               mov edx, dword ptr [esi + 4]
// 00a1a100  52                   push edx
// 00a1a101  8d44242c             lea eax, [esp + 0x2c]
// 00a1a105  50                   push eax
// 00a1a106  e8c504fbff           call 0x9ca5d0
// 00a1a10b  8bc8                 mov ecx, eax
// 00a1a10d  e85e00fbff           call 0x9ca170
// 00a1a112  8d4c2418             lea ecx, [esp + 0x18]
// 00a1a116  51                   push ecx
// 00a1a117  8d54242c             lea edx, [esp + 0x2c]
// 00a1a11b  52                   push edx
// 00a1a11c  8d442440             lea eax, [esp + 0x40]
// 00a1a120  50                   push eax
// 00a1a121  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a1a127  85c0                 test eax, eax
// 00a1a129  7566                 jne 0xa1a191
// 00a1a12b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a1a12f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a1a133  3bc8                 cmp ecx, eax
// 00a1a135  8b3df43ab200         mov edi, dword ptr [0xb23af4]
// 00a1a13b  7d0e                 jge 0xa1a14b
// 00a1a13d  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a1a141  6a00                 push 0
// 00a1a143  50                   push eax
// 00a1a144  8d4c2420             lea ecx, [esp + 0x20]
// 00a1a148  51                   push ecx
// 00a1a149  eb14                 jmp 0xa1a15f
// 00a1a14b  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a1a14f  39442418             cmp dword ptr [esp + 0x18], eax
// 00a1a153  7e0c                 jle 0xa1a161
// 00a1a155  6a00                 push 0
// 00a1a157  2bc1                 sub eax, ecx
// 00a1a159  50                   push eax
// 00a1a15a  8d542420             lea edx, [esp + 0x20]
// 00a1a15e  52                   push edx
// 00a1a15f  ffd7                 call edi
// 00a1a161  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a1a165  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a1a169  3bc1                 cmp eax, ecx
// 00a1a16b  7d0e                 jge 0xa1a17b
// 00a1a16d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00a1a171  8d442418             lea eax, [esp + 0x18]
// 00a1a175  51                   push ecx
// 00a1a176  6a00                 push 0
// 00a1a178  50                   push eax
// 00a1a179  eb14                 jmp 0xa1a18f
// 00a1a17b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a1a17f  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00a1a183  7e10                 jle 0xa1a195
// 00a1a185  2bc8                 sub ecx, eax
// 00a1a187  51                   push ecx
// 00a1a188  6a00                 push 0
// 00a1a18a  8d4c2420             lea ecx, [esp + 0x20]
// 00a1a18e  51                   push ecx
// 00a1a18f  ffd7                 call edi
// 00a1a191  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a1a195  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a1a199  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a1a19d  6a01                 push 1
// 00a1a19f  2bc1                 sub eax, ecx
// 00a1a1a1  50                   push eax
// 00a1a1a2  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a1a1a6  2bc2                 sub eax, edx
// 00a1a1a8  50                   push eax
// 00a1a1a9  51                   push ecx
// 00a1a1aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a1a1ad  52                   push edx
// 00a1a1ae  e82783f6ff           call 0x9824da
// 00a1a1b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a1a1b6  8b11                 mov edx, dword ptr [ecx]
// 00a1a1b8  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00a1a1be  6a01                 push 1
// 00a1a1c0  6a00                 push 0
// 00a1a1c2  ffd0                 call eax
// 00a1a1c4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a1a1c8  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a1a1cc  5f                   pop edi
// 00a1a1cd  894e0c               mov dword ptr [esi + 0xc], ecx
// 00a1a1d0  895610               mov dword ptr [esi + 0x10], edx
// 00a1a1d3  5e                   pop esi
// 00a1a1d4  5d                   pop ebp
// 00a1a1d5  5b                   pop ebx
// 00a1a1d6  83c438               add esp, 0x38
// 00a1a1d9  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPDockContext.cpp (function ?Stretch@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPDockContext.cpp
