// from server: 100% by auto
// roc 2012-06 00995e00  unit: CXTPCommandBar  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00995e00
//
// 00995e00  51                   push ecx
// 00995e01  8d442408             lea eax, [esp + 8]
// 00995e05  50                   push eax
// 00995e06  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00995e0a  8d542404             lea edx, [esp + 4]
// 00995e0e  52                   push edx
// 00995e0f  50                   push eax
// 00995e10  e8fb04ffff           call 0x986310
// 00995e15  85c0                 test eax, eax
// 00995e17  7504                 jne 0x995e1d
// 00995e19  59                   pop ecx
// 00995e1a  c20800               ret 8
// 00995e1d  8b4804               mov ecx, dword ptr [eax + 4]
// 00995e20  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00995e24  890a                 mov dword ptr [edx], ecx
// 00995e26  b801000000           mov eax, 1
// 00995e2b  59                   pop ecx
// 00995e2c  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarData.cpp (function ?Lookup@?$CMap@KKHH@@QBEHKAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarData.cpp
