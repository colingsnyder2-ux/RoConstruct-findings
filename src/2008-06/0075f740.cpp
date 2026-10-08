// from server: 100% by auto
// roc 2008-06 0075f740  unit: CXTPDockingPaneTabbedContainer  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075f740
//
// 0075f740  83ec28               sub esp, 0x28
// 0075f743  56                   push esi
// 0075f744  8b742430             mov esi, dword ptr [esp + 0x30]
// 0075f748  57                   push edi
// 0075f749  56                   push esi
// 0075f74a  8bf9                 mov edi, ecx
// 0075f74c  e8afdeffff           call 0x75d600
// 0075f751  8b07                 mov eax, dword ptr [edi]
// 0075f753  8b5014               mov edx, dword ptr [eax + 0x14]
// 0075f756  8bcf                 mov ecx, edi
// 0075f758  ffd2                 call edx
// 0075f75a  85c0                 test eax, eax
// 0075f75c  0f85da000000         jne 0x75f83c
// 0075f762  53                   push ebx
// 0075f763  8d5fac               lea ebx, [edi - 0x54]
// 0075f766  8bcb                 mov ecx, ebx
// 0075f768  e8d3fdffff           call 0x75f540
// 0075f76d  85c0                 test eax, eax
// 0075f76f  744b                 je 0x75f7bc
// 0075f771  8b4710               mov eax, dword ptr [edi + 0x10]
// 0075f774  85c0                 test eax, eax
// 0075f776  7405                 je 0x75f77d
// 0075f778  83c0e0               add eax, -0x20
// 0075f77b  eb02                 jmp 0x75f77f
// 0075f77d  33c0                 xor eax, eax
// 0075f77f  83b89000000000       cmp dword ptr [eax + 0x90], 0
// 0075f786  741a                 je 0x75f7a2
// 0075f788  6a00                 push 0
// 0075f78a  56                   push esi
// 0075f78b  8bcb                 mov ecx, ebx
// 0075f78d  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0075f794  e8b7f2ffff           call 0x75ea50
// 0075f799  5b                   pop ebx
// 0075f79a  5f                   pop edi
// 0075f79b  5e                   pop esi
// 0075f79c  83c428               add esp, 0x28
// 0075f79f  c20400               ret 4
// 0075f7a2  6a00                 push 0
// 0075f7a4  56                   push esi
// 0075f7a5  8bcb                 mov ecx, ebx
// 0075f7a7  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0075f7ae  e89df2ffff           call 0x75ea50
// 0075f7b3  5b                   pop ebx
// 0075f7b4  5f                   pop edi
// 0075f7b5  5e                   pop esi
// 0075f7b6  83c428               add esp, 0x28
// 0075f7b9  c20400               ret 4
// 0075f7bc  8bcf                 mov ecx, edi
// 0075f7be  e8ad0f0400           call 0x7a0770
// 0075f7c3  89442438             mov dword ptr [esp + 0x38], eax
// 0075f7c7  85c0                 test eax, eax
// 0075f7c9  7466                 je 0x75f831
// 0075f7cb  eb03                 jmp 0x75f7d0
// 0075f7cd  8d4900               lea ecx, [ecx]
// 0075f7d0  8d442438             lea eax, [esp + 0x38]
// 0075f7d4  50                   push eax
// 0075f7d5  8bcf                 mov ecx, edi
// 0075f7d7  e8a40f0400           call 0x7a0780
// 0075f7dc  8b10                 mov edx, dword ptr [eax]
// 0075f7de  8b5210               mov edx, dword ptr [edx + 0x10]
// 0075f7e1  8d4c240c             lea ecx, [esp + 0xc]
// 0075f7e5  51                   push ecx
// 0075f7e6  8bc8                 mov ecx, eax
// 0075f7e8  ffd2                 call edx
// 0075f7ea  8b4618               mov eax, dword ptr [esi + 0x18]
// 0075f7ed  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0075f7f1  3bc1                 cmp eax, ecx
// 0075f7f3  7f02                 jg 0x75f7f7
// 0075f7f5  8bc1                 mov eax, ecx
// 0075f7f7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0075f7fb  894618               mov dword ptr [esi + 0x18], eax
// 0075f7fe  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0075f801  3bc1                 cmp eax, ecx
// 0075f803  7f02                 jg 0x75f807
// 0075f805  8bc1                 mov eax, ecx
// 0075f807  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0075f80b  89461c               mov dword ptr [esi + 0x1c], eax
// 0075f80e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075f811  3bc1                 cmp eax, ecx
// 0075f813  7c02                 jl 0x75f817
// 0075f815  8bc1                 mov eax, ecx
// 0075f817  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0075f81b  894620               mov dword ptr [esi + 0x20], eax
// 0075f81e  8b4624               mov eax, dword ptr [esi + 0x24]
// 0075f821  3bc1                 cmp eax, ecx
// 0075f823  7c02                 jl 0x75f827
// 0075f825  8bc1                 mov eax, ecx
// 0075f827  837c243800           cmp dword ptr [esp + 0x38], 0
// 0075f82c  894624               mov dword ptr [esi + 0x24], eax
// 0075f82f  759f                 jne 0x75f7d0
// 0075f831  6a00                 push 0
// 0075f833  56                   push esi
// 0075f834  8bcb                 mov ecx, ebx
// 0075f836  e815f2ffff           call 0x75ea50
// 0075f83b  5b                   pop ebx
// 0075f83c  5f                   pop edi
// 0075f83d  5e                   pop esi
// 0075f83e  83c428               add esp, 0x28
// 0075f841  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneTabbedContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
