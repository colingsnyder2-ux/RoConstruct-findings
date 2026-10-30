// roc 2009-12 0085c7d0  unit: CXTPDockingPane  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c7d0
//
// 0085c7d0  56                   push esi
// 0085c7d1  8b742408             mov esi, dword ptr [esp + 8]
// 0085c7d5  57                   push edi
// 0085c7d6  8bf9                 mov edi, ecx
// 0085c7d8  85f6                 test esi, esi
// 0085c7da  7417                 je 0x85c7f3
// 0085c7dc  8d4f20               lea ecx, [edi + 0x20]
// 0085c7df  e85c400500           call 0x8b0840
// 0085c7e4  8b10                 mov edx, dword ptr [eax]
// 0085c7e6  57                   push edi
// 0085c7e7  8bc8                 mov ecx, eax
// 0085c7e9  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0085c7ef  6a01                 push 1
// 0085c7f1  ffd0                 call eax
// 0085c7f3  8bbfb4000000         mov edi, dword ptr [edi + 0xb4]
// 0085c7f9  85ff                 test edi, edi
// 0085c7fb  740f                 je 0x85c80c
// 0085c7fd  f7de                 neg esi
// 0085c7ff  1bf6                 sbb esi, esi
// 0085c801  83e605               and esi, 5
// 0085c804  56                   push esi
// 0085c805  57                   push edi
// 0085c806  ff1598ca9800         call dword ptr [0x98ca98]
// 0085c80c  5f                   pop edi
// 0085c80d  5e                   pop esi
// 0085c80e  c20400               ret 4
// copied from an identical function in another client (function ?ShowWindow@CXTPDockingPane@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp