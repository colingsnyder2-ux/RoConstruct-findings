// roc 2012-06 00984940  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984940
//
// 00984940  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00984946  85c0                 test eax, eax
// 00984948  740c                 je 0x984956
// 0098494a  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00984951  7503                 jne 0x984956
// 00984953  33c0                 xor eax, eax
// 00984955  c3                   ret 
// 00984956  b801000000           mov eax, 1
// 0098495b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NeedPressOnExecute@CXTPControl@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
