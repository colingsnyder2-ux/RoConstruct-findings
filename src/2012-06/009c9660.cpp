// roc 2012-06 009c9660  unit: CXTPToolBar::CControlButtonExpand  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9660
//
// 009c9660  8b542404             mov edx, dword ptr [esp + 4]
// 009c9664  85d2                 test edx, edx
// 009c9666  7423                 je 0x9c968b
// 009c9668  83791000             cmp dword ptr [ecx + 0x10], 0
// 009c966c  741d                 je 0x9c968b
// 009c966e  8b442408             mov eax, dword ptr [esp + 8]
// 009c9672  50                   push eax
// 009c9673  c70028000000         mov dword ptr [eax], 0x28
// 009c9679  8b4110               mov eax, dword ptr [ecx + 0x10]
// 009c967c  52                   push edx
// 009c967d  ffd0                 call eax
// 009c967f  85c0                 test eax, eax
// 009c9681  7408                 je 0x9c968b
// 009c9683  b801000000           mov eax, 1
// 009c9688  c20800               ret 8
// 009c968b  33c0                 xor eax, eax
// 009c968d  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetMonitorInfoA@CXTPMultiMonitor@@AAEHPAUXTP_HMONITOR__@1@PAUXTP_MONITORINFO@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
