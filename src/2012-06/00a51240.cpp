// from server: 100% by auto
// roc 2012-06 00a51240  unit: CXTPTabPaintManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a51240
//
// 00a51240  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a51244  83f8ff               cmp eax, -1
// 00a51247  741b                 je 0xa51264
// 00a51249  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5124d  8b542408             mov edx, dword ptr [esp + 8]
// 00a51251  50                   push eax
// 00a51252  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a51256  50                   push eax
// 00a51257  6a01                 push 1
// 00a51259  51                   push ecx
// 00a5125a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5125e  52                   push edx
// 00a5125f  e82c830400           call 0xa99590
// 00a51264  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?VerticalLine@@YAXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
