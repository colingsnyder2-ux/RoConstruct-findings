// roc 2009-12 008ce8c0  unit: CXTPTabManagerNavigateButton  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce8c0
//
// 008ce8c0  83ec08               sub esp, 8
// 008ce8c3  56                   push esi
// 008ce8c4  8bf1                 mov esi, ecx
// 008ce8c6  8b4608               mov eax, dword ptr [esi + 8]
// 008ce8c9  83f802               cmp eax, 2
// 008ce8cc  7425                 je 0x8ce8f3
// 008ce8ce  83f801               cmp eax, 1
// 008ce8d1  750f                 jne 0x8ce8e2
// 008ce8d3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ce8d6  8b01                 mov eax, dword ptr [ecx]
// 008ce8d8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008ce8db  56                   push esi
// 008ce8dc  ffd2                 call edx
// 008ce8de  85c0                 test eax, eax
// 008ce8e0  7511                 jne 0x8ce8f3
// 008ce8e2  83c610               add esi, 0x10
// 008ce8e5  56                   push esi
// 008ce8e6  ff159cca9800         call dword ptr [0x98ca9c]
// 008ce8ec  5e                   pop esi
// 008ce8ed  83c408               add esp, 8
// 008ce8f0  c20400               ret 4
// 008ce8f3  8b06                 mov eax, dword ptr [esi]
// 008ce8f5  8b5008               mov edx, dword ptr [eax + 8]
// 008ce8f8  53                   push ebx
// 008ce8f9  57                   push edi
// 008ce8fa  8d4c240c             lea ecx, [esp + 0xc]
// 008ce8fe  51                   push ecx
// 008ce8ff  8bce                 mov ecx, esi
// 008ce901  ffd2                 call edx
// 008ce903  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 008ce906  8b07                 mov eax, dword ptr [edi]
// 008ce908  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ce90b  8bcf                 mov ecx, edi
// 008ce90d  ffd2                 call edx
// 008ce90f  83f802               cmp eax, 2
// 008ce912  740d                 je 0x8ce921
// 008ce914  8b07                 mov eax, dword ptr [edi]
// 008ce916  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ce919  8bcf                 mov ecx, edi
// 008ce91b  ffd2                 call edx
// 008ce91d  85c0                 test eax, eax
// 008ce91f  7545                 jne 0x8ce966
// 008ce921  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008ce925  8b470c               mov eax, dword ptr [edi + 0xc]
// 008ce928  034704               add eax, dword ptr [edi + 4]
// 008ce92b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008ce92f  99                   cdq 
// 008ce930  2bc2                 sub eax, edx
// 008ce932  8bc8                 mov ecx, eax
// 008ce934  8bc3                 mov eax, ebx
// 008ce936  99                   cdq 
// 008ce937  2bc2                 sub eax, edx
// 008ce939  d1f9                 sar ecx, 1
// 008ce93b  d1f8                 sar eax, 1
// 008ce93d  03c1                 add eax, ecx
// 008ce93f  8b4f08               mov ecx, dword ptr [edi + 8]
// 008ce942  50                   push eax
// 008ce943  51                   push ecx
// 008ce944  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008ce948  2bc3                 sub eax, ebx
// 008ce94a  50                   push eax
// 008ce94b  51                   push ecx
// 008ce94c  83c610               add esi, 0x10
// 008ce94f  56                   push esi
// 008ce950  ff1538ca9800         call dword ptr [0x98ca38]
// 008ce956  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008ce95a  295708               sub dword ptr [edi + 8], edx
// 008ce95d  5f                   pop edi
// 008ce95e  5b                   pop ebx
// 008ce95f  5e                   pop esi
// 008ce960  83c408               add esp, 8
// 008ce963  c20400               ret 4
// 008ce966  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008ce96a  8b4708               mov eax, dword ptr [edi + 8]
// 008ce96d  0307                 add eax, dword ptr [edi]
// 008ce96f  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 008ce972  99                   cdq 
// 008ce973  55                   push ebp
// 008ce974  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008ce978  2bc2                 sub eax, edx
// 008ce97a  8bc8                 mov ecx, eax
// 008ce97c  8bc5                 mov eax, ebp
// 008ce97e  99                   cdq 
// 008ce97f  2bc2                 sub eax, edx
// 008ce981  d1f8                 sar eax, 1
// 008ce983  d1f9                 sar ecx, 1
// 008ce985  53                   push ebx
// 008ce986  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 008ce98a  2bc8                 sub ecx, eax
// 008ce98c  8d0429               lea eax, [ecx + ebp]
// 008ce98f  50                   push eax
// 008ce990  53                   push ebx
// 008ce991  51                   push ecx
// 008ce992  83c610               add esi, 0x10
// 008ce995  56                   push esi
// 008ce996  ff1538ca9800         call dword ptr [0x98ca38]
// 008ce99c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ce9a0  294f0c               sub dword ptr [edi + 0xc], ecx
// 008ce9a3  5d                   pop ebp
// 008ce9a4  5f                   pop edi
// 008ce9a5  5b                   pop ebx
// 008ce9a6  5e                   pop esi
// 008ce9a7  83c408               add esp, 8
// 008ce9aa  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerNavigateButton@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
