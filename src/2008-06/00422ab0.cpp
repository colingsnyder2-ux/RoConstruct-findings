// from server: 100% by auto
// roc 2008-06 00422ab0  unit: CXTTreeCtrl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422ab0
//
// 00422ab0  56                   push esi
// 00422ab1  8bf1                 mov esi, ecx
// 00422ab3  e8b0e12700           call 0x6a0c68
// 00422ab8  83f8ff               cmp eax, -1
// 00422abb  7506                 jne 0x422ac3
// 00422abd  0bc0                 or eax, eax
// 00422abf  5e                   pop esi
// 00422ac0  c20400               ret 4
// 00422ac3  8b4654               mov eax, dword ptr [esi + 0x54]
// 00422ac6  8b5048               mov edx, dword ptr [eax + 0x48]
// 00422ac9  8d4e54               lea ecx, [esi + 0x54]
// 00422acc  ffd2                 call edx
// 00422ace  33c0                 xor eax, eax
// 00422ad0  5e                   pop esi
// 00422ad1  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnCreate@CXTShellTreeBaseCTreeCtrl@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
