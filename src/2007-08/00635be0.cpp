// roc 2007-08 00635be0  unit: CXTPEdit  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635be0
//
// 00635be0  56                   push esi
// 00635be1  8bf1                 mov esi, ecx
// 00635be3  e868cf0600           call 0x6a2b50
// 00635be8  33c0                 xor eax, eax
// 00635bea  894608               mov dword ptr [esi + 8], eax
// 00635bed  89460c               mov dword ptr [esi + 0xc], eax
// 00635bf0  c70600557c00         mov dword ptr [esi], 0x7c5500
// 00635bf6  8bc6                 mov eax, esi
// 00635bf8  5e                   pop esi
// 00635bf9  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxAutoCompleteWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
