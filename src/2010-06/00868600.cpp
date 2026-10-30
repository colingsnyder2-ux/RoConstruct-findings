// roc 2010-06 00868600  unit: CXTPDockingPaneSplitterContainer  size: 574 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00868600
//
// 00868600  83ec38               sub esp, 0x38
// 00868603  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00868607  53                   push ebx
// 00868608  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0086860c  55                   push ebp
// 0086860d  56                   push esi
// 0086860e  8b742448             mov esi, dword ptr [esp + 0x48]
// 00868612  57                   push edi
// 00868613  c70000000000         mov dword ptr [eax], 0
// 00868619  8bce                 mov ecx, esi
// 0086861b  c70300000000         mov dword ptr [ebx], 0
// 00868621  33ff                 xor edi, edi
// 00868623  e88842f8ff           call 0x7ec8b0
// 00868628  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0086862e  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00868631  8954241c             mov dword ptr [esp + 0x1c], edx
// 00868635  8b542450             mov edx, dword ptr [esp + 0x50]
// 00868639  8b6a04               mov ebp, dword ptr [edx + 4]
// 0086863c  89442418             mov dword ptr [esp + 0x18], eax
// 00868640  85ed                 test ebp, ebp
// 00868642  0f84d8000000         je 0x868720
// 00868648  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0086864c  8d442420             lea eax, [esp + 0x20]
// 00868650  53                   push ebx
// 00868651  50                   push eax
// 00868652  e8b9f3ffff           call 0x867a10
// 00868657  8d4c2428             lea ecx, [esp + 0x28]
// 0086865b  53                   push ebx
// 0086865c  51                   push ecx
// 0086865d  89442424             mov dword ptr [esp + 0x24], eax
// 00868661  e8caf3ffff           call 0x867a30
// 00868666  83c410               add esp, 0x10
// 00868669  89442410             mov dword ptr [esp + 0x10], eax
// 0086866d  eb05                 jmp 0x868674
// 0086866f  90                   nop 
// 00868670  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00868674  8bc5                 mov eax, ebp
// 00868676  8b6d00               mov ebp, dword ptr [ebp]
// 00868679  8b7008               mov esi, dword ptr [eax + 8]
// 0086867c  85db                 test ebx, ebx
// 0086867e  7405                 je 0x868685
// 00868680  8b4604               mov eax, dword ptr [esi + 4]
// 00868683  eb03                 jmp 0x868688
// 00868685  8b4608               mov eax, dword ptr [esi + 8]
// 00868688  8b16                 mov edx, dword ptr [esi]
// 0086868a  8b5210               mov edx, dword ptr [edx + 0x10]
// 0086868d  894630               mov dword ptr [esi + 0x30], eax
// 00868690  8d442420             lea eax, [esp + 0x20]
// 00868694  50                   push eax
// 00868695  8bce                 mov ecx, esi
// 00868697  ffd2                 call edx
// 00868699  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086869d  8b00                 mov eax, dword ptr [eax]
// 0086869f  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008686a2  3bc1                 cmp eax, ecx
// 008686a4  8bd8                 mov ebx, eax
// 008686a6  7c02                 jl 0x8686aa
// 008686a8  8bd9                 mov ebx, ecx
// 008686aa  8b542414             mov edx, dword ptr [esp + 0x14]
// 008686ae  8b12                 mov edx, dword ptr [edx]
// 008686b0  3bd3                 cmp edx, ebx
// 008686b2  7e04                 jle 0x8686b8
// 008686b4  8bc2                 mov eax, edx
// 008686b6  eb06                 jmp 0x8686be
// 008686b8  3bc1                 cmp eax, ecx
// 008686ba  7c02                 jl 0x8686be
// 008686bc  8bc1                 mov eax, ecx
// 008686be  894630               mov dword ptr [esi + 0x30], eax
// 008686c1  85ff                 test edi, edi
// 008686c3  7542                 jne 0x868707
// 008686c5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008686c9  8b06                 mov eax, dword ptr [esi]
// 008686cb  8b5008               mov edx, dword ptr [eax + 8]
// 008686ce  51                   push ecx
// 008686cf  8bce                 mov ecx, esi
// 008686d1  ffd2                 call edx
// 008686d3  85c0                 test eax, eax
// 008686d5  7430                 je 0x868707
// 008686d7  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008686db  39b8e8000000         cmp dword ptr [eax + 0xe8], edi
// 008686e1  740a                 je 0x8686ed
// 008686e3  397e04               cmp dword ptr [esi + 4], edi
// 008686e6  751f                 jne 0x868707
// 008686e8  397e08               cmp dword ptr [esi + 8], edi
// 008686eb  751a                 jne 0x868707
// 008686ed  837c246800           cmp dword ptr [esp + 0x68], 0
// 008686f2  8bfe                 mov edi, esi
// 008686f4  740a                 je 0x868700
// 008686f6  33c0                 xor eax, eax
// 008686f8  33c9                 xor ecx, ecx
// 008686fa  894604               mov dword ptr [esi + 4], eax
// 008686fd  894e08               mov dword ptr [esi + 8], ecx
// 00868700  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00868707  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0086870a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0086870e  0108                 add dword ptr [eax], ecx
// 00868710  85ed                 test ebp, ebp
// 00868712  0f8558ffffff         jne 0x868670
// 00868718  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 0086871c  8b542450             mov edx, dword ptr [esp + 0x50]
// 00868720  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00868724  85ed                 test ebp, ebp
// 00868726  740a                 je 0x868732
// 00868728  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0086872c  2b442454             sub eax, dword ptr [esp + 0x54]
// 00868730  eb08                 jmp 0x86873a
// 00868732  8b442460             mov eax, dword ptr [esp + 0x60]
// 00868736  2b442458             sub eax, dword ptr [esp + 0x58]
// 0086873a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0086873d  49                   dec ecx
// 0086873e  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00868743  2bc1                 sub eax, ecx
// 00868745  8903                 mov dword ptr [ebx], eax
// 00868747  85ff                 test edi, edi
// 00868749  7426                 je 0x868771
// 0086874b  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0086874f  8b0e                 mov ecx, dword ptr [esi]
// 00868751  3bc8                 cmp ecx, eax
// 00868753  7d1c                 jge 0x868771
// 00868755  2bc1                 sub eax, ecx
// 00868757  837c246800           cmp dword ptr [esp + 0x68], 0
// 0086875c  894730               mov dword ptr [edi + 0x30], eax
// 0086875f  740c                 je 0x86876d
// 00868761  85ed                 test ebp, ebp
// 00868763  7405                 je 0x86876a
// 00868765  894704               mov dword ptr [edi + 4], eax
// 00868768  eb03                 jmp 0x86876d
// 0086876a  894708               mov dword ptr [edi + 8], eax
// 0086876d  8b03                 mov eax, dword ptr [ebx]
// 0086876f  8906                 mov dword ptr [esi], eax
// 00868771  833b00               cmp dword ptr [ebx], 0
// 00868774  0f8ebc000000         jle 0x868836
// 0086877a  8b6a04               mov ebp, dword ptr [edx + 4]
// 0086877d  85ed                 test ebp, ebp
// 0086877f  0f84b1000000         je 0x868836
// 00868785  8bc5                 mov eax, ebp
// 00868787  8b7008               mov esi, dword ptr [eax + 8]
// 0086878a  837e3000             cmp dword ptr [esi + 0x30], 0
// 0086878e  8b6d00               mov ebp, dword ptr [ebp]
// 00868791  0f8c84000000         jl 0x86881b
// 00868797  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0086879b  833900               cmp dword ptr [ecx], 0
// 0086879e  0f8477000000         je 0x86881b
// 008687a4  8b16                 mov edx, dword ptr [esi]
// 008687a6  8b5210               mov edx, dword ptr [edx + 0x10]
// 008687a9  8d442420             lea eax, [esp + 0x20]
// 008687ad  50                   push eax
// 008687ae  8bce                 mov ecx, esi
// 008687b0  ffd2                 call edx
// 008687b2  8b442470             mov eax, dword ptr [esp + 0x70]
// 008687b6  8b00                 mov eax, dword ptr [eax]
// 008687b8  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 008687bb  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008687bf  0fafc3               imul eax, ebx
// 008687c2  99                   cdq 
// 008687c3  f739                 idiv dword ptr [ecx]
// 008687c5  8b542464             mov edx, dword ptr [esp + 0x64]
// 008687c9  52                   push edx
// 008687ca  8bf8                 mov edi, eax
// 008687cc  8d442424             lea eax, [esp + 0x24]
// 008687d0  50                   push eax
// 008687d1  e83af2ffff           call 0x867a10
// 008687d6  8b00                 mov eax, dword ptr [eax]
// 008687d8  83c408               add esp, 8
// 008687db  3bf8                 cmp edi, eax
// 008687dd  7c18                 jl 0x8687f7
// 008687df  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008687e3  51                   push ecx
// 008687e4  8d542424             lea edx, [esp + 0x24]
// 008687e8  52                   push edx
// 008687e9  e842f2ffff           call 0x867a30
// 008687ee  8b00                 mov eax, dword ptr [eax]
// 008687f0  83c408               add esp, 8
// 008687f3  3bf8                 cmp edi, eax
// 008687f5  7e05                 jle 0x8687fc
// 008687f7  f7d8                 neg eax
// 008687f9  894630               mov dword ptr [esi + 0x30], eax
// 008687fc  8b4630               mov eax, dword ptr [esi + 0x30]
// 008687ff  85c0                 test eax, eax
// 00868801  7d18                 jge 0x86881b
// 00868803  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00868807  0101                 add dword ptr [ecx], eax
// 00868809  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0086880d  2918                 sub dword ptr [eax], ebx
// 0086880f  833900               cmp dword ptr [ecx], 0
// 00868812  7c17                 jl 0x86882b
// 00868814  8b442450             mov eax, dword ptr [esp + 0x50]
// 00868818  8b6804               mov ebp, dword ptr [eax + 4]
// 0086881b  85ed                 test ebp, ebp
// 0086881d  0f8562ffffff         jne 0x868785
// 00868823  5f                   pop edi
// 00868824  5e                   pop esi
// 00868825  5d                   pop ebp
// 00868826  5b                   pop ebx
// 00868827  83c438               add esp, 0x38
// 0086882a  c3                   ret 
// 0086882b  8b11                 mov edx, dword ptr [ecx]
// 0086882d  295630               sub dword ptr [esi + 0x30], edx
// 00868830  c70100000000         mov dword ptr [ecx], 0
// 00868836  5f                   pop edi
// 00868837  5e                   pop esi
// 00868838  5d                   pop ebp
// 00868839  5b                   pop ebx
// 0086883a  83c438               add esp, 0x38
// 0086883d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_AdjustPanesLength@CXTPDockingPaneSplitterContainer@@CAXPAVCXTPDockingPaneManager@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@VCRect@@HHAAH3@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
