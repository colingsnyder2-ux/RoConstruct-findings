// roc 2008-06 006ca130  unit: CXTPReportControl  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ca130
//
// 006ca130  8b442408             mov eax, dword ptr [esp + 8]
// 006ca134  83ec10               sub esp, 0x10
// 006ca137  53                   push ebx
// 006ca138  55                   push ebp
// 006ca139  56                   push esi
// 006ca13a  57                   push edi
// 006ca13b  8bf1                 mov esi, ecx
// 006ca13d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ca141  50                   push eax
// 006ca142  51                   push ecx
// 006ca143  8d9690000000         lea edx, [esi + 0x90]
// 006ca149  52                   push edx
// 006ca14a  ff152c2d8000         call dword ptr [0x802d2c]
// 006ca150  85c0                 test eax, eax
// 006ca152  7459                 je 0x6ca1ad
// 006ca154  8dbe44020000         lea edi, [esi + 0x244]
// 006ca15a  8bcf                 mov ecx, edi
// 006ca15c  33ed                 xor ebp, ebp
// 006ca15e  e8edfe0000           call 0x6da050
// 006ca163  85c0                 test eax, eax
// 006ca165  7e46                 jle 0x6ca1ad
// 006ca167  8b07                 mov eax, dword ptr [edi]
// 006ca169  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006ca16c  55                   push ebp
// 006ca16d  8bcf                 mov ecx, edi
// 006ca16f  ffd2                 call edx
// 006ca171  8bd8                 mov ebx, eax
// 006ca173  8b03                 mov eax, dword ptr [ebx]
// 006ca175  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 006ca17b  8d4c2410             lea ecx, [esp + 0x10]
// 006ca17f  51                   push ecx
// 006ca180  8bcb                 mov ecx, ebx
// 006ca182  ffd2                 call edx
// 006ca184  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ca188  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ca18c  50                   push eax
// 006ca18d  51                   push ecx
// 006ca18e  8d542418             lea edx, [esp + 0x18]
// 006ca192  52                   push edx
// 006ca193  ff152c2d8000         call dword ptr [0x802d2c]
// 006ca199  85c0                 test eax, eax
// 006ca19b  0f8515010000         jne 0x6ca2b6
// 006ca1a1  8bcf                 mov ecx, edi
// 006ca1a3  45                   inc ebp
// 006ca1a4  e8a7fe0000           call 0x6da050
// 006ca1a9  3be8                 cmp ebp, eax
// 006ca1ab  7cba                 jl 0x6ca167
// 006ca1ad  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ca1b1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ca1b5  50                   push eax
// 006ca1b6  51                   push ecx
// 006ca1b7  8d96a0000000         lea edx, [esi + 0xa0]
// 006ca1bd  52                   push edx
// 006ca1be  ff152c2d8000         call dword ptr [0x802d2c]
// 006ca1c4  85c0                 test eax, eax
// 006ca1c6  7466                 je 0x6ca22e
// 006ca1c8  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006ca1ce  33db                 xor ebx, ebx
// 006ca1d0  e87bfe0000           call 0x6da050
// 006ca1d5  85c0                 test eax, eax
// 006ca1d7  7e55                 jle 0x6ca22e
// 006ca1d9  8da42400000000       lea esp, [esp]
// 006ca1e0  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006ca1e6  8b01                 mov eax, dword ptr [ecx]
// 006ca1e8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006ca1eb  53                   push ebx
// 006ca1ec  ffd2                 call edx
// 006ca1ee  8bf8                 mov edi, eax
// 006ca1f0  8b07                 mov eax, dword ptr [edi]
// 006ca1f2  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 006ca1f8  8d4c2410             lea ecx, [esp + 0x10]
// 006ca1fc  51                   push ecx
// 006ca1fd  8bcf                 mov ecx, edi
// 006ca1ff  ffd2                 call edx
// 006ca201  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ca205  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ca209  50                   push eax
// 006ca20a  51                   push ecx
// 006ca20b  8d542418             lea edx, [esp + 0x18]
// 006ca20f  52                   push edx
// 006ca210  ff152c2d8000         call dword ptr [0x802d2c]
// 006ca216  85c0                 test eax, eax
// 006ca218  0f85a4000000         jne 0x6ca2c2
// 006ca21e  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006ca224  43                   inc ebx
// 006ca225  e826fe0000           call 0x6da050
// 006ca22a  3bd8                 cmp ebx, eax
// 006ca22c  7cb2                 jl 0x6ca1e0
// 006ca22e  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ca232  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ca236  50                   push eax
// 006ca237  51                   push ecx
// 006ca238  8d96b0000000         lea edx, [esi + 0xb0]
// 006ca23e  52                   push edx
// 006ca23f  ff152c2d8000         call dword ptr [0x802d2c]
// 006ca245  85c0                 test eax, eax
// 006ca247  7461                 je 0x6ca2aa
// 006ca249  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006ca24f  33db                 xor ebx, ebx
// 006ca251  e8fafd0000           call 0x6da050
// 006ca256  85c0                 test eax, eax
// 006ca258  7e50                 jle 0x6ca2aa
// 006ca25a  8d9b00000000         lea ebx, [ebx]
// 006ca260  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006ca266  8b01                 mov eax, dword ptr [ecx]
// 006ca268  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006ca26b  53                   push ebx
// 006ca26c  ffd2                 call edx
// 006ca26e  8bf8                 mov edi, eax
// 006ca270  8b07                 mov eax, dword ptr [edi]
// 006ca272  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 006ca278  8d4c2410             lea ecx, [esp + 0x10]
// 006ca27c  51                   push ecx
// 006ca27d  8bcf                 mov ecx, edi
// 006ca27f  ffd2                 call edx
// 006ca281  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ca285  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ca289  50                   push eax
// 006ca28a  51                   push ecx
// 006ca28b  8d542418             lea edx, [esp + 0x18]
// 006ca28f  52                   push edx
// 006ca290  ff152c2d8000         call dword ptr [0x802d2c]
// 006ca296  85c0                 test eax, eax
// 006ca298  7528                 jne 0x6ca2c2
// 006ca29a  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006ca2a0  43                   inc ebx
// 006ca2a1  e8aafd0000           call 0x6da050
// 006ca2a6  3bd8                 cmp ebx, eax
// 006ca2a8  7cb6                 jl 0x6ca260
// 006ca2aa  5f                   pop edi
// 006ca2ab  5e                   pop esi
// 006ca2ac  5d                   pop ebp
// 006ca2ad  33c0                 xor eax, eax
// 006ca2af  5b                   pop ebx
// 006ca2b0  83c410               add esp, 0x10
// 006ca2b3  c20800               ret 8
// 006ca2b6  5f                   pop edi
// 006ca2b7  5e                   pop esi
// 006ca2b8  5d                   pop ebp
// 006ca2b9  8bc3                 mov eax, ebx
// 006ca2bb  5b                   pop ebx
// 006ca2bc  83c410               add esp, 0x10
// 006ca2bf  c20800               ret 8
// 006ca2c2  8bc7                 mov eax, edi
// 006ca2c4  5f                   pop edi
// 006ca2c5  5e                   pop esi
// 006ca2c6  5d                   pop ebp
// 006ca2c7  5b                   pop ebx
// 006ca2c8  83c410               add esp, 0x10
// 006ca2cb  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?HitTest@CXTPReportControl@@QBEPAVCXTPReportRow@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
