// roc 2012-06 009f35d0  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f35d0
//
// 009f35d0  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 009f35d6  8b542404             mov edx, dword ptr [esp + 4]
// 009f35da  8b4028               mov eax, dword ptr [eax + 0x28]
// 009f35dd  52                   push edx
// 009f35de  50                   push eax
// 009f35df  e81cf6ffff           call 0x9f2c00
// 009f35e4  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AddChildItem@CXTPPropertyGridItem@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
