// roc 2012-06 009bf4a0  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf4a0
//
// 009bf4a0  8a442404             mov al, byte ptr [esp + 4]
// 009bf4a4  a80a                 test al, 0xa
// 009bf4a6  742f                 je 0x9bf4d7
// 009bf4a8  807c240800           cmp byte ptr [esp + 8], 0
// 009bf4ad  752f                 jne 0x9bf4de
// 009bf4af  a808                 test al, 8
// 009bf4b1  752b                 jne 0x9bf4de
// 009bf4b3  f644240c20           test byte ptr [esp + 0xc], 0x20
// 009bf4b8  741d                 je 0x9bf4d7
// 009bf4ba  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 009bf4bd  e8eaa20d00           call 0xa997ac
// 009bf4c2  85c0                 test eax, eax
// 009bf4c4  7435                 je 0x9bf4fb
// 009bf4c6  e895e3ffff           call 0x9bd860
// 009bf4cb  6a0f                 push 0xf
// 009bf4cd  8bc8                 mov ecx, eax
// 009bf4cf  e80cdbffff           call 0x9bcfe0
// 009bf4d4  c21000               ret 0x10
// 009bf4d7  8b442410             mov eax, dword ptr [esp + 0x10]
// 009bf4db  c21000               ret 0x10
// 009bf4de  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 009bf4e1  e8c6a20d00           call 0xa997ac
// 009bf4e6  85c0                 test eax, eax
// 009bf4e8  7411                 je 0x9bf4fb
// 009bf4ea  e871e3ffff           call 0x9bd860
// 009bf4ef  6a0d                 push 0xd
// 009bf4f1  8bc8                 mov ecx, eax
// 009bf4f3  e8e8daffff           call 0x9bcfe0
// 009bf4f8  c21000               ret 0x10
// 009bf4fb  e860e3ffff           call 0x9bd860
// 009bf500  6a11                 push 0x11
// 009bf502  8bc8                 mov ecx, eax
// 009bf504  e8d7daffff           call 0x9bcfe0
// 009bf509  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetItemBackColor@CXTPTreeBase@@MBEKI_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
