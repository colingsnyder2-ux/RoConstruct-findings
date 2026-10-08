// from server: 100% by auto
// roc 2007-08 006e40b0  unit: CXTPDockingPaneSplitterContainer  size: 576 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e40b0
//
// 006e40b0  83ec38               sub esp, 0x38
// 006e40b3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 006e40b7  53                   push ebx
// 006e40b8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 006e40bc  55                   push ebp
// 006e40bd  56                   push esi
// 006e40be  8b742448             mov esi, dword ptr [esp + 0x48]
// 006e40c2  57                   push edi
// 006e40c3  c70000000000         mov dword ptr [eax], 0
// 006e40c9  8bce                 mov ecx, esi
// 006e40cb  c70300000000         mov dword ptr [ebx], 0
// 006e40d1  33ff                 xor edi, edi
// 006e40d3  e898a0f8ff           call 0x66e170
// 006e40d8  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 006e40de  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006e40e1  8954241c             mov dword ptr [esp + 0x1c], edx
// 006e40e5  8b542450             mov edx, dword ptr [esp + 0x50]
// 006e40e9  8b6a04               mov ebp, dword ptr [edx + 4]
// 006e40ec  85ed                 test ebp, ebp
// 006e40ee  89442418             mov dword ptr [esp + 0x18], eax
// 006e40f2  0f84d8000000         je 0x6e41d0
// 006e40f8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 006e40fc  8d442420             lea eax, [esp + 0x20]
// 006e4100  53                   push ebx
// 006e4101  50                   push eax
// 006e4102  e8e9f3ffff           call 0x6e34f0
// 006e4107  8d4c2428             lea ecx, [esp + 0x28]
// 006e410b  53                   push ebx
// 006e410c  51                   push ecx
// 006e410d  89442424             mov dword ptr [esp + 0x24], eax
// 006e4111  e8faf3ffff           call 0x6e3510
// 006e4116  83c410               add esp, 0x10
// 006e4119  89442410             mov dword ptr [esp + 0x10], eax
// 006e411d  eb05                 jmp 0x6e4124
// 006e411f  90                   nop 
// 006e4120  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 006e4124  85db                 test ebx, ebx
// 006e4126  8bc5                 mov eax, ebp
// 006e4128  8b6d00               mov ebp, dword ptr [ebp]
// 006e412b  8b7008               mov esi, dword ptr [eax + 8]
// 006e412e  7405                 je 0x6e4135
// 006e4130  8b4604               mov eax, dword ptr [esi + 4]
// 006e4133  eb03                 jmp 0x6e4138
// 006e4135  8b4608               mov eax, dword ptr [esi + 8]
// 006e4138  8b16                 mov edx, dword ptr [esi]
// 006e413a  8b5210               mov edx, dword ptr [edx + 0x10]
// 006e413d  894630               mov dword ptr [esi + 0x30], eax
// 006e4140  8d442420             lea eax, [esp + 0x20]
// 006e4144  50                   push eax
// 006e4145  8bce                 mov ecx, esi
// 006e4147  ffd2                 call edx
// 006e4149  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e414d  8b00                 mov eax, dword ptr [eax]
// 006e414f  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006e4152  3bc1                 cmp eax, ecx
// 006e4154  8bd8                 mov ebx, eax
// 006e4156  7c02                 jl 0x6e415a
// 006e4158  8bd9                 mov ebx, ecx
// 006e415a  8b542414             mov edx, dword ptr [esp + 0x14]
// 006e415e  8b12                 mov edx, dword ptr [edx]
// 006e4160  3bd3                 cmp edx, ebx
// 006e4162  7e04                 jle 0x6e4168
// 006e4164  8bc2                 mov eax, edx
// 006e4166  eb06                 jmp 0x6e416e
// 006e4168  3bc1                 cmp eax, ecx
// 006e416a  7c02                 jl 0x6e416e
// 006e416c  8bc1                 mov eax, ecx
// 006e416e  85ff                 test edi, edi
// 006e4170  894630               mov dword ptr [esi + 0x30], eax
// 006e4173  7542                 jne 0x6e41b7
// 006e4175  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e4179  8b06                 mov eax, dword ptr [esi]
// 006e417b  8b5008               mov edx, dword ptr [eax + 8]
// 006e417e  51                   push ecx
// 006e417f  8bce                 mov ecx, esi
// 006e4181  ffd2                 call edx
// 006e4183  85c0                 test eax, eax
// 006e4185  7430                 je 0x6e41b7
// 006e4187  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006e418b  39b8e8000000         cmp dword ptr [eax + 0xe8], edi
// 006e4191  740a                 je 0x6e419d
// 006e4193  397e04               cmp dword ptr [esi + 4], edi
// 006e4196  751f                 jne 0x6e41b7
// 006e4198  397e08               cmp dword ptr [esi + 8], edi
// 006e419b  751a                 jne 0x6e41b7
// 006e419d  837c246800           cmp dword ptr [esp + 0x68], 0
// 006e41a2  8bfe                 mov edi, esi
// 006e41a4  740a                 je 0x6e41b0
// 006e41a6  33c0                 xor eax, eax
// 006e41a8  33c9                 xor ecx, ecx
// 006e41aa  894604               mov dword ptr [esi + 4], eax
// 006e41ad  894e08               mov dword ptr [esi + 8], ecx
// 006e41b0  c7463000000000       mov dword ptr [esi + 0x30], 0
// 006e41b7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006e41ba  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006e41be  0108                 add dword ptr [eax], ecx
// 006e41c0  85ed                 test ebp, ebp
// 006e41c2  0f8558ffffff         jne 0x6e4120
// 006e41c8  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 006e41cc  8b542450             mov edx, dword ptr [esp + 0x50]
// 006e41d0  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 006e41d4  85ed                 test ebp, ebp
// 006e41d6  740a                 je 0x6e41e2
// 006e41d8  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 006e41dc  2b442454             sub eax, dword ptr [esp + 0x54]
// 006e41e0  eb08                 jmp 0x6e41ea
// 006e41e2  8b442460             mov eax, dword ptr [esp + 0x60]
// 006e41e6  2b442458             sub eax, dword ptr [esp + 0x58]
// 006e41ea  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 006e41ed  83e901               sub ecx, 1
// 006e41f0  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 006e41f5  2bc1                 sub eax, ecx
// 006e41f7  85ff                 test edi, edi
// 006e41f9  8903                 mov dword ptr [ebx], eax
// 006e41fb  7426                 je 0x6e4223
// 006e41fd  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006e4201  8b0e                 mov ecx, dword ptr [esi]
// 006e4203  3bc8                 cmp ecx, eax
// 006e4205  7d1c                 jge 0x6e4223
// 006e4207  2bc1                 sub eax, ecx
// 006e4209  837c246800           cmp dword ptr [esp + 0x68], 0
// 006e420e  894730               mov dword ptr [edi + 0x30], eax
// 006e4211  740c                 je 0x6e421f
// 006e4213  85ed                 test ebp, ebp
// 006e4215  7405                 je 0x6e421c
// 006e4217  894704               mov dword ptr [edi + 4], eax
// 006e421a  eb03                 jmp 0x6e421f
// 006e421c  894708               mov dword ptr [edi + 8], eax
// 006e421f  8b03                 mov eax, dword ptr [ebx]
// 006e4221  8906                 mov dword ptr [esi], eax
// 006e4223  833b00               cmp dword ptr [ebx], 0
// 006e4226  0f8ebc000000         jle 0x6e42e8
// 006e422c  8b6a04               mov ebp, dword ptr [edx + 4]
// 006e422f  85ed                 test ebp, ebp
// 006e4231  0f84b1000000         je 0x6e42e8
// 006e4237  8bc5                 mov eax, ebp
// 006e4239  8b7008               mov esi, dword ptr [eax + 8]
// 006e423c  837e3000             cmp dword ptr [esi + 0x30], 0
// 006e4240  8b6d00               mov ebp, dword ptr [ebp]
// 006e4243  0f8c84000000         jl 0x6e42cd
// 006e4249  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 006e424d  833900               cmp dword ptr [ecx], 0
// 006e4250  0f8477000000         je 0x6e42cd
// 006e4256  8b16                 mov edx, dword ptr [esi]
// 006e4258  8b5210               mov edx, dword ptr [edx + 0x10]
// 006e425b  8d442420             lea eax, [esp + 0x20]
// 006e425f  50                   push eax
// 006e4260  8bce                 mov ecx, esi
// 006e4262  ffd2                 call edx
// 006e4264  8b442470             mov eax, dword ptr [esp + 0x70]
// 006e4268  8b00                 mov eax, dword ptr [eax]
// 006e426a  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 006e426d  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 006e4271  0fafc3               imul eax, ebx
// 006e4274  99                   cdq 
// 006e4275  f739                 idiv dword ptr [ecx]
// 006e4277  8b542464             mov edx, dword ptr [esp + 0x64]
// 006e427b  52                   push edx
// 006e427c  8bf8                 mov edi, eax
// 006e427e  8d442424             lea eax, [esp + 0x24]
// 006e4282  50                   push eax
// 006e4283  e868f2ffff           call 0x6e34f0
// 006e4288  8b00                 mov eax, dword ptr [eax]
// 006e428a  83c408               add esp, 8
// 006e428d  3bf8                 cmp edi, eax
// 006e428f  7c18                 jl 0x6e42a9
// 006e4291  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006e4295  51                   push ecx
// 006e4296  8d542424             lea edx, [esp + 0x24]
// 006e429a  52                   push edx
// 006e429b  e870f2ffff           call 0x6e3510
// 006e42a0  8b00                 mov eax, dword ptr [eax]
// 006e42a2  83c408               add esp, 8
// 006e42a5  3bf8                 cmp edi, eax
// 006e42a7  7e05                 jle 0x6e42ae
// 006e42a9  f7d8                 neg eax
// 006e42ab  894630               mov dword ptr [esi + 0x30], eax
// 006e42ae  8b4630               mov eax, dword ptr [esi + 0x30]
// 006e42b1  85c0                 test eax, eax
// 006e42b3  7d18                 jge 0x6e42cd
// 006e42b5  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 006e42b9  0101                 add dword ptr [ecx], eax
// 006e42bb  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006e42bf  2918                 sub dword ptr [eax], ebx
// 006e42c1  833900               cmp dword ptr [ecx], 0
// 006e42c4  7c17                 jl 0x6e42dd
// 006e42c6  8b442450             mov eax, dword ptr [esp + 0x50]
// 006e42ca  8b6804               mov ebp, dword ptr [eax + 4]
// 006e42cd  85ed                 test ebp, ebp
// 006e42cf  0f8562ffffff         jne 0x6e4237
// 006e42d5  5f                   pop edi
// 006e42d6  5e                   pop esi
// 006e42d7  5d                   pop ebp
// 006e42d8  5b                   pop ebx
// 006e42d9  83c438               add esp, 0x38
// 006e42dc  c3                   ret 
// 006e42dd  8b11                 mov edx, dword ptr [ecx]
// 006e42df  295630               sub dword ptr [esi + 0x30], edx
// 006e42e2  c70100000000         mov dword ptr [ecx], 0
// 006e42e8  5f                   pop edi
// 006e42e9  5e                   pop esi
// 006e42ea  5d                   pop ebp
// 006e42eb  5b                   pop ebx
// 006e42ec  83c438               add esp, 0x38
// 006e42ef  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_AdjustPanesLength@CXTPDockingPaneSplitterContainer@@CAXPAVCXTPDockingPaneManager@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@VCRect@@HHAAH3@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
