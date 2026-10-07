// roc 2012-06 0091ee40  unit: RBX::FilterHumanoidParts  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091ee40
//
// 0091ee40  8b542408             mov edx, dword ptr [esp + 8]
// 0091ee44  8bc1                 mov eax, ecx
// 0091ee46  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0091ee4a  c700f865bf00         mov dword ptr [eax], 0xbf65f8
// 0091ee50  894804               mov dword ptr [eax + 4], ecx
// 0091ee53  895008               mov dword ptr [eax + 8], edx
// 0091ee56  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??0?$CXTPNotifySinkClassDelegate@VCXTPCalendarCaptionBarTheme@@@@QAE@PAVCXTPCalendarCaptionBarTheme@@P81@AEXKIJ@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
