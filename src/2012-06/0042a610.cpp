// from server: 100% by auto
// roc 2012-06 0042a610  unit: CXTTreeCtrl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042a610
//
// 0042a610  56                   push esi
// 0042a611  8bf1                 mov esi, ecx
// 0042a613  e8c6805500           call 0x9826de
// 0042a618  83f8ff               cmp eax, -1
// 0042a61b  7506                 jne 0x42a623
// 0042a61d  0bc0                 or eax, eax
// 0042a61f  5e                   pop esi
// 0042a620  c20400               ret 4
// 0042a623  8b4654               mov eax, dword ptr [esi + 0x54]
// 0042a626  8b5048               mov edx, dword ptr [eax + 0x48]
// 0042a629  8d4e54               lea ecx, [esi + 0x54]
// 0042a62c  ffd2                 call edx
// 0042a62e  33c0                 xor eax, eax
// 0042a630  5e                   pop esi
// 0042a631  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnCreate@CXTPShellTreeBaseCTreeCtrl@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
