// roc 2009-12 008116b0  unit: CXTPToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008116b0
//
// 008116b0  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008116b6  83f802               cmp eax, 2
// 008116b9  7512                 jne 0x8116cd
// 008116bb  e8102effff           call 0x8044d0
// 008116c0  85c0                 test eax, eax
// 008116c2  7407                 je 0x8116cb
// 008116c4  8b4074               mov eax, dword ptr [eax + 0x74]
// 008116c7  8b4040               mov eax, dword ptr [eax + 0x40]
// 008116ca  c3                   ret 
// 008116cb  33c0                 xor eax, eax
// 008116cd  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsTextBelowIcons@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
