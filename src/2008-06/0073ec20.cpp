// roc 2008-06 0073ec20  unit: XTPPaintThemes::CXTPOfficeTheme  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073ec20
//
// 0073ec20  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073ec24  f7d8                 neg eax
// 0073ec26  1bc0                 sbb eax, eax
// 0073ec28  83e00c               and eax, 0xc
// 0073ec2b  83c01e               add eax, 0x1e
// 0073ec2e  50                   push eax
// 0073ec2f  e83cf4f6ff           call 0x6ae070
// 0073ec34  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073ec38  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073ec3c  50                   push eax
// 0073ec3d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073ec41  51                   push ecx
// 0073ec42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073ec46  52                   push edx
// 0073ec47  50                   push eax
// 0073ec48  51                   push ecx
// 0073ec49  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073ec4d  e8eed30700           call 0x7bc040
// 0073ec52  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawPopupBarGripper@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
