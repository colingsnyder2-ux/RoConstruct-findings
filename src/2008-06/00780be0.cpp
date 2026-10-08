// from server: 100% by auto
// roc 2008-06 00780be0  unit: CXTPTabPaintManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00780be0
//
// 00780be0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00780be4  83f8ff               cmp eax, -1
// 00780be7  741b                 je 0x780c04
// 00780be9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780bed  8b542408             mov edx, dword ptr [esp + 8]
// 00780bf1  50                   push eax
// 00780bf2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00780bf6  50                   push eax
// 00780bf7  6a01                 push 1
// 00780bf9  51                   push ecx
// 00780bfa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00780bfe  52                   push edx
// 00780bff  e83cb40300           call 0x7bc040
// 00780c04  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?VerticalLine@@YAXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
