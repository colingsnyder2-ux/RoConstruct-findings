// roc 2012-06 00478690  unit: CRobloxControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00478690
//
// 00478690  8b442404             mov eax, dword ptr [esp + 4]
// 00478694  39819c000000         cmp dword ptr [ecx + 0x9c], eax
// 0047869a  7413                 je 0x4786af
// 0047869c  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 004786a2  c744240401000000     mov dword ptr [esp + 4], 1
// 004786aa  e981c95000           jmp 0x985030
// 004786af  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetEnabled@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
