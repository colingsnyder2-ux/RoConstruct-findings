// roc 2008-06 006a6ea0  unit: CXTPControlComboBoxPopupBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6ea0
//
// 006a6ea0  56                   push esi
// 006a6ea1  8bf1                 mov esi, ecx
// 006a6ea3  e818a80400           call 0x6f16c0
// 006a6ea8  c706140b8500         mov dword ptr [esi], 0x850b14
// 006a6eae  c74654040b8500       mov dword ptr [esi + 0x54], 0x850b04
// 006a6eb5  c7465ca40a8500       mov dword ptr [esi + 0x5c], 0x850aa4
// 006a6ebc  c786bc00000001000000 mov dword ptr [esi + 0xbc], 1
// 006a6ec6  c786c400000000000000 mov dword ptr [esi + 0xc4], 0
// 006a6ed0  8bc6                 mov eax, esi
// 006a6ed2  5e                   pop esi
// 006a6ed3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
