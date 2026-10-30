// from server: 100% by auto
// roc 2012-06 0098f0d0  unit: CXTPControlComboBoxList  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098f0d0
//
// 0098f0d0  56                   push esi
// 0098f0d1  8bf1                 mov esi, ecx
// 0098f0d3  e8ee38ffff           call 0x9829c6
// 0098f0d8  33c0                 xor eax, eax
// 0098f0da  894654               mov dword ptr [esi + 0x54], eax
// 0098f0dd  894658               mov dword ptr [esi + 0x58], eax
// 0098f0e0  89465c               mov dword ptr [esi + 0x5c], eax
// 0098f0e3  c706b4dbc000         mov dword ptr [esi], 0xc0dbb4
// 0098f0e9  8bc6                 mov eax, esi
// 0098f0eb  5e                   pop esi
// 0098f0ec  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ??0CXTPCommandBarEditCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
