// from server: 100% by auto
// roc 2008-06 0077b5c0  unit: CXTPTabManagerNavigateButton  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b5c0
//
// 0077b5c0  83ec08               sub esp, 8
// 0077b5c3  56                   push esi
// 0077b5c4  8bf1                 mov esi, ecx
// 0077b5c6  8b4608               mov eax, dword ptr [esi + 8]
// 0077b5c9  83f802               cmp eax, 2
// 0077b5cc  7425                 je 0x77b5f3
// 0077b5ce  83f801               cmp eax, 1
// 0077b5d1  750f                 jne 0x77b5e2
// 0077b5d3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077b5d6  8b01                 mov eax, dword ptr [ecx]
// 0077b5d8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0077b5db  56                   push esi
// 0077b5dc  ffd2                 call edx
// 0077b5de  85c0                 test eax, eax
// 0077b5e0  7511                 jne 0x77b5f3
// 0077b5e2  83c610               add esi, 0x10
// 0077b5e5  56                   push esi
// 0077b5e6  ff157c2c8000         call dword ptr [0x802c7c]
// 0077b5ec  5e                   pop esi
// 0077b5ed  83c408               add esp, 8
// 0077b5f0  c20400               ret 4
// 0077b5f3  8b06                 mov eax, dword ptr [esi]
// 0077b5f5  8b5008               mov edx, dword ptr [eax + 8]
// 0077b5f8  53                   push ebx
// 0077b5f9  57                   push edi
// 0077b5fa  8d4c240c             lea ecx, [esp + 0xc]
// 0077b5fe  51                   push ecx
// 0077b5ff  8bce                 mov ecx, esi
// 0077b601  ffd2                 call edx
// 0077b603  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0077b606  8b07                 mov eax, dword ptr [edi]
// 0077b608  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077b60b  8bcf                 mov ecx, edi
// 0077b60d  ffd2                 call edx
// 0077b60f  83f802               cmp eax, 2
// 0077b612  740d                 je 0x77b621
// 0077b614  8b07                 mov eax, dword ptr [edi]
// 0077b616  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077b619  8bcf                 mov ecx, edi
// 0077b61b  ffd2                 call edx
// 0077b61d  85c0                 test eax, eax
// 0077b61f  7545                 jne 0x77b666
// 0077b621  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077b625  8b470c               mov eax, dword ptr [edi + 0xc]
// 0077b628  034704               add eax, dword ptr [edi + 4]
// 0077b62b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0077b62f  99                   cdq 
// 0077b630  2bc2                 sub eax, edx
// 0077b632  8bc8                 mov ecx, eax
// 0077b634  8bc3                 mov eax, ebx
// 0077b636  99                   cdq 
// 0077b637  2bc2                 sub eax, edx
// 0077b639  d1f9                 sar ecx, 1
// 0077b63b  d1f8                 sar eax, 1
// 0077b63d  03c1                 add eax, ecx
// 0077b63f  8b4f08               mov ecx, dword ptr [edi + 8]
// 0077b642  50                   push eax
// 0077b643  51                   push ecx
// 0077b644  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0077b648  2bc3                 sub eax, ebx
// 0077b64a  50                   push eax
// 0077b64b  51                   push ecx
// 0077b64c  83c610               add esi, 0x10
// 0077b64f  56                   push esi
// 0077b650  ff15102d8000         call dword ptr [0x802d10]
// 0077b656  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0077b65a  295708               sub dword ptr [edi + 8], edx
// 0077b65d  5f                   pop edi
// 0077b65e  5b                   pop ebx
// 0077b65f  5e                   pop esi
// 0077b660  83c408               add esp, 8
// 0077b663  c20400               ret 4
// 0077b666  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077b66a  8b4708               mov eax, dword ptr [edi + 8]
// 0077b66d  0307                 add eax, dword ptr [edi]
// 0077b66f  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0077b672  99                   cdq 
// 0077b673  55                   push ebp
// 0077b674  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0077b678  2bc2                 sub eax, edx
// 0077b67a  8bc8                 mov ecx, eax
// 0077b67c  8bc5                 mov eax, ebp
// 0077b67e  99                   cdq 
// 0077b67f  2bc2                 sub eax, edx
// 0077b681  d1f8                 sar eax, 1
// 0077b683  d1f9                 sar ecx, 1
// 0077b685  53                   push ebx
// 0077b686  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 0077b68a  2bc8                 sub ecx, eax
// 0077b68c  8d0429               lea eax, [ecx + ebp]
// 0077b68f  50                   push eax
// 0077b690  53                   push ebx
// 0077b691  51                   push ecx
// 0077b692  83c610               add esi, 0x10
// 0077b695  56                   push esi
// 0077b696  ff15102d8000         call dword ptr [0x802d10]
// 0077b69c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077b6a0  294f0c               sub dword ptr [edi + 0xc], ecx
// 0077b6a3  5d                   pop ebp
// 0077b6a4  5f                   pop edi
// 0077b6a5  5b                   pop ebx
// 0077b6a6  5e                   pop esi
// 0077b6a7  83c408               add esp, 8
// 0077b6aa  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerNavigateButton@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
