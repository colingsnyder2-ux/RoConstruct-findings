// roc 2009-12 008669a0  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008669a0
//
// 008669a0  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 008669a6  8b542404             mov edx, dword ptr [esp + 4]
// 008669aa  8b4028               mov eax, dword ptr [eax + 0x28]
// 008669ad  52                   push edx
// 008669ae  50                   push eax
// 008669af  e8bcf5ffff           call 0x865f70
// 008669b4  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AddChildItem@CXTPPropertyGridItem@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
