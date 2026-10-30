// roc 2009-12 0085abc0  unit: CXTPStatusBarPane  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085abc0
//
// 0085abc0  56                   push esi
// 0085abc1  8bf1                 mov esi, ecx
// 0085abc3  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0085abc6  57                   push edi
// 0085abc7  e8d4fdffff           call 0x85a9a0
// 0085abcc  85c0                 test eax, eax
// 0085abce  7432                 je 0x85ac02
// 0085abd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085abd4  8b38                 mov edi, dword ptr [eax]
// 0085abd6  56                   push esi
// 0085abd7  83ec10               sub esp, 0x10
// 0085abda  8bd4                 mov edx, esp
// 0085abdc  890a                 mov dword ptr [edx], ecx
// 0085abde  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085abe2  894a04               mov dword ptr [edx + 4], ecx
// 0085abe5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085abe9  894a08               mov dword ptr [edx + 8], ecx
// 0085abec  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085abf0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0085abf3  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085abf7  8bc8                 mov ecx, eax
// 0085abf9  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 0085abff  52                   push edx
// 0085ac00  ffd0                 call eax
// 0085ac02  5f                   pop edi
// 0085ac03  5e                   pop esi
// 0085ac04  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDraw@CXTPStatusBarPane@@MAEXPAVCDC@@VCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp