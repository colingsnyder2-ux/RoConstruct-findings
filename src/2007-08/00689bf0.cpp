// roc 2007-08 00689bf0  unit: CXTPTabClientWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689bf0
//
// 00689bf0  56                   push esi
// 00689bf1  8bf1                 mov esi, ecx
// 00689bf3  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00689bf9  57                   push edi
// 00689bfa  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00689bfe  3bcf                 cmp ecx, edi
// 00689c00  741a                 je 0x689c1c
// 00689c02  85c9                 test ecx, ecx
// 00689c04  7407                 je 0x689c0d
// 00689c06  6a00                 push 0
// 00689c08  e8a3370700           call 0x6fd3b0
// 00689c0d  6a01                 push 1
// 00689c0f  8bcf                 mov ecx, edi
// 00689c11  89be98000000         mov dword ptr [esi + 0x98], edi
// 00689c17  e894370700           call 0x6fd3b0
// 00689c1c  5f                   pop edi
// 00689c1d  5e                   pop esi
// 00689c1e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetActiveWorkspace@CXTPTabClientWnd@@IAEXPAVCWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
