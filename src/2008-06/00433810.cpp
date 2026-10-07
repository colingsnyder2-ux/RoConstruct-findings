// roc 2008-06 00433810  unit: CClassTreeView  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433810
//
// 00433810  8b442404             mov eax, dword ptr [esp + 4]
// 00433814  56                   push esi
// 00433815  50                   push eax
// 00433816  8bf1                 mov esi, ecx
// 00433818  e8c5d82600           call 0x6a10e2
// 0043381d  83f8ff               cmp eax, -1
// 00433820  7506                 jne 0x433828
// 00433822  0bc0                 or eax, eax
// 00433824  5e                   pop esi
// 00433825  c20400               ret 4
// 00433828  8b5660               mov edx, dword ptr [esi + 0x60]
// 0043382b  8b4248               mov eax, dword ptr [edx + 0x48]
// 0043382e  8d4e60               lea ecx, [esi + 0x60]
// 00433831  ffd0                 call eax
// 00433833  33c0                 xor eax, eax
// 00433835  5e                   pop esi
// 00433836  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnCreate@CXTShellTreeBaseCTreeView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
