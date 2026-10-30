// from server: 100% by auto
// roc 2008-06 00716f60  unit: CXTPPropertyGridToolTip  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716f60
//
// 00716f60  8b542408             mov edx, dword ptr [esp + 8]
// 00716f64  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00716f6a  8b4028               mov eax, dword ptr [eax + 0x28]
// 00716f6d  52                   push edx
// 00716f6e  8b542408             mov edx, dword ptr [esp + 8]
// 00716f72  52                   push edx
// 00716f73  50                   push eax
// 00716f74  e8c7feffff           call 0x716e40
// 00716f79  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AddCategory@CXTPPropertyGridView@@QAEPAVCXTPPropertyGridItem@@PBDPAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
