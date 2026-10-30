// roc 2009-06 0078b990  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078b990
//
// 0078b990  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0078b996  8b542404             mov edx, dword ptr [esp + 4]
// 0078b99a  8b4028               mov eax, dword ptr [eax + 0x28]
// 0078b99d  52                   push edx
// 0078b99e  50                   push eax
// 0078b99f  e8bcf5ffff           call 0x78af60
// 0078b9a4  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AddChildItem@CXTPPropertyGridItem@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
