// from server: 100% by auto
// roc 2007-08 006c3c20  unit: XTPPaintThemes::CXTPOfficeTheme  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c3c20
//
// 006c3c20  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c3c24  f7d8                 neg eax
// 006c3c26  1bc0                 sbb eax, eax
// 006c3c28  83e00c               and eax, 0xc
// 006c3c2b  83c01e               add eax, 0x1e
// 006c3c2e  50                   push eax
// 006c3c2f  e83c91f7ff           call 0x63cd70
// 006c3c34  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c3c38  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c3c3c  50                   push eax
// 006c3c3d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c3c41  51                   push ecx
// 006c3c42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c3c46  52                   push edx
// 006c3c47  50                   push eax
// 006c3c48  51                   push ecx
// 006c3c49  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c3c4d  e878470700           call 0x7383ca
// 006c3c52  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawPopupBarGripper@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOfficeTheme.cpp
