// from server: 100% by auto
// roc 2007-08 006fdf70  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fdf70
//
// 006fdf70  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fdf74  8b442408             mov eax, dword ptr [esp + 8]
// 006fdf78  03c2                 add eax, edx
// 006fdf7a  99                   cdq 
// 006fdf7b  2bc2                 sub eax, edx
// 006fdf7d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fdf81  53                   push ebx
// 006fdf82  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 006fdf85  56                   push esi
// 006fdf86  8bf0                 mov esi, eax
// 006fdf88  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fdf8c  03c2                 add eax, edx
// 006fdf8e  99                   cdq 
// 006fdf8f  2bc2                 sub eax, edx
// 006fdf91  57                   push edi
// 006fdf92  8bf8                 mov edi, eax
// 006fdf94  8b03                 mov eax, dword ptr [ebx]
// 006fdf96  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fdf99  8bcb                 mov ecx, ebx
// 006fdf9b  d1fe                 sar esi, 1
// 006fdf9d  d1ff                 sar edi, 1
// 006fdf9f  ffd2                 call edx
// 006fdfa1  83f802               cmp eax, 2
// 006fdfa4  740d                 je 0x6fdfb3
// 006fdfa6  8b03                 mov eax, dword ptr [ebx]
// 006fdfa8  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fdfab  8bcb                 mov ecx, ebx
// 006fdfad  ffd2                 call edx
// 006fdfaf  85c0                 test eax, eax
// 006fdfb1  7528                 jne 0x6fdfdb
// 006fdfb3  8d4f03               lea ecx, [edi + 3]
// 006fdfb6  51                   push ecx
// 006fdfb7  8d4602               lea eax, [esi + 2]
// 006fdfba  50                   push eax
// 006fdfbb  8d56fe               lea edx, [esi - 2]
// 006fdfbe  8d77ff               lea esi, [edi - 1]
// 006fdfc1  56                   push esi
// 006fdfc2  52                   push edx
// 006fdfc3  83c7fb               add edi, -5
// 006fdfc6  57                   push edi
// 006fdfc7  50                   push eax
// 006fdfc8  8b442428             mov eax, dword ptr [esp + 0x28]
// 006fdfcc  50                   push eax
// 006fdfcd  e81e1ff8ff           call 0x67fef0
// 006fdfd2  83c41c               add esp, 0x1c
// 006fdfd5  5f                   pop edi
// 006fdfd6  5e                   pop esi
// 006fdfd7  5b                   pop ebx
// 006fdfd8  c21400               ret 0x14
// 006fdfdb  8d4702               lea eax, [edi + 2]
// 006fdfde  50                   push eax
// 006fdfdf  8d4e03               lea ecx, [esi + 3]
// 006fdfe2  51                   push ecx
// 006fdfe3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fdfe7  8d56ff               lea edx, [esi - 1]
// 006fdfea  83c7fe               add edi, -2
// 006fdfed  57                   push edi
// 006fdfee  52                   push edx
// 006fdfef  50                   push eax
// 006fdff0  83c6fb               add esi, -5
// 006fdff3  56                   push esi
// 006fdff4  51                   push ecx
// 006fdff5  e8f61ef8ff           call 0x67fef0
// 006fdffa  83c41c               add esp, 0x1c
// 006fdffd  5f                   pop edi
// 006fdffe  5e                   pop esi
// 006fdfff  5b                   pop ebx
// 006fe000  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
