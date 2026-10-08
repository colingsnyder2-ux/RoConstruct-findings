// roc 2012-06 00a4bce0  unit: CXTPTabManagerNavigateButton  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4bce0
//
// 00a4bce0  83ec08               sub esp, 8
// 00a4bce3  56                   push esi
// 00a4bce4  8bf1                 mov esi, ecx
// 00a4bce6  8b4608               mov eax, dword ptr [esi + 8]
// 00a4bce9  83f802               cmp eax, 2
// 00a4bcec  7425                 je 0xa4bd13
// 00a4bcee  83f801               cmp eax, 1
// 00a4bcf1  750f                 jne 0xa4bd02
// 00a4bcf3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4bcf6  8b01                 mov eax, dword ptr [ecx]
// 00a4bcf8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00a4bcfb  56                   push esi
// 00a4bcfc  ffd2                 call edx
// 00a4bcfe  85c0                 test eax, eax
// 00a4bd00  7511                 jne 0xa4bd13
// 00a4bd02  83c610               add esi, 0x10
// 00a4bd05  56                   push esi
// 00a4bd06  ff15903ab200         call dword ptr [0xb23a90]
// 00a4bd0c  5e                   pop esi
// 00a4bd0d  83c408               add esp, 8
// 00a4bd10  c20400               ret 4
// 00a4bd13  8b06                 mov eax, dword ptr [esi]
// 00a4bd15  8b5008               mov edx, dword ptr [eax + 8]
// 00a4bd18  53                   push ebx
// 00a4bd19  57                   push edi
// 00a4bd1a  8d4c240c             lea ecx, [esp + 0xc]
// 00a4bd1e  51                   push ecx
// 00a4bd1f  8bce                 mov ecx, esi
// 00a4bd21  ffd2                 call edx
// 00a4bd23  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00a4bd26  8b07                 mov eax, dword ptr [edi]
// 00a4bd28  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4bd2b  8bcf                 mov ecx, edi
// 00a4bd2d  ffd2                 call edx
// 00a4bd2f  83f802               cmp eax, 2
// 00a4bd32  740d                 je 0xa4bd41
// 00a4bd34  8b07                 mov eax, dword ptr [edi]
// 00a4bd36  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4bd39  8bcf                 mov ecx, edi
// 00a4bd3b  ffd2                 call edx
// 00a4bd3d  85c0                 test eax, eax
// 00a4bd3f  7545                 jne 0xa4bd86
// 00a4bd41  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a4bd45  8b470c               mov eax, dword ptr [edi + 0xc]
// 00a4bd48  034704               add eax, dword ptr [edi + 4]
// 00a4bd4b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a4bd4f  99                   cdq 
// 00a4bd50  2bc2                 sub eax, edx
// 00a4bd52  8bc8                 mov ecx, eax
// 00a4bd54  8bc3                 mov eax, ebx
// 00a4bd56  99                   cdq 
// 00a4bd57  2bc2                 sub eax, edx
// 00a4bd59  d1f9                 sar ecx, 1
// 00a4bd5b  d1f8                 sar eax, 1
// 00a4bd5d  03c1                 add eax, ecx
// 00a4bd5f  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a4bd62  50                   push eax
// 00a4bd63  51                   push ecx
// 00a4bd64  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00a4bd68  2bc3                 sub eax, ebx
// 00a4bd6a  50                   push eax
// 00a4bd6b  51                   push ecx
// 00a4bd6c  83c610               add esi, 0x10
// 00a4bd6f  56                   push esi
// 00a4bd70  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a4bd76  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a4bd7a  295708               sub dword ptr [edi + 8], edx
// 00a4bd7d  5f                   pop edi
// 00a4bd7e  5b                   pop ebx
// 00a4bd7f  5e                   pop esi
// 00a4bd80  83c408               add esp, 8
// 00a4bd83  c20400               ret 4
// 00a4bd86  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a4bd8a  8b4708               mov eax, dword ptr [edi + 8]
// 00a4bd8d  0307                 add eax, dword ptr [edi]
// 00a4bd8f  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 00a4bd92  99                   cdq 
// 00a4bd93  55                   push ebp
// 00a4bd94  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a4bd98  2bc2                 sub eax, edx
// 00a4bd9a  8bc8                 mov ecx, eax
// 00a4bd9c  8bc5                 mov eax, ebp
// 00a4bd9e  99                   cdq 
// 00a4bd9f  2bc2                 sub eax, edx
// 00a4bda1  d1f8                 sar eax, 1
// 00a4bda3  d1f9                 sar ecx, 1
// 00a4bda5  53                   push ebx
// 00a4bda6  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 00a4bdaa  2bc8                 sub ecx, eax
// 00a4bdac  8d0429               lea eax, [ecx + ebp]
// 00a4bdaf  50                   push eax
// 00a4bdb0  53                   push ebx
// 00a4bdb1  51                   push ecx
// 00a4bdb2  83c610               add esi, 0x10
// 00a4bdb5  56                   push esi
// 00a4bdb6  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a4bdbc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a4bdc0  294f0c               sub dword ptr [edi + 0xc], ecx
// 00a4bdc3  5d                   pop ebp
// 00a4bdc4  5f                   pop edi
// 00a4bdc5  5b                   pop ebx
// 00a4bdc6  5e                   pop esi
// 00a4bdc7  83c408               add esp, 8
// 00a4bdca  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerNavigateButton@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
