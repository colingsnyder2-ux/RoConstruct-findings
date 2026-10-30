// from server: 100% by auto
// roc 2008-06 00780c10  unit: CXTPTabPaintManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00780c10
//
// 00780c10  8b442414             mov eax, dword ptr [esp + 0x14]
// 00780c14  83f8ff               cmp eax, -1
// 00780c17  741b                 je 0x780c34
// 00780c19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780c1d  8b542408             mov edx, dword ptr [esp + 8]
// 00780c21  50                   push eax
// 00780c22  8b442414             mov eax, dword ptr [esp + 0x14]
// 00780c26  6a01                 push 1
// 00780c28  50                   push eax
// 00780c29  51                   push ecx
// 00780c2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00780c2e  52                   push edx
// 00780c2f  e80cb40300           call 0x7bc040
// 00780c34  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?HorizontalLine@@YAXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
