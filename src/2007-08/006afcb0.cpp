// roc 2007-08 006afcb0  unit: CXTPRibbonTheme  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006afcb0
//
// 006afcb0  56                   push esi
// 006afcb1  6a38                 push 0x38
// 006afcb3  e8b8d0f8ff           call 0x63cd70
// 006afcb8  8b742408             mov esi, dword ptr [esp + 8]
// 006afcbc  50                   push eax
// 006afcbd  8d442410             lea eax, [esp + 0x10]
// 006afcc1  50                   push eax
// 006afcc2  8bce                 mov ecx, esi
// 006afcc4  e8e70bf8ff           call 0x6308b0
// 006afcc9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006afccd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006afcd1  8b542418             mov edx, dword ptr [esp + 0x18]
// 006afcd5  68c5c5c500           push 0xc5c5c5
// 006afcda  6a01                 push 1
// 006afcdc  2bc8                 sub ecx, eax
// 006afcde  51                   push ecx
// 006afcdf  83c2ff               add edx, -1
// 006afce2  52                   push edx
// 006afce3  50                   push eax
// 006afce4  8bce                 mov ecx, esi
// 006afce6  e8df860800           call 0x7383ca
// 006afceb  5e                   pop esi
// 006afcec  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillPopupLabelEntry@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTheme.cpp
