// roc 2007-08 0042f1a0  unit: CMainFrame  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f1a0
//
// 0042f1a0  8b442404             mov eax, dword ptr [esp + 4]
// 0042f1a4  83f802               cmp eax, 2
// 0042f1a7  740d                 je 0x42f1b6
// 0042f1a9  83f803               cmp eax, 3
// 0042f1ac  7408                 je 0x42f1b6
// 0042f1ae  83f805               cmp eax, 5
// 0042f1b1  7403                 je 0x42f1b6
// 0042f1b3  33c0                 xor eax, eax
// 0042f1b5  c3                   ret 
// 0042f1b6  b801000000           mov eax, 1
// 0042f1bb  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?IsVerticalPosition@@YAHW4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
