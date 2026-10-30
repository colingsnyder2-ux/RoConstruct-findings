// roc 2009-12 007fb720  unit: CXTPControlComboBoxList  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb720
//
// 007fb720  6aff                 push -1
// 007fb722  68c38d9500           push 0x958dc3
// 007fb727  64a100000000         mov eax, dword ptr fs:[0]
// 007fb72d  50                   push eax
// 007fb72e  83ec08               sub esp, 8
// 007fb731  53                   push ebx
// 007fb732  55                   push ebp
// 007fb733  56                   push esi
// 007fb734  57                   push edi
// 007fb735  a10052b600           mov eax, dword ptr [0xb65200]
// 007fb73a  33c4                 xor eax, esp
// 007fb73c  50                   push eax
// 007fb73d  8d44241c             lea eax, [esp + 0x1c]
// 007fb741  64a300000000         mov dword ptr fs:[0], eax
// 007fb747  8be9                 mov ebp, ecx
// 007fb749  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007fb74d  56                   push esi
// 007fb74e  e85daa0300           call 0x8361b0
// 007fb753  837e2c17             cmp dword ptr [esi + 0x2c], 0x17
// 007fb757  7617                 jbe 0x7fb770
// 007fb759  6aff                 push -1
// 007fb75b  8d855c020000         lea eax, [ebp + 0x25c]
// 007fb761  50                   push eax
// 007fb762  68a0269f00           push 0x9f26a0
// 007fb767  56                   push esi
// 007fb768  e893520500           call 0x850a00
// 007fb76d  83c410               add esp, 0x10
// 007fb770  8d4c242c             lea ecx, [esp + 0x2c]
// 007fb774  ff1574de9800         call dword ptr [0x98de74]
// 007fb77a  8b16                 mov edx, dword ptr [esi]
// 007fb77c  8b4270               mov eax, dword ptr [edx + 0x70]
// 007fb77f  6898269f00           push 0x9f2698
// 007fb784  8bce                 mov ecx, esi
// 007fb786  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007fb78e  ffd0                 call eax
// 007fb790  8bf8                 mov edi, eax
// 007fb792  897c2418             mov dword ptr [esp + 0x18], edi
// 007fb796  837e2800             cmp dword ptr [esi + 0x28], 0
// 007fb79a  c644242401           mov byte ptr [esp + 0x24], 1
// 007fb79f  0f85a6000000         jne 0x7fb84b
// 007fb7a5  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007fb7a8  6a00                 push 0
// 007fb7aa  85c0                 test eax, eax
// 007fb7ac  0f848b000000         je 0x7fb83d
// 007fb7b2  6a00                 push 0
// 007fb7b4  688b010000           push 0x18b
// 007fb7b9  50                   push eax
// 007fb7ba  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007fb7c0  8b17                 mov edx, dword ptr [edi]
// 007fb7c2  8bd8                 mov ebx, eax
// 007fb7c4  8b4278               mov eax, dword ptr [edx + 0x78]
// 007fb7c7  53                   push ebx
// 007fb7c8  8bcf                 mov ecx, edi
// 007fb7ca  ffd0                 call eax
// 007fb7cc  33f6                 xor esi, esi
// 007fb7ce  85db                 test ebx, ebx
// 007fb7d0  0f8e06010000         jle 0x7fb8dc
// 007fb7d6  8d4c242c             lea ecx, [esp + 0x2c]
// 007fb7da  51                   push ecx
// 007fb7db  56                   push esi
// 007fb7dc  8bcd                 mov ecx, ebp
// 007fb7de  e889ac1200           call 0x92646c
// 007fb7e3  8d4c2414             lea ecx, [esp + 0x14]
// 007fb7e7  ff1574de9800         call dword ptr [0x98de74]
// 007fb7ed  56                   push esi
// 007fb7ee  8d542418             lea edx, [esp + 0x18]
// 007fb7f2  6890269f00           push 0x9f2690
// 007fb7f7  52                   push edx
// 007fb7f8  c644243002           mov byte ptr [esp + 0x30], 2
// 007fb7fd  ff157cde9800         call dword ptr [0x98de7c]
// 007fb803  83c40c               add esp, 0xc
// 007fb806  6856fd9900           push 0x99fd56
// 007fb80b  8d442430             lea eax, [esp + 0x30]
// 007fb80f  50                   push eax
// 007fb810  8d4c241c             lea ecx, [esp + 0x1c]
// 007fb814  ff1580de9800         call dword ptr [0x98de80]
// 007fb81a  50                   push eax
// 007fb81b  57                   push edi
// 007fb81c  e89f520500           call 0x850ac0
// 007fb821  83c410               add esp, 0x10
// 007fb824  8d4c2414             lea ecx, [esp + 0x14]
// 007fb828  c644242401           mov byte ptr [esp + 0x24], 1
// 007fb82d  ff15c0de9800         call dword ptr [0x98dec0]
// 007fb833  46                   inc esi
// 007fb834  3bf3                 cmp esi, ebx
// 007fb836  7c9e                 jl 0x7fb7d6
// 007fb838  e99f000000           jmp 0x7fb8dc
// 007fb83d  8b16                 mov edx, dword ptr [esi]
// 007fb83f  8b4278               mov eax, dword ptr [edx + 0x78]
// 007fb842  8bce                 mov ecx, esi
// 007fb844  ffd0                 call eax
// 007fb846  e991000000           jmp 0x7fb8dc
// 007fb84b  837d2000             cmp dword ptr [ebp + 0x20], 0
// 007fb84f  750d                 jne 0x7fb85e
// 007fb851  8b5500               mov edx, dword ptr [ebp]
// 007fb854  8b822c020000         mov eax, dword ptr [edx + 0x22c]
// 007fb85a  8bcd                 mov ecx, ebp
// 007fb85c  ffd0                 call eax
// 007fb85e  8b17                 mov edx, dword ptr [edi]
// 007fb860  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007fb863  8bcf                 mov ecx, edi
// 007fb865  ffd0                 call eax
// 007fb867  8bd8                 mov ebx, eax
// 007fb869  33f6                 xor esi, esi
// 007fb86b  85db                 test ebx, ebx
// 007fb86d  766d                 jbe 0x7fb8dc
// 007fb86f  90                   nop 
// 007fb870  8d4c2414             lea ecx, [esp + 0x14]
// 007fb874  ff1574de9800         call dword ptr [0x98de74]
// 007fb87a  56                   push esi
// 007fb87b  8d4c2418             lea ecx, [esp + 0x18]
// 007fb87f  6890269f00           push 0x9f2690
// 007fb884  51                   push ecx
// 007fb885  c644243003           mov byte ptr [esp + 0x30], 3
// 007fb88a  ff157cde9800         call dword ptr [0x98de7c]
// 007fb890  83c40c               add esp, 0xc
// 007fb893  6856fd9900           push 0x99fd56
// 007fb898  8d542430             lea edx, [esp + 0x30]
// 007fb89c  52                   push edx
// 007fb89d  8d4c241c             lea ecx, [esp + 0x1c]
// 007fb8a1  ff1580de9800         call dword ptr [0x98de80]
// 007fb8a7  50                   push eax
// 007fb8a8  57                   push edi
// 007fb8a9  e812520500           call 0x850ac0
// 007fb8ae  83c410               add esp, 0x10
// 007fb8b1  8d4c242c             lea ecx, [esp + 0x2c]
// 007fb8b5  ff1580de9800         call dword ptr [0x98de80]
// 007fb8bb  50                   push eax
// 007fb8bc  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007fb8bf  6a00                 push 0
// 007fb8c1  6880010000           push 0x180
// 007fb8c6  50                   push eax
// 007fb8c7  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007fb8cd  8d4c2414             lea ecx, [esp + 0x14]
// 007fb8d1  ff15c0de9800         call dword ptr [0x98dec0]
// 007fb8d7  46                   inc esi
// 007fb8d8  3bf3                 cmp esi, ebx
// 007fb8da  7294                 jb 0x7fb870
// 007fb8dc  c644242400           mov byte ptr [esp + 0x24], 0
// 007fb8e1  85ff                 test edi, edi
// 007fb8e3  7407                 je 0x7fb8ec
// 007fb8e5  8bcf                 mov ecx, edi
// 007fb8e7  e8f084ffff           call 0x7f3ddc
// 007fb8ec  8d4c242c             lea ecx, [esp + 0x2c]
// 007fb8f0  ff15c0de9800         call dword ptr [0x98dec0]
// 007fb8f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fb8fa  64890d00000000       mov dword ptr fs:[0], ecx
// 007fb901  59                   pop ecx
// 007fb902  5f                   pop edi
// 007fb903  5e                   pop esi
// 007fb904  5d                   pop ebp
// 007fb905  5b                   pop ebx
// 007fb906  83c414               add esp, 0x14
// 007fb909  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPControlComboBoxList@@MAEXPAVCXTPPropExchange@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp