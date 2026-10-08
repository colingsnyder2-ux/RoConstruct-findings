// roc 2008-06 006ab530  unit: CPatchedControlComboBox  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab530
//
// 006ab530  56                   push esi
// 006ab531  8b742408             mov esi, dword ptr [esp + 8]
// 006ab535  85f6                 test esi, esi
// 006ab537  7509                 jne 0x6ab542
// 006ab539  b857000780           mov eax, 0x80070057
// 006ab53e  5e                   pop esi
// 006ab53f  c20400               ret 4
// 006ab542  8b41e0               mov eax, dword ptr [ecx - 0x20]
// 006ab545  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 006ab54b  83c1e0               add ecx, -0x20
// 006ab54e  ffd2                 call edx
// 006ab550  f7d8                 neg eax
// 006ab552  1bc0                 sbb eax, eax
// 006ab554  f7d8                 neg eax
// 006ab556  8906                 mov dword ptr [esi], eax
// 006ab558  33c0                 xor eax, eax
// 006ab55a  5e                   pop esi
// 006ab55b  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleChildCount@CXTPControl@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
