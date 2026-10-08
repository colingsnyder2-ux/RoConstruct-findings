// roc 2010-06 007c5740  unit: CXTPToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c5740
//
// 007c5740  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 007c5746  83f802               cmp eax, 2
// 007c5749  7512                 jne 0x7c575d
// 007c574b  e8802effff           call 0x7b85d0
// 007c5750  85c0                 test eax, eax
// 007c5752  7407                 je 0x7c575b
// 007c5754  8b4074               mov eax, dword ptr [eax + 0x74]
// 007c5757  8b4040               mov eax, dword ptr [eax + 0x40]
// 007c575a  c3                   ret 
// 007c575b  33c0                 xor eax, eax
// 007c575d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsTextBelowIcons@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
