// roc 2010-06 007b4370  unit: CXTPControlComboBoxPopupBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b4370
//
// 007b4370  56                   push esi
// 007b4371  8bf1                 mov esi, ecx
// 007b4373  e8e84a0400           call 0x7f8e60
// 007b4378  c7064462a500         mov dword ptr [esi], 0xa56244
// 007b437e  c746543462a500       mov dword ptr [esi + 0x54], 0xa56234
// 007b4385  c7465cd461a500       mov dword ptr [esi + 0x5c], 0xa561d4
// 007b438c  c786bc00000001000000 mov dword ptr [esi + 0xbc], 1
// 007b4396  c786c400000000000000 mov dword ptr [esi + 0xc4], 0
// 007b43a0  8bc6                 mov eax, esi
// 007b43a2  5e                   pop esi
// 007b43a3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
