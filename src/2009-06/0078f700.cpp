// roc 2009-06 0078f700  unit: CXTPPropertyGridToolTip  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078f700
//
// 0078f700  8b542408             mov edx, dword ptr [esp + 8]
// 0078f704  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0078f70a  8b4028               mov eax, dword ptr [eax + 0x28]
// 0078f70d  52                   push edx
// 0078f70e  8b542408             mov edx, dword ptr [esp + 8]
// 0078f712  52                   push edx
// 0078f713  50                   push eax
// 0078f714  e8c7feffff           call 0x78f5e0
// 0078f719  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AddCategory@CXTPPropertyGridView@@QAEPAVCXTPPropertyGridItem@@PBDPAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
