// from server: 100% by auto
// roc 2008-06 006aad60  unit: CXTPControlComboBoxAutoCompleteWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aad60
//
// 006aad60  8b442404             mov eax, dword ptr [esp + 4]
// 006aad64  83f802               cmp eax, 2
// 006aad67  7408                 je 0x6aad71
// 006aad69  83f803               cmp eax, 3
// 006aad6c  7403                 je 0x6aad71
// 006aad6e  33c0                 xor eax, eax
// 006aad70  c3                   ret 
// 006aad71  b801000000           mov eax, 1
// 006aad76  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsKeyboardSelected@@YAHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
