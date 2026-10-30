// from server: 100% by auto
// roc 2011-06 008d8f30  unit: CXTPTabPaintManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d8f30
//
// 008d8f30  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8f34  83f8ff               cmp eax, -1
// 008d8f37  741b                 je 0x8d8f54
// 008d8f39  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d8f3d  8b542408             mov edx, dword ptr [esp + 8]
// 008d8f41  50                   push eax
// 008d8f42  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8f46  50                   push eax
// 008d8f47  6a01                 push 1
// 008d8f49  51                   push ecx
// 008d8f4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8f4e  52                   push edx
// 008d8f4f  e882360f00           call 0x9cc5d6
// 008d8f54  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?VerticalLine@@YAXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
