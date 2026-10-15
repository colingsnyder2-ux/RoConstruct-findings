// roc 2008-06 0055f7b0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 397 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f7b0
//
// 0055f7b0  6aff                 push -1
// 0055f7b2  68f8ea7c00           push 0x7ceaf8
// 0055f7b7  64a100000000         mov eax, dword ptr fs:[0]
// 0055f7bd  50                   push eax
// 0055f7be  64892500000000       mov dword ptr fs:[0], esp
// 0055f7c5  83ec20               sub esp, 0x20
// 0055f7c8  53                   push ebx
// 0055f7c9  55                   push ebp
// 0055f7ca  56                   push esi
// 0055f7cb  8bf1                 mov esi, ecx
// 0055f7cd  8d8e30010000         lea ecx, [esi + 0x130]
// 0055f7d3  57                   push edi
// 0055f7d4  894c2418             mov dword ptr [esp + 0x18], ecx
// 0055f7d8  e803550300           call 0x594ce0
// 0055f7dd  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0055f7e2  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 0055f7e8  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 0055f7ee  8b38                 mov edi, dword ptr [eax]
// 0055f7f0  8dae54010000         lea ebp, [esi + 0x154]
// 0055f7f6  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0055f7fe  89442414             mov dword ptr [esp + 0x14], eax
// 0055f802  894c2410             mov dword ptr [esp + 0x10], ecx
// 0055f806  8bd9                 mov ebx, ecx
// 0055f808  85db                 test ebx, ebx
// 0055f80a  7406                 je 0x55f812
// 0055f80c  3b5c2410             cmp ebx, dword ptr [esp + 0x10]
// 0055f810  740a                 je 0x55f81c
// 0055f812  8b3590288000         mov esi, dword ptr [0x802890]
// 0055f818  ffd6                 call esi
// 0055f81a  eb06                 jmp 0x55f822
// 0055f81c  8b3590288000         mov esi, dword ptr [0x802890]
// 0055f822  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 0055f826  0f84c1000000         je 0x55f8ed
// 0055f82c  85db                 test ebx, ebx
// 0055f82e  0f8592000000         jne 0x55f8c6
// 0055f834  ffd6                 call esi
// 0055f836  33c0                 xor eax, eax
// 0055f838  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0055f83b  7502                 jne 0x55f83f
// 0055f83d  ffd6                 call esi
// 0055f83f  8d542428             lea edx, [esp + 0x28]
// 0055f843  52                   push edx
// 0055f844  8d7708               lea esi, [edi + 8]
// 0055f847  ff1508288000         call dword ptr [0x802808]
// 0055f84d  8d44242c             lea eax, [esp + 0x2c]
// 0055f851  50                   push eax
// 0055f852  ff15e8278000         call dword ptr [0x8027e8]
// 0055f858  50                   push eax
// 0055f859  8d4c242c             lea ecx, [esp + 0x2c]
// 0055f85d  51                   push ecx
// 0055f85e  e86defffff           call 0x55e7d0
// 0055f863  8b4624               mov eax, dword ptr [esi + 0x24]
// 0055f866  8b542434             mov edx, dword ptr [esp + 0x34]
// 0055f86a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0055f86d  83c410               add esp, 0x10
// 0055f870  3bd0                 cmp edx, eax
// 0055f872  7f61                 jg 0x55f8d5
// 0055f874  7c08                 jl 0x55f87e
// 0055f876  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055f87a  3bc1                 cmp eax, ecx
// 0055f87c  7357                 jae 0x55f8d5
// 0055f87e  85db                 test ebx, ebx
// 0055f880  754b                 jne 0x55f8cd
// 0055f882  ff1590288000         call dword ptr [0x802890]
// 0055f888  33c0                 xor eax, eax
// 0055f88a  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0055f88d  7506                 jne 0x55f895
// 0055f88f  ff1590288000         call dword ptr [0x802890]
// 0055f895  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0055f899  51                   push ecx
// 0055f89a  56                   push esi
// 0055f89b  ff156c238000         call dword ptr [0x80236c]
// 0055f8a1  83c408               add esp, 8
// 0055f8a4  84c0                 test al, al
// 0055f8a6  756d                 jne 0x55f915
// 0055f8a8  85db                 test ebx, ebx
// 0055f8aa  7525                 jne 0x55f8d1
// 0055f8ac  ff1590288000         call dword ptr [0x802890]
// 0055f8b2  33c0                 xor eax, eax
// 0055f8b4  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0055f8b7  7506                 jne 0x55f8bf
// 0055f8b9  ff1590288000         call dword ptr [0x802890]
// 0055f8bf  8b3f                 mov edi, dword ptr [edi]
// 0055f8c1  e942ffffff           jmp 0x55f808
// 0055f8c6  8b03                 mov eax, dword ptr [ebx]
// 0055f8c8  e96bffffff           jmp 0x55f838
// 0055f8cd  8b03                 mov eax, dword ptr [ebx]
// 0055f8cf  ebb9                 jmp 0x55f88a
// 0055f8d1  8b03                 mov eax, dword ptr [ebx]
// 0055f8d3  ebdf                 jmp 0x55f8b4
// 0055f8d5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0055f8d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055f8dd  52                   push edx
// 0055f8de  50                   push eax
// 0055f8df  57                   push edi
// 0055f8e0  53                   push ebx
// 0055f8e1  8d4c2438             lea ecx, [esp + 0x38]
// 0055f8e5  51                   push ecx
// 0055f8e6  8bcd                 mov ecx, ebp
// 0055f8e8  e8a3edffff           call 0x55e690
// 0055f8ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055f8f1  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0055f8f9  e802540300           call 0x594d00
// 0055f8fe  5f                   pop edi
// 0055f8ff  5e                   pop esi
// 0055f900  5d                   pop ebp
// 0055f901  32c0                 xor al, al
// 0055f903  5b                   pop ebx
// 0055f904  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055f908  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f90f  83c42c               add esp, 0x2c
// 0055f912  c20400               ret 4
// 0055f915  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055f919  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0055f921  e8da530300           call 0x594d00
// 0055f926  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055f92a  5f                   pop edi
// 0055f92b  5e                   pop esi
// 0055f92c  5d                   pop ebp
// 0055f92d  b001                 mov al, 1
// 0055f92f  5b                   pop ebx
// 0055f930  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f937  83c42c               add esp, 0x2c
// 0055f93a  c20400               ret 4
// library rbxgs/roc_unit_20d2ec6a12aa22f7.cpp (function ?isUrlBad@ContentProvider@RBX@@QAE_NPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_20d2ec6a12aa22f7.cpp
