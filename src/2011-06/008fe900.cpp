// roc 2011-06 008fe900  unit: CXTPRibbonSystemPopupBarPage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe900
//
// 008fe900  56                   push esi
// 008fe901  8bf1                 mov esi, ecx
// 008fe903  e8a87ef5ff           call 0x8567b0
// 008fe908  c7067cd1ad00         mov dword ptr [esi], 0xadd17c
// 008fe90e  c746546cd1ad00       mov dword ptr [esi + 0x54], 0xadd16c
// 008fe915  c7465c0cd1ad00       mov dword ptr [esi + 0x5c], 0xadd10c
// 008fe91c  8bc6                 mov eax, esi
// 008fe91e  5e                   pop esi
// 008fe91f  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ??0CXTPControlFontComboBoxList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
