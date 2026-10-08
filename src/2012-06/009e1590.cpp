// from server: 100% by auto
// roc 2012-06 009e1590  unit: CXTPTabClientWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e1590
//
// 009e1590  56                   push esi
// 009e1591  8b742408             mov esi, dword ptr [esp + 8]
// 009e1595  8b4604               mov eax, dword ptr [esi + 4]
// 009e1598  57                   push edi
// 009e1599  8b3e                 mov edi, dword ptr [esi]
// 009e159b  6a00                 push 0
// 009e159d  50                   push eax
// 009e159e  e8ddf6ffff           call 0x9e0c80
// 009e15a3  8b17                 mov edx, dword ptr [edi]
// 009e15a5  50                   push eax
// 009e15a6  8bce                 mov ecx, esi
// 009e15a8  ffd2                 call edx
// 009e15aa  5f                   pop edi
// 009e15ab  5e                   pop esi
// 009e15ac  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnUpdateWorkspaceCommand@CXTPTabClientWnd@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
