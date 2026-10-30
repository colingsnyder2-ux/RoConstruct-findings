// from server: 100% by auto
// roc 2012-06 009de560  unit: CXTPTabClientWnd::CWorkspace  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009de560
//
// 009de560  68704e9800           push 0x984e70
// 009de565  b958a0e500           mov ecx, 0xe5a058
// 009de56a  e80fb00b00           call 0xa9957e
// 009de56f  85c0                 test eax, eax
// 009de571  7505                 jne 0x9de578
// 009de573  e9483efaff           jmp 0x9823c0
// 009de578  6a00                 push 0
// 009de57a  8bc8                 mov ecx, eax
// 009de57c  e86fa60100           call 0x9f8bf0
// 009de581  f7d8                 neg eax
// 009de583  1bc0                 sbb eax, eax
// 009de585  f7d8                 neg eax
// 009de587  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsMouseLocked@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
