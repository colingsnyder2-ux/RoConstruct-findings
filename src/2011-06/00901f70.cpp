// from server: 100% by auto
// roc 2011-06 00901f70  unit: CXTCaptionButtonTheme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901f70
//
// 00901f70  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00901f73  85c0                 test eax, eax
// 00901f75  7406                 je 0x901f7d
// 00901f77  83780400             cmp dword ptr [eax + 4], 0
// 00901f7b  7523                 jne 0x901fa0
// 00901f7d  8b442404             mov eax, dword ptr [esp + 4]
// 00901f81  85c0                 test eax, eax
// 00901f83  7419                 je 0x901f9e
// 00901f85  8b4020               mov eax, dword ptr [eax + 0x20]
// 00901f88  6a00                 push 0
// 00901f8a  6a00                 push 0
// 00901f8c  6a31                 push 0x31
// 00901f8e  50                   push eax
// 00901f8f  ff15c019a400         call dword ptr [0xa419c0]
// 00901f95  89442404             mov dword ptr [esp + 4], eax
// 00901f99  e9ca8bf0ff           jmp 0x80ab68
// 00901f9e  33c0                 xor eax, eax
// 00901fa0  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?GetThemeFont@CXTButtonTheme@@UBEPAVCFont@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
