// roc 2009-12 008cedc0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cedc0
//
// 008cedc0  8b542410             mov edx, dword ptr [esp + 0x10]
// 008cedc4  8b442408             mov eax, dword ptr [esp + 8]
// 008cedc8  03c2                 add eax, edx
// 008cedca  99                   cdq 
// 008cedcb  2bc2                 sub eax, edx
// 008cedcd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008cedd1  53                   push ebx
// 008cedd2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 008cedd5  56                   push esi
// 008cedd6  8bf0                 mov esi, eax
// 008cedd8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ceddc  03c2                 add eax, edx
// 008cedde  99                   cdq 
// 008ceddf  2bc2                 sub eax, edx
// 008cede1  57                   push edi
// 008cede2  8bf8                 mov edi, eax
// 008cede4  8b03                 mov eax, dword ptr [ebx]
// 008cede6  8b5048               mov edx, dword ptr [eax + 0x48]
// 008cede9  8bcb                 mov ecx, ebx
// 008cedeb  d1fe                 sar esi, 1
// 008ceded  d1ff                 sar edi, 1
// 008cedef  ffd2                 call edx
// 008cedf1  83f802               cmp eax, 2
// 008cedf4  740d                 je 0x8cee03
// 008cedf6  8b03                 mov eax, dword ptr [ebx]
// 008cedf8  8b5048               mov edx, dword ptr [eax + 0x48]
// 008cedfb  8bcb                 mov ecx, ebx
// 008cedfd  ffd2                 call edx
// 008cedff  85c0                 test eax, eax
// 008cee01  7528                 jne 0x8cee2b
// 008cee03  8d4f03               lea ecx, [edi + 3]
// 008cee06  51                   push ecx
// 008cee07  8d4602               lea eax, [esi + 2]
// 008cee0a  50                   push eax
// 008cee0b  8d56fe               lea edx, [esi - 2]
// 008cee0e  8d77ff               lea esi, [edi - 1]
// 008cee11  56                   push esi
// 008cee12  52                   push edx
// 008cee13  83c7fb               add edi, -5
// 008cee16  57                   push edi
// 008cee17  50                   push eax
// 008cee18  8b442428             mov eax, dword ptr [esp + 0x28]
// 008cee1c  50                   push eax
// 008cee1d  e89ec3f7ff           call 0x84b1c0
// 008cee22  83c41c               add esp, 0x1c
// 008cee25  5f                   pop edi
// 008cee26  5e                   pop esi
// 008cee27  5b                   pop ebx
// 008cee28  c21400               ret 0x14
// 008cee2b  8d4702               lea eax, [edi + 2]
// 008cee2e  50                   push eax
// 008cee2f  8d4e03               lea ecx, [esi + 3]
// 008cee32  51                   push ecx
// 008cee33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008cee37  8d56ff               lea edx, [esi - 1]
// 008cee3a  83c7fe               add edi, -2
// 008cee3d  57                   push edi
// 008cee3e  52                   push edx
// 008cee3f  50                   push eax
// 008cee40  83c6fb               add esi, -5
// 008cee43  56                   push esi
// 008cee44  51                   push ecx
// 008cee45  e876c3f7ff           call 0x84b1c0
// 008cee4a  83c41c               add esp, 0x1c
// 008cee4d  5f                   pop edi
// 008cee4e  5e                   pop esi
// 008cee4f  5b                   pop ebx
// 008cee50  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
