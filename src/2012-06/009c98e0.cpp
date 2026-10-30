// from server: 100% by auto
// roc 2012-06 009c98e0  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c98e0
//
// 009c98e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c98e4  8b41fc               mov eax, dword ptr [ecx - 4]
// 009c98e7  8b542408             mov edx, dword ptr [esp + 8]
// 009c98eb  8b4004               mov eax, dword ptr [eax + 4]
// 009c98ee  83c1fc               add ecx, -4
// 009c98f1  52                   push edx
// 009c98f2  ffd0                 call eax
// 009c98f4  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accParent@XAccessible@CXTPAccessible@@UAGJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
