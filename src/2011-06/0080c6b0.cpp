// roc 2011-06 0080c6b0  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c6b0
//
// 0080c6b0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0080c6b6  85c0                 test eax, eax
// 0080c6b8  740c                 je 0x80c6c6
// 0080c6ba  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 0080c6c1  7503                 jne 0x80c6c6
// 0080c6c3  33c0                 xor eax, eax
// 0080c6c5  c3                   ret 
// 0080c6c6  b801000000           mov eax, 1
// 0080c6cb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NeedPressOnExecute@CXTPControl@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
