// roc 2011-06 008f1410  unit: CXTCaptionButtonThemeFactory  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1410
//
// 008f1410  56                   push esi
// 008f1411  6a00                 push 0
// 008f1413  8bf1                 mov esi, ecx
// 008f1415  e8e6050100           call 0x901a00
// 008f141a  c706dca2ad00         mov dword ptr [esi], 0xada2dc
// 008f1420  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 008f142a  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 008f1434  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008f143b  8bc6                 mov eax, esi
// 008f143d  5e                   pop esi
// 008f143e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ??0CXTCaptionButtonThemeOfficeXP@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
