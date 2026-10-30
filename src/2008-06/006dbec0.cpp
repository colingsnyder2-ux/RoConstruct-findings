// from server: 100% by auto
// roc 2008-06 006dbec0  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbec0
//
// 006dbec0  8a442404             mov al, byte ptr [esp + 4]
// 006dbec4  a80a                 test al, 0xa
// 006dbec6  742f                 je 0x6dbef7
// 006dbec8  807c240800           cmp byte ptr [esp + 8], 0
// 006dbecd  752f                 jne 0x6dbefe
// 006dbecf  a808                 test al, 8
// 006dbed1  752b                 jne 0x6dbefe
// 006dbed3  f644240c20           test byte ptr [esp + 0xc], 0x20
// 006dbed8  741d                 je 0x6dbef7
// 006dbeda  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006dbedd  e874030e00           call 0x7bc256
// 006dbee2  85c0                 test eax, eax
// 006dbee4  7435                 je 0x6dbf1b
// 006dbee6  e8553e0000           call 0x6dfd40
// 006dbeeb  6a0f                 push 0xf
// 006dbeed  8bc8                 mov ecx, eax
// 006dbeef  e82c360000           call 0x6df520
// 006dbef4  c21000               ret 0x10
// 006dbef7  8b442410             mov eax, dword ptr [esp + 0x10]
// 006dbefb  c21000               ret 0x10
// 006dbefe  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006dbf01  e850030e00           call 0x7bc256
// 006dbf06  85c0                 test eax, eax
// 006dbf08  7411                 je 0x6dbf1b
// 006dbf0a  e8313e0000           call 0x6dfd40
// 006dbf0f  6a0d                 push 0xd
// 006dbf11  8bc8                 mov ecx, eax
// 006dbf13  e808360000           call 0x6df520
// 006dbf18  c21000               ret 0x10
// 006dbf1b  e8203e0000           call 0x6dfd40
// 006dbf20  6a11                 push 0x11
// 006dbf22  8bc8                 mov ecx, eax
// 006dbf24  e8f7350000           call 0x6df520
// 006dbf29  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetItemBackColor@CXTTreeBase@@MBEKI_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
