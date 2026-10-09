// roc 2009-12 00841910  unit: CXTPCustomizeCommandsPage  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841910
//
// 00841910  56                   push esi
// 00841911  8bf1                 mov esi, ecx
// 00841913  e848e80400           call 0x890160
// 00841918  c706549e9f00         mov dword ptr [esi], 0x9f9e54
// 0084191e  c74620f49d9f00       mov dword ptr [esi + 0x20], 0x9f9df4
// 00841925  c786fc00000001000000 mov dword ptr [esi + 0xfc], 1
// 0084192f  c786d40000005a000000 mov dword ptr [esi + 0xd4], 0x5a
// 00841939  8bc6                 mov eax, esi
// 0084193b  5e                   pop esi
// 0084193c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CControlExpandButton@CXTPPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
