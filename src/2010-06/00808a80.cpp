// roc 2010-06 00808a80  unit: CXTPTabClientWnd::CWorkspace  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808a80
//
// 00808a80  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00808a86  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00808a8a  8988bc000000         mov dword ptr [eax + 0xbc], ecx
// 00808a90  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetAllowReorder@CWorkspace@CXTPTabClientWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
