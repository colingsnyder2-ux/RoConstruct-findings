// from server: 100% by auto
// roc 2012-06 00a3c400  unit: CXTPDockingPaneTabbedContainer  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3c400
//
// 00a3c400  83ec28               sub esp, 0x28
// 00a3c403  56                   push esi
// 00a3c404  8b742430             mov esi, dword ptr [esp + 0x30]
// 00a3c408  57                   push edi
// 00a3c409  56                   push esi
// 00a3c40a  8bf9                 mov edi, ecx
// 00a3c40c  e8bfdeffff           call 0xa3a2d0
// 00a3c411  8b07                 mov eax, dword ptr [edi]
// 00a3c413  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a3c416  8bcf                 mov ecx, edi
// 00a3c418  ffd2                 call edx
// 00a3c41a  85c0                 test eax, eax
// 00a3c41c  0f85da000000         jne 0xa3c4fc
// 00a3c422  53                   push ebx
// 00a3c423  8d5fac               lea ebx, [edi - 0x54]
// 00a3c426  8bcb                 mov ecx, ebx
// 00a3c428  e8d3fdffff           call 0xa3c200
// 00a3c42d  85c0                 test eax, eax
// 00a3c42f  744b                 je 0xa3c47c
// 00a3c431  8b4710               mov eax, dword ptr [edi + 0x10]
// 00a3c434  85c0                 test eax, eax
// 00a3c436  7405                 je 0xa3c43d
// 00a3c438  83c0e0               add eax, -0x20
// 00a3c43b  eb02                 jmp 0xa3c43f
// 00a3c43d  33c0                 xor eax, eax
// 00a3c43f  83b89000000000       cmp dword ptr [eax + 0x90], 0
// 00a3c446  741a                 je 0xa3c462
// 00a3c448  6a00                 push 0
// 00a3c44a  56                   push esi
// 00a3c44b  8bcb                 mov ecx, ebx
// 00a3c44d  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00a3c454  e8b7f2ffff           call 0xa3b710
// 00a3c459  5b                   pop ebx
// 00a3c45a  5f                   pop edi
// 00a3c45b  5e                   pop esi
// 00a3c45c  83c428               add esp, 0x28
// 00a3c45f  c20400               ret 4
// 00a3c462  6a00                 push 0
// 00a3c464  56                   push esi
// 00a3c465  8bcb                 mov ecx, ebx
// 00a3c467  c7462400000000       mov dword ptr [esi + 0x24], 0
// 00a3c46e  e89df2ffff           call 0xa3b710
// 00a3c473  5b                   pop ebx
// 00a3c474  5f                   pop edi
// 00a3c475  5e                   pop esi
// 00a3c476  83c428               add esp, 0x28
// 00a3c479  c20400               ret 4
// 00a3c47c  8bcf                 mov ecx, edi
// 00a3c47e  e8eddafaff           call 0x9e9f70
// 00a3c483  89442438             mov dword ptr [esp + 0x38], eax
// 00a3c487  85c0                 test eax, eax
// 00a3c489  7466                 je 0xa3c4f1
// 00a3c48b  eb03                 jmp 0xa3c490
// 00a3c48d  8d4900               lea ecx, [ecx]
// 00a3c490  8d442438             lea eax, [esp + 0x38]
// 00a3c494  50                   push eax
// 00a3c495  8bcf                 mov ecx, edi
// 00a3c497  e8b4c40300           call 0xa78950
// 00a3c49c  8b10                 mov edx, dword ptr [eax]
// 00a3c49e  8b5210               mov edx, dword ptr [edx + 0x10]
// 00a3c4a1  8d4c240c             lea ecx, [esp + 0xc]
// 00a3c4a5  51                   push ecx
// 00a3c4a6  8bc8                 mov ecx, eax
// 00a3c4a8  ffd2                 call edx
// 00a3c4aa  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a3c4ad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a3c4b1  3bc1                 cmp eax, ecx
// 00a3c4b3  7f02                 jg 0xa3c4b7
// 00a3c4b5  8bc1                 mov eax, ecx
// 00a3c4b7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a3c4bb  894618               mov dword ptr [esi + 0x18], eax
// 00a3c4be  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a3c4c1  3bc1                 cmp eax, ecx
// 00a3c4c3  7f02                 jg 0xa3c4c7
// 00a3c4c5  8bc1                 mov eax, ecx
// 00a3c4c7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a3c4cb  89461c               mov dword ptr [esi + 0x1c], eax
// 00a3c4ce  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a3c4d1  3bc1                 cmp eax, ecx
// 00a3c4d3  7c02                 jl 0xa3c4d7
// 00a3c4d5  8bc1                 mov eax, ecx
// 00a3c4d7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a3c4db  894620               mov dword ptr [esi + 0x20], eax
// 00a3c4de  8b4624               mov eax, dword ptr [esi + 0x24]
// 00a3c4e1  3bc1                 cmp eax, ecx
// 00a3c4e3  7c02                 jl 0xa3c4e7
// 00a3c4e5  8bc1                 mov eax, ecx
// 00a3c4e7  837c243800           cmp dword ptr [esp + 0x38], 0
// 00a3c4ec  894624               mov dword ptr [esi + 0x24], eax
// 00a3c4ef  759f                 jne 0xa3c490
// 00a3c4f1  6a00                 push 0
// 00a3c4f3  56                   push esi
// 00a3c4f4  8bcb                 mov ecx, ebx
// 00a3c4f6  e815f2ffff           call 0xa3b710
// 00a3c4fb  5b                   pop ebx
// 00a3c4fc  5f                   pop edi
// 00a3c4fd  5e                   pop esi
// 00a3c4fe  83c428               add esp, 0x28
// 00a3c501  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneTabbedContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
