// roc 2012-06 009f1270  unit: CXTPPropertyGridToolTip  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1270
//
// 009f1270  8b542408             mov edx, dword ptr [esp + 8]
// 009f1274  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 009f127a  8b4028               mov eax, dword ptr [eax + 0x28]
// 009f127d  52                   push edx
// 009f127e  8b542408             mov edx, dword ptr [esp + 8]
// 009f1282  52                   push edx
// 009f1283  50                   push eax
// 009f1284  e8c7feffff           call 0x9f1150
// 009f1289  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AddCategory@CXTPPropertyGridView@@QAEPAVCXTPPropertyGridItem@@PBDPAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
