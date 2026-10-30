// roc 2009-12 007fd7e0  unit: CXTPPaintManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd7e0
//
// 007fd7e0  8b0da4adb900         mov ecx, dword ptr [0xb9ada4]
// 007fd7e6  85c9                 test ecx, ecx
// 007fd7e8  7405                 je 0x7fd7ef
// 007fd7ea  e8ed65ffff           call 0x7f3ddc
// 007fd7ef  8b442404             mov eax, dword ptr [esp + 4]
// 007fd7f3  a3a4adb900           mov dword ptr [0xb9ada4], eax
// 007fd7f8  c7804401000007000000 mov dword ptr [eax + 0x144], 7
// 007fd802  8b0da4adb900         mov ecx, dword ptr [0xb9ada4]
// 007fd808  8b01                 mov eax, dword ptr [ecx]
// 007fd80a  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 007fd810  ffe2                 jmp edx
// copied from an identical function in another client (function ?SetCustomTheme@CXTPPaintManager@@SAXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp