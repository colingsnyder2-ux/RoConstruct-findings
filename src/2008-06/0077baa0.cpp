// from server: 100% by auto
// roc 2008-06 0077baa0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077baa0
//
// 0077baa0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077baa4  8b442408             mov eax, dword ptr [esp + 8]
// 0077baa8  03c2                 add eax, edx
// 0077baaa  99                   cdq 
// 0077baab  2bc2                 sub eax, edx
// 0077baad  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0077bab1  53                   push ebx
// 0077bab2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0077bab5  56                   push esi
// 0077bab6  8bf0                 mov esi, eax
// 0077bab8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077babc  03c2                 add eax, edx
// 0077babe  99                   cdq 
// 0077babf  2bc2                 sub eax, edx
// 0077bac1  57                   push edi
// 0077bac2  8bf8                 mov edi, eax
// 0077bac4  8b03                 mov eax, dword ptr [ebx]
// 0077bac6  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077bac9  8bcb                 mov ecx, ebx
// 0077bacb  d1fe                 sar esi, 1
// 0077bacd  d1ff                 sar edi, 1
// 0077bacf  ffd2                 call edx
// 0077bad1  83f802               cmp eax, 2
// 0077bad4  740d                 je 0x77bae3
// 0077bad6  8b03                 mov eax, dword ptr [ebx]
// 0077bad8  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077badb  8bcb                 mov ecx, ebx
// 0077badd  ffd2                 call edx
// 0077badf  85c0                 test eax, eax
// 0077bae1  7528                 jne 0x77bb0b
// 0077bae3  8d4f03               lea ecx, [edi + 3]
// 0077bae6  51                   push ecx
// 0077bae7  8d4602               lea eax, [esi + 2]
// 0077baea  50                   push eax
// 0077baeb  8d56fe               lea edx, [esi - 2]
// 0077baee  8d77ff               lea esi, [edi - 1]
// 0077baf1  56                   push esi
// 0077baf2  52                   push edx
// 0077baf3  83c7fb               add edi, -5
// 0077baf6  57                   push edi
// 0077baf7  50                   push eax
// 0077baf8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077bafc  50                   push eax
// 0077bafd  e81ebff7ff           call 0x6f7a20
// 0077bb02  83c41c               add esp, 0x1c
// 0077bb05  5f                   pop edi
// 0077bb06  5e                   pop esi
// 0077bb07  5b                   pop ebx
// 0077bb08  c21400               ret 0x14
// 0077bb0b  8d4702               lea eax, [edi + 2]
// 0077bb0e  50                   push eax
// 0077bb0f  8d4e03               lea ecx, [esi + 3]
// 0077bb12  51                   push ecx
// 0077bb13  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0077bb17  8d56ff               lea edx, [esi - 1]
// 0077bb1a  83c7fe               add edi, -2
// 0077bb1d  57                   push edi
// 0077bb1e  52                   push edx
// 0077bb1f  50                   push eax
// 0077bb20  83c6fb               add esi, -5
// 0077bb23  56                   push esi
// 0077bb24  51                   push ecx
// 0077bb25  e8f6bef7ff           call 0x6f7a20
// 0077bb2a  83c41c               add esp, 0x1c
// 0077bb2d  5f                   pop edi
// 0077bb2e  5e                   pop esi
// 0077bb2f  5b                   pop ebx
// 0077bb30  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
