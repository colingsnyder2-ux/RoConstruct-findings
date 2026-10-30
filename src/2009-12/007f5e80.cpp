// roc 2009-12 007f5e80  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5e80
//
// 007f5e80  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007f5e86  85c0                 test eax, eax
// 007f5e88  740c                 je 0x7f5e96
// 007f5e8a  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 007f5e91  7503                 jne 0x7f5e96
// 007f5e93  33c0                 xor eax, eax
// 007f5e95  c3                   ret 
// 007f5e96  b801000000           mov eax, 1
// 007f5e9b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NeedPressOnExecute@CXTPControl@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
