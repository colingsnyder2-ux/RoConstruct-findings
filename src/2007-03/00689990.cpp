// roc 2007-03 00689990  unit: seg_00680000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00689990
//
// 00689990  8b542408             mov edx, dword ptr [esp + 8]
// 00689994  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0068999a  8b4028               mov eax, dword ptr [eax + 0x28]
// 0068999d  52                   push edx
// 0068999e  8b542408             mov edx, dword ptr [esp + 8]
// 006899a2  52                   push edx
// 006899a3  50                   push eax
// 006899a4  e8c7feffff           call 0x689870
// 006899a9  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AddCategory@CXTPPropertyGridView@@QAEPAVCXTPPropertyGridItem@@PBDPAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
