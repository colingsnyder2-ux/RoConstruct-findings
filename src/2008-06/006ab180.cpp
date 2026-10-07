// roc 2008-06 006ab180  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab180
//
// 006ab180  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 006ab186  85c0                 test eax, eax
// 006ab188  740c                 je 0x6ab196
// 006ab18a  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 006ab191  7503                 jne 0x6ab196
// 006ab193  33c0                 xor eax, eax
// 006ab195  c3                   ret 
// 006ab196  b801000000           mov eax, 1
// 006ab19b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NeedPressOnExecute@CXTPControl@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
