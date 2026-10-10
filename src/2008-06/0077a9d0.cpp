// roc 2008-06 0077a9d0  unit: CXTPPropertyGridInplaceList  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077a9d0
//
// 0077a9d0  56                   push esi
// 0077a9d1  8bf1                 mov esi, ecx
// 0077a9d3  e89062f2ff           call 0x6a0c68
// 0077a9d8  6a00                 push 0
// 0077a9da  e8f1f6f7ff           call 0x6fa0d0
// 0077a9df  8b06                 mov eax, dword ptr [esi]
// 0077a9e1  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 0077a9e7  83c404               add esp, 4
// 0077a9ea  8bce                 mov ecx, esi
// 0077a9ec  ffd2                 call edx
// 0077a9ee  8b06                 mov eax, dword ptr [esi]
// 0077a9f0  8b5068               mov edx, dword ptr [eax + 0x68]
// 0077a9f3  8bce                 mov ecx, esi
// 0077a9f5  ffd2                 call edx
// 0077a9f7  5e                   pop esi
// 0077a9f8  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?OnKillFocus@CXTPPropertyGridInplaceList@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
