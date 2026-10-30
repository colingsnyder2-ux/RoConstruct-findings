// from server: 100% by auto
// roc 2011-06 00849130  unit: CRobloxTreeCtrl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849130
//
// 00849130  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00849133  8b4838               mov ecx, dword ptr [eax + 0x38]
// 00849136  85c9                 test ecx, ecx
// 00849138  7403                 je 0x84913d
// 0084913a  51                   push ecx
// 0084913b  eb0b                 jmp 0x849148
// 0084913d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00849140  50                   push eax
// 00849141  ff15b819a400         call dword ptr [0xa419b8]
// 00849147  50                   push eax
// 00849148  e8db11fcff           call 0x80a328
// 0084914d  85c0                 test eax, eax
// 0084914f  741c                 je 0x84916d
// 00849151  8b4020               mov eax, dword ptr [eax + 0x20]
// 00849154  85c0                 test eax, eax
// 00849156  7415                 je 0x84916d
// 00849158  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084915c  51                   push ecx
// 0084915d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00849160  51                   push ecx
// 00849161  6a4e                 push 0x4e
// 00849163  50                   push eax
// 00849164  ff15c019a400         call dword ptr [0xa419c0]
// 0084916a  c20400               ret 4
// 0084916d  33c0                 xor eax, eax
// 0084916f  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SendNotify@CXTPTreeBase@@MAEJPAUtagNMHDR@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
