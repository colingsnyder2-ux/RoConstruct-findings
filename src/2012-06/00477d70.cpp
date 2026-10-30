// from server: 100% by auto
// roc 2012-06 00477d70  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477d70
//
// 00477d70  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00477d74  8bc1                 mov eax, ecx
// 00477d76  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00477d7a  03d1                 add edx, ecx
// 00477d7c  895008               mov dword ptr [eax + 8], edx
// 00477d7f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00477d83  8908                 mov dword ptr [eax], ecx
// 00477d85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00477d89  03d1                 add edx, ecx
// 00477d8b  894804               mov dword ptr [eax + 4], ecx
// 00477d8e  89500c               mov dword ptr [eax + 0xc], edx
// 00477d91  c21000               ret 0x10
// library xtp-15.2.1/Source\Calendar\XTPDatePickerControl.cpp (function ??0CRect@@QAE@UtagPOINT@@UtagSIZE@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPDatePickerControl.cpp
