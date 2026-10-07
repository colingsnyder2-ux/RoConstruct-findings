// roc 2008-06 00701350  unit: CXTPTabClientWnd::CWorkspace  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701350
//
// 00701350  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00701356  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070135a  8988bc000000         mov dword ptr [eax + 0xbc], ecx
// 00701360  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetAllowReorder@CWorkspace@CXTPTabClientWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
