// roc 2011-06 00856910  unit: CXTPRibbonBarMorePopupToolBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856910
//
// 00856910  56                   push esi
// 00856911  8bf1                 mov esi, ecx
// 00856913  e898feffff           call 0x8567b0
// 00856918  c706348fac00         mov dword ptr [esi], 0xac8f34
// 0085691e  c74654248fac00       mov dword ptr [esi + 0x54], 0xac8f24
// 00856925  c7465cc48eac00       mov dword ptr [esi + 0x5c], 0xac8ec4
// 0085692c  c786f800000001000000 mov dword ptr [esi + 0xf8], 1
// 00856936  8bc6                 mov eax, esi
// 00856938  5e                   pop esi
// 00856939  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CXTPPopupToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
