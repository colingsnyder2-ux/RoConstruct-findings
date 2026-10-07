// roc 2012-06 00a17ab0  unit: CXTPShortcutManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17ab0
//
// 00a17ab0  8b542408             mov edx, dword ptr [esp + 8]
// 00a17ab4  8bc1                 mov eax, ecx
// 00a17ab6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a17aba  c70040d5c100         mov dword ptr [eax], 0xc1d540
// 00a17ac0  894804               mov dword ptr [eax + 4], ecx
// 00a17ac3  895008               mov dword ptr [eax + 8], edx
// 00a17ac6  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??0?$CXTPNotifySinkClassDelegate@VCXTPCalendarCaptionBarTheme@@@@QAE@PAVCXTPCalendarCaptionBarTheme@@P81@AEXKIJ@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
