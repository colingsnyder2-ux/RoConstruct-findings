// roc 2012-06 00a4c1e0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4c1e0
//
// 00a4c1e0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a4c1e4  8b442408             mov eax, dword ptr [esp + 8]
// 00a4c1e8  03c2                 add eax, edx
// 00a4c1ea  99                   cdq 
// 00a4c1eb  2bc2                 sub eax, edx
// 00a4c1ed  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a4c1f1  53                   push ebx
// 00a4c1f2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00a4c1f5  56                   push esi
// 00a4c1f6  8bf0                 mov esi, eax
// 00a4c1f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a4c1fc  03c2                 add eax, edx
// 00a4c1fe  99                   cdq 
// 00a4c1ff  2bc2                 sub eax, edx
// 00a4c201  57                   push edi
// 00a4c202  8bf8                 mov edi, eax
// 00a4c204  8b03                 mov eax, dword ptr [ebx]
// 00a4c206  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4c209  8bcb                 mov ecx, ebx
// 00a4c20b  d1fe                 sar esi, 1
// 00a4c20d  d1ff                 sar edi, 1
// 00a4c20f  ffd2                 call edx
// 00a4c211  83f802               cmp eax, 2
// 00a4c214  740d                 je 0xa4c223
// 00a4c216  8b03                 mov eax, dword ptr [ebx]
// 00a4c218  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4c21b  8bcb                 mov ecx, ebx
// 00a4c21d  ffd2                 call edx
// 00a4c21f  85c0                 test eax, eax
// 00a4c221  7528                 jne 0xa4c24b
// 00a4c223  8d4f03               lea ecx, [edi + 3]
// 00a4c226  51                   push ecx
// 00a4c227  8d4602               lea eax, [esi + 2]
// 00a4c22a  50                   push eax
// 00a4c22b  8d56fe               lea edx, [esi - 2]
// 00a4c22e  8d77ff               lea esi, [edi - 1]
// 00a4c231  56                   push esi
// 00a4c232  52                   push edx
// 00a4c233  83c7fb               add edi, -5
// 00a4c236  57                   push edi
// 00a4c237  50                   push eax
// 00a4c238  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a4c23c  50                   push eax
// 00a4c23d  e84e8ef8ff           call 0x9d5090
// 00a4c242  83c41c               add esp, 0x1c
// 00a4c245  5f                   pop edi
// 00a4c246  5e                   pop esi
// 00a4c247  5b                   pop ebx
// 00a4c248  c21400               ret 0x14
// 00a4c24b  8d4702               lea eax, [edi + 2]
// 00a4c24e  50                   push eax
// 00a4c24f  8d4e03               lea ecx, [esi + 3]
// 00a4c252  51                   push ecx
// 00a4c253  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a4c257  8d56ff               lea edx, [esi - 1]
// 00a4c25a  83c7fe               add edi, -2
// 00a4c25d  57                   push edi
// 00a4c25e  52                   push edx
// 00a4c25f  50                   push eax
// 00a4c260  83c6fb               add esi, -5
// 00a4c263  56                   push esi
// 00a4c264  51                   push ecx
// 00a4c265  e8268ef8ff           call 0x9d5090
// 00a4c26a  83c41c               add esp, 0x1c
// 00a4c26d  5f                   pop edi
// 00a4c26e  5e                   pop esi
// 00a4c26f  5b                   pop ebx
// 00a4c270  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
