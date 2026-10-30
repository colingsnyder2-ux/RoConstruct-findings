// roc 2011-06 00879580  unit: CXTPPropertyGridItemConstraint  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879580
//
// 00879580  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00879583  85c0                 test eax, eax
// 00879585  7503                 jne 0x87958a
// 00879587  33c0                 xor eax, eax
// 00879589  c3                   ret 
// 0087958a  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0087958d  83f9ff               cmp ecx, -1
// 00879590  74f5                 je 0x879587
// 00879592  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00879598  6a00                 push 0
// 0087959a  51                   push ecx
// 0087959b  8bc8                 mov ecx, eax
// 0087959d  e87ec8ffff           call 0x875e20
// 008795a2  8bc8                 mov ecx, eax
// 008795a4  e8e7c4faff           call 0x825a90
// 008795a9  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetImage@CXTPPropertyGridItemConstraint@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
