// roc 2008-06 006dd5d0  unit: CRobloxTreeCtrl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dd5d0
//
// 006dd5d0  53                   push ebx
// 006dd5d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006dd5d5  56                   push esi
// 006dd5d6  57                   push edi
// 006dd5d7  8bf9                 mov edi, ecx
// 006dd5d9  8bcb                 mov ecx, ebx
// 006dd5db  e872ed0d00           call 0x7bc352
// 006dd5e0  8bcf                 mov ecx, edi
// 006dd5e2  e829f8ffff           call 0x6dce10
// 006dd5e7  8bf0                 mov esi, eax
// 006dd5e9  85f6                 test esi, esi
// 006dd5eb  7419                 je 0x6dd606
// 006dd5ed  8d4900               lea ecx, [ecx]
// 006dd5f0  56                   push esi
// 006dd5f1  8bcb                 mov ecx, ebx
// 006dd5f3  e830ed0d00           call 0x7bc328
// 006dd5f8  56                   push esi
// 006dd5f9  8bcf                 mov ecx, edi
// 006dd5fb  e860f8ffff           call 0x6dce60
// 006dd600  8bf0                 mov esi, eax
// 006dd602  85f6                 test esi, esi
// 006dd604  75ea                 jne 0x6dd5f0
// 006dd606  5f                   pop edi
// 006dd607  5e                   pop esi
// 006dd608  5b                   pop ebx
// 006dd609  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetSelectedList@CXTTreeBase@@QBEXAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
