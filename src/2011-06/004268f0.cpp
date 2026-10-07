// roc 2011-06 004268f0  unit: CXTTreeCtrl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004268f0
//
// 004268f0  56                   push esi
// 004268f1  8bf1                 mov esi, ecx
// 004268f3  e8363d3e00           call 0x80a62e
// 004268f8  83f8ff               cmp eax, -1
// 004268fb  7506                 jne 0x426903
// 004268fd  0bc0                 or eax, eax
// 004268ff  5e                   pop esi
// 00426900  c20400               ret 4
// 00426903  8b4654               mov eax, dword ptr [esi + 0x54]
// 00426906  8b5048               mov edx, dword ptr [eax + 0x48]
// 00426909  8d4e54               lea ecx, [esi + 0x54]
// 0042690c  ffd2                 call edx
// 0042690e  33c0                 xor eax, eax
// 00426910  5e                   pop esi
// 00426911  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnCreate@CXTPShellTreeBaseCTreeCtrl@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
