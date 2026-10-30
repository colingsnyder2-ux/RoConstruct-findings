// roc 2011-06 008e7870  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7870
//
// 008e7870  6aff                 push -1
// 008e7872  680edfa000           push 0xa0df0e
// 008e7877  64a100000000         mov eax, dword ptr fs:[0]
// 008e787d  50                   push eax
// 008e787e  51                   push ecx
// 008e787f  55                   push ebp
// 008e7880  56                   push esi
// 008e7881  57                   push edi
// 008e7882  a12058c900           mov eax, dword ptr [0xc95820]
// 008e7887  33c4                 xor eax, esp
// 008e7889  50                   push eax
// 008e788a  8d442414             lea eax, [esp + 0x14]
// 008e788e  64a300000000         mov dword ptr fs:[0], eax
// 008e7894  8bf9                 mov edi, ecx
// 008e7896  897c2410             mov dword ptr [esp + 0x10], edi
// 008e789a  c7075c8dad00         mov dword ptr [edi], 0xad8d5c
// 008e78a0  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 008e78a7  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 008e78af  7435                 je 0x8e78e6
// 008e78b1  8d6f74               lea ebp, [edi + 0x74]
// 008e78b4  8bcd                 mov ecx, ebp
// 008e78b6  e8858a0000           call 0x8f0340
// 008e78bb  8bf0                 mov esi, eax
// 008e78bd  8b4614               mov eax, dword ptr [esi + 0x14]
// 008e78c0  85c0                 test eax, eax
// 008e78c2  7410                 je 0x8e78d4
// 008e78c4  50                   push eax
// 008e78c5  e83a2af2ff           call 0x80a304
// 008e78ca  83c404               add esp, 4
// 008e78cd  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008e78d4  56                   push esi
// 008e78d5  e87e27f2ff           call 0x80a058
// 008e78da  83c404               add esp, 4
// 008e78dd  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 008e78e4  75ce                 jne 0x8e78b4
// 008e78e6  8d4f74               lea ecx, [edi + 0x74]
// 008e78e9  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008e78ee  e8fdfeffff           call 0x8e77f0
// 008e78f3  8d4f54               lea ecx, [edi + 0x54]
// 008e78f6  c644241c00           mov byte ptr [esp + 0x1c], 0
// 008e78fb  c70190e7a500         mov dword ptr [ecx], 0xa5e790
// 008e7901  e82ac0b2ff           call 0x413930
// 008e7906  8bcf                 mov ecx, edi
// 008e7908  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008e7910  e8ed530e00           call 0x9ccd02
// 008e7915  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e7919  64890d00000000       mov dword ptr fs:[0], ecx
// 008e7920  59                   pop ecx
// 008e7921  5f                   pop edi
// 008e7922  5e                   pop esi
// 008e7923  5d                   pop ebp
// 008e7924  83c410               add esp, 0x10
// 008e7927  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorHex@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp