// roc 2007-08 00721140  unit: CXTCaptionButtonTheme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00721140
//
// 00721140  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00721143  85c0                 test eax, eax
// 00721145  7406                 je 0x72114d
// 00721147  83780400             cmp dword ptr [eax + 4], 0
// 0072114b  7523                 jne 0x721170
// 0072114d  8b442404             mov eax, dword ptr [esp + 4]
// 00721151  85c0                 test eax, eax
// 00721153  7419                 je 0x72116e
// 00721155  8b4020               mov eax, dword ptr [eax + 0x20]
// 00721158  6a00                 push 0
// 0072115a  6a00                 push 0
// 0072115c  6a31                 push 0x31
// 0072115e  50                   push eax
// 0072115f  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00721165  89442404             mov dword ptr [esp + 4], eax
// 00721169  e9c0f4f0ff           jmp 0x63062e
// 0072116e  33c0                 xor eax, eax
// 00721170  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?GetThemeFont@CXTButtonTheme@@UBEPAVCFont@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
