// roc 2008-06 006fa3b0  unit: CXTPPrintingDialog  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa3b0
//
// 006fa3b0  56                   push esi
// 006fa3b1  8bf1                 mov esi, ecx
// 006fa3b3  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 006fa3ba  7516                 jne 0x6fa3d2
// 006fa3bc  8b06                 mov eax, dword ptr [esi]
// 006fa3be  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 006fa3c4  ffd2                 call edx
// 006fa3c6  89864c010000         mov dword ptr [esi + 0x14c], eax
// 006fa3cc  89b0b0000000         mov dword ptr [eax + 0xb0], esi
// 006fa3d2  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 006fa3d8  5e                   pop esi
// 006fa3d9  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetGridView@CXTPPropertyGrid@@QBEAAVCXTPPropertyGridView@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
