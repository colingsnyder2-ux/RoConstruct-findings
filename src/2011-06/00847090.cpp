// from server: 100% by auto
// roc 2011-06 00847090  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847090
//
// 00847090  8a442404             mov al, byte ptr [esp + 4]
// 00847094  a80a                 test al, 0xa
// 00847096  742f                 je 0x8470c7
// 00847098  807c240800           cmp byte ptr [esp + 8], 0
// 0084709d  752f                 jne 0x8470ce
// 0084709f  a808                 test al, 8
// 008470a1  752b                 jne 0x8470ce
// 008470a3  f644240c20           test byte ptr [esp + 0xc], 0x20
// 008470a8  741d                 je 0x8470c7
// 008470aa  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 008470ad  e840571800           call 0x9cc7f2
// 008470b2  85c0                 test eax, eax
// 008470b4  7435                 je 0x8470eb
// 008470b6  e825e3ffff           call 0x8453e0
// 008470bb  6a08                 push 8
// 008470bd  8bc8                 mov ecx, eax
// 008470bf  e8ecdaffff           call 0x844bb0
// 008470c4  c21000               ret 0x10
// 008470c7  8b442410             mov eax, dword ptr [esp + 0x10]
// 008470cb  c21000               ret 0x10
// 008470ce  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 008470d1  e81c571800           call 0x9cc7f2
// 008470d6  85c0                 test eax, eax
// 008470d8  7411                 je 0x8470eb
// 008470da  e801e3ffff           call 0x8453e0
// 008470df  6a0e                 push 0xe
// 008470e1  8bc8                 mov ecx, eax
// 008470e3  e8c8daffff           call 0x844bb0
// 008470e8  c21000               ret 0x10
// 008470eb  e8f0e2ffff           call 0x8453e0
// 008470f0  6a0f                 push 0xf
// 008470f2  8bc8                 mov ecx, eax
// 008470f4  e8b7daffff           call 0x844bb0
// 008470f9  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetItemTextColor@CXTPTreeBase@@MBEKI_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
