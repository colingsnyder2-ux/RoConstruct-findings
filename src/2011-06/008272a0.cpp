// roc 2011-06 008272a0  unit: CXTPToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008272a0
//
// 008272a0  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008272a6  83f802               cmp eax, 2
// 008272a9  7512                 jne 0x8272bd
// 008272ab  e8e037ffff           call 0x81aa90
// 008272b0  85c0                 test eax, eax
// 008272b2  7407                 je 0x8272bb
// 008272b4  8b4074               mov eax, dword ptr [eax + 0x74]
// 008272b7  8b4040               mov eax, dword ptr [eax + 0x40]
// 008272ba  c3                   ret 
// 008272bb  33c0                 xor eax, eax
// 008272bd  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsTextBelowIcons@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
