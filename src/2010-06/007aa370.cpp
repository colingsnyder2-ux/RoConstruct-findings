// roc 2010-06 007aa370  unit: CPatchedControlComboBox  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007aa370
//
// 007aa370  56                   push esi
// 007aa371  8b742408             mov esi, dword ptr [esp + 8]
// 007aa375  85f6                 test esi, esi
// 007aa377  7509                 jne 0x7aa382
// 007aa379  b857000780           mov eax, 0x80070057
// 007aa37e  5e                   pop esi
// 007aa37f  c20400               ret 4
// 007aa382  8b41e0               mov eax, dword ptr [ecx - 0x20]
// 007aa385  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 007aa38b  83c1e0               add ecx, -0x20
// 007aa38e  ffd2                 call edx
// 007aa390  f7d8                 neg eax
// 007aa392  1bc0                 sbb eax, eax
// 007aa394  f7d8                 neg eax
// 007aa396  8906                 mov dword ptr [esi], eax
// 007aa398  33c0                 xor eax, eax
// 007aa39a  5e                   pop esi
// 007aa39b  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleChildCount@CXTPControl@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
