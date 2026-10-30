// roc 2009-12 008c56f0  unit: CXTPCustomizeToolbarsPage  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c56f0
//
// 008c56f0  6aff                 push -1
// 008c56f2  68db449600           push 0x9644db
// 008c56f7  64a100000000         mov eax, dword ptr fs:[0]
// 008c56fd  50                   push eax
// 008c56fe  83ec0c               sub esp, 0xc
// 008c5701  53                   push ebx
// 008c5702  55                   push ebp
// 008c5703  56                   push esi
// 008c5704  57                   push edi
// 008c5705  a10052b600           mov eax, dword ptr [0xb65200]
// 008c570a  33c4                 xor eax, esp
// 008c570c  50                   push eax
// 008c570d  8d442420             lea eax, [esp + 0x20]
// 008c5711  64a300000000         mov dword ptr fs:[0], eax
// 008c5717  8bf1                 mov esi, ecx
// 008c5719  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c571f  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008c5725  6a00                 push 0
// 008c5727  6a00                 push 0
// 008c5729  6888010000           push 0x188
// 008c572e  50                   push eax
// 008c572f  ffd3                 call ebx
// 008c5731  83f8ff               cmp eax, -1
// 008c5734  0f8417010000         je 0x8c5851
// 008c573a  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008c5740  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c5746  8ba9b8000000         mov ebp, dword ptr [ecx + 0xb8]
// 008c574c  6a00                 push 0
// 008c574e  50                   push eax
// 008c574f  6899010000           push 0x199
// 008c5754  52                   push edx
// 008c5755  ffd3                 call ebx
// 008c5757  85c0                 test eax, eax
// 008c5759  0f8cf2000000         jl 0x8c5851
// 008c575f  3b8584000000         cmp eax, dword ptr [ebp + 0x84]
// 008c5765  0f8de6000000         jge 0x8c5851
// 008c576b  50                   push eax
// 008c576c  8bcd                 mov ecx, ebp
// 008c576e  e86df5f4ff           call 0x814ce0
// 008c5773  8bf8                 mov edi, eax
// 008c5775  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 008c577c  0f85cf000000         jne 0x8c5851
// 008c5782  8d4c2418             lea ecx, [esp + 0x18]
// 008c5786  ff1574de9800         call dword ptr [0x98de74]
// 008c578c  8d4c2414             lea ecx, [esp + 0x14]
// 008c5790  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008c5798  ff1574de9800         call dword ptr [0x98de74]
// 008c579e  c644242801           mov byte ptr [esp + 0x28], 1
// 008c57a3  e8f890faff           call 0x86e8a0
// 008c57a8  8b10                 mov edx, dword ptr [eax]
// 008c57aa  8b5208               mov edx, dword ptr [edx + 8]
// 008c57ad  68d0230000           push 0x23d0
// 008c57b2  8d4c2418             lea ecx, [esp + 0x18]
// 008c57b6  51                   push ecx
// 008c57b7  8bc8                 mov ecx, eax
// 008c57b9  ffd2                 call edx
// 008c57bb  8d44241c             lea eax, [esp + 0x1c]
// 008c57bf  50                   push eax
// 008c57c0  8bcf                 mov ecx, edi
// 008c57c2  e8b97df3ff           call 0x7fd580
// 008c57c7  8bc8                 mov ecx, eax
// 008c57c9  c644242802           mov byte ptr [esp + 0x28], 2
// 008c57ce  ff1580de9800         call dword ptr [0x98de80]
// 008c57d4  50                   push eax
// 008c57d5  8d4c2418             lea ecx, [esp + 0x18]
// 008c57d9  ff1580de9800         call dword ptr [0x98de80]
// 008c57df  50                   push eax
// 008c57e0  8d4c2420             lea ecx, [esp + 0x20]
// 008c57e4  51                   push ecx
// 008c57e5  ff157cde9800         call dword ptr [0x98de7c]
// 008c57eb  83c40c               add esp, 0xc
// 008c57ee  8d4c241c             lea ecx, [esp + 0x1c]
// 008c57f2  c644242801           mov byte ptr [esp + 0x28], 1
// 008c57f7  ff15c0de9800         call dword ptr [0x98dec0]
// 008c57fd  6a31                 push 0x31
// 008c57ff  8d4c241c             lea ecx, [esp + 0x1c]
// 008c5803  ff1580de9800         call dword ptr [0x98de80]
// 008c5809  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c580f  50                   push eax
// 008c5810  e8eb9cf7ff           call 0x83f500
// 008c5815  83f801               cmp eax, 1
// 008c5818  7523                 jne 0x8c583d
// 008c581a  8b95a0000000         mov edx, dword ptr [ebp + 0xa0]
// 008c5820  8b4220               mov eax, dword ptr [edx + 0x20]
// 008c5823  57                   push edi
// 008c5824  6a00                 push 0
// 008c5826  6866280000           push 0x2866
// 008c582b  50                   push eax
// 008c582c  ffd3                 call ebx
// 008c582e  57                   push edi
// 008c582f  8bcd                 mov ecx, ebp
// 008c5831  e8da12f5ff           call 0x816b10
// 008c5836  8bce                 mov ecx, esi
// 008c5838  e893fbffff           call 0x8c53d0
// 008c583d  8d4c2414             lea ecx, [esp + 0x14]
// 008c5841  ff15c0de9800         call dword ptr [0x98dec0]
// 008c5847  8d4c2418             lea ecx, [esp + 0x18]
// 008c584b  ff15c0de9800         call dword ptr [0x98dec0]
// 008c5851  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c5855  64890d00000000       mov dword ptr fs:[0], ecx
// 008c585c  59                   pop ecx
// 008c585d  5f                   pop edi
// 008c585e  5e                   pop esi
// 008c585f  5d                   pop ebp
// 008c5860  5b                   pop ebx
// 008c5861  83c418               add esp, 0x18
// 008c5864  c3                   ret 
// copied from an identical function in another client (function ?OnDeleteToolbar@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeToolbarsPage.cpp