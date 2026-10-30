// roc 2009-12 008b4510  unit: CXTPDockingPaneSplitterContainer  size: 574 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4510
//
// 008b4510  83ec38               sub esp, 0x38
// 008b4513  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008b4517  53                   push ebx
// 008b4518  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 008b451c  55                   push ebp
// 008b451d  56                   push esi
// 008b451e  8b742448             mov esi, dword ptr [esp + 0x48]
// 008b4522  57                   push edi
// 008b4523  c70000000000         mov dword ptr [eax], 0
// 008b4529  8bce                 mov ecx, esi
// 008b452b  c70300000000         mov dword ptr [ebx], 0
// 008b4531  33ff                 xor edi, edi
// 008b4533  e85841f8ff           call 0x838690
// 008b4538  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008b453e  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008b4541  8954241c             mov dword ptr [esp + 0x1c], edx
// 008b4545  8b542450             mov edx, dword ptr [esp + 0x50]
// 008b4549  8b6a04               mov ebp, dword ptr [edx + 4]
// 008b454c  89442418             mov dword ptr [esp + 0x18], eax
// 008b4550  85ed                 test ebp, ebp
// 008b4552  0f84d8000000         je 0x8b4630
// 008b4558  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 008b455c  8d442420             lea eax, [esp + 0x20]
// 008b4560  53                   push ebx
// 008b4561  50                   push eax
// 008b4562  e8b9f3ffff           call 0x8b3920
// 008b4567  8d4c2428             lea ecx, [esp + 0x28]
// 008b456b  53                   push ebx
// 008b456c  51                   push ecx
// 008b456d  89442424             mov dword ptr [esp + 0x24], eax
// 008b4571  e8caf3ffff           call 0x8b3940
// 008b4576  83c410               add esp, 0x10
// 008b4579  89442410             mov dword ptr [esp + 0x10], eax
// 008b457d  eb05                 jmp 0x8b4584
// 008b457f  90                   nop 
// 008b4580  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 008b4584  8bc5                 mov eax, ebp
// 008b4586  8b6d00               mov ebp, dword ptr [ebp]
// 008b4589  8b7008               mov esi, dword ptr [eax + 8]
// 008b458c  85db                 test ebx, ebx
// 008b458e  7405                 je 0x8b4595
// 008b4590  8b4604               mov eax, dword ptr [esi + 4]
// 008b4593  eb03                 jmp 0x8b4598
// 008b4595  8b4608               mov eax, dword ptr [esi + 8]
// 008b4598  8b16                 mov edx, dword ptr [esi]
// 008b459a  8b5210               mov edx, dword ptr [edx + 0x10]
// 008b459d  894630               mov dword ptr [esi + 0x30], eax
// 008b45a0  8d442420             lea eax, [esp + 0x20]
// 008b45a4  50                   push eax
// 008b45a5  8bce                 mov ecx, esi
// 008b45a7  ffd2                 call edx
// 008b45a9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b45ad  8b00                 mov eax, dword ptr [eax]
// 008b45af  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008b45b2  3bc1                 cmp eax, ecx
// 008b45b4  8bd8                 mov ebx, eax
// 008b45b6  7c02                 jl 0x8b45ba
// 008b45b8  8bd9                 mov ebx, ecx
// 008b45ba  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b45be  8b12                 mov edx, dword ptr [edx]
// 008b45c0  3bd3                 cmp edx, ebx
// 008b45c2  7e04                 jle 0x8b45c8
// 008b45c4  8bc2                 mov eax, edx
// 008b45c6  eb06                 jmp 0x8b45ce
// 008b45c8  3bc1                 cmp eax, ecx
// 008b45ca  7c02                 jl 0x8b45ce
// 008b45cc  8bc1                 mov eax, ecx
// 008b45ce  894630               mov dword ptr [esi + 0x30], eax
// 008b45d1  85ff                 test edi, edi
// 008b45d3  7542                 jne 0x8b4617
// 008b45d5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b45d9  8b06                 mov eax, dword ptr [esi]
// 008b45db  8b5008               mov edx, dword ptr [eax + 8]
// 008b45de  51                   push ecx
// 008b45df  8bce                 mov ecx, esi
// 008b45e1  ffd2                 call edx
// 008b45e3  85c0                 test eax, eax
// 008b45e5  7430                 je 0x8b4617
// 008b45e7  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008b45eb  39b8e8000000         cmp dword ptr [eax + 0xe8], edi
// 008b45f1  740a                 je 0x8b45fd
// 008b45f3  397e04               cmp dword ptr [esi + 4], edi
// 008b45f6  751f                 jne 0x8b4617
// 008b45f8  397e08               cmp dword ptr [esi + 8], edi
// 008b45fb  751a                 jne 0x8b4617
// 008b45fd  837c246800           cmp dword ptr [esp + 0x68], 0
// 008b4602  8bfe                 mov edi, esi
// 008b4604  740a                 je 0x8b4610
// 008b4606  33c0                 xor eax, eax
// 008b4608  33c9                 xor ecx, ecx
// 008b460a  894604               mov dword ptr [esi + 4], eax
// 008b460d  894e08               mov dword ptr [esi + 8], ecx
// 008b4610  c7463000000000       mov dword ptr [esi + 0x30], 0
// 008b4617  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008b461a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008b461e  0108                 add dword ptr [eax], ecx
// 008b4620  85ed                 test ebp, ebp
// 008b4622  0f8558ffffff         jne 0x8b4580
// 008b4628  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 008b462c  8b542450             mov edx, dword ptr [esp + 0x50]
// 008b4630  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 008b4634  85ed                 test ebp, ebp
// 008b4636  740a                 je 0x8b4642
// 008b4638  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008b463c  2b442454             sub eax, dword ptr [esp + 0x54]
// 008b4640  eb08                 jmp 0x8b464a
// 008b4642  8b442460             mov eax, dword ptr [esp + 0x60]
// 008b4646  2b442458             sub eax, dword ptr [esp + 0x58]
// 008b464a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 008b464d  49                   dec ecx
// 008b464e  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 008b4653  2bc1                 sub eax, ecx
// 008b4655  8903                 mov dword ptr [ebx], eax
// 008b4657  85ff                 test edi, edi
// 008b4659  7426                 je 0x8b4681
// 008b465b  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008b465f  8b0e                 mov ecx, dword ptr [esi]
// 008b4661  3bc8                 cmp ecx, eax
// 008b4663  7d1c                 jge 0x8b4681
// 008b4665  2bc1                 sub eax, ecx
// 008b4667  837c246800           cmp dword ptr [esp + 0x68], 0
// 008b466c  894730               mov dword ptr [edi + 0x30], eax
// 008b466f  740c                 je 0x8b467d
// 008b4671  85ed                 test ebp, ebp
// 008b4673  7405                 je 0x8b467a
// 008b4675  894704               mov dword ptr [edi + 4], eax
// 008b4678  eb03                 jmp 0x8b467d
// 008b467a  894708               mov dword ptr [edi + 8], eax
// 008b467d  8b03                 mov eax, dword ptr [ebx]
// 008b467f  8906                 mov dword ptr [esi], eax
// 008b4681  833b00               cmp dword ptr [ebx], 0
// 008b4684  0f8ebc000000         jle 0x8b4746
// 008b468a  8b6a04               mov ebp, dword ptr [edx + 4]
// 008b468d  85ed                 test ebp, ebp
// 008b468f  0f84b1000000         je 0x8b4746
// 008b4695  8bc5                 mov eax, ebp
// 008b4697  8b7008               mov esi, dword ptr [eax + 8]
// 008b469a  837e3000             cmp dword ptr [esi + 0x30], 0
// 008b469e  8b6d00               mov ebp, dword ptr [ebp]
// 008b46a1  0f8c84000000         jl 0x8b472b
// 008b46a7  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b46ab  833900               cmp dword ptr [ecx], 0
// 008b46ae  0f8477000000         je 0x8b472b
// 008b46b4  8b16                 mov edx, dword ptr [esi]
// 008b46b6  8b5210               mov edx, dword ptr [edx + 0x10]
// 008b46b9  8d442420             lea eax, [esp + 0x20]
// 008b46bd  50                   push eax
// 008b46be  8bce                 mov ecx, esi
// 008b46c0  ffd2                 call edx
// 008b46c2  8b442470             mov eax, dword ptr [esp + 0x70]
// 008b46c6  8b00                 mov eax, dword ptr [eax]
// 008b46c8  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 008b46cb  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b46cf  0fafc3               imul eax, ebx
// 008b46d2  99                   cdq 
// 008b46d3  f739                 idiv dword ptr [ecx]
// 008b46d5  8b542464             mov edx, dword ptr [esp + 0x64]
// 008b46d9  52                   push edx
// 008b46da  8bf8                 mov edi, eax
// 008b46dc  8d442424             lea eax, [esp + 0x24]
// 008b46e0  50                   push eax
// 008b46e1  e83af2ffff           call 0x8b3920
// 008b46e6  8b00                 mov eax, dword ptr [eax]
// 008b46e8  83c408               add esp, 8
// 008b46eb  3bf8                 cmp edi, eax
// 008b46ed  7c18                 jl 0x8b4707
// 008b46ef  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008b46f3  51                   push ecx
// 008b46f4  8d542424             lea edx, [esp + 0x24]
// 008b46f8  52                   push edx
// 008b46f9  e842f2ffff           call 0x8b3940
// 008b46fe  8b00                 mov eax, dword ptr [eax]
// 008b4700  83c408               add esp, 8
// 008b4703  3bf8                 cmp edi, eax
// 008b4705  7e05                 jle 0x8b470c
// 008b4707  f7d8                 neg eax
// 008b4709  894630               mov dword ptr [esi + 0x30], eax
// 008b470c  8b4630               mov eax, dword ptr [esi + 0x30]
// 008b470f  85c0                 test eax, eax
// 008b4711  7d18                 jge 0x8b472b
// 008b4713  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b4717  0101                 add dword ptr [ecx], eax
// 008b4719  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008b471d  2918                 sub dword ptr [eax], ebx
// 008b471f  833900               cmp dword ptr [ecx], 0
// 008b4722  7c17                 jl 0x8b473b
// 008b4724  8b442450             mov eax, dword ptr [esp + 0x50]
// 008b4728  8b6804               mov ebp, dword ptr [eax + 4]
// 008b472b  85ed                 test ebp, ebp
// 008b472d  0f8562ffffff         jne 0x8b4695
// 008b4733  5f                   pop edi
// 008b4734  5e                   pop esi
// 008b4735  5d                   pop ebp
// 008b4736  5b                   pop ebx
// 008b4737  83c438               add esp, 0x38
// 008b473a  c3                   ret 
// 008b473b  8b11                 mov edx, dword ptr [ecx]
// 008b473d  295630               sub dword ptr [esi + 0x30], edx
// 008b4740  c70100000000         mov dword ptr [ecx], 0
// 008b4746  5f                   pop edi
// 008b4747  5e                   pop esi
// 008b4748  5d                   pop ebp
// 008b4749  5b                   pop ebx
// 008b474a  83c438               add esp, 0x38
// 008b474d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_AdjustPanesLength@CXTPDockingPaneSplitterContainer@@CAXPAVCXTPDockingPaneManager@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@VCRect@@HHAAH3@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
