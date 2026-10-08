// roc 2009-06 0044ceb0  unit: CRobloxControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044ceb0
//
// 0044ceb0  8b442404             mov eax, dword ptr [esp + 4]
// 0044ceb4  39819c000000         cmp dword ptr [ecx + 0x9c], eax
// 0044ceba  7413                 je 0x44cecf
// 0044cebc  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0044cec2  c744240401000000     mov dword ptr [esp + 4], 1
// 0044ceca  e9e1302d00           jmp 0x71ffb0
// 0044cecf  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetEnabled@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
