// from server: 100% by auto
// roc 2012-06 00a04a10  unit: CXTPRibbonTheme  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a04a10
//
// 00a04a10  56                   push esi
// 00a04a11  6a38                 push 0x38
// 00a04a13  e8782ef8ff           call 0x987890
// 00a04a18  8b742408             mov esi, dword ptr [esp + 8]
// 00a04a1c  50                   push eax
// 00a04a1d  8d442410             lea eax, [esp + 0x10]
// 00a04a21  50                   push eax
// 00a04a22  8bce                 mov ecx, esi
// 00a04a24  e883e4f7ff           call 0x982eac
// 00a04a29  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a04a2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a04a31  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a04a35  68c5c5c500           push 0xc5c5c5
// 00a04a3a  6a01                 push 1
// 00a04a3c  2bc8                 sub ecx, eax
// 00a04a3e  51                   push ecx
// 00a04a3f  4a                   dec edx
// 00a04a40  52                   push edx
// 00a04a41  50                   push eax
// 00a04a42  8bce                 mov ecx, esi
// 00a04a44  e8474b0900           call 0xa99590
// 00a04a49  5e                   pop esi
// 00a04a4a  c21400               ret 0x14
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillPopupLabelEntry@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
