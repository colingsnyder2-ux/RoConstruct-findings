// roc 2009-12 008a9d50  unit: CXTPDockingPaneAutoHidePanel  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9d50
//
// 008a9d50  56                   push esi
// 008a9d51  8bf1                 mov esi, ecx
// 008a9d53  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a9d57  7407                 je 0x8a9d60
// 008a9d59  8b06                 mov eax, dword ptr [esi]
// 008a9d5b  8b5068               mov edx, dword ptr [eax + 0x68]
// 008a9d5e  ffd2                 call edx
// 008a9d60  8bce                 mov ecx, esi
// 008a9d62  5e                   pop esi
// 008a9d63  e902a3f4ff           jmp 0x7f406a
// copied from an identical function in another client (function ?OnFinalRelease@CXTPReportInplaceButton@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp