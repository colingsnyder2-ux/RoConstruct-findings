// roc 2008-06 0077d660  unit: CXTPTabPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d660
//
// 0077d660  8b442404             mov eax, dword ptr [esp + 4]
// 0077d664  8b08                 mov ecx, dword ptr [eax]
// 0077d666  8b542408             mov edx, dword ptr [esp + 8]
// 0077d66a  8b02                 mov eax, dword ptr [edx]
// 0077d66c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0077d66f  2b4820               sub ecx, dword ptr [eax + 0x20]
// 0077d672  8bc1                 mov eax, ecx
// 0077d674  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?_SizeToFitCompare@CXTPTabPaintManager@@KAHPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
