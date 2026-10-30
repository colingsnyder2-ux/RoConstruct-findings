// roc 2009-12 0085b900  unit: CXTPStatusBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b900
//
// 0085b900  83ec10               sub esp, 0x10
// 0085b903  56                   push esi
// 0085b904  8bf1                 mov esi, ecx
// 0085b906  85f6                 test esi, esi
// 0085b908  742d                 je 0x85b937
// 0085b90a  8b4650               mov eax, dword ptr [esi + 0x50]
// 0085b90d  85c0                 test eax, eax
// 0085b90f  7426                 je 0x85b937
// 0085b911  83782000             cmp dword ptr [eax + 0x20], 0
// 0085b915  7420                 je 0x85b937
// 0085b917  837e3400             cmp dword ptr [esi + 0x34], 0
// 0085b91b  741a                 je 0x85b937
// 0085b91d  8d442404             lea eax, [esp + 4]
// 0085b921  50                   push eax
// 0085b922  e819ffffff           call 0x85b840
// 0085b927  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0085b92a  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0085b92d  6a01                 push 1
// 0085b92f  50                   push eax
// 0085b930  52                   push edx
// 0085b931  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0085b937  5e                   pop esi
// 0085b938  83c410               add esp, 0x10
// 0085b93b  c3                   ret 
// copied from an identical function in another client (function ?Redraw@CXTPStatusBarPane@@QBEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp