// from server: 100% by auto
// roc 2011-06 00848730  unit: CRobloxTreeCtrl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848730
//
// 00848730  53                   push ebx
// 00848731  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00848735  56                   push esi
// 00848736  57                   push edi
// 00848737  8bf9                 mov edi, ecx
// 00848739  8bcb                 mov ecx, ebx
// 0084873b  e84e411800           call 0x9cc88e
// 00848740  8bcf                 mov ecx, edi
// 00848742  e829f8ffff           call 0x847f70
// 00848747  8bf0                 mov esi, eax
// 00848749  85f6                 test esi, esi
// 0084874b  7419                 je 0x848766
// 0084874d  8d4900               lea ecx, [ecx]
// 00848750  56                   push esi
// 00848751  8bcb                 mov ecx, ebx
// 00848753  e80c411800           call 0x9cc864
// 00848758  56                   push esi
// 00848759  8bcf                 mov ecx, edi
// 0084875b  e860f8ffff           call 0x847fc0
// 00848760  8bf0                 mov esi, eax
// 00848762  85f6                 test esi, esi
// 00848764  75ea                 jne 0x848750
// 00848766  5f                   pop edi
// 00848767  5e                   pop esi
// 00848768  5b                   pop ebx
// 00848769  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetSelectedList@CXTPTreeBase@@QBEXAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
