// from server: 100% by auto
// roc 2012-06 009e35e0  unit: CXTPPropertyGrid  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e35e0
//
// 009e35e0  51                   push ecx
// 009e35e1  8d442408             lea eax, [esp + 8]
// 009e35e5  50                   push eax
// 009e35e6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009e35ea  8d542404             lea edx, [esp + 4]
// 009e35ee  52                   push edx
// 009e35ef  50                   push eax
// 009e35f0  e80b26a7ff           call 0x455c00
// 009e35f5  85c0                 test eax, eax
// 009e35f7  7504                 jne 0x9e35fd
// 009e35f9  59                   pop ecx
// 009e35fa  c20800               ret 8
// 009e35fd  8b4804               mov ecx, dword ptr [eax + 4]
// 009e3600  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009e3604  890a                 mov dword ptr [edx], ecx
// 009e3606  b801000000           mov eax, 1
// 009e360b  59                   pop ecx
// 009e360c  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarData.cpp (function ?Lookup@?$CMap@KKHH@@QBEHKAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarData.cpp
