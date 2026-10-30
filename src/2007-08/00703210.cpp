// from server: 100% by auto
// roc 2007-08 00703210  unit: CXTPTabPaintManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703210
//
// 00703210  8b442414             mov eax, dword ptr [esp + 0x14]
// 00703214  83f8ff               cmp eax, -1
// 00703217  741b                 je 0x703234
// 00703219  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070321d  8b542408             mov edx, dword ptr [esp + 8]
// 00703221  50                   push eax
// 00703222  8b442414             mov eax, dword ptr [esp + 0x14]
// 00703226  50                   push eax
// 00703227  6a01                 push 1
// 00703229  51                   push ecx
// 0070322a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070322e  52                   push edx
// 0070322f  e896510300           call 0x7383ca
// 00703234  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?VerticalLine@@YAXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
