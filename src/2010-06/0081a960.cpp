// roc 2010-06 0081a960  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081a960
//
// 0081a960  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0081a966  8b542404             mov edx, dword ptr [esp + 4]
// 0081a96a  8b4028               mov eax, dword ptr [eax + 0x28]
// 0081a96d  52                   push edx
// 0081a96e  50                   push eax
// 0081a96f  e8bcf5ffff           call 0x819f30
// 0081a974  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AddChildItem@CXTPPropertyGridItem@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
