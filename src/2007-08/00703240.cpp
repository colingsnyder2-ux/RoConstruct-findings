// from server: 100% by auto
// roc 2007-08 00703240  unit: CXTPTabPaintManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703240
//
// 00703240  8b442414             mov eax, dword ptr [esp + 0x14]
// 00703244  83f8ff               cmp eax, -1
// 00703247  741b                 je 0x703264
// 00703249  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070324d  8b542408             mov edx, dword ptr [esp + 8]
// 00703251  50                   push eax
// 00703252  8b442414             mov eax, dword ptr [esp + 0x14]
// 00703256  6a01                 push 1
// 00703258  50                   push eax
// 00703259  51                   push ecx
// 0070325a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070325e  52                   push edx
// 0070325f  e866510300           call 0x7383ca
// 00703264  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?HorizontalLine@@YAXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
