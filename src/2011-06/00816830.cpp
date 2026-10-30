// roc 2011-06 00816830  unit: CXTPControlComboBoxPopupBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816830
//
// 00816830  56                   push esi
// 00816831  8bf1                 mov esi, ecx
// 00816833  e878ff0300           call 0x8567b0
// 00816838  c706a41eac00         mov dword ptr [esi], 0xac1ea4
// 0081683e  c74654941eac00       mov dword ptr [esi + 0x54], 0xac1e94
// 00816845  c7465c341eac00       mov dword ptr [esi + 0x5c], 0xac1e34
// 0081684c  c786bc00000001000000 mov dword ptr [esi + 0xbc], 1
// 00816856  c786c400000000000000 mov dword ptr [esi + 0xc4], 0
// 00816860  8bc6                 mov eax, esi
// 00816862  5e                   pop esi
// 00816863  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
