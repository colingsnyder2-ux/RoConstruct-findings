// roc 2009-12 0081d5e0  unit: CXTPReportControl  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081d5e0
//
// 0081d5e0  8b442408             mov eax, dword ptr [esp + 8]
// 0081d5e4  83ec10               sub esp, 0x10
// 0081d5e7  53                   push ebx
// 0081d5e8  55                   push ebp
// 0081d5e9  56                   push esi
// 0081d5ea  57                   push edi
// 0081d5eb  8bf1                 mov esi, ecx
// 0081d5ed  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081d5f1  50                   push eax
// 0081d5f2  51                   push ecx
// 0081d5f3  8d9690000000         lea edx, [esi + 0x90]
// 0081d5f9  52                   push edx
// 0081d5fa  ff155cca9800         call dword ptr [0x98ca5c]
// 0081d600  85c0                 test eax, eax
// 0081d602  7459                 je 0x81d65d
// 0081d604  8dbe44020000         lea edi, [esi + 0x244]
// 0081d60a  8bcf                 mov ecx, edi
// 0081d60c  33ed                 xor ebp, ebp
// 0081d60e  e80df60000           call 0x82cc20
// 0081d613  85c0                 test eax, eax
// 0081d615  7e46                 jle 0x81d65d
// 0081d617  8b07                 mov eax, dword ptr [edi]
// 0081d619  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081d61c  55                   push ebp
// 0081d61d  8bcf                 mov ecx, edi
// 0081d61f  ffd2                 call edx
// 0081d621  8bd8                 mov ebx, eax
// 0081d623  8b03                 mov eax, dword ptr [ebx]
// 0081d625  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 0081d62b  8d4c2410             lea ecx, [esp + 0x10]
// 0081d62f  51                   push ecx
// 0081d630  8bcb                 mov ecx, ebx
// 0081d632  ffd2                 call edx
// 0081d634  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081d638  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081d63c  50                   push eax
// 0081d63d  51                   push ecx
// 0081d63e  8d542418             lea edx, [esp + 0x18]
// 0081d642  52                   push edx
// 0081d643  ff155cca9800         call dword ptr [0x98ca5c]
// 0081d649  85c0                 test eax, eax
// 0081d64b  0f8515010000         jne 0x81d766
// 0081d651  8bcf                 mov ecx, edi
// 0081d653  45                   inc ebp
// 0081d654  e8c7f50000           call 0x82cc20
// 0081d659  3be8                 cmp ebp, eax
// 0081d65b  7cba                 jl 0x81d617
// 0081d65d  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081d661  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081d665  50                   push eax
// 0081d666  51                   push ecx
// 0081d667  8d96a0000000         lea edx, [esi + 0xa0]
// 0081d66d  52                   push edx
// 0081d66e  ff155cca9800         call dword ptr [0x98ca5c]
// 0081d674  85c0                 test eax, eax
// 0081d676  7466                 je 0x81d6de
// 0081d678  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0081d67e  33db                 xor ebx, ebx
// 0081d680  e89bf50000           call 0x82cc20
// 0081d685  85c0                 test eax, eax
// 0081d687  7e55                 jle 0x81d6de
// 0081d689  8da42400000000       lea esp, [esp]
// 0081d690  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0081d696  8b01                 mov eax, dword ptr [ecx]
// 0081d698  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081d69b  53                   push ebx
// 0081d69c  ffd2                 call edx
// 0081d69e  8bf8                 mov edi, eax
// 0081d6a0  8b07                 mov eax, dword ptr [edi]
// 0081d6a2  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 0081d6a8  8d4c2410             lea ecx, [esp + 0x10]
// 0081d6ac  51                   push ecx
// 0081d6ad  8bcf                 mov ecx, edi
// 0081d6af  ffd2                 call edx
// 0081d6b1  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081d6b5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081d6b9  50                   push eax
// 0081d6ba  51                   push ecx
// 0081d6bb  8d542418             lea edx, [esp + 0x18]
// 0081d6bf  52                   push edx
// 0081d6c0  ff155cca9800         call dword ptr [0x98ca5c]
// 0081d6c6  85c0                 test eax, eax
// 0081d6c8  0f85a4000000         jne 0x81d772
// 0081d6ce  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0081d6d4  43                   inc ebx
// 0081d6d5  e846f50000           call 0x82cc20
// 0081d6da  3bd8                 cmp ebx, eax
// 0081d6dc  7cb2                 jl 0x81d690
// 0081d6de  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081d6e2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081d6e6  50                   push eax
// 0081d6e7  51                   push ecx
// 0081d6e8  8d96b0000000         lea edx, [esi + 0xb0]
// 0081d6ee  52                   push edx
// 0081d6ef  ff155cca9800         call dword ptr [0x98ca5c]
// 0081d6f5  85c0                 test eax, eax
// 0081d6f7  7461                 je 0x81d75a
// 0081d6f9  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081d6ff  33db                 xor ebx, ebx
// 0081d701  e81af50000           call 0x82cc20
// 0081d706  85c0                 test eax, eax
// 0081d708  7e50                 jle 0x81d75a
// 0081d70a  8d9b00000000         lea ebx, [ebx]
// 0081d710  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081d716  8b01                 mov eax, dword ptr [ecx]
// 0081d718  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081d71b  53                   push ebx
// 0081d71c  ffd2                 call edx
// 0081d71e  8bf8                 mov edi, eax
// 0081d720  8b07                 mov eax, dword ptr [edi]
// 0081d722  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 0081d728  8d4c2410             lea ecx, [esp + 0x10]
// 0081d72c  51                   push ecx
// 0081d72d  8bcf                 mov ecx, edi
// 0081d72f  ffd2                 call edx
// 0081d731  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081d735  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081d739  50                   push eax
// 0081d73a  51                   push ecx
// 0081d73b  8d542418             lea edx, [esp + 0x18]
// 0081d73f  52                   push edx
// 0081d740  ff155cca9800         call dword ptr [0x98ca5c]
// 0081d746  85c0                 test eax, eax
// 0081d748  7528                 jne 0x81d772
// 0081d74a  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081d750  43                   inc ebx
// 0081d751  e8caf40000           call 0x82cc20
// 0081d756  3bd8                 cmp ebx, eax
// 0081d758  7cb6                 jl 0x81d710
// 0081d75a  5f                   pop edi
// 0081d75b  5e                   pop esi
// 0081d75c  5d                   pop ebp
// 0081d75d  33c0                 xor eax, eax
// 0081d75f  5b                   pop ebx
// 0081d760  83c410               add esp, 0x10
// 0081d763  c20800               ret 8
// 0081d766  5f                   pop edi
// 0081d767  5e                   pop esi
// 0081d768  5d                   pop ebp
// 0081d769  8bc3                 mov eax, ebx
// 0081d76b  5b                   pop ebx
// 0081d76c  83c410               add esp, 0x10
// 0081d76f  c20800               ret 8
// 0081d772  8bc7                 mov eax, edi
// 0081d774  5f                   pop edi
// 0081d775  5e                   pop esi
// 0081d776  5d                   pop ebp
// 0081d777  5b                   pop ebx
// 0081d778  83c410               add esp, 0x10
// 0081d77b  c20800               ret 8
// copied from an identical function in another client (function ?HitTest@CXTPReportControl@@QBEPAVCXTPReportRow@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp