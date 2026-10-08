// from server: 100% by auto
// roc 2011-06 0080c9e0  unit: CPatchedControlComboBox  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c9e0
//
// 0080c9e0  56                   push esi
// 0080c9e1  8b742408             mov esi, dword ptr [esp + 8]
// 0080c9e5  85f6                 test esi, esi
// 0080c9e7  7509                 jne 0x80c9f2
// 0080c9e9  b857000780           mov eax, 0x80070057
// 0080c9ee  5e                   pop esi
// 0080c9ef  c20400               ret 4
// 0080c9f2  8b41e0               mov eax, dword ptr [ecx - 0x20]
// 0080c9f5  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0080c9fb  83c1e0               add ecx, -0x20
// 0080c9fe  ffd2                 call edx
// 0080ca00  f7d8                 neg eax
// 0080ca02  1bc0                 sbb eax, eax
// 0080ca04  f7d8                 neg eax
// 0080ca06  8906                 mov dword ptr [esi], eax
// 0080ca08  33c0                 xor eax, eax
// 0080ca0a  5e                   pop esi
// 0080ca0b  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleChildCount@CXTPControl@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
