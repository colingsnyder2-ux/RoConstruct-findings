// from server: 100% by auto
// roc 2011-06 008d8f60  unit: CXTPTabPaintManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d8f60
//
// 008d8f60  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8f64  83f8ff               cmp eax, -1
// 008d8f67  741b                 je 0x8d8f84
// 008d8f69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d8f6d  8b542408             mov edx, dword ptr [esp + 8]
// 008d8f71  50                   push eax
// 008d8f72  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8f76  6a01                 push 1
// 008d8f78  50                   push eax
// 008d8f79  51                   push ecx
// 008d8f7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8f7e  52                   push edx
// 008d8f7f  e852360f00           call 0x9cc5d6
// 008d8f84  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?HorizontalLine@@YAXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
