// roc 2009-12 008c85a0  unit: CXTPPropertyGridInplaceEdit  size: 568 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c85a0
//
// 008c85a0  53                   push ebx
// 008c85a1  55                   push ebp
// 008c85a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008c85a6  33db                 xor ebx, ebx
// 008c85a8  56                   push esi
// 008c85a9  8bf1                 mov esi, ecx
// 008c85ab  3beb                 cmp ebp, ebx
// 008c85ad  0f841f020000         je 0x8c87d2
// 008c85b3  8b85bc000000         mov eax, dword ptr [ebp + 0xbc]
// 008c85b9  3bc3                 cmp eax, ebx
// 008c85bb  0f8411020000         je 0x8c87d2
// 008c85c1  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008c85c7  89aea0000000         mov dword ptr [esi + 0xa0], ebp
// 008c85cd  899ea8000000         mov dword ptr [esi + 0xa8], ebx
// 008c85d3  899eac000000         mov dword ptr [esi + 0xac], ebx
// 008c85d9  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 008c85df  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 008c85e5  8b4500               mov eax, dword ptr [ebp]
// 008c85e8  8b90a0000000         mov edx, dword ptr [eax + 0xa0]
// 008c85ee  57                   push edi
// 008c85ef  8bcd                 mov ecx, ebp
// 008c85f1  ffd2                 call edx
// 008c85f3  89442414             mov dword ptr [esp + 0x14], eax
// 008c85f7  395e20               cmp dword ptr [esi + 0x20], ebx
// 008c85fa  7462                 je 0x8c865e
// 008c85fc  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c8602  e871de0500           call 0x926478
// 008c8607  8bf8                 mov edi, eax
// 008c8609  c1ef15               shr edi, 0x15
// 008c860c  83e702               and edi, 2
// 008c860f  8bce                 mov ecx, esi
// 008c8611  81cf00080050         or edi, 0x50000800
// 008c8617  e856de0500           call 0x926472
// 008c861c  0bc7                 or eax, edi
// 008c861e  0b7c2414             or edi, dword ptr [esp + 0x14]
// 008c8622  3bc7                 cmp eax, edi
// 008c8624  740a                 je 0x8c8630
// 008c8626  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 008c8630  8bce                 mov ecx, esi
// 008c8632  e841de0500           call 0x926478
// 008c8637  a900004000           test eax, 0x400000
// 008c863c  740a                 je 0x8c8648
// 008c863e  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 008c8648  399ea4000000         cmp dword ptr [esi + 0xa4], ebx
// 008c864e  7409                 je 0x8c8659
// 008c8650  8b06                 mov eax, dword ptr [esi]
// 008c8652  8b5068               mov edx, dword ptr [eax + 0x68]
// 008c8655  8bce                 mov ecx, esi
// 008c8657  ffd2                 call edx
// 008c8659  395e20               cmp dword ptr [esi + 0x20], ebx
// 008c865c  7519                 jne 0x8c8677
// 008c865e  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008c8664  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c8668  53                   push ebx
// 008c8669  50                   push eax
// 008c866a  8d4c2420             lea ecx, [esp + 0x20]
// 008c866e  51                   push ecx
// 008c866f  52                   push edx
// 008c8670  8bce                 mov ecx, esi
// 008c8672  e807de0500           call 0x92647e
// 008c8677  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008c867d  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008c8683  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 008c8689  3998f4000000         cmp dword ptr [eax + 0xf4], ebx
// 008c868f  7414                 je 0x8c86a5
// 008c8691  0fbe8df0000000       movsx ecx, byte ptr [ebp + 0xf0]
// 008c8698  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c869b  53                   push ebx
// 008c869c  51                   push ecx
// 008c869d  68cc000000           push 0xcc
// 008c86a2  52                   push edx
// 008c86a3  ffd7                 call edi
// 008c86a5  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c86ab  53                   push ebx
// 008c86ac  6a01                 push 1
// 008c86ae  e88dc8f9ff           call 0x864f40
// 008c86b3  53                   push ebx
// 008c86b4  85c0                 test eax, eax
// 008c86b6  7420                 je 0x8c86d8
// 008c86b8  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c86be  6a01                 push 1
// 008c86c0  e87bc8f9ff           call 0x864f40
// 008c86c5  8b8098000000         mov eax, dword ptr [eax + 0x98]
// 008c86cb  53                   push ebx
// 008c86cc  50                   push eax
// 008c86cd  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c86d0  68c5000000           push 0xc5
// 008c86d5  50                   push eax
// 008c86d6  eb0a                 jmp 0x8c86e2
// 008c86d8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c86db  53                   push ebx
// 008c86dc  68c5000000           push 0xc5
// 008c86e1  51                   push ecx
// 008c86e2  ffd7                 call edi
// 008c86e4  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c86ea  e861f2f9ff           call 0x867950
// 008c86ef  8b10                 mov edx, dword ptr [eax]
// 008c86f1  6a01                 push 1
// 008c86f3  8bc8                 mov ecx, eax
// 008c86f5  8b420c               mov eax, dword ptr [edx + 0xc]
// 008c86f8  55                   push ebp
// 008c86f9  ffd0                 call eax
// 008c86fb  3bc3                 cmp eax, ebx
// 008c86fd  7504                 jne 0x8c8703
// 008c86ff  33c0                 xor eax, eax
// 008c8701  eb03                 jmp 0x8c8706
// 008c8703  8b4004               mov eax, dword ptr [eax + 4]
// 008c8706  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c8709  6a01                 push 1
// 008c870b  50                   push eax
// 008c870c  6a30                 push 0x30
// 008c870e  51                   push ecx
// 008c870f  ffd7                 call edi
// 008c8711  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c8717  ff1580de9800         call dword ptr [0x98de80]
// 008c871d  50                   push eax
// 008c871e  8bce                 mov ecx, esi
// 008c8720  e8efb4f2ff           call 0x7f3c14
// 008c8725  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008c8729  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c872d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c8731  6a44                 push 0x44
// 008c8733  2bd0                 sub edx, eax
// 008c8735  52                   push edx
// 008c8736  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c873a  2bd1                 sub edx, ecx
// 008c873c  52                   push edx
// 008c873d  50                   push eax
// 008c873e  51                   push ecx
// 008c873f  53                   push ebx
// 008c8740  8bce                 mov ecx, esi
// 008c8742  e8e5b4f2ff           call 0x7f3c2c
// 008c8747  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c874a  6803000300           push 0x30003
// 008c874f  6a03                 push 3
// 008c8751  68d3000000           push 0xd3
// 008c8756  50                   push eax
// 008c8757  ffd7                 call edi
// 008c8759  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008c875f  0fb688f1000000       movzx ecx, byte ptr [eax + 0xf1]
// 008c8766  894e5c               mov dword ptr [esi + 0x5c], ecx
// 008c8769  3898f1000000         cmp byte ptr [eax + 0xf1], bl
// 008c876f  7456                 je 0x8c87c7
// 008c8771  8b3e                 mov edi, dword ptr [esi]
// 008c8773  8d88a4000000         lea ecx, [eax + 0xa4]
// 008c8779  ff1580de9800         call dword ptr [0x98de80]
// 008c877f  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c8785  50                   push eax
// 008c8786  81c1ec000000         add ecx, 0xec
// 008c878c  ff1580de9800         call dword ptr [0x98de80]
// 008c8792  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c8798  50                   push eax
// 008c8799  81c1e8000000         add ecx, 0xe8
// 008c879f  ff1580de9800         call dword ptr [0x98de80]
// 008c87a5  8b9744010000         mov edx, dword ptr [edi + 0x144]
// 008c87ab  50                   push eax
// 008c87ac  8bce                 mov ecx, esi
// 008c87ae  ffd2                 call edx
// 008c87b0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008c87b6  0fb688f0000000       movzx ecx, byte ptr [eax + 0xf0]
// 008c87bd  6a01                 push 1
// 008c87bf  51                   push ecx
// 008c87c0  8bce                 mov ecx, esi
// 008c87c2  e809f9ffff           call 0x8c80d0
// 008c87c7  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 008c87d1  5f                   pop edi
// 008c87d2  5e                   pop esi
// 008c87d3  5d                   pop ebp
// 008c87d4  5b                   pop ebx
// 008c87d5  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTPPropertyGridInplaceEdit@@UAEXPAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp