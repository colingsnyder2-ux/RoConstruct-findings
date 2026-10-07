// roc 2007-08 00689600  unit: CXTPTabManagerAtom  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689600
//
// 00689600  56                   push esi
// 00689601  8bf1                 mov esi, ecx
// 00689603  8b06                 mov eax, dword ptr [esi]
// 00689605  8b5048               mov edx, dword ptr [eax + 0x48]
// 00689608  ffd2                 call edx
// 0068960a  83f802               cmp eax, 2
// 0068960d  7411                 je 0x689620
// 0068960f  8b06                 mov eax, dword ptr [esi]
// 00689611  8b5048               mov edx, dword ptr [eax + 0x48]
// 00689614  8bce                 mov ecx, esi
// 00689616  ffd2                 call edx
// 00689618  85c0                 test eax, eax
// 0068961a  7404                 je 0x689620
// 0068961c  33c0                 xor eax, eax
// 0068961e  5e                   pop esi
// 0068961f  c3                   ret 
// 00689620  b801000000           mov eax, 1
// 00689625  5e                   pop esi
// 00689626  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsHorizontalPosition@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
