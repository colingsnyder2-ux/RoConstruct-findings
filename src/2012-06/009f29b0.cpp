// roc 2012-06 009f29b0  unit: CXTPPropertyGridItemConstraint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f29b0
//
// 009f29b0  56                   push esi
// 009f29b1  8bf1                 mov esi, ecx
// 009f29b3  8d4e20               lea ecx, [esi + 0x20]
// 009f29b6  ff15d047b200         call dword ptr [0xb247d0]
// 009f29bc  8bce                 mov ecx, esi
// 009f29be  e8a902f9ff           call 0x982c6c
// 009f29c3  f644240801           test byte ptr [esp + 8], 1
// 009f29c8  7409                 je 0x9f29d3
// 009f29ca  56                   push esi
// 009f29cb  e844f7f8ff           call 0x982114
// 009f29d0  83c404               add esp, 4
// 009f29d3  8bc6                 mov eax, esi
// 009f29d5  5e                   pop esi
// 009f29d6  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ??_GCXTPPropertyGridVerb@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
