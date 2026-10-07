// roc 2007-08 00671210  unit: CXTPToolBar::CControlButtonExpand  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671210
//
// 00671210  8b542404             mov edx, dword ptr [esp + 4]
// 00671214  85d2                 test edx, edx
// 00671216  7423                 je 0x67123b
// 00671218  83791000             cmp dword ptr [ecx + 0x10], 0
// 0067121c  741d                 je 0x67123b
// 0067121e  8b442408             mov eax, dword ptr [esp + 8]
// 00671222  50                   push eax
// 00671223  c70028000000         mov dword ptr [eax], 0x28
// 00671229  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0067122c  52                   push edx
// 0067122d  ffd0                 call eax
// 0067122f  85c0                 test eax, eax
// 00671231  7408                 je 0x67123b
// 00671233  b801000000           mov eax, 1
// 00671238  c20800               ret 8
// 0067123b  33c0                 xor eax, eax
// 0067123d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetMonitorInfoA@CXTPMultiMonitor@@AAEHPAUXTP_HMONITOR__@1@PAUXTP_MONITORINFO@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
