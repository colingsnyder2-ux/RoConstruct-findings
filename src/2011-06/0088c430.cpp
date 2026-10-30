// from server: 100% by auto
// roc 2011-06 0088c430  unit: CXTPRibbonTheme  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088c430
//
// 0088c430  56                   push esi
// 0088c431  6a38                 push 0x38
// 0088c433  e87831f8ff           call 0x80f5b0
// 0088c438  8b742408             mov esi, dword ptr [esp + 8]
// 0088c43c  50                   push eax
// 0088c43d  8d442410             lea eax, [esp + 0x10]
// 0088c441  50                   push eax
// 0088c442  8bce                 mov ecx, esi
// 0088c444  e8d7e9f7ff           call 0x80ae20
// 0088c449  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0088c44d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088c451  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088c455  68c5c5c500           push 0xc5c5c5
// 0088c45a  6a01                 push 1
// 0088c45c  2bc8                 sub ecx, eax
// 0088c45e  51                   push ecx
// 0088c45f  4a                   dec edx
// 0088c460  52                   push edx
// 0088c461  50                   push eax
// 0088c462  8bce                 mov ecx, esi
// 0088c464  e86d011400           call 0x9cc5d6
// 0088c469  5e                   pop esi
// 0088c46a  c21400               ret 0x14
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillPopupLabelEntry@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
