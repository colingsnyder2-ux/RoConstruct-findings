// roc 2009-12 0086a720  unit: CXTPPropertyGridToolTip  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a720
//
// 0086a720  8b542408             mov edx, dword ptr [esp + 8]
// 0086a724  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0086a72a  8b4028               mov eax, dword ptr [eax + 0x28]
// 0086a72d  52                   push edx
// 0086a72e  8b542408             mov edx, dword ptr [esp + 8]
// 0086a732  52                   push edx
// 0086a733  50                   push eax
// 0086a734  e8c7feffff           call 0x86a600
// 0086a739  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AddCategory@CXTPPropertyGridView@@QAEPAVCXTPPropertyGridItem@@PBDPAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
