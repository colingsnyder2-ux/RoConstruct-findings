// roc 2009-06 0071f860  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f860
//
// 0071f860  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0071f866  85c0                 test eax, eax
// 0071f868  740c                 je 0x71f876
// 0071f86a  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 0071f871  7503                 jne 0x71f876
// 0071f873  33c0                 xor eax, eax
// 0071f875  c3                   ret 
// 0071f876  b801000000           mov eax, 1
// 0071f87b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NeedPressOnExecute@CXTPControl@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
