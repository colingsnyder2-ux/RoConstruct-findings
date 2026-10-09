// roc 2009-12 007f9620  unit: CXTPControlComboBoxPopupBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9620
//
// 007f9620  56                   push esi
// 007f9621  8bf1                 mov esi, ecx
// 007f9623  e8a8b70400           call 0x844dd0
// 007f9628  c706c41d9f00         mov dword ptr [esi], 0x9f1dc4
// 007f962e  c74654b41d9f00       mov dword ptr [esi + 0x54], 0x9f1db4
// 007f9635  c7465c541d9f00       mov dword ptr [esi + 0x5c], 0x9f1d54
// 007f963c  c786bc00000001000000 mov dword ptr [esi + 0xbc], 1
// 007f9646  c786c400000000000000 mov dword ptr [esi + 0xc4], 0
// 007f9650  8bc6                 mov eax, esi
// 007f9652  5e                   pop esi
// 007f9653  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
