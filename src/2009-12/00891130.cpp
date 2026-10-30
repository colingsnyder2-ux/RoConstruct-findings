// roc 2009-12 00891130  unit: ATL::CRegObject  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891130
//
// 00891130  56                   push esi
// 00891131  8bf1                 mov esi, ecx
// 00891133  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00891136  8d44240c             lea eax, [esp + 0xc]
// 0089113a  50                   push eax
// 0089113b  51                   push ecx
// 0089113c  ff1554cc9800         call dword ptr [0x98cc54]
// 00891142  8b442410             mov eax, dword ptr [esp + 0x10]
// 00891146  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00891149  8b11                 mov edx, dword ptr [ecx]
// 0089114b  8b5268               mov edx, dword ptr [edx + 0x68]
// 0089114e  50                   push eax
// 0089114f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00891153  50                   push eax
// 00891154  6a00                 push 0
// 00891156  ffd2                 call edx
// 00891158  5e                   pop esi
// 00891159  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPDockBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockBar.cpp