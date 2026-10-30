// from server: 100% by auto
// roc 2012-06 009dc890  unit: CXTPTabClientWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc890
//
// 009dc890  56                   push esi
// 009dc891  8bf1                 mov esi, ecx
// 009dc893  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 009dc899  57                   push edi
// 009dc89a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009dc89e  3bcf                 cmp ecx, edi
// 009dc8a0  741a                 je 0x9dc8bc
// 009dc8a2  85c9                 test ecx, ecx
// 009dc8a4  7407                 je 0x9dc8ad
// 009dc8a6  6a00                 push 0
// 009dc8a8  e8c3ed0600           call 0xa4b670
// 009dc8ad  6a01                 push 1
// 009dc8af  8bcf                 mov ecx, edi
// 009dc8b1  89be98000000         mov dword ptr [esi + 0x98], edi
// 009dc8b7  e8b4ed0600           call 0xa4b670
// 009dc8bc  5f                   pop edi
// 009dc8bd  5e                   pop esi
// 009dc8be  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetActiveWorkspace@CXTPTabClientWnd@@IAEXPAVCWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
