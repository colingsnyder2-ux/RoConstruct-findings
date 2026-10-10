// roc 2008-06 00772f70  unit: CXTPControlCustom  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772f70
//
// 00772f70  56                   push esi
// 00772f71  8bf1                 mov esi, ecx
// 00772f73  8d4e54               lea ecx, [esi + 0x54]
// 00772f76  c70604868600         mov dword ptr [esi], 0x868604
// 00772f7c  ff15143f8000         call dword ptr [0x803f14]
// 00772f82  8d4e48               lea ecx, [esi + 0x48]
// 00772f85  ff15143f8000         call dword ptr [0x803f14]
// 00772f8b  8bce                 mov ecx, esi
// 00772f8d  5e                   pop esi
// 00772f8e  e9a3e1f2ff           jmp 0x6a1136
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ??1CXTPPropertyGridInplaceButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
