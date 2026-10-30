// roc 2012-06 00a4c110  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4c110
//
// 00a4c110  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a4c114  8b442408             mov eax, dword ptr [esp + 8]
// 00a4c118  03c2                 add eax, edx
// 00a4c11a  99                   cdq 
// 00a4c11b  2bc2                 sub eax, edx
// 00a4c11d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a4c121  53                   push ebx
// 00a4c122  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00a4c125  56                   push esi
// 00a4c126  8bf0                 mov esi, eax
// 00a4c128  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a4c12c  03c2                 add eax, edx
// 00a4c12e  99                   cdq 
// 00a4c12f  2bc2                 sub eax, edx
// 00a4c131  57                   push edi
// 00a4c132  8bf8                 mov edi, eax
// 00a4c134  8b03                 mov eax, dword ptr [ebx]
// 00a4c136  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4c139  8bcb                 mov ecx, ebx
// 00a4c13b  d1fe                 sar esi, 1
// 00a4c13d  d1ff                 sar edi, 1
// 00a4c13f  ffd2                 call edx
// 00a4c141  83f802               cmp eax, 2
// 00a4c144  740d                 je 0xa4c153
// 00a4c146  8b03                 mov eax, dword ptr [ebx]
// 00a4c148  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4c14b  8bcb                 mov ecx, ebx
// 00a4c14d  ffd2                 call edx
// 00a4c14f  85c0                 test eax, eax
// 00a4c151  7528                 jne 0xa4c17b
// 00a4c153  8d4f03               lea ecx, [edi + 3]
// 00a4c156  51                   push ecx
// 00a4c157  8d46fe               lea eax, [esi - 2]
// 00a4c15a  50                   push eax
// 00a4c15b  8d5602               lea edx, [esi + 2]
// 00a4c15e  8d77ff               lea esi, [edi - 1]
// 00a4c161  56                   push esi
// 00a4c162  52                   push edx
// 00a4c163  83c7fb               add edi, -5
// 00a4c166  57                   push edi
// 00a4c167  50                   push eax
// 00a4c168  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a4c16c  50                   push eax
// 00a4c16d  e81e8ff8ff           call 0x9d5090
// 00a4c172  83c41c               add esp, 0x1c
// 00a4c175  5f                   pop edi
// 00a4c176  5e                   pop esi
// 00a4c177  5b                   pop ebx
// 00a4c178  c21400               ret 0x14
// 00a4c17b  8d47fe               lea eax, [edi - 2]
// 00a4c17e  50                   push eax
// 00a4c17f  8d4e03               lea ecx, [esi + 3]
// 00a4c182  51                   push ecx
// 00a4c183  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a4c187  8d56ff               lea edx, [esi - 1]
// 00a4c18a  83c702               add edi, 2
// 00a4c18d  57                   push edi
// 00a4c18e  52                   push edx
// 00a4c18f  50                   push eax
// 00a4c190  83c6fb               add esi, -5
// 00a4c193  56                   push esi
// 00a4c194  51                   push ecx
// 00a4c195  e8f68ef8ff           call 0x9d5090
// 00a4c19a  83c41c               add esp, 0x1c
// 00a4c19d  5f                   pop edi
// 00a4c19e  5e                   pop esi
// 00a4c19f  5b                   pop ebx
// 00a4c1a0  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowRight@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
