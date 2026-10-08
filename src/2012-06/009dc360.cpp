// roc 2012-06 009dc360  unit: CXTPTabClientWnd::CWorkspace  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc360
//
// 009dc360  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009dc366  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009dc36a  8988bc000000         mov dword ptr [eax + 0xbc], ecx
// 009dc370  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetAllowReorder@CWorkspace@CXTPTabClientWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
