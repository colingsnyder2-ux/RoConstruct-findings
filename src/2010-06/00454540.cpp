// roc 2010-06 00454540  unit: CRobloxControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00454540
//
// 00454540  8b442404             mov eax, dword ptr [esp + 4]
// 00454544  39819c000000         cmp dword ptr [ecx + 0x9c], eax
// 0045454a  7413                 je 0x45455f
// 0045454c  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 00454552  c744240401000000     mov dword ptr [esp + 4], 1
// 0045455a  e941623500           jmp 0x7aa7a0
// 0045455f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetEnabled@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
