// roc 2012-06 00a4dcf0  unit: CXTPTabPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4dcf0
//
// 00a4dcf0  8b442404             mov eax, dword ptr [esp + 4]
// 00a4dcf4  8b08                 mov ecx, dword ptr [eax]
// 00a4dcf6  8b542408             mov edx, dword ptr [esp + 8]
// 00a4dcfa  8b02                 mov eax, dword ptr [edx]
// 00a4dcfc  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00a4dcff  2b4820               sub ecx, dword ptr [eax + 0x20]
// 00a4dd02  8bc1                 mov eax, ecx
// 00a4dd04  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?_SizeToFitCompare@CXTPTabPaintManager@@KAHPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
