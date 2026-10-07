// roc 2012-06 00984c90  unit: CPatchedControlComboBox  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984c90
//
// 00984c90  56                   push esi
// 00984c91  8b742408             mov esi, dword ptr [esp + 8]
// 00984c95  85f6                 test esi, esi
// 00984c97  7509                 jne 0x984ca2
// 00984c99  b857000780           mov eax, 0x80070057
// 00984c9e  5e                   pop esi
// 00984c9f  c20400               ret 4
// 00984ca2  8b41e0               mov eax, dword ptr [ecx - 0x20]
// 00984ca5  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 00984cab  83c1e0               add ecx, -0x20
// 00984cae  ffd2                 call edx
// 00984cb0  f7d8                 neg eax
// 00984cb2  1bc0                 sbb eax, eax
// 00984cb4  f7d8                 neg eax
// 00984cb6  8906                 mov dword ptr [esi], eax
// 00984cb8  33c0                 xor eax, eax
// 00984cba  5e                   pop esi
// 00984cbb  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleChildCount@CXTPControl@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
