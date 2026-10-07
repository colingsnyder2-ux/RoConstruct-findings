// roc 2008-06 0044ed50  unit: CRobloxControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ed50
//
// 0044ed50  8b442404             mov eax, dword ptr [esp + 4]
// 0044ed54  39819c000000         cmp dword ptr [ecx + 0x9c], eax
// 0044ed5a  7413                 je 0x44ed6f
// 0044ed5c  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0044ed62  c744240401000000     mov dword ptr [esp + 4], 1
// 0044ed6a  e961cb2500           jmp 0x6ab8d0
// 0044ed6f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetEnabled@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
