// roc 2009-12 008c5870  unit: CXTPCustomizeToolbarsPage  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5870
//
// 008c5870  6aff                 push -1
// 008c5872  681b459600           push 0x96451b
// 008c5877  64a100000000         mov eax, dword ptr fs:[0]
// 008c587d  50                   push eax
// 008c587e  83ec0c               sub esp, 0xc
// 008c5881  53                   push ebx
// 008c5882  56                   push esi
// 008c5883  57                   push edi
// 008c5884  a10052b600           mov eax, dword ptr [0xb65200]
// 008c5889  33c4                 xor eax, esp
// 008c588b  50                   push eax
// 008c588c  8d44241c             lea eax, [esp + 0x1c]
// 008c5890  64a300000000         mov dword ptr fs:[0], eax
// 008c5896  8bf1                 mov esi, ecx
// 008c5898  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c589e  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008c58a4  6a00                 push 0
// 008c58a6  6a00                 push 0
// 008c58a8  6888010000           push 0x188
// 008c58ad  50                   push eax
// 008c58ae  ffd3                 call ebx
// 008c58b0  83f8ff               cmp eax, -1
// 008c58b3  0f8401010000         je 0x8c59ba
// 008c58b9  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008c58bf  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c58c5  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 008c58cb  6a00                 push 0
// 008c58cd  50                   push eax
// 008c58ce  6899010000           push 0x199
// 008c58d3  52                   push edx
// 008c58d4  ffd3                 call ebx
// 008c58d6  85c0                 test eax, eax
// 008c58d8  0f8cdc000000         jl 0x8c59ba
// 008c58de  3b8784000000         cmp eax, dword ptr [edi + 0x84]
// 008c58e4  0f8dd0000000         jge 0x8c59ba
// 008c58ea  50                   push eax
// 008c58eb  8bcf                 mov ecx, edi
// 008c58ed  e8eef3f4ff           call 0x814ce0
// 008c58f2  8bf8                 mov edi, eax
// 008c58f4  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 008c58fb  0f84b9000000         je 0x8c59ba
// 008c5901  8d4c2414             lea ecx, [esp + 0x14]
// 008c5905  ff1574de9800         call dword ptr [0x98de74]
// 008c590b  8d442418             lea eax, [esp + 0x18]
// 008c590f  50                   push eax
// 008c5910  8bcf                 mov ecx, edi
// 008c5912  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008c591a  e8617cf3ff           call 0x7fd580
// 008c591f  8d4c2410             lea ecx, [esp + 0x10]
// 008c5923  ff1574de9800         call dword ptr [0x98de74]
// 008c5929  c644242402           mov byte ptr [esp + 0x24], 2
// 008c592e  e86d8ffaff           call 0x86e8a0
// 008c5933  8b10                 mov edx, dword ptr [eax]
// 008c5935  8b5208               mov edx, dword ptr [edx + 8]
// 008c5938  68d5230000           push 0x23d5
// 008c593d  8d4c2414             lea ecx, [esp + 0x14]
// 008c5941  51                   push ecx
// 008c5942  8bc8                 mov ecx, eax
// 008c5944  ffd2                 call edx
// 008c5946  8d4c2418             lea ecx, [esp + 0x18]
// 008c594a  ff1580de9800         call dword ptr [0x98de80]
// 008c5950  50                   push eax
// 008c5951  8d4c2414             lea ecx, [esp + 0x14]
// 008c5955  ff1580de9800         call dword ptr [0x98de80]
// 008c595b  50                   push eax
// 008c595c  8d44241c             lea eax, [esp + 0x1c]
// 008c5960  50                   push eax
// 008c5961  ff157cde9800         call dword ptr [0x98de7c]
// 008c5967  83c40c               add esp, 0xc
// 008c596a  6a31                 push 0x31
// 008c596c  8d4c2418             lea ecx, [esp + 0x18]
// 008c5970  ff1580de9800         call dword ptr [0x98de80]
// 008c5976  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c597c  50                   push eax
// 008c597d  e87e9bf7ff           call 0x83f500
// 008c5982  83f801               cmp eax, 1
// 008c5985  7515                 jne 0x8c599c
// 008c5987  8b17                 mov edx, dword ptr [edi]
// 008c5989  8b8208020000         mov eax, dword ptr [edx + 0x208]
// 008c598f  6a00                 push 0
// 008c5991  8bcf                 mov ecx, edi
// 008c5993  ffd0                 call eax
// 008c5995  8bce                 mov ecx, esi
// 008c5997  e834faffff           call 0x8c53d0
// 008c599c  8d4c2410             lea ecx, [esp + 0x10]
// 008c59a0  ff15c0de9800         call dword ptr [0x98dec0]
// 008c59a6  8d4c2418             lea ecx, [esp + 0x18]
// 008c59aa  ff15c0de9800         call dword ptr [0x98dec0]
// 008c59b0  8d4c2414             lea ecx, [esp + 0x14]
// 008c59b4  ff15c0de9800         call dword ptr [0x98dec0]
// 008c59ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c59be  64890d00000000       mov dword ptr fs:[0], ecx
// 008c59c5  59                   pop ecx
// 008c59c6  5f                   pop edi
// 008c59c7  5e                   pop esi
// 008c59c8  5b                   pop ebx
// 008c59c9  83c418               add esp, 0x18
// 008c59cc  c3                   ret 
// copied from an identical function in another client (function ?OnResetToolbar@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeToolbarsPage.cpp