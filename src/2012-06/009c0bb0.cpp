// roc 2012-06 009c0bb0  unit: CRobloxTreeCtrl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0bb0
//
// 009c0bb0  53                   push ebx
// 009c0bb1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009c0bb5  56                   push esi
// 009c0bb6  57                   push edi
// 009c0bb7  8bf9                 mov edi, ecx
// 009c0bb9  8bcb                 mov ecx, ebx
// 009c0bbb  e8888c0d00           call 0xa99848
// 009c0bc0  8bcf                 mov ecx, edi
// 009c0bc2  e829f8ffff           call 0x9c03f0
// 009c0bc7  8bf0                 mov esi, eax
// 009c0bc9  85f6                 test esi, esi
// 009c0bcb  7419                 je 0x9c0be6
// 009c0bcd  8d4900               lea ecx, [ecx]
// 009c0bd0  56                   push esi
// 009c0bd1  8bcb                 mov ecx, ebx
// 009c0bd3  e8468c0d00           call 0xa9981e
// 009c0bd8  56                   push esi
// 009c0bd9  8bcf                 mov ecx, edi
// 009c0bdb  e860f8ffff           call 0x9c0440
// 009c0be0  8bf0                 mov esi, eax
// 009c0be2  85f6                 test esi, esi
// 009c0be4  75ea                 jne 0x9c0bd0
// 009c0be6  5f                   pop edi
// 009c0be7  5e                   pop esi
// 009c0be8  5b                   pop ebx
// 009c0be9  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetSelectedList@CXTPTreeBase@@QBEXAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
