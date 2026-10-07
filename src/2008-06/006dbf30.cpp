// roc 2008-06 006dbf30  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbf30
//
// 006dbf30  8a442404             mov al, byte ptr [esp + 4]
// 006dbf34  a80a                 test al, 0xa
// 006dbf36  742f                 je 0x6dbf67
// 006dbf38  807c240800           cmp byte ptr [esp + 8], 0
// 006dbf3d  752f                 jne 0x6dbf6e
// 006dbf3f  a808                 test al, 8
// 006dbf41  752b                 jne 0x6dbf6e
// 006dbf43  f644240c20           test byte ptr [esp + 0xc], 0x20
// 006dbf48  741d                 je 0x6dbf67
// 006dbf4a  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006dbf4d  e804030e00           call 0x7bc256
// 006dbf52  85c0                 test eax, eax
// 006dbf54  7435                 je 0x6dbf8b
// 006dbf56  e8e53d0000           call 0x6dfd40
// 006dbf5b  6a08                 push 8
// 006dbf5d  8bc8                 mov ecx, eax
// 006dbf5f  e8bc350000           call 0x6df520
// 006dbf64  c21000               ret 0x10
// 006dbf67  8b442410             mov eax, dword ptr [esp + 0x10]
// 006dbf6b  c21000               ret 0x10
// 006dbf6e  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006dbf71  e8e0020e00           call 0x7bc256
// 006dbf76  85c0                 test eax, eax
// 006dbf78  7411                 je 0x6dbf8b
// 006dbf7a  e8c13d0000           call 0x6dfd40
// 006dbf7f  6a0e                 push 0xe
// 006dbf81  8bc8                 mov ecx, eax
// 006dbf83  e898350000           call 0x6df520
// 006dbf88  c21000               ret 0x10
// 006dbf8b  e8b03d0000           call 0x6dfd40
// 006dbf90  6a0f                 push 0xf
// 006dbf92  8bc8                 mov ecx, eax
// 006dbf94  e887350000           call 0x6df520
// 006dbf99  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetItemTextColor@CXTTreeBase@@MBEKI_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
