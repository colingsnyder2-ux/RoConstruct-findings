// from server: 100% by auto
// roc 2007-08 0068e4f0  unit: CXTPTabClientWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068e4f0
//
// 0068e4f0  56                   push esi
// 0068e4f1  8b742408             mov esi, dword ptr [esp + 8]
// 0068e4f5  8b4604               mov eax, dword ptr [esi + 4]
// 0068e4f8  57                   push edi
// 0068e4f9  8b3e                 mov edi, dword ptr [esi]
// 0068e4fb  6a00                 push 0
// 0068e4fd  50                   push eax
// 0068e4fe  e8edf6ffff           call 0x68dbf0
// 0068e503  8b17                 mov edx, dword ptr [edi]
// 0068e505  50                   push eax
// 0068e506  8bce                 mov ecx, esi
// 0068e508  ffd2                 call edx
// 0068e50a  5f                   pop edi
// 0068e50b  5e                   pop esi
// 0068e50c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnUpdateWorkspaceCommand@CXTPTabClientWnd@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
