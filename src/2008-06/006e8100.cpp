// roc 2008-06 006e8100  unit: CXTPToolBar::CControlButtonExpand  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8100
//
// 006e8100  8b542404             mov edx, dword ptr [esp + 4]
// 006e8104  85d2                 test edx, edx
// 006e8106  7423                 je 0x6e812b
// 006e8108  83791000             cmp dword ptr [ecx + 0x10], 0
// 006e810c  741d                 je 0x6e812b
// 006e810e  8b442408             mov eax, dword ptr [esp + 8]
// 006e8112  50                   push eax
// 006e8113  c70028000000         mov dword ptr [eax], 0x28
// 006e8119  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006e811c  52                   push edx
// 006e811d  ffd0                 call eax
// 006e811f  85c0                 test eax, eax
// 006e8121  7408                 je 0x6e812b
// 006e8123  b801000000           mov eax, 1
// 006e8128  c20800               ret 8
// 006e812b  33c0                 xor eax, eax
// 006e812d  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetMonitorInfoA@CXTPMultiMonitor@@AAEHPAUXTP_HMONITOR__@1@PAUXTP_MONITORINFO@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
