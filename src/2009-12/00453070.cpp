// roc 2009-12 00453070  unit: CRobloxControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00453070
//
// 00453070  8b442404             mov eax, dword ptr [esp + 4]
// 00453074  39819c000000         cmp dword ptr [ecx + 0x9c], eax
// 0045307a  7413                 je 0x45308f
// 0045307c  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 00453082  c744240401000000     mov dword ptr [esp + 4], 1
// 0045308a  e931363a00           jmp 0x7f66c0
// 0045308f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetEnabled@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
