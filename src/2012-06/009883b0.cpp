// roc 2012-06 009883b0  unit: CXTPPaintManager  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009883b0
//
// 009883b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009883b4  8b542408             mov edx, dword ptr [esp + 8]
// 009883b8  8b4904               mov ecx, dword ptr [ecx + 4]
// 009883bb  50                   push eax
// 009883bc  8b442408             mov eax, dword ptr [esp + 8]
// 009883c0  52                   push edx
// 009883c1  50                   push eax
// 009883c2  51                   push ecx
// 009883c3  ff15c020b200         call dword ptr [0xb220c0]
// 009883c9  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?SetPixel@CDC@@QAEKHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
