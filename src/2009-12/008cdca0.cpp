// roc 2009-12 008cdca0  unit: CXTPPropertyGridInplaceList  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cdca0
//
// 008cdca0  56                   push esi
// 008cdca1  8bf1                 mov esi, ecx
// 008cdca3  e88861f2ff           call 0x7f3e30
// 008cdca8  6a00                 push 0
// 008cdcaa  e8f1faf7ff           call 0x84d7a0
// 008cdcaf  8b06                 mov eax, dword ptr [esi]
// 008cdcb1  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008cdcb7  83c404               add esp, 4
// 008cdcba  8bce                 mov ecx, esi
// 008cdcbc  ffd2                 call edx
// 008cdcbe  8b06                 mov eax, dword ptr [esi]
// 008cdcc0  8b5068               mov edx, dword ptr [eax + 0x68]
// 008cdcc3  8bce                 mov ecx, esi
// 008cdcc5  ffd2                 call edx
// 008cdcc7  5e                   pop esi
// 008cdcc8  c20400               ret 4
// copied from an identical function in another client (function ?OnKillFocus@CXTPPropertyGridInplaceList@@IAEXPAVCWnd@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp