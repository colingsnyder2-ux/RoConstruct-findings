// roc 2010-06 00846e70  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00846e70
//
// 00846e70  8b442410             mov eax, dword ptr [esp + 0x10]
// 00846e74  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00846e78  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00846e7e  6a01                 push 1
// 00846e80  50                   push eax
// 00846e81  8b442410             mov eax, dword ptr [esp + 0x10]
// 00846e85  52                   push edx
// 00846e86  8b542410             mov edx, dword ptr [esp + 0x10]
// 00846e8a  50                   push eax
// 00846e8b  52                   push edx
// 00846e8c  e81f52fbff           call 0x7fc0b0
// 00846e91  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?AddSysButton@CXTPMenuBar@@AAEXPAVCXTPControl@@HPBDH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
