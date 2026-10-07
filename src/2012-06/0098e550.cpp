// roc 2012-06 0098e550  unit: CXTPEdit  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e550
//
// 0098e550  56                   push esi
// 0098e551  8bf1                 mov esi, ecx
// 0098e553  e8a8790800           call 0xa15f00
// 0098e558  33c0                 xor eax, eax
// 0098e55a  894608               mov dword ptr [esi + 8], eax
// 0098e55d  89460c               mov dword ptr [esi + 0xc], eax
// 0098e560  c7060cd3c000         mov dword ptr [esi], 0xc0d30c
// 0098e566  8bc6                 mov eax, esi
// 0098e568  5e                   pop esi
// 0098e569  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxAutoCompleteWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
