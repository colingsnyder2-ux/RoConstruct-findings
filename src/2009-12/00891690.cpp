// roc 2009-12 00891690  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891690
//
// 00891690  83ec20               sub esp, 0x20
// 00891693  53                   push ebx
// 00891694  55                   push ebp
// 00891695  56                   push esi
// 00891696  8bf1                 mov esi, ecx
// 00891698  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0089169b  8b01                 mov eax, dword ptr [ecx]
// 0089169d  8b5e54               mov ebx, dword ptr [esi + 0x54]
// 008916a0  8b5058               mov edx, dword ptr [eax + 0x58]
// 008916a3  33ed                 xor ebp, ebp
// 008916a5  57                   push edi
// 008916a6  896c2414             mov dword ptr [esp + 0x14], ebp
// 008916aa  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008916ae  81e300a00000         and ebx, 0xa000
// 008916b4  ffd2                 call edx
// 008916b6  85c0                 test eax, eax
// 008916b8  7437                 je 0x8916f1
// 008916ba  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008916bd  8b01                 mov eax, dword ptr [ecx]
// 008916bf  8b5058               mov edx, dword ptr [eax + 0x58]
// 008916c2  ffd2                 call edx
// 008916c4  8b10                 mov edx, dword ptr [eax]
// 008916c6  8bc8                 mov ecx, eax
// 008916c8  8b829c010000         mov eax, dword ptr [edx + 0x19c]
// 008916ce  ffd0                 call eax
// 008916d0  85c0                 test eax, eax
// 008916d2  741d                 je 0x8916f1
// 008916d4  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008916d7  8b11                 mov edx, dword ptr [ecx]
// 008916d9  8b4258               mov eax, dword ptr [edx + 0x58]
// 008916dc  6aff                 push -1
// 008916de  ffd0                 call eax
// 008916e0  50                   push eax
// 008916e1  8bce                 mov ecx, esi
// 008916e3  e868ffffff           call 0x891650
// 008916e8  896c2418             mov dword ptr [esp + 0x18], ebp
// 008916ec  83f8ff               cmp eax, -1
// 008916ef  7508                 jne 0x8916f9
// 008916f1  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008916f9  396e60               cmp dword ptr [esi + 0x60], ebp
// 008916fc  896c2410             mov dword ptr [esp + 0x10], ebp
// 00891700  0f8ea1000000         jle 0x8917a7
// 00891706  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089170a  51                   push ecx
// 0089170b  8bce                 mov ecx, esi
// 0089170d  e81effffff           call 0x891630
// 00891712  8bf8                 mov edi, eax
// 00891714  85ff                 test edi, edi
// 00891716  744b                 je 0x891763
// 00891718  8b17                 mov edx, dword ptr [edi]
// 0089171a  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00891720  8bcf                 mov ecx, edi
// 00891722  ffd0                 call eax
// 00891724  85c0                 test eax, eax
// 00891726  746d                 je 0x891795
// 00891728  8b5720               mov edx, dword ptr [edi + 0x20]
// 0089172b  8d4c2420             lea ecx, [esp + 0x20]
// 0089172f  51                   push ecx
// 00891730  52                   push edx
// 00891731  ff1570cc9800         call dword ptr [0x98cc70]
// 00891737  8d442420             lea eax, [esp + 0x20]
// 0089173b  50                   push eax
// 0089173c  8bce                 mov ecx, esi
// 0089173e  e89530f6ff           call 0x7f47d8
// 00891743  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00891747  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089174b  8bc2                 mov eax, edx
// 0089174d  85db                 test ebx, ebx
// 0089174f  7502                 jne 0x891753
// 00891751  8bc1                 mov eax, ecx
// 00891753  3be8                 cmp ebp, eax
// 00891755  7f3e                 jg 0x891795
// 00891757  85db                 test ebx, ebx
// 00891759  7404                 je 0x89175f
// 0089175b  8bea                 mov ebp, edx
// 0089175d  eb36                 jmp 0x891795
// 0089175f  8be9                 mov ebp, ecx
// 00891761  eb32                 jmp 0x891795
// 00891763  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00891767  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089176b  8bc2                 mov eax, edx
// 0089176d  85db                 test ebx, ebx
// 0089176f  7502                 jne 0x891773
// 00891771  8bc1                 mov eax, ecx
// 00891773  3bc5                 cmp eax, ebp
// 00891775  7d10                 jge 0x891787
// 00891777  837c241800           cmp dword ptr [esp + 0x18], 0
// 0089177c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00891780  7554                 jne 0x8917d6
// 00891782  83ff01               cmp edi, 1
// 00891785  7f4f                 jg 0x8917d6
// 00891787  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089178b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0089178f  33ed                 xor ebp, ebp
// 00891791  894c2414             mov dword ptr [esp + 0x14], ecx
// 00891795  8b442410             mov eax, dword ptr [esp + 0x10]
// 00891799  40                   inc eax
// 0089179a  3b4660               cmp eax, dword ptr [esi + 0x60]
// 0089179d  89442410             mov dword ptr [esp + 0x10], eax
// 008917a1  0f8c5fffffff         jl 0x891706
// 008917a7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008917ab  6a01                 push 1
// 008917ad  6a00                 push 0
// 008917af  47                   inc edi
// 008917b0  83c658               add esi, 0x58
// 008917b3  57                   push edi
// 008917b4  8bce                 mov ecx, esi
// 008917b6  e885c30500           call 0x8edb40
// 008917bb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008917bf  6a01                 push 1
// 008917c1  51                   push ecx
// 008917c2  8bce                 mov ecx, esi
// 008917c4  57                   push edi
// 008917c5  e876c30500           call 0x8edb40
// 008917ca  8bc7                 mov eax, edi
// 008917cc  5f                   pop edi
// 008917cd  5e                   pop esi
// 008917ce  5d                   pop ebp
// 008917cf  5b                   pop ebx
// 008917d0  83c420               add esp, 0x20
// 008917d3  c21c00               ret 0x1c
// 008917d6  837c241000           cmp dword ptr [esp + 0x10], 0
// 008917db  740e                 je 0x8917eb
// 008917dd  8bc2                 mov eax, edx
// 008917df  85db                 test ebx, ebx
// 008917e1  7502                 jne 0x8917e5
// 008917e3  8bc1                 mov eax, ecx
// 008917e5  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 008917e9  7510                 jne 0x8917fb
// 008917eb  6a01                 push 1
// 008917ed  6a00                 push 0
// 008917ef  8d5701               lea edx, [edi + 1]
// 008917f2  52                   push edx
// 008917f3  8d4e58               lea ecx, [esi + 0x58]
// 008917f6  e845c30500           call 0x8edb40
// 008917fb  8b442434             mov eax, dword ptr [esp + 0x34]
// 008917ff  6a01                 push 1
// 00891801  47                   inc edi
// 00891802  50                   push eax
// 00891803  8d4e58               lea ecx, [esi + 0x58]
// 00891806  57                   push edi
// 00891807  e834c30500           call 0x8edb40
// 0089180c  8bc7                 mov eax, edi
// 0089180e  5f                   pop edi
// 0089180f  5e                   pop esi
// 00891810  5d                   pop ebp
// 00891811  5b                   pop ebx
// 00891812  83c420               add esp, 0x20
// 00891815  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Insert@CXTPDockBar@@IAEHPAVCXTPToolBar@@VCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp