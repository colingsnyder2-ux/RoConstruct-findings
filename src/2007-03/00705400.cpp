// roc 2007-03 00705400  unit: seg_00700000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00705400
//
// 00705400  53                   push ebx
// 00705401  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00705405  56                   push esi
// 00705406  8bb3ac000000         mov esi, dword ptr [ebx + 0xac]
// 0070540c  85f6                 test esi, esi
// 0070540e  57                   push edi
// 0070540f  8bf9                 mov edi, ecx
// 00705411  7504                 jne 0x705417
// 00705413  33c0                 xor eax, eax
// 00705415  eb03                 jmp 0x70541a
// 00705417  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070541a  50                   push eax
// 0070541b  ff1574ed7700         call dword ptr [0x77ed74]
// 00705421  85c0                 test eax, eax
// 00705423  740d                 je 0x705432
// 00705425  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00705428  8b07                 mov eax, dword ptr [edi]
// 0070542a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0070542d  51                   push ecx
// 0070542e  8bcf                 mov ecx, edi
// 00705430  ffd2                 call edx
// 00705432  8b442410             mov eax, dword ptr [esp + 0x10]
// 00705436  53                   push ebx
// 00705437  50                   push eax
// 00705438  8bcf                 mov ecx, edi
// 0070543a  e801d90100           call 0x722d40
// 0070543f  5f                   pop edi
// 00705440  5e                   pop esi
// 00705441  5b                   pop ebx
// 00705442  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
