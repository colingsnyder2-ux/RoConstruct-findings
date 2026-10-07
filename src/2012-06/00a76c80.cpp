// roc 2012-06 00a76c80  unit: CXTPRibbonSystemPopupBarPage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76c80
//
// 00a76c80  56                   push esi
// 00a76c81  8bf1                 mov esi, ecx
// 00a76c83  e81880f5ff           call 0x9ceca0
// 00a76c88  c7060488c200         mov dword ptr [esi], 0xc28804
// 00a76c8e  c74654f487c200       mov dword ptr [esi + 0x54], 0xc287f4
// 00a76c95  c7465c9487c200       mov dword ptr [esi + 0x5c], 0xc28794
// 00a76c9c  8bc6                 mov eax, esi
// 00a76c9e  5e                   pop esi
// 00a76c9f  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ??0CXTPControlFontComboBoxList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
