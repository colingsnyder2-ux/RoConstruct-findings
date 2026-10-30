// from server: 100% by auto
// roc 2011-06 0087a3d0  unit: CPropertyGridItemBrickColor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a3d0
//
// 0087a3d0  56                   push esi
// 0087a3d1  8d44240c             lea eax, [esp + 0xc]
// 0087a3d5  50                   push eax
// 0087a3d6  8bf1                 mov esi, ecx
// 0087a3d8  e8536ffdff           call 0x851330
// 0087a3dd  85c0                 test eax, eax
// 0087a3df  7409                 je 0x87a3ea
// 0087a3e1  b857000780           mov eax, 0x80070057
// 0087a3e6  5e                   pop esi
// 0087a3e7  c21400               ret 0x14
// 0087a3ea  8d4ee0               lea ecx, [esi - 0x20]
// 0087a3ed  e83ef4ffff           call 0x879830
// 0087a3f2  33c0                 xor eax, eax
// 0087a3f4  5e                   pop esi
// 0087a3f5  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AccessibleSelect@CXTPPropertyGridItem@@MAEJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
