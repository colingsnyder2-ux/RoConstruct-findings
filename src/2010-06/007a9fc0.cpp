// roc 2010-06 007a9fc0  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9fc0
//
// 007a9fc0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007a9fc6  85c0                 test eax, eax
// 007a9fc8  740c                 je 0x7a9fd6
// 007a9fca  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 007a9fd1  7503                 jne 0x7a9fd6
// 007a9fd3  33c0                 xor eax, eax
// 007a9fd5  c3                   ret 
// 007a9fd6  b801000000           mov eax, 1
// 007a9fdb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NeedPressOnExecute@CXTPControl@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
