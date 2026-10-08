// roc 2012-06 0099f8c0  unit: CXTPToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f8c0
//
// 0099f8c0  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 0099f8c6  83f802               cmp eax, 2
// 0099f8c9  7512                 jne 0x99f8dd
// 0099f8cb  e82034ffff           call 0x992cf0
// 0099f8d0  85c0                 test eax, eax
// 0099f8d2  7407                 je 0x99f8db
// 0099f8d4  8b4074               mov eax, dword ptr [eax + 0x74]
// 0099f8d7  8b4040               mov eax, dword ptr [eax + 0x40]
// 0099f8da  c3                   ret 
// 0099f8db  33c0                 xor eax, eax
// 0099f8dd  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsTextBelowIcons@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
