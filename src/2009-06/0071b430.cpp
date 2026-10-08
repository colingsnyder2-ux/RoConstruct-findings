// roc 2009-06 0071b430  unit: CXTPControlComboBoxPopupBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b430
//
// 0071b430  56                   push esi
// 0071b431  8bf1                 mov esi, ecx
// 0071b433  e898eb0400           call 0x769fd0
// 0071b438  c706d4158f00         mov dword ptr [esi], 0x8f15d4
// 0071b43e  c74654c4158f00       mov dword ptr [esi + 0x54], 0x8f15c4
// 0071b445  c7465c64158f00       mov dword ptr [esi + 0x5c], 0x8f1564
// 0071b44c  c786bc00000001000000 mov dword ptr [esi + 0xbc], 1
// 0071b456  c786c400000000000000 mov dword ptr [esi + 0xc4], 0
// 0071b460  8bc6                 mov eax, esi
// 0071b462  5e                   pop esi
// 0071b463  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
