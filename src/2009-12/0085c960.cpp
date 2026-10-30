// roc 2009-12 0085c960  unit: CXTPDockingPane  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c960
//
// 0085c960  51                   push ecx
// 0085c961  56                   push esi
// 0085c962  8db1c0000000         lea esi, [ecx + 0xc0]
// 0085c968  6a00                 push 0
// 0085c96a  6a0a                 push 0xa
// 0085c96c  8bce                 mov ecx, esi
// 0085c96e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0085c976  ff1580d69800         call dword ptr [0x98d680]
// 0085c97c  83f8ff               cmp eax, -1
// 0085c97f  7514                 jne 0x85c995
// 0085c981  56                   push esi
// 0085c982  8b742410             mov esi, dword ptr [esp + 0x10]
// 0085c986  8bce                 mov ecx, esi
// 0085c988  ff1594de9800         call dword ptr [0x98de94]
// 0085c98e  8bc6                 mov eax, esi
// 0085c990  5e                   pop esi
// 0085c991  59                   pop ecx
// 0085c992  c20400               ret 4
// 0085c995  57                   push edi
// 0085c996  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085c99a  50                   push eax
// 0085c99b  57                   push edi
// 0085c99c  8bce                 mov ecx, esi
// 0085c99e  ff1544cf9800         call dword ptr [0x98cf44]
// 0085c9a4  8bc7                 mov eax, edi
// 0085c9a6  5f                   pop edi
// 0085c9a7  5e                   pop esi
// 0085c9a8  59                   pop ecx
// 0085c9a9  c20400               ret 4
// copied from an identical function in another client (function ?GetTitle@CXTPDockingPane@@UBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp