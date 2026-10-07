// roc 2012-06 00a10d20  unit: XTPPaintThemes::CXTPOfficeTheme  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a10d20
//
// 00a10d20  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a10d24  f7d8                 neg eax
// 00a10d26  1bc0                 sbb eax, eax
// 00a10d28  83e00c               and eax, 0xc
// 00a10d2b  83c01e               add eax, 0x1e
// 00a10d2e  50                   push eax
// 00a10d2f  e85c6bf7ff           call 0x987890
// 00a10d34  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a10d38  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a10d3c  50                   push eax
// 00a10d3d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a10d41  51                   push ecx
// 00a10d42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a10d46  52                   push edx
// 00a10d47  50                   push eax
// 00a10d48  51                   push ecx
// 00a10d49  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a10d4d  e83e880800           call 0xa99590
// 00a10d52  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawPopupBarGripper@CXTPOfficeTheme@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOfficeTheme.cpp
