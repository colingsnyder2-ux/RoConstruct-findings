// from server: 100% by auto
// roc 2011-06 008644a0  unit: CXTPTabClientWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008644a0
//
// 008644a0  56                   push esi
// 008644a1  8bf1                 mov esi, ecx
// 008644a3  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 008644a9  57                   push edi
// 008644aa  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008644ae  3bcf                 cmp ecx, edi
// 008644b0  741a                 je 0x8644cc
// 008644b2  85c9                 test ecx, ecx
// 008644b4  7407                 je 0x8644bd
// 008644b6  6a00                 push 0
// 008644b8  e883ee0600           call 0x8d3340
// 008644bd  6a01                 push 1
// 008644bf  8bcf                 mov ecx, edi
// 008644c1  89be98000000         mov dword ptr [esi + 0x98], edi
// 008644c7  e874ee0600           call 0x8d3340
// 008644cc  5f                   pop edi
// 008644cd  5e                   pop esi
// 008644ce  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetActiveWorkspace@CXTPTabClientWnd@@IAEXPAVCWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
