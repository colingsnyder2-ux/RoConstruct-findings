// roc 2008-06 007131c0  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007131c0
//
// 007131c0  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 007131c6  8b542404             mov edx, dword ptr [esp + 4]
// 007131ca  8b4028               mov eax, dword ptr [eax + 0x28]
// 007131cd  52                   push edx
// 007131ce  50                   push eax
// 007131cf  e8bcf5ffff           call 0x712790
// 007131d4  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AddChildItem@CXTPPropertyGridItem@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
