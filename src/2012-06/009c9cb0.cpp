// roc 2012-06 009c9cb0  unit: CXTPAccessible::XAccessible  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9cb0
//
// 009c9cb0  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c9cb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9cb8  8b41fc               mov eax, dword ptr [ecx - 4]
// 009c9cbb  8b4048               mov eax, dword ptr [eax + 0x48]
// 009c9cbe  52                   push edx
// 009c9cbf  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c9cc3  83c1fc               add ecx, -4
// 009c9cc6  52                   push edx
// 009c9cc7  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c9ccb  52                   push edx
// 009c9ccc  ffd0                 call eax
// 009c9cce  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accHitTest@XAccessible@CXTPAccessible@@UAGJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
