// from server: 100% by auto
// roc 2012-06 00a51270  unit: CXTPTabPaintManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a51270
//
// 00a51270  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a51274  83f8ff               cmp eax, -1
// 00a51277  741b                 je 0xa51294
// 00a51279  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5127d  8b542408             mov edx, dword ptr [esp + 8]
// 00a51281  50                   push eax
// 00a51282  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a51286  6a01                 push 1
// 00a51288  50                   push eax
// 00a51289  51                   push ecx
// 00a5128a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5128e  52                   push edx
// 00a5128f  e8fc820400           call 0xa99590
// 00a51294  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?HorizontalLine@@YAXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
