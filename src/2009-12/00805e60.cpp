// roc 2009-12 00805e60  unit: CXTPControlComboBoxPopupBar  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805e60
//
// 00805e60  8b542404             mov edx, dword ptr [esp + 4]
// 00805e64  85d2                 test edx, edx
// 00805e66  7508                 jne 0x805e70
// 00805e68  b857000780           mov eax, 0x80070057
// 00805e6d  c20400               ret 4
// 00805e70  83c1a4               add ecx, -0x5c
// 00805e73  e8d8f3ffff           call 0x805250
// 00805e78  8902                 mov dword ptr [edx], eax
// 00805e7a  33c0                 xor eax, eax
// 00805e7c  c20400               ret 4
// copied from an identical function in another client (function ?GetAccessibleChildCount@CXTPCommandBar@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp