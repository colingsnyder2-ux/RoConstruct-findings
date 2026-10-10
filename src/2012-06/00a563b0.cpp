// roc 2012-06 00a563b0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a563b0
//
// 00a563b0  56                   push esi
// 00a563b1  8bf1                 mov esi, ecx
// 00a563b3  8d4e54               lea ecx, [esi + 0x54]
// 00a563b6  c706fc34c200         mov dword ptr [esi], 0xc234fc
// 00a563bc  ff15d047b200         call dword ptr [0xb247d0]
// 00a563c2  8d4e48               lea ecx, [esi + 0x48]
// 00a563c5  ff15d047b200         call dword ptr [0xb247d0]
// 00a563cb  8bce                 mov ecx, esi
// 00a563cd  5e                   pop esi
// 00a563ce  e999c8f2ff           jmp 0x982c6c
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ??1CXTPPropertyGridInplaceButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
