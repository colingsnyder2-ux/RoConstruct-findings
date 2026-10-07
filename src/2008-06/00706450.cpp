// roc 2008-06 00706450  unit: CXTPTabClientWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00706450
//
// 00706450  56                   push esi
// 00706451  8b742408             mov esi, dword ptr [esp + 8]
// 00706455  8b4604               mov eax, dword ptr [esi + 4]
// 00706458  57                   push edi
// 00706459  8b3e                 mov edi, dword ptr [esi]
// 0070645b  6a00                 push 0
// 0070645d  50                   push eax
// 0070645e  e8ddf6ffff           call 0x705b40
// 00706463  8b17                 mov edx, dword ptr [edi]
// 00706465  50                   push eax
// 00706466  8bce                 mov ecx, esi
// 00706468  ffd2                 call edx
// 0070646a  5f                   pop edi
// 0070646b  5e                   pop esi
// 0070646c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnUpdateWorkspaceCommand@CXTPTabClientWnd@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
