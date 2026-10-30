// roc 2009-12 008cecf0  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cecf0
//
// 008cecf0  8b542410             mov edx, dword ptr [esp + 0x10]
// 008cecf4  8b442408             mov eax, dword ptr [esp + 8]
// 008cecf8  03c2                 add eax, edx
// 008cecfa  99                   cdq 
// 008cecfb  2bc2                 sub eax, edx
// 008cecfd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008ced01  53                   push ebx
// 008ced02  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 008ced05  56                   push esi
// 008ced06  8bf0                 mov esi, eax
// 008ced08  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ced0c  03c2                 add eax, edx
// 008ced0e  99                   cdq 
// 008ced0f  2bc2                 sub eax, edx
// 008ced11  57                   push edi
// 008ced12  8bf8                 mov edi, eax
// 008ced14  8b03                 mov eax, dword ptr [ebx]
// 008ced16  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ced19  8bcb                 mov ecx, ebx
// 008ced1b  d1fe                 sar esi, 1
// 008ced1d  d1ff                 sar edi, 1
// 008ced1f  ffd2                 call edx
// 008ced21  83f802               cmp eax, 2
// 008ced24  740d                 je 0x8ced33
// 008ced26  8b03                 mov eax, dword ptr [ebx]
// 008ced28  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ced2b  8bcb                 mov ecx, ebx
// 008ced2d  ffd2                 call edx
// 008ced2f  85c0                 test eax, eax
// 008ced31  7528                 jne 0x8ced5b
// 008ced33  8d4f03               lea ecx, [edi + 3]
// 008ced36  51                   push ecx
// 008ced37  8d46fe               lea eax, [esi - 2]
// 008ced3a  50                   push eax
// 008ced3b  8d5602               lea edx, [esi + 2]
// 008ced3e  8d77ff               lea esi, [edi - 1]
// 008ced41  56                   push esi
// 008ced42  52                   push edx
// 008ced43  83c7fb               add edi, -5
// 008ced46  57                   push edi
// 008ced47  50                   push eax
// 008ced48  8b442428             mov eax, dword ptr [esp + 0x28]
// 008ced4c  50                   push eax
// 008ced4d  e86ec4f7ff           call 0x84b1c0
// 008ced52  83c41c               add esp, 0x1c
// 008ced55  5f                   pop edi
// 008ced56  5e                   pop esi
// 008ced57  5b                   pop ebx
// 008ced58  c21400               ret 0x14
// 008ced5b  8d47fe               lea eax, [edi - 2]
// 008ced5e  50                   push eax
// 008ced5f  8d4e03               lea ecx, [esi + 3]
// 008ced62  51                   push ecx
// 008ced63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ced67  8d56ff               lea edx, [esi - 1]
// 008ced6a  83c702               add edi, 2
// 008ced6d  57                   push edi
// 008ced6e  52                   push edx
// 008ced6f  50                   push eax
// 008ced70  83c6fb               add esi, -5
// 008ced73  56                   push esi
// 008ced74  51                   push ecx
// 008ced75  e846c4f7ff           call 0x84b1c0
// 008ced7a  83c41c               add esp, 0x1c
// 008ced7d  5f                   pop edi
// 008ced7e  5e                   pop esi
// 008ced7f  5b                   pop ebx
// 008ced80  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowRight@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
