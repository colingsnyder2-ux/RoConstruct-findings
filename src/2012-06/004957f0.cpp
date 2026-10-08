// from server: 100% by auto
// roc 2012-06 004957f0  unit: CRobloxView  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004957f0
//
// 004957f0  8b442404             mov eax, dword ptr [esp + 4]
// 004957f4  56                   push esi
// 004957f5  8bf1                 mov esi, ecx
// 004957f7  85c0                 test eax, eax
// 004957f9  7513                 jne 0x49580e
// 004957fb  50                   push eax
// 004957fc  ff155821b200         call dword ptr [0xb22158]
// 00495802  50                   push eax
// 00495803  8bce                 mov ecx, esi
// 00495805  e844d74e00           call 0x982f4e
// 0049580a  5e                   pop esi
// 0049580b  c20400               ret 4
// 0049580e  8b4004               mov eax, dword ptr [eax + 4]
// 00495811  50                   push eax
// 00495812  ff155821b200         call dword ptr [0xb22158]
// 00495818  50                   push eax
// 00495819  8bce                 mov ecx, esi
// 0049581b  e82ed74e00           call 0x982f4e
// 00495820  5e                   pop esi
// 00495821  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ?CreateCompatibleDC@CDC@@QAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
