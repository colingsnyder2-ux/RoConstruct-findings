// roc 2011-06 00851800  unit: CXTPAccessible::XAccessible  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851800
//
// 00851800  8b542410             mov edx, dword ptr [esp + 0x10]
// 00851804  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851808  8b41fc               mov eax, dword ptr [ecx - 4]
// 0085180b  8b4048               mov eax, dword ptr [eax + 0x48]
// 0085180e  52                   push edx
// 0085180f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00851813  83c1fc               add ecx, -4
// 00851816  52                   push edx
// 00851817  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085181b  52                   push edx
// 0085181c  ffd0                 call eax
// 0085181e  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accHitTest@XAccessible@CXTPAccessible@@UAGJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
