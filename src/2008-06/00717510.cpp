// roc 2008-06 00717510  unit: CXTPPropertyGridItemBool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717510
//
// 00717510  56                   push esi
// 00717511  8bf1                 mov esi, ecx
// 00717513  8d8e18010000         lea ecx, [esi + 0x118]
// 00717519  c7068ce38500         mov dword ptr [esi], 0x85e38c
// 0071751f  c746202ce38500       mov dword ptr [esi + 0x20], 0x85e32c
// 00717526  ff15143f8000         call dword ptr [0x803f14]
// 0071752c  8d8e14010000         lea ecx, [esi + 0x114]
// 00717532  ff15143f8000         call dword ptr [0x803f14]
// 00717538  8bce                 mov ecx, esi
// 0071753a  5e                   pop esi
// 0071753b  e9f0c0ffff           jmp 0x713630
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ??1CXTPPropertyGridItemBool@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp
