// roc 2008-06 006fb910  unit: CXTPPropertyGrid  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb910
//
// 006fb910  56                   push esi
// 006fb911  8bf1                 mov esi, ecx
// 006fb913  e898eaffff           call 0x6fa3b0
// 006fb918  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 006fb91e  6a01                 push 1
// 006fb920  6a01                 push 1
// 006fb922  50                   push eax
// 006fb923  8bce                 mov ecx, esi
// 006fb925  e886eaffff           call 0x6fa3b0
// 006fb92a  8bc8                 mov ecx, eax
// 006fb92c  e89fb20100           call 0x716bd0
// 006fb931  5e                   pop esi
// 006fb932  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Refresh@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
