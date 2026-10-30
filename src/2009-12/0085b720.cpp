// roc 2009-12 0085b720  unit: CXTPStatusBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b720
//
// 0085b720  8b442408             mov eax, dword ptr [esp + 8]
// 0085b724  56                   push esi
// 0085b725  50                   push eax
// 0085b726  e8d5fbffff           call 0x85b300
// 0085b72b  85c0                 test eax, eax
// 0085b72d  742e                 je 0x85b75d
// 0085b72f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085b733  8b30                 mov esi, dword ptr [eax]
// 0085b735  83ec10               sub esp, 0x10
// 0085b738  8bd4                 mov edx, esp
// 0085b73a  890a                 mov dword ptr [edx], ecx
// 0085b73c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085b740  894a04               mov dword ptr [edx + 4], ecx
// 0085b743  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085b747  894a08               mov dword ptr [edx + 8], ecx
// 0085b74a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085b74e  894a0c               mov dword ptr [edx + 0xc], ecx
// 0085b751  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085b755  8bc8                 mov ecx, eax
// 0085b757  8b4660               mov eax, dword ptr [esi + 0x60]
// 0085b75a  52                   push edx
// 0085b75b  ffd0                 call eax
// 0085b75d  5e                   pop esi
// 0085b75e  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawPaneEntry@CXTPStatusBar@@UAEXPAVCDC@@HVCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp