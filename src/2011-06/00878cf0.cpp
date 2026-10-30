// roc 2011-06 00878cf0  unit: CXTPPropertyGridToolTip  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878cf0
//
// 00878cf0  8b542408             mov edx, dword ptr [esp + 8]
// 00878cf4  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00878cfa  8b4028               mov eax, dword ptr [eax + 0x28]
// 00878cfd  52                   push edx
// 00878cfe  8b542408             mov edx, dword ptr [esp + 8]
// 00878d02  52                   push edx
// 00878d03  50                   push eax
// 00878d04  e8c7feffff           call 0x878bd0
// 00878d09  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AddCategory@CXTPPropertyGridView@@QAEPAVCXTPPropertyGridItem@@PBDPAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
