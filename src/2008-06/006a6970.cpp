// from server: 100% by auto
// roc 2008-06 006a6970  unit: CXTPEdit  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6970
//
// 006a6970  56                   push esi
// 006a6971  8bf1                 mov esi, ecx
// 006a6973  e828590700           call 0x71c2a0
// 006a6978  33c0                 xor eax, eax
// 006a697a  894608               mov dword ptr [esi + 8], eax
// 006a697d  89460c               mov dword ptr [esi + 0xc], eax
// 006a6980  c70690088500         mov dword ptr [esi], 0x850890
// 006a6986  8bc6                 mov eax, esi
// 006a6988  5e                   pop esi
// 006a6989  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxAutoCompleteWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
