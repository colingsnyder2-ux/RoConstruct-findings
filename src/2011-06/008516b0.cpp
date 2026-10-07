// roc 2011-06 008516b0  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008516b0
//
// 008516b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008516b4  8b41fc               mov eax, dword ptr [ecx - 4]
// 008516b7  8b542408             mov edx, dword ptr [esp + 8]
// 008516bb  8b4030               mov eax, dword ptr [eax + 0x30]
// 008516be  83c1fc               add ecx, -4
// 008516c1  52                   push edx
// 008516c2  ffd0                 call eax
// 008516c4  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accFocus@XAccessible@CXTPAccessible@@UAGJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
