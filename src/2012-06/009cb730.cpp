// roc 2012-06 009cb730  unit: CXTPControlColorSelector  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cb730
//
// 009cb730  56                   push esi
// 009cb731  8bf1                 mov esi, ecx
// 009cb733  e848e20400           call 0xa19980
// 009cb738  c706fc40c100         mov dword ptr [esi], 0xc140fc
// 009cb73e  c746209c40c100       mov dword ptr [esi + 0x20], 0xc1409c
// 009cb745  c786fc00000001000000 mov dword ptr [esi + 0xfc], 1
// 009cb74f  c786d40000005a000000 mov dword ptr [esi + 0xd4], 0x5a
// 009cb759  8bc6                 mov eax, esi
// 009cb75b  5e                   pop esi
// 009cb75c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CControlExpandButton@CXTPPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
