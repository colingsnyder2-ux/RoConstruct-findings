// from server: 100% by auto
// roc 2011-06 008162d0  unit: CXTPEdit  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008162d0
//
// 008162d0  56                   push esi
// 008162d1  8bf1                 mov esi, ecx
// 008162d3  e828760800           call 0x89d900
// 008162d8  33c0                 xor eax, eax
// 008162da  894608               mov dword ptr [esi + 8], eax
// 008162dd  89460c               mov dword ptr [esi + 0xc], eax
// 008162e0  c706241cac00         mov dword ptr [esi], 0xac1c24
// 008162e6  8bc6                 mov eax, esi
// 008162e8  5e                   pop esi
// 008162e9  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxAutoCompleteWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
