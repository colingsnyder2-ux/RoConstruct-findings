// roc 2009-12 0084da80  unit: CXTPPrintingDialog  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084da80
//
// 0084da80  56                   push esi
// 0084da81  8bf1                 mov esi, ecx
// 0084da83  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 0084da8a  7516                 jne 0x84daa2
// 0084da8c  8b06                 mov eax, dword ptr [esi]
// 0084da8e  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0084da94  ffd2                 call edx
// 0084da96  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0084da9c  89b0b0000000         mov dword ptr [eax + 0xb0], esi
// 0084daa2  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0084daa8  5e                   pop esi
// 0084daa9  c3                   ret 
// copied from an identical function in another client (function ?GetGridView@CXTPPropertyGrid@@QBEAAVCXTPPropertyGridView@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp