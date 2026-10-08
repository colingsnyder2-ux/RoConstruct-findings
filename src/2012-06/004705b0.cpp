// from server: 100% by auto
// roc 2012-06 004705b0  unit: CRobloxApp  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004705b0
//
// 004705b0  56                   push esi
// 004705b1  8bf1                 mov esi, ecx
// 004705b3  8b06                 mov eax, dword ptr [esi]
// 004705b5  8b50f8               mov edx, dword ptr [eax - 8]
// 004705b8  83e810               sub eax, 0x10
// 004705bb  b901000000           mov ecx, 1
// 004705c0  2b480c               sub ecx, dword ptr [eax + 0xc]
// 004705c3  8b442408             mov eax, dword ptr [esp + 8]
// 004705c7  2bd0                 sub edx, eax
// 004705c9  0bca                 or ecx, edx
// 004705cb  7d08                 jge 0x4705d5
// 004705cd  50                   push eax
// 004705ce  8bce                 mov ecx, esi
// 004705d0  e8fbf0ffff           call 0x46f6d0
// 004705d5  8b06                 mov eax, dword ptr [esi]
// 004705d7  5e                   pop esi
// 004705d8  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?PrepareWrite@?$CSimpleStringT@D$0A@@ATL@@AAEPADH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
