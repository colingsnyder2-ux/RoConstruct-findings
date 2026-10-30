// roc 2009-06 00779c70  unit: CXTPTabClientWnd::CWorkspace  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779c70
//
// 00779c70  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00779c76  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00779c7a  8988bc000000         mov dword ptr [eax + 0xbc], ecx
// 00779c80  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetAllowReorder@CWorkspace@CXTPTabClientWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
