// roc 2008-06 007018a0  unit: CXTPTabClientWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007018a0
//
// 007018a0  56                   push esi
// 007018a1  8bf1                 mov esi, ecx
// 007018a3  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 007018a9  57                   push edi
// 007018aa  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007018ae  3bcf                 cmp ecx, edi
// 007018b0  741a                 je 0x7018cc
// 007018b2  85c9                 test ecx, ecx
// 007018b4  7407                 je 0x7018bd
// 007018b6  6a00                 push 0
// 007018b8  e893960700           call 0x77af50
// 007018bd  6a01                 push 1
// 007018bf  8bcf                 mov ecx, edi
// 007018c1  89be98000000         mov dword ptr [esi + 0x98], edi
// 007018c7  e884960700           call 0x77af50
// 007018cc  5f                   pop edi
// 007018cd  5e                   pop esi
// 007018ce  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetActiveWorkspace@CXTPTabClientWnd@@IAEXPAVCWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
