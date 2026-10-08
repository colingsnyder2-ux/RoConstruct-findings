// from server: 100% by auto
// roc 2011-06 00847020  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847020
//
// 00847020  8a442404             mov al, byte ptr [esp + 4]
// 00847024  a80a                 test al, 0xa
// 00847026  742f                 je 0x847057
// 00847028  807c240800           cmp byte ptr [esp + 8], 0
// 0084702d  752f                 jne 0x84705e
// 0084702f  a808                 test al, 8
// 00847031  752b                 jne 0x84705e
// 00847033  f644240c20           test byte ptr [esp + 0xc], 0x20
// 00847038  741d                 je 0x847057
// 0084703a  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0084703d  e8b0571800           call 0x9cc7f2
// 00847042  85c0                 test eax, eax
// 00847044  7435                 je 0x84707b
// 00847046  e895e3ffff           call 0x8453e0
// 0084704b  6a0f                 push 0xf
// 0084704d  8bc8                 mov ecx, eax
// 0084704f  e85cdbffff           call 0x844bb0
// 00847054  c21000               ret 0x10
// 00847057  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084705b  c21000               ret 0x10
// 0084705e  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00847061  e88c571800           call 0x9cc7f2
// 00847066  85c0                 test eax, eax
// 00847068  7411                 je 0x84707b
// 0084706a  e871e3ffff           call 0x8453e0
// 0084706f  6a0d                 push 0xd
// 00847071  8bc8                 mov ecx, eax
// 00847073  e838dbffff           call 0x844bb0
// 00847078  c21000               ret 0x10
// 0084707b  e860e3ffff           call 0x8453e0
// 00847080  6a11                 push 0x11
// 00847082  8bc8                 mov ecx, eax
// 00847084  e827dbffff           call 0x844bb0
// 00847089  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetItemBackColor@CXTPTreeBase@@MBEKI_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
