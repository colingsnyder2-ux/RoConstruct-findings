// roc 2011-06 00869020  unit: CXTPTabClientWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869020
//
// 00869020  56                   push esi
// 00869021  8b742408             mov esi, dword ptr [esp + 8]
// 00869025  8b4604               mov eax, dword ptr [esi + 4]
// 00869028  57                   push edi
// 00869029  8b3e                 mov edi, dword ptr [esi]
// 0086902b  6a00                 push 0
// 0086902d  50                   push eax
// 0086902e  e8ddf6ffff           call 0x868710
// 00869033  8b17                 mov edx, dword ptr [edi]
// 00869035  50                   push eax
// 00869036  8bce                 mov ecx, esi
// 00869038  ffd2                 call edx
// 0086903a  5f                   pop edi
// 0086903b  5e                   pop esi
// 0086903c  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnUpdateWorkspaceCommand@CXTPTabClientWnd@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
