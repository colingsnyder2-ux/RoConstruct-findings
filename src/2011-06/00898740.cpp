// roc 2011-06 00898740  unit: XTPPaintThemes::CXTPOfficeTheme  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00898740
//
// 00898740  8b442418             mov eax, dword ptr [esp + 0x18]
// 00898744  f7d8                 neg eax
// 00898746  1bc0                 sbb eax, eax
// 00898748  83e00c               and eax, 0xc
// 0089874b  83c01e               add eax, 0x1e
// 0089874e  50                   push eax
// 0089874f  e85c6ef7ff           call 0x80f5b0
// 00898754  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00898758  8b542410             mov edx, dword ptr [esp + 0x10]
// 0089875c  50                   push eax
// 0089875d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00898761  51                   push ecx
// 00898762  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00898766  52                   push edx
// 00898767  50                   push eax
// 00898768  51                   push ecx
// 00898769  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089876d  e8643e1300           call 0x9cc5d6
// 00898772  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawPopupBarGripper@CXTPOfficeTheme@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOfficeTheme.cpp
