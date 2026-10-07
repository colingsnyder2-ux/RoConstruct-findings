// roc 2007-08 006fda70  unit: CXTPTabManagerNavigateButton  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fda70
//
// 006fda70  83ec08               sub esp, 8
// 006fda73  56                   push esi
// 006fda74  8bf1                 mov esi, ecx
// 006fda76  8b4608               mov eax, dword ptr [esi + 8]
// 006fda79  83f802               cmp eax, 2
// 006fda7c  7425                 je 0x6fdaa3
// 006fda7e  83f801               cmp eax, 1
// 006fda81  750f                 jne 0x6fda92
// 006fda83  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fda86  8b01                 mov eax, dword ptr [ecx]
// 006fda88  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006fda8b  56                   push esi
// 006fda8c  ffd2                 call edx
// 006fda8e  85c0                 test eax, eax
// 006fda90  7511                 jne 0x6fdaa3
// 006fda92  83c610               add esi, 0x10
// 006fda95  56                   push esi
// 006fda96  ff1514ee7700         call dword ptr [0x77ee14]
// 006fda9c  5e                   pop esi
// 006fda9d  83c408               add esp, 8
// 006fdaa0  c20400               ret 4
// 006fdaa3  8b06                 mov eax, dword ptr [esi]
// 006fdaa5  8b5008               mov edx, dword ptr [eax + 8]
// 006fdaa8  53                   push ebx
// 006fdaa9  57                   push edi
// 006fdaaa  8d4c240c             lea ecx, [esp + 0xc]
// 006fdaae  51                   push ecx
// 006fdaaf  8bce                 mov ecx, esi
// 006fdab1  ffd2                 call edx
// 006fdab3  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 006fdab6  8b07                 mov eax, dword ptr [edi]
// 006fdab8  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fdabb  8bcf                 mov ecx, edi
// 006fdabd  ffd2                 call edx
// 006fdabf  83f802               cmp eax, 2
// 006fdac2  740d                 je 0x6fdad1
// 006fdac4  8b07                 mov eax, dword ptr [edi]
// 006fdac6  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fdac9  8bcf                 mov ecx, edi
// 006fdacb  ffd2                 call edx
// 006fdacd  85c0                 test eax, eax
// 006fdacf  7545                 jne 0x6fdb16
// 006fdad1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006fdad5  8b470c               mov eax, dword ptr [edi + 0xc]
// 006fdad8  034704               add eax, dword ptr [edi + 4]
// 006fdadb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006fdadf  99                   cdq 
// 006fdae0  2bc2                 sub eax, edx
// 006fdae2  8bc8                 mov ecx, eax
// 006fdae4  8bc3                 mov eax, ebx
// 006fdae6  99                   cdq 
// 006fdae7  2bc2                 sub eax, edx
// 006fdae9  d1f9                 sar ecx, 1
// 006fdaeb  d1f8                 sar eax, 1
// 006fdaed  03c1                 add eax, ecx
// 006fdaef  8b4f08               mov ecx, dword ptr [edi + 8]
// 006fdaf2  50                   push eax
// 006fdaf3  51                   push ecx
// 006fdaf4  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 006fdaf8  2bc3                 sub eax, ebx
// 006fdafa  50                   push eax
// 006fdafb  51                   push ecx
// 006fdafc  83c610               add esi, 0x10
// 006fdaff  56                   push esi
// 006fdb00  ff1578ed7700         call dword ptr [0x77ed78]
// 006fdb06  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fdb0a  295708               sub dword ptr [edi + 8], edx
// 006fdb0d  5f                   pop edi
// 006fdb0e  5b                   pop ebx
// 006fdb0f  5e                   pop esi
// 006fdb10  83c408               add esp, 8
// 006fdb13  c20400               ret 4
// 006fdb16  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006fdb1a  8b4708               mov eax, dword ptr [edi + 8]
// 006fdb1d  0307                 add eax, dword ptr [edi]
// 006fdb1f  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 006fdb22  99                   cdq 
// 006fdb23  55                   push ebp
// 006fdb24  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006fdb28  2bc2                 sub eax, edx
// 006fdb2a  8bc8                 mov ecx, eax
// 006fdb2c  8bc5                 mov eax, ebp
// 006fdb2e  99                   cdq 
// 006fdb2f  2bc2                 sub eax, edx
// 006fdb31  d1f8                 sar eax, 1
// 006fdb33  d1f9                 sar ecx, 1
// 006fdb35  53                   push ebx
// 006fdb36  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 006fdb3a  2bc8                 sub ecx, eax
// 006fdb3c  8d0429               lea eax, [ecx + ebp]
// 006fdb3f  50                   push eax
// 006fdb40  53                   push ebx
// 006fdb41  51                   push ecx
// 006fdb42  83c610               add esi, 0x10
// 006fdb45  56                   push esi
// 006fdb46  ff1578ed7700         call dword ptr [0x77ed78]
// 006fdb4c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fdb50  294f0c               sub dword ptr [edi + 0xc], ecx
// 006fdb53  5d                   pop ebp
// 006fdb54  5f                   pop edi
// 006fdb55  5b                   pop ebx
// 006fdb56  5e                   pop esi
// 006fdb57  83c408               add esp, 8
// 006fdb5a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerNavigateButton@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
