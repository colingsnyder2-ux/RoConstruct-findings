// roc 2007-08 00666820  unit: CRobloxTreeCtrl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666820
//
// 00666820  53                   push ebx
// 00666821  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00666825  56                   push esi
// 00666826  57                   push edi
// 00666827  8bf9                 mov edi, ecx
// 00666829  8bcb                 mov ecx, ebx
// 0066682b  e8401e0d00           call 0x738670
// 00666830  8bcf                 mov ecx, edi
// 00666832  e839f8ffff           call 0x666070
// 00666837  8bf0                 mov esi, eax
// 00666839  85f6                 test esi, esi
// 0066683b  7419                 je 0x666856
// 0066683d  8d4900               lea ecx, [ecx]
// 00666840  56                   push esi
// 00666841  8bcb                 mov ecx, ebx
// 00666843  e8fe1d0d00           call 0x738646
// 00666848  56                   push esi
// 00666849  8bcf                 mov ecx, edi
// 0066684b  e870f8ffff           call 0x6660c0
// 00666850  8bf0                 mov esi, eax
// 00666852  85f6                 test esi, esi
// 00666854  75ea                 jne 0x666840
// 00666856  5f                   pop edi
// 00666857  5e                   pop esi
// 00666858  5b                   pop ebx
// 00666859  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetSelectedList@CXTTreeBase@@QBEXAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
