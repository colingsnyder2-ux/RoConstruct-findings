// roc 2012-06 009e2c10  unit: CXTPPropertyGrid  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2c10
//
// 009e2c10  56                   push esi
// 009e2c11  57                   push edi
// 009e2c12  8bf1                 mov esi, ecx
// 009e2c14  e847ffffff           call 0x9e2b60
// 009e2c19  8b06                 mov eax, dword ptr [esi]
// 009e2c1b  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 009e2c21  6a00                 push 0
// 009e2c23  8bce                 mov ecx, esi
// 009e2c25  ffd2                 call edx
// 009e2c27  8b3e                 mov edi, dword ptr [esi]
// 009e2c29  8bce                 mov ecx, esi
// 009e2c2b  e8a06b0b00           call 0xa997d0
// 009e2c30  50                   push eax
// 009e2c31  8b8754010000         mov eax, dword ptr [edi + 0x154]
// 009e2c37  6a01                 push 1
// 009e2c39  8bce                 mov ecx, esi
// 009e2c3b  ffd0                 call eax
// 009e2c3d  5f                   pop edi
// 009e2c3e  5e                   pop esi
// 009e2c3f  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSortChanged@CXTPPropertyGrid@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
