// roc 2011-06 0087b030  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087b030
//
// 0087b030  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0087b036  8b542404             mov edx, dword ptr [esp + 4]
// 0087b03a  8b4028               mov eax, dword ptr [eax + 0x28]
// 0087b03d  52                   push edx
// 0087b03e  50                   push eax
// 0087b03f  e81cf6ffff           call 0x87a660
// 0087b044  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AddChildItem@CXTPPropertyGridItem@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
