// roc 2011-06 008d3e90  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3e90
//
// 008d3e90  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d3e94  8b442408             mov eax, dword ptr [esp + 8]
// 008d3e98  03c2                 add eax, edx
// 008d3e9a  99                   cdq 
// 008d3e9b  2bc2                 sub eax, edx
// 008d3e9d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008d3ea1  53                   push ebx
// 008d3ea2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 008d3ea5  56                   push esi
// 008d3ea6  8bf0                 mov esi, eax
// 008d3ea8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d3eac  03c2                 add eax, edx
// 008d3eae  99                   cdq 
// 008d3eaf  2bc2                 sub eax, edx
// 008d3eb1  57                   push edi
// 008d3eb2  8bf8                 mov edi, eax
// 008d3eb4  8b03                 mov eax, dword ptr [ebx]
// 008d3eb6  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d3eb9  8bcb                 mov ecx, ebx
// 008d3ebb  d1fe                 sar esi, 1
// 008d3ebd  d1ff                 sar edi, 1
// 008d3ebf  ffd2                 call edx
// 008d3ec1  83f802               cmp eax, 2
// 008d3ec4  740d                 je 0x8d3ed3
// 008d3ec6  8b03                 mov eax, dword ptr [ebx]
// 008d3ec8  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d3ecb  8bcb                 mov ecx, ebx
// 008d3ecd  ffd2                 call edx
// 008d3ecf  85c0                 test eax, eax
// 008d3ed1  7528                 jne 0x8d3efb
// 008d3ed3  8d4f03               lea ecx, [edi + 3]
// 008d3ed6  51                   push ecx
// 008d3ed7  8d4602               lea eax, [esi + 2]
// 008d3eda  50                   push eax
// 008d3edb  8d56fe               lea edx, [esi - 2]
// 008d3ede  8d77ff               lea esi, [edi - 1]
// 008d3ee1  56                   push esi
// 008d3ee2  52                   push edx
// 008d3ee3  83c7fb               add edi, -5
// 008d3ee6  57                   push edi
// 008d3ee7  50                   push eax
// 008d3ee8  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d3eec  50                   push eax
// 008d3eed  e88e8df8ff           call 0x85cc80
// 008d3ef2  83c41c               add esp, 0x1c
// 008d3ef5  5f                   pop edi
// 008d3ef6  5e                   pop esi
// 008d3ef7  5b                   pop ebx
// 008d3ef8  c21400               ret 0x14
// 008d3efb  8d4702               lea eax, [edi + 2]
// 008d3efe  50                   push eax
// 008d3eff  8d4e03               lea ecx, [esi + 3]
// 008d3f02  51                   push ecx
// 008d3f03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d3f07  8d56ff               lea edx, [esi - 1]
// 008d3f0a  83c7fe               add edi, -2
// 008d3f0d  57                   push edi
// 008d3f0e  52                   push edx
// 008d3f0f  50                   push eax
// 008d3f10  83c6fb               add esi, -5
// 008d3f13  56                   push esi
// 008d3f14  51                   push ecx
// 008d3f15  e8668df8ff           call 0x85cc80
// 008d3f1a  83c41c               add esp, 0x1c
// 008d3f1d  5f                   pop edi
// 008d3f1e  5e                   pop esi
// 008d3f1f  5b                   pop ebx
// 008d3f20  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
