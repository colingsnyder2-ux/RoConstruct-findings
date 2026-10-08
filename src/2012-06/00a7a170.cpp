// from server: 100% by auto
// roc 2012-06 00a7a170  unit: CXTCaptionButtonTheme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a170
//
// 00a7a170  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00a7a173  85c0                 test eax, eax
// 00a7a175  7406                 je 0xa7a17d
// 00a7a177  83780400             cmp dword ptr [eax + 4], 0
// 00a7a17b  7523                 jne 0xa7a1a0
// 00a7a17d  8b442404             mov eax, dword ptr [esp + 4]
// 00a7a181  85c0                 test eax, eax
// 00a7a183  7419                 je 0xa7a19e
// 00a7a185  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a7a188  6a00                 push 0
// 00a7a18a  6a00                 push 0
// 00a7a18c  6a31                 push 0x31
// 00a7a18e  50                   push eax
// 00a7a18f  ff15043cb200         call dword ptr [0xb23c04]
// 00a7a195  89442404             mov dword ptr [esp + 4], eax
// 00a7a199  e9508af0ff           jmp 0x982bee
// 00a7a19e  33c0                 xor eax, eax
// 00a7a1a0  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?GetThemeFont@CXTButtonTheme@@UBEPAVCFont@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
