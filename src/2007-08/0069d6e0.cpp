// roc 2007-08 0069d6e0  unit: CXTPPropertyGridToolTip  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069d6e0
//
// 0069d6e0  8b542408             mov edx, dword ptr [esp + 8]
// 0069d6e4  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0069d6ea  8b4028               mov eax, dword ptr [eax + 0x28]
// 0069d6ed  52                   push edx
// 0069d6ee  8b542408             mov edx, dword ptr [esp + 8]
// 0069d6f2  52                   push edx
// 0069d6f3  50                   push eax
// 0069d6f4  e8c7feffff           call 0x69d5c0
// 0069d6f9  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AddCategory@CXTPPropertyGridView@@QAEPAVCXTPPropertyGridItem@@PBDPAV2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
