// from server: 100% by auto
// roc 2012-06 009cb6e0  unit: CXTPControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cb6e0
//
// 009cb6e0  8b442404             mov eax, dword ptr [esp + 4]
// 009cb6e4  83f804               cmp eax, 4
// 009cb6e7  740d                 je 0x9cb6f6
// 009cb6e9  83f803               cmp eax, 3
// 009cb6ec  7408                 je 0x9cb6f6
// 009cb6ee  83f802               cmp eax, 2
// 009cb6f1  7403                 je 0x9cb6f6
// 009cb6f3  33c0                 xor eax, eax
// 009cb6f5  c3                   ret 
// 009cb6f6  b801000000           mov eax, 1
// 009cb6fb  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?IsAnimateType@@YAHW4XTPAnimationType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
