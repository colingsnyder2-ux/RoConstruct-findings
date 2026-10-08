// from server: 100% by auto
// roc 2007-08 00719c20  unit: CXTPRibbonSystemPopupBarPage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719c20
//
// 00719c20  56                   push esi
// 00719c21  8bf1                 mov esi, ecx
// 00719c23  e86805f6ff           call 0x67a190
// 00719c28  c7069c077e00         mov dword ptr [esi], 0x7e079c
// 00719c2e  c746548c077e00       mov dword ptr [esi + 0x54], 0x7e078c
// 00719c35  c7465c2c077e00       mov dword ptr [esi + 0x5c], 0x7e072c
// 00719c3c  8bc6                 mov eax, esi
// 00719c3e  5e                   pop esi
// 00719c3f  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBoxExt.cpp (function ??0CXTPControlFontComboBoxList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBoxExt.cpp
