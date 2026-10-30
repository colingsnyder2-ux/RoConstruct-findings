// from server: 100% by auto
// roc 2007-08 00719a80  unit: CXTPRibbonControlSystemPopupBarButton  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719a80
//
// 00719a80  56                   push esi
// 00719a81  8bf1                 mov esi, ecx
// 00719a83  e8d809fbff           call 0x6ca460
// 00719a88  c706e4007e00         mov dword ptr [esi], 0x7e00e4
// 00719a8e  c7462084007e00       mov dword ptr [esi + 0x20], 0x7e0084
// 00719a95  8bc6                 mov eax, esi
// 00719a97  5e                   pop esi
// 00719a98  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlExt.cpp
