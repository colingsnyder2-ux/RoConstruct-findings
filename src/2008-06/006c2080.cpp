// from server: 100% by auto
// roc 2008-06 006c2080  unit: CXTPToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c2080
//
// 006c2080  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006c2086  83f802               cmp eax, 2
// 006c2089  7512                 jne 0x6c209d
// 006c208b  e8802dffff           call 0x6b4e10
// 006c2090  85c0                 test eax, eax
// 006c2092  7407                 je 0x6c209b
// 006c2094  8b4074               mov eax, dword ptr [eax + 0x74]
// 006c2097  8b4040               mov eax, dword ptr [eax + 0x40]
// 006c209a  c3                   ret 
// 006c209b  33c0                 xor eax, eax
// 006c209d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsTextBelowIcons@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
