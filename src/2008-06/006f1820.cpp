// from server: 100% by auto
// roc 2008-06 006f1820  unit: CXTPRibbonBarMorePopupToolBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1820
//
// 006f1820  56                   push esi
// 006f1821  8bf1                 mov esi, ecx
// 006f1823  e898feffff           call 0x6f16c0
// 006f1828  c706848e8500         mov dword ptr [esi], 0x858e84
// 006f182e  c74654748e8500       mov dword ptr [esi + 0x54], 0x858e74
// 006f1835  c7465c148e8500       mov dword ptr [esi + 0x5c], 0x858e14
// 006f183c  c786f800000001000000 mov dword ptr [esi + 0xf8], 1
// 006f1846  8bc6                 mov eax, esi
// 006f1848  5e                   pop esi
// 006f1849  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CXTPPopupToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
