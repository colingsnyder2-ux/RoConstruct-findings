// from server: 100% by auto
// roc 2011-06 008c3fd0  unit: CXTPDockingPaneTabbedContainer  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3fd0
//
// 008c3fd0  83ec28               sub esp, 0x28
// 008c3fd3  56                   push esi
// 008c3fd4  8b742430             mov esi, dword ptr [esp + 0x30]
// 008c3fd8  57                   push edi
// 008c3fd9  56                   push esi
// 008c3fda  8bf9                 mov edi, ecx
// 008c3fdc  e8cfdeffff           call 0x8c1eb0
// 008c3fe1  8b07                 mov eax, dword ptr [edi]
// 008c3fe3  8b5014               mov edx, dword ptr [eax + 0x14]
// 008c3fe6  8bcf                 mov ecx, edi
// 008c3fe8  ffd2                 call edx
// 008c3fea  85c0                 test eax, eax
// 008c3fec  0f85da000000         jne 0x8c40cc
// 008c3ff2  53                   push ebx
// 008c3ff3  8d5fac               lea ebx, [edi - 0x54]
// 008c3ff6  8bcb                 mov ecx, ebx
// 008c3ff8  e8d3fdffff           call 0x8c3dd0
// 008c3ffd  85c0                 test eax, eax
// 008c3fff  744b                 je 0x8c404c
// 008c4001  8b4710               mov eax, dword ptr [edi + 0x10]
// 008c4004  85c0                 test eax, eax
// 008c4006  7405                 je 0x8c400d
// 008c4008  83c0e0               add eax, -0x20
// 008c400b  eb02                 jmp 0x8c400f
// 008c400d  33c0                 xor eax, eax
// 008c400f  83b89000000000       cmp dword ptr [eax + 0x90], 0
// 008c4016  741a                 je 0x8c4032
// 008c4018  6a00                 push 0
// 008c401a  56                   push esi
// 008c401b  8bcb                 mov ecx, ebx
// 008c401d  c7462000000000       mov dword ptr [esi + 0x20], 0
// 008c4024  e8b7f2ffff           call 0x8c32e0
// 008c4029  5b                   pop ebx
// 008c402a  5f                   pop edi
// 008c402b  5e                   pop esi
// 008c402c  83c428               add esp, 0x28
// 008c402f  c20400               ret 4
// 008c4032  6a00                 push 0
// 008c4034  56                   push esi
// 008c4035  8bcb                 mov ecx, ebx
// 008c4037  c7462400000000       mov dword ptr [esi + 0x24], 0
// 008c403e  e89df2ffff           call 0x8c32e0
// 008c4043  5b                   pop ebx
// 008c4044  5f                   pop edi
// 008c4045  5e                   pop esi
// 008c4046  83c428               add esp, 0x28
// 008c4049  c20400               ret 4
// 008c404c  8bcf                 mov ecx, edi
// 008c404e  e8ed8bf9ff           call 0x85cc40
// 008c4053  89442438             mov dword ptr [esp + 0x38], eax
// 008c4057  85c0                 test eax, eax
// 008c4059  7466                 je 0x8c40c1
// 008c405b  eb03                 jmp 0x8c4060
// 008c405d  8d4900               lea ecx, [ecx]
// 008c4060  8d442438             lea eax, [esp + 0x38]
// 008c4064  50                   push eax
// 008c4065  8bcf                 mov ecx, edi
// 008c4067  e8c4c60300           call 0x900730
// 008c406c  8b10                 mov edx, dword ptr [eax]
// 008c406e  8b5210               mov edx, dword ptr [edx + 0x10]
// 008c4071  8d4c240c             lea ecx, [esp + 0xc]
// 008c4075  51                   push ecx
// 008c4076  8bc8                 mov ecx, eax
// 008c4078  ffd2                 call edx
// 008c407a  8b4618               mov eax, dword ptr [esi + 0x18]
// 008c407d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c4081  3bc1                 cmp eax, ecx
// 008c4083  7f02                 jg 0x8c4087
// 008c4085  8bc1                 mov eax, ecx
// 008c4087  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008c408b  894618               mov dword ptr [esi + 0x18], eax
// 008c408e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008c4091  3bc1                 cmp eax, ecx
// 008c4093  7f02                 jg 0x8c4097
// 008c4095  8bc1                 mov eax, ecx
// 008c4097  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008c409b  89461c               mov dword ptr [esi + 0x1c], eax
// 008c409e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c40a1  3bc1                 cmp eax, ecx
// 008c40a3  7c02                 jl 0x8c40a7
// 008c40a5  8bc1                 mov eax, ecx
// 008c40a7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008c40ab  894620               mov dword ptr [esi + 0x20], eax
// 008c40ae  8b4624               mov eax, dword ptr [esi + 0x24]
// 008c40b1  3bc1                 cmp eax, ecx
// 008c40b3  7c02                 jl 0x8c40b7
// 008c40b5  8bc1                 mov eax, ecx
// 008c40b7  837c243800           cmp dword ptr [esp + 0x38], 0
// 008c40bc  894624               mov dword ptr [esi + 0x24], eax
// 008c40bf  759f                 jne 0x8c4060
// 008c40c1  6a00                 push 0
// 008c40c3  56                   push esi
// 008c40c4  8bcb                 mov ecx, ebx
// 008c40c6  e815f2ffff           call 0x8c32e0
// 008c40cb  5b                   pop ebx
// 008c40cc  5f                   pop edi
// 008c40cd  5e                   pop esi
// 008c40ce  83c428               add esp, 0x28
// 008c40d1  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneTabbedContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
