// from server: 100% by auto
// roc 2007-08 00639b60  unit: CXTPControlComboBoxAutoCompleteWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639b60
//
// 00639b60  8b442404             mov eax, dword ptr [esp + 4]
// 00639b64  83f802               cmp eax, 2
// 00639b67  7408                 je 0x639b71
// 00639b69  83f803               cmp eax, 3
// 00639b6c  7403                 je 0x639b71
// 00639b6e  33c0                 xor eax, eax
// 00639b70  c3                   ret 
// 00639b71  b801000000           mov eax, 1
// 00639b76  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ?IsKeyboardSelected@@YAHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
