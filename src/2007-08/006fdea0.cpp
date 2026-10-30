// from server: 100% by auto
// roc 2007-08 006fdea0  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fdea0
//
// 006fdea0  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fdea4  8b442408             mov eax, dword ptr [esp + 8]
// 006fdea8  03c2                 add eax, edx
// 006fdeaa  99                   cdq 
// 006fdeab  2bc2                 sub eax, edx
// 006fdead  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fdeb1  53                   push ebx
// 006fdeb2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 006fdeb5  56                   push esi
// 006fdeb6  8bf0                 mov esi, eax
// 006fdeb8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fdebc  03c2                 add eax, edx
// 006fdebe  99                   cdq 
// 006fdebf  2bc2                 sub eax, edx
// 006fdec1  57                   push edi
// 006fdec2  8bf8                 mov edi, eax
// 006fdec4  8b03                 mov eax, dword ptr [ebx]
// 006fdec6  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fdec9  8bcb                 mov ecx, ebx
// 006fdecb  d1fe                 sar esi, 1
// 006fdecd  d1ff                 sar edi, 1
// 006fdecf  ffd2                 call edx
// 006fded1  83f802               cmp eax, 2
// 006fded4  740d                 je 0x6fdee3
// 006fded6  8b03                 mov eax, dword ptr [ebx]
// 006fded8  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fdedb  8bcb                 mov ecx, ebx
// 006fdedd  ffd2                 call edx
// 006fdedf  85c0                 test eax, eax
// 006fdee1  7528                 jne 0x6fdf0b
// 006fdee3  8d4f03               lea ecx, [edi + 3]
// 006fdee6  51                   push ecx
// 006fdee7  8d46fe               lea eax, [esi - 2]
// 006fdeea  50                   push eax
// 006fdeeb  8d5602               lea edx, [esi + 2]
// 006fdeee  8d77ff               lea esi, [edi - 1]
// 006fdef1  56                   push esi
// 006fdef2  52                   push edx
// 006fdef3  83c7fb               add edi, -5
// 006fdef6  57                   push edi
// 006fdef7  50                   push eax
// 006fdef8  8b442428             mov eax, dword ptr [esp + 0x28]
// 006fdefc  50                   push eax
// 006fdefd  e8ee1ff8ff           call 0x67fef0
// 006fdf02  83c41c               add esp, 0x1c
// 006fdf05  5f                   pop edi
// 006fdf06  5e                   pop esi
// 006fdf07  5b                   pop ebx
// 006fdf08  c21400               ret 0x14
// 006fdf0b  8d47fe               lea eax, [edi - 2]
// 006fdf0e  50                   push eax
// 006fdf0f  8d4e03               lea ecx, [esi + 3]
// 006fdf12  51                   push ecx
// 006fdf13  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fdf17  8d56ff               lea edx, [esi - 1]
// 006fdf1a  83c702               add edi, 2
// 006fdf1d  57                   push edi
// 006fdf1e  52                   push edx
// 006fdf1f  50                   push eax
// 006fdf20  83c6fb               add esi, -5
// 006fdf23  56                   push esi
// 006fdf24  51                   push ecx
// 006fdf25  e8c61ff8ff           call 0x67fef0
// 006fdf2a  83c41c               add esp, 0x1c
// 006fdf2d  5f                   pop edi
// 006fdf2e  5e                   pop esi
// 006fdf2f  5b                   pop ebx
// 006fdf30  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowRight@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
