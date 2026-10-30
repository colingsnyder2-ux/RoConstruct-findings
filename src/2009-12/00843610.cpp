// roc 2009-12 00843610  unit: CXTPPopupBar  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00843610
//
// 00843610  83ec08               sub esp, 8
// 00843613  53                   push ebx
// 00843614  56                   push esi
// 00843615  8bf1                 mov esi, ecx
// 00843617  e8b40efcff           call 0x8044d0
// 0084361c  8bd8                 mov ebx, eax
// 0084361e  85db                 test ebx, ebx
// 00843620  0f84cf010000         je 0x8437f5
// 00843626  57                   push edi
// 00843627  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0084362b  8bc7                 mov eax, edi
// 0084362d  f7d8                 neg eax
// 0084362f  1bc0                 sbb eax, eax
// 00843631  83e008               and eax, 8
// 00843634  50                   push eax
// 00843635  8bce                 mov ecx, esi
// 00843637  e80c05fbff           call 0x7f3b48
// 0084363c  85ff                 test edi, edi
// 0084363e  0f8590010000         jne 0x8437d4
// 00843644  39beec010000         cmp dword ptr [esi + 0x1ec], edi
// 0084364a  0f85e8000000         jne 0x843738
// 00843650  8b8ef4010000         mov ecx, dword ptr [esi + 0x1f4]
// 00843656  51                   push ecx
// 00843657  8bcb                 mov ecx, ebx
// 00843659  e80217fdff           call 0x814d60
// 0084365e  8986ec010000         mov dword ptr [esi + 0x1ec], eax
// 00843664  85c0                 test eax, eax
// 00843666  7428                 je 0x843690
// 00843668  8b10                 mov edx, dword ptr [eax]
// 0084366a  8bc8                 mov ecx, eax
// 0084366c  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 00843672  6a04                 push 4
// 00843674  ffd0                 call eax
// 00843676  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 0084367c  8b11                 mov edx, dword ptr [ecx]
// 0084367e  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00843684  6a01                 push 1
// 00843686  ffd0                 call eax
// 00843688  57                   push edi
// 00843689  8bcb                 mov ecx, ebx
// 0084368b  e81013fdff           call 0x8149a0
// 00843690  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 00843697  0f859b000000         jne 0x843738
// 0084369d  8b8ef4010000         mov ecx, dword ptr [esi + 0x1f4]
// 008436a3  8b3b                 mov edi, dword ptr [ebx]
// 008436a5  6a01                 push 1
// 008436a7  51                   push ecx
// 008436a8  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008436ae  81c784000000         add edi, 0x84
// 008436b4  ff1580de9800         call dword ptr [0x98de80]
// 008436ba  8b17                 mov edx, dword ptr [edi]
// 008436bc  50                   push eax
// 008436bd  8bcb                 mov ecx, ebx
// 008436bf  ffd2                 call edx
// 008436c1  8b8ef8010000         mov ecx, dword ptr [esi + 0x1f8]
// 008436c7  8986ec010000         mov dword ptr [esi + 0x1ec], eax
// 008436cd  8988c8000000         mov dword ptr [eax + 0xc8], ecx
// 008436d3  8bce                 mov ecx, esi
// 008436d5  33ff                 xor edi, edi
// 008436d7  e8741bfcff           call 0x805250
// 008436dc  85c0                 test eax, eax
// 008436de  7e58                 jle 0x843738
// 008436e0  57                   push edi
// 008436e1  8bce                 mov ecx, esi
// 008436e3  e8781bfcff           call 0x805260
// 008436e8  85c0                 test eax, eax
// 008436ea  7440                 je 0x84372c
// 008436ec  39b000010000         cmp dword ptr [eax + 0x100], esi
// 008436f2  7538                 jne 0x84372c
// 008436f4  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 008436fe  742c                 je 0x84372c
// 00843700  8b96ec010000         mov edx, dword ptr [esi + 0x1ec]
// 00843706  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 0084370c  6a00                 push 0
// 0084370e  6aff                 push -1
// 00843710  50                   push eax
// 00843711  e89a3b0000           call 0x8472b0
// 00843716  8b88d0000000         mov ecx, dword ptr [eax + 0xd0]
// 0084371c  8b10                 mov edx, dword ptr [eax]
// 0084371e  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00843724  83e1d7               and ecx, 0xffffffd7
// 00843727  51                   push ecx
// 00843728  8bc8                 mov ecx, eax
// 0084372a  ffd2                 call edx
// 0084372c  8bce                 mov ecx, esi
// 0084372e  47                   inc edi
// 0084372f  e81c1bfcff           call 0x805250
// 00843734  3bf8                 cmp edi, eax
// 00843736  7ca8                 jl 0x8436e0
// 00843738  8b86ec010000         mov eax, dword ptr [esi + 0x1ec]
// 0084373e  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 00843744  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00843747  56                   push esi
// 00843748  50                   push eax
// 00843749  6867280000           push 0x2867
// 0084374e  52                   push edx
// 0084374f  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00843755  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 0084375b  8b01                 mov eax, dword ptr [ecx]
// 0084375d  8b80d0010000         mov eax, dword ptr [eax + 0x1d0]
// 00843763  6a46                 push 0x46
// 00843765  6aff                 push -1
// 00843767  8d542414             lea edx, [esp + 0x14]
// 0084376b  52                   push edx
// 0084376c  ffd0                 call eax
// 0084376e  8b08                 mov ecx, dword ptr [eax]
// 00843770  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 00843776  8b5004               mov edx, dword ptr [eax + 4]
// 00843779  8996e8010000         mov dword ptr [esi + 0x1e8], edx
// 0084377f  8bbee8010000         mov edi, dword ptr [esi + 0x1e8]
// 00843785  8bc1                 mov eax, ecx
// 00843787  99                   cdq 
// 00843788  2bc2                 sub eax, edx
// 0084378a  8bd0                 mov edx, eax
// 0084378c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00843790  d1fa                 sar edx, 1
// 00843792  6a01                 push 1
// 00843794  2bc2                 sub eax, edx
// 00843796  8b542424             mov edx, dword ptr [esp + 0x24]
// 0084379a  57                   push edi
// 0084379b  51                   push ecx
// 0084379c  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 008437a2  83c2f6               add edx, -0xa
// 008437a5  52                   push edx
// 008437a6  50                   push eax
// 008437a7  e88604fbff           call 0x7f3c32
// 008437ac  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 008437b2  e8d90afcff           call 0x804290
// 008437b7  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 008437bd  8b01                 mov eax, dword ptr [ecx]
// 008437bf  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 008437c5  6a01                 push 1
// 008437c7  6a00                 push 0
// 008437c9  ffd2                 call edx
// 008437cb  5f                   pop edi
// 008437cc  5e                   pop esi
// 008437cd  5b                   pop ebx
// 008437ce  83c408               add esp, 8
// 008437d1  c20c00               ret 0xc
// 008437d4  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 008437da  85c9                 test ecx, ecx
// 008437dc  7416                 je 0x8437f4
// 008437de  8b01                 mov eax, dword ptr [ecx]
// 008437e0  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008437e6  6a00                 push 0
// 008437e8  ffd2                 call edx
// 008437ea  c786ec01000000000000 mov dword ptr [esi + 0x1ec], 0
// 008437f4  5f                   pop edi
// 008437f5  5e                   pop esi
// 008437f6  5b                   pop ebx
// 008437f7  83c408               add esp, 8
// 008437fa  c20c00               ret 0xc
// copied from an identical function in another client (function ?SwitchTearOffTracking@CXTPPopupBar@@AAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPPopupBar.cpp