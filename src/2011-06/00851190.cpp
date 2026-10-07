// roc 2011-06 00851190  unit: CXTPToolBar::CControlButtonExpand  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851190
//
// 00851190  8b542404             mov edx, dword ptr [esp + 4]
// 00851194  85d2                 test edx, edx
// 00851196  7423                 je 0x8511bb
// 00851198  83791000             cmp dword ptr [ecx + 0x10], 0
// 0085119c  741d                 je 0x8511bb
// 0085119e  8b442408             mov eax, dword ptr [esp + 8]
// 008511a2  50                   push eax
// 008511a3  c70028000000         mov dword ptr [eax], 0x28
// 008511a9  8b4110               mov eax, dword ptr [ecx + 0x10]
// 008511ac  52                   push edx
// 008511ad  ffd0                 call eax
// 008511af  85c0                 test eax, eax
// 008511b1  7408                 je 0x8511bb
// 008511b3  b801000000           mov eax, 1
// 008511b8  c20800               ret 8
// 008511bb  33c0                 xor eax, eax
// 008511bd  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetMonitorInfoA@CXTPMultiMonitor@@AAEHPAUXTP_HMONITOR__@1@PAUXTP_MONITORINFO@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
