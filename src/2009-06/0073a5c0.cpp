// roc 2009-06 0073a5c0  unit: CXTPToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073a5c0
//
// 0073a5c0  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 0073a5c6  83f802               cmp eax, 2
// 0073a5c9  7512                 jne 0x73a5dd
// 0073a5cb  e8c02dffff           call 0x72d390
// 0073a5d0  85c0                 test eax, eax
// 0073a5d2  7407                 je 0x73a5db
// 0073a5d4  8b4074               mov eax, dword ptr [eax + 0x74]
// 0073a5d7  8b4040               mov eax, dword ptr [eax + 0x40]
// 0073a5da  c3                   ret 
// 0073a5db  33c0                 xor eax, eax
// 0073a5dd  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsTextBelowIcons@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
