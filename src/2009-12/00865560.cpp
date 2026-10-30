// roc 2009-12 00865560  unit: CXTPPropertyGridItem  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865560
//
// 00865560  53                   push ebx
// 00865561  56                   push esi
// 00865562  57                   push edi
// 00865563  8bf1                 mov esi, ecx
// 00865565  e8a6f3ffff           call 0x864910
// 0086556a  8bce                 mov ecx, esi
// 0086556c  8bd8                 mov ebx, eax
// 0086556e  e8ddfaffff           call 0x865050
// 00865573  8b442418             mov eax, dword ptr [esp + 0x18]
// 00865577  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086557b  50                   push eax
// 0086557c  51                   push ecx
// 0086557d  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00865583  e8e80f0600           call 0x8c6570
// 00865588  8bf8                 mov edi, eax
// 0086558a  85ff                 test edi, edi
// 0086558c  744b                 je 0x8655d9
// 0086558e  8b16                 mov edx, dword ptr [esi]
// 00865590  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00865596  8bce                 mov ecx, esi
// 00865598  ffd0                 call eax
// 0086559a  85c0                 test eax, eax
// 0086559c  743b                 je 0x8655d9
// 0086559e  85db                 test ebx, ebx
// 008655a0  7514                 jne 0x8655b6
// 008655a2  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008655a8  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 008655ae  399a68010000         cmp dword ptr [edx + 0x168], ebx
// 008655b4  7418                 je 0x8655ce
// 008655b6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008655ba  8b542414             mov edx, dword ptr [esp + 0x14]
// 008655be  8b07                 mov eax, dword ptr [edi]
// 008655c0  51                   push ecx
// 008655c1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008655c5  52                   push edx
// 008655c6  8b5060               mov edx, dword ptr [eax + 0x60]
// 008655c9  51                   push ecx
// 008655ca  8bcf                 mov ecx, edi
// 008655cc  ffd2                 call edx
// 008655ce  5f                   pop edi
// 008655cf  5e                   pop esi
// 008655d0  b801000000           mov eax, 1
// 008655d5  5b                   pop ebx
// 008655d6  c20c00               ret 0xc
// 008655d9  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008655df  33c0                 xor eax, eax
// 008655e1  398698000000         cmp dword ptr [esi + 0x98], eax
// 008655e7  0f94c0               sete al
// 008655ea  2bc8                 sub ecx, eax
// 008655ec  8d04cd00000000       lea eax, [ecx*8]
// 008655f3  2bc1                 sub eax, ecx
// 008655f5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008655f9  03c0                 add eax, eax
// 008655fb  3bc8                 cmp ecx, eax
// 008655fd  7c27                 jl 0x865626
// 008655ff  83c00e               add eax, 0xe
// 00865602  3bc8                 cmp ecx, eax
// 00865604  7f20                 jg 0x865626
// 00865606  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0086560d  7417                 je 0x865626
// 0086560f  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00865616  8bce                 mov ecx, esi
// 00865618  7407                 je 0x865621
// 0086561a  e861f9ffff           call 0x864f80
// 0086561f  eb05                 jmp 0x865626
// 00865621  e8baf9ffff           call 0x864fe0
// 00865626  bb01000000           mov ebx, 1
// 0086562b  849e8c000000         test byte ptr [esi + 0x8c], bl
// 00865631  7436                 je 0x865669
// 00865633  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00865637  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086563b  51                   push ecx
// 0086563c  52                   push edx
// 0086563d  8bce                 mov ecx, esi
// 0086563f  e8ecfeffff           call 0x865530
// 00865644  85c0                 test eax, eax
// 00865646  7421                 je 0x865669
// 00865648  6a00                 push 0
// 0086564a  6a00                 push 0
// 0086564c  6a00                 push 0
// 0086564e  6a00                 push 0
// 00865650  6a17                 push 0x17
// 00865652  ff15dccb9800         call dword ptr [0x98cbdc]
// 00865658  f7d8                 neg eax
// 0086565a  1bc0                 sbb eax, eax
// 0086565c  83e006               and eax, 6
// 0086565f  83c002               add eax, 2
// 00865662  50                   push eax
// 00865663  ff1524cb9800         call dword ptr [0x98cb24]
// 00865669  83be8c00000004       cmp dword ptr [esi + 0x8c], 4
// 00865670  7549                 jne 0x8656bb
// 00865672  8b442418             mov eax, dword ptr [esp + 0x18]
// 00865676  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086567a  50                   push eax
// 0086567b  51                   push ecx
// 0086567c  8bce                 mov ecx, esi
// 0086567e  e8adfeffff           call 0x865530
// 00865683  85c0                 test eax, eax
// 00865685  7434                 je 0x8656bb
// 00865687  8b16                 mov edx, dword ptr [esi]
// 00865689  8b4258               mov eax, dword ptr [edx + 0x58]
// 0086568c  8bce                 mov ecx, esi
// 0086568e  ffd0                 call eax
// 00865690  85c0                 test eax, eax
// 00865692  7527                 jne 0x8656bb
// 00865694  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0086569a  395828               cmp dword ptr [eax + 0x28], ebx
// 0086569d  751c                 jne 0x8656bb
// 0086569f  83782800             cmp dword ptr [eax + 0x28], 0
// 008656a3  7e07                 jle 0x8656ac
// 008656a5  8b4824               mov ecx, dword ptr [eax + 0x24]
// 008656a8  8b01                 mov eax, dword ptr [ecx]
// 008656aa  eb02                 jmp 0x8656ae
// 008656ac  33c0                 xor eax, eax
// 008656ae  8b16                 mov edx, dword ptr [esi]
// 008656b0  50                   push eax
// 008656b1  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008656b7  8bce                 mov ecx, esi
// 008656b9  ffd0                 call eax
// 008656bb  5f                   pop edi
// 008656bc  5e                   pop esi
// 008656bd  8bc3                 mov eax, ebx
// 008656bf  5b                   pop ebx
// 008656c0  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPPropertyGridItem@@MAEHIVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp