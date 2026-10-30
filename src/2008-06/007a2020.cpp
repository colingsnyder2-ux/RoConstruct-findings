// from server: 100% by auto
// roc 2008-06 007a2020  unit: CXTCaptionButtonTheme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a2020
//
// 007a2020  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 007a2023  85c0                 test eax, eax
// 007a2025  7406                 je 0x7a202d
// 007a2027  83780400             cmp dword ptr [eax + 4], 0
// 007a202b  7523                 jne 0x7a2050
// 007a202d  8b442404             mov eax, dword ptr [esp + 4]
// 007a2031  85c0                 test eax, eax
// 007a2033  7419                 je 0x7a204e
// 007a2035  8b4020               mov eax, dword ptr [eax + 0x20]
// 007a2038  6a00                 push 0
// 007a203a  6a00                 push 0
// 007a203c  6a31                 push 0x31
// 007a203e  50                   push eax
// 007a203f  ff15142e8000         call dword ptr [0x802e14]
// 007a2045  89442404             mov dword ptr [esp + 4], eax
// 007a2049  e97cf0efff           jmp 0x6a10ca
// 007a204e  33c0                 xor eax, eax
// 007a2050  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetThemeFont@CXTButtonTheme@@UBEPAVCFont@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
