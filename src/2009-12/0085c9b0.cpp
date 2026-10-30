// roc 2009-12 0085c9b0  unit: CXTPDockingPane  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c9b0
//
// 0085c9b0  51                   push ecx
// 0085c9b1  56                   push esi
// 0085c9b2  8db1c0000000         lea esi, [ecx + 0xc0]
// 0085c9b8  6a00                 push 0
// 0085c9ba  6a0a                 push 0xa
// 0085c9bc  8bce                 mov ecx, esi
// 0085c9be  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0085c9c6  ff1580d69800         call dword ptr [0x98d680]
// 0085c9cc  83f8ff               cmp eax, -1
// 0085c9cf  7514                 jne 0x85c9e5
// 0085c9d1  56                   push esi
// 0085c9d2  8b742410             mov esi, dword ptr [esp + 0x10]
// 0085c9d6  8bce                 mov ecx, esi
// 0085c9d8  ff1594de9800         call dword ptr [0x98de94]
// 0085c9de  8bc6                 mov eax, esi
// 0085c9e0  5e                   pop esi
// 0085c9e1  59                   pop ecx
// 0085c9e2  c20400               ret 4
// 0085c9e5  57                   push edi
// 0085c9e6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085c9ea  40                   inc eax
// 0085c9eb  50                   push eax
// 0085c9ec  57                   push edi
// 0085c9ed  8bce                 mov ecx, esi
// 0085c9ef  ff157cd69800         call dword ptr [0x98d67c]
// 0085c9f5  8bc7                 mov eax, edi
// 0085c9f7  5f                   pop edi
// 0085c9f8  5e                   pop esi
// 0085c9f9  59                   pop ecx
// 0085c9fa  c20400               ret 4
// copied from an identical function in another client (function ?GetShortTitle@CXTPDockingPane@@UBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp