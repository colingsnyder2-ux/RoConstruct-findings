// roc 2010-06 008a0140  unit: CXTPDialogBar::CControlCaptionPopup  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0140
//
// 008a0140  6aff                 push -1
// 008a0142  6821c69b00           push 0x9bc621
// 008a0147  64a100000000         mov eax, dword ptr fs:[0]
// 008a014d  50                   push eax
// 008a014e  83ec38               sub esp, 0x38
// 008a0151  53                   push ebx
// 008a0152  55                   push ebp
// 008a0153  56                   push esi
// 008a0154  57                   push edi
// 008a0155  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a015a  33c4                 xor eax, esp
// 008a015c  50                   push eax
// 008a015d  8d44244c             lea eax, [esp + 0x4c]
// 008a0161  64a300000000         mov dword ptr fs:[0], eax
// 008a0167  8bf1                 mov esi, ecx
// 008a0169  e8129ff0ff           call 0x7aa080
// 008a016e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008a0172  89442414             mov dword ptr [esp + 0x14], eax
// 008a0176  0598000000           add eax, 0x98
// 008a017b  50                   push eax
// 008a017c  57                   push edi
// 008a017d  8d4c2444             lea ecx, [esp + 0x44]
// 008a0181  e81af5f5ff           call 0x7ff6a0
// 008a0186  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008a018d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008a0193  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 008a0199  8baec0000000         mov ebp, dword ptr [esi + 0xc0]
// 008a019f  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 008a01a5  c744245400000000     mov dword ptr [esp + 0x54], 0
// 008a01ad  89442434             mov dword ptr [esp + 0x34], eax
// 008a01b1  894c2438             mov dword ptr [esp + 0x38], ecx
// 008a01b5  7424                 je 0x8a01db
// 008a01b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a01bb  8b11                 mov edx, dword ptr [ecx]
// 008a01bd  8b4278               mov eax, dword ptr [edx + 0x78]
// 008a01c0  56                   push esi
// 008a01c1  57                   push edi
// 008a01c2  ffd0                 call eax
// 008a01c4  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008a01cb  740e                 je 0x8a01db
// 008a01cd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a01d1  8b11                 mov edx, dword ptr [ecx]
// 008a01d3  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008a01d6  56                   push esi
// 008a01d7  ffd0                 call eax
// 008a01d9  eb0e                 jmp 0x8a01e9
// 008a01db  e84039f4ff           call 0x7e3b20
// 008a01e0  6a12                 push 0x12
// 008a01e2  8bc8                 mov ecx, eax
// 008a01e4  e8c730f4ff           call 0x7e32b0
// 008a01e9  8b17                 mov edx, dword ptr [edi]
// 008a01eb  50                   push eax
// 008a01ec  8b4238               mov eax, dword ptr [edx + 0x38]
// 008a01ef  8bcf                 mov ecx, edi
// 008a01f1  ffd0                 call eax
// 008a01f3  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008a01f9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a01fd  8b542438             mov edx, dword ptr [esp + 0x38]
// 008a0201  f7d8                 neg eax
// 008a0203  1bc0                 sbb eax, eax
// 008a0205  83e00d               and eax, 0xd
// 008a0208  83c002               add eax, 2
// 008a020b  2bc8                 sub ecx, eax
// 008a020d  8b06                 mov eax, dword ptr [esi]
// 008a020f  894c2424             mov dword ptr [esp + 0x24], ecx
// 008a0213  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008a0217  8d4c2418             lea ecx, [esp + 0x18]
// 008a021b  89542428             mov dword ptr [esp + 0x28], edx
// 008a021f  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a0222  51                   push ecx
// 008a0223  83c502               add ebp, 2
// 008a0226  8bce                 mov ecx, esi
// 008a0228  895c2424             mov dword ptr [esp + 0x24], ebx
// 008a022c  896c2420             mov dword ptr [esp + 0x20], ebp
// 008a0230  ffd2                 call edx
// 008a0232  8be8                 mov ebp, eax
// 008a0234  8b07                 mov eax, dword ptr [edi]
// 008a0236  6a24                 push 0x24
// 008a0238  8d4c2420             lea ecx, [esp + 0x20]
// 008a023c  51                   push ecx
// 008a023d  8bcd                 mov ecx, ebp
// 008a023f  c644245c01           mov byte ptr [esp + 0x5c], 1
// 008a0244  89442464             mov dword ptr [esp + 0x64], eax
// 008a0248  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008a024e  50                   push eax
// 008a024f  8bcd                 mov ecx, ebp
// 008a0251  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008a0257  8b542468             mov edx, dword ptr [esp + 0x68]
// 008a025b  50                   push eax
// 008a025c  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a025f  8bcf                 mov ecx, edi
// 008a0261  ffd0                 call eax
// 008a0263  8d4c2418             lea ecx, [esp + 0x18]
// 008a0267  c644245400           mov byte ptr [esp + 0x54], 0
// 008a026c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008a0272  8b4f08               mov ecx, dword ptr [edi + 8]
// 008a0275  51                   push ecx
// 008a0276  ff156ca19e00         call dword ptr [0x9ea16c]
// 008a027c  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008a0283  8be8                 mov ebp, eax
// 008a0285  7430                 je 0x8a02b7
// 008a0287  8b442438             mov eax, dword ptr [esp + 0x38]
// 008a028b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a028f  2bc3                 sub eax, ebx
// 008a0291  99                   cdq 
// 008a0292  2bc2                 sub eax, edx
// 008a0294  d1f8                 sar eax, 1
// 008a0296  55                   push ebp
// 008a0297  03c3                 add eax, ebx
// 008a0299  8d5002               lea edx, [eax + 2]
// 008a029c  52                   push edx
// 008a029d  83c1f7               add ecx, -9
// 008a02a0  51                   push ecx
// 008a02a1  83c0fe               add eax, -2
// 008a02a4  50                   push eax
// 008a02a5  8d7104               lea esi, [ecx + 4]
// 008a02a8  56                   push esi
// 008a02a9  50                   push eax
// 008a02aa  8d59fc               lea ebx, [ecx - 4]
// 008a02ad  53                   push ebx
// 008a02ae  57                   push edi
// 008a02af  e8ecdef0ff           call 0x7ae1a0
// 008a02b4  83c420               add esp, 0x20
// 008a02b7  8d4c243c             lea ecx, [esp + 0x3c]
// 008a02bb  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 008a02c3  e858f4f5ff           call 0x7ff720
// 008a02c8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a02cc  64890d00000000       mov dword ptr fs:[0], ecx
// 008a02d3  59                   pop ecx
// 008a02d4  5f                   pop edi
// 008a02d5  5e                   pop esi
// 008a02d6  5d                   pop ebp
// 008a02d7  5b                   pop ebx
// 008a02d8  83c444               add esp, 0x44
// 008a02db  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlCaptionPopup@CXTPDialogBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDialogBar.cpp