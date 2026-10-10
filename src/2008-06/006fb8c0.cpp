// roc 2008-06 006fb8c0  unit: CXTPPropertyGrid  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb8c0
//
// 006fb8c0  56                   push esi
// 006fb8c1  57                   push edi
// 006fb8c2  8bf1                 mov esi, ecx
// 006fb8c4  e847ffffff           call 0x6fb810
// 006fb8c9  8b06                 mov eax, dword ptr [esi]
// 006fb8cb  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006fb8d1  6a00                 push 0
// 006fb8d3  8bce                 mov ecx, esi
// 006fb8d5  ffd2                 call edx
// 006fb8d7  8b3e                 mov edi, dword ptr [esi]
// 006fb8d9  8bce                 mov ecx, esi
// 006fb8db  e8a6090c00           call 0x7bc286
// 006fb8e0  50                   push eax
// 006fb8e1  8b8754010000         mov eax, dword ptr [edi + 0x154]
// 006fb8e7  6a01                 push 1
// 006fb8e9  8bce                 mov ecx, esi
// 006fb8eb  ffd0                 call eax
// 006fb8ed  5f                   pop edi
// 006fb8ee  5e                   pop esi
// 006fb8ef  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSortChanged@CXTPPropertyGrid@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
