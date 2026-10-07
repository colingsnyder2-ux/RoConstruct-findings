// roc 2007-08 006718a0  unit: CXTPAccessible::XAccessible  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006718a0
//
// 006718a0  8b542410             mov edx, dword ptr [esp + 0x10]
// 006718a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006718a8  8b41fc               mov eax, dword ptr [ecx - 4]
// 006718ab  8b4048               mov eax, dword ptr [eax + 0x48]
// 006718ae  52                   push edx
// 006718af  8b542410             mov edx, dword ptr [esp + 0x10]
// 006718b3  83c1fc               add ecx, -4
// 006718b6  52                   push edx
// 006718b7  8b542410             mov edx, dword ptr [esp + 0x10]
// 006718bb  52                   push edx
// 006718bc  ffd0                 call eax
// 006718be  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?accHitTest@XAccessible@CXTPAccessible@@UAGJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
