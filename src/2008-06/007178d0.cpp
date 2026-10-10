// roc 2008-06 007178d0  unit: CXTPPropertyGridItemEnum  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007178d0
//
// 007178d0  56                   push esi
// 007178d1  8bf1                 mov esi, ecx
// 007178d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007178d7  8b06                 mov eax, dword ptr [esi]
// 007178d9  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 007178df  51                   push ecx
// 007178e0  8bce                 mov ecx, esi
// 007178e2  ffd2                 call edx
// 007178e4  8d86a4000000         lea eax, [esi + 0xa4]
// 007178ea  50                   push eax
// 007178eb  8d8ea8000000         lea ecx, [esi + 0xa8]
// 007178f1  c7868c00000005000000 mov dword ptr [esi + 0x8c], 5
// 007178fb  c7467c01000000       mov dword ptr [esi + 0x7c], 1
// 00717902  ff1544318000         call dword ptr [0x803144]
// 00717908  5e                   pop esi
// 00717909  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?_Init@CXTPPropertyGridItemEnum@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp
