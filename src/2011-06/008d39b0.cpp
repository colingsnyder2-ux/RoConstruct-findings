// roc 2011-06 008d39b0  unit: CXTPTabManagerNavigateButton  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d39b0
//
// 008d39b0  83ec08               sub esp, 8
// 008d39b3  56                   push esi
// 008d39b4  8bf1                 mov esi, ecx
// 008d39b6  8b4608               mov eax, dword ptr [esi + 8]
// 008d39b9  83f802               cmp eax, 2
// 008d39bc  7425                 je 0x8d39e3
// 008d39be  83f801               cmp eax, 1
// 008d39c1  750f                 jne 0x8d39d2
// 008d39c3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d39c6  8b01                 mov eax, dword ptr [ecx]
// 008d39c8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008d39cb  56                   push esi
// 008d39cc  ffd2                 call edx
// 008d39ce  85c0                 test eax, eax
// 008d39d0  7511                 jne 0x8d39e3
// 008d39d2  83c610               add esi, 0x10
// 008d39d5  56                   push esi
// 008d39d6  ff15ac19a400         call dword ptr [0xa419ac]
// 008d39dc  5e                   pop esi
// 008d39dd  83c408               add esp, 8
// 008d39e0  c20400               ret 4
// 008d39e3  8b06                 mov eax, dword ptr [esi]
// 008d39e5  8b5008               mov edx, dword ptr [eax + 8]
// 008d39e8  53                   push ebx
// 008d39e9  57                   push edi
// 008d39ea  8d4c240c             lea ecx, [esp + 0xc]
// 008d39ee  51                   push ecx
// 008d39ef  8bce                 mov ecx, esi
// 008d39f1  ffd2                 call edx
// 008d39f3  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 008d39f6  8b07                 mov eax, dword ptr [edi]
// 008d39f8  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d39fb  8bcf                 mov ecx, edi
// 008d39fd  ffd2                 call edx
// 008d39ff  83f802               cmp eax, 2
// 008d3a02  740d                 je 0x8d3a11
// 008d3a04  8b07                 mov eax, dword ptr [edi]
// 008d3a06  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d3a09  8bcf                 mov ecx, edi
// 008d3a0b  ffd2                 call edx
// 008d3a0d  85c0                 test eax, eax
// 008d3a0f  7545                 jne 0x8d3a56
// 008d3a11  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008d3a15  8b470c               mov eax, dword ptr [edi + 0xc]
// 008d3a18  034704               add eax, dword ptr [edi + 4]
// 008d3a1b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008d3a1f  99                   cdq 
// 008d3a20  2bc2                 sub eax, edx
// 008d3a22  8bc8                 mov ecx, eax
// 008d3a24  8bc3                 mov eax, ebx
// 008d3a26  99                   cdq 
// 008d3a27  2bc2                 sub eax, edx
// 008d3a29  d1f9                 sar ecx, 1
// 008d3a2b  d1f8                 sar eax, 1
// 008d3a2d  03c1                 add eax, ecx
// 008d3a2f  8b4f08               mov ecx, dword ptr [edi + 8]
// 008d3a32  50                   push eax
// 008d3a33  51                   push ecx
// 008d3a34  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008d3a38  2bc3                 sub eax, ebx
// 008d3a3a  50                   push eax
// 008d3a3b  51                   push ecx
// 008d3a3c  83c610               add esi, 0x10
// 008d3a3f  56                   push esi
// 008d3a40  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d3a46  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008d3a4a  295708               sub dword ptr [edi + 8], edx
// 008d3a4d  5f                   pop edi
// 008d3a4e  5b                   pop ebx
// 008d3a4f  5e                   pop esi
// 008d3a50  83c408               add esp, 8
// 008d3a53  c20400               ret 4
// 008d3a56  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008d3a5a  8b4708               mov eax, dword ptr [edi + 8]
// 008d3a5d  0307                 add eax, dword ptr [edi]
// 008d3a5f  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 008d3a62  99                   cdq 
// 008d3a63  55                   push ebp
// 008d3a64  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d3a68  2bc2                 sub eax, edx
// 008d3a6a  8bc8                 mov ecx, eax
// 008d3a6c  8bc5                 mov eax, ebp
// 008d3a6e  99                   cdq 
// 008d3a6f  2bc2                 sub eax, edx
// 008d3a71  d1f8                 sar eax, 1
// 008d3a73  d1f9                 sar ecx, 1
// 008d3a75  53                   push ebx
// 008d3a76  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 008d3a7a  2bc8                 sub ecx, eax
// 008d3a7c  8d0429               lea eax, [ecx + ebp]
// 008d3a7f  50                   push eax
// 008d3a80  53                   push ebx
// 008d3a81  51                   push ecx
// 008d3a82  83c610               add esi, 0x10
// 008d3a85  56                   push esi
// 008d3a86  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d3a8c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d3a90  294f0c               sub dword ptr [edi + 0xc], ecx
// 008d3a93  5d                   pop ebp
// 008d3a94  5f                   pop edi
// 008d3a95  5b                   pop ebx
// 008d3a96  5e                   pop esi
// 008d3a97  83c408               add esp, 8
// 008d3a9a  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerNavigateButton@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
