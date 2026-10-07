// roc 2008-06 006e8390  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8390
//
// 006e8390  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8394  8b41fc               mov eax, dword ptr [ecx - 4]
// 006e8397  8b542408             mov edx, dword ptr [esp + 8]
// 006e839b  8b4004               mov eax, dword ptr [eax + 4]
// 006e839e  83c1fc               add ecx, -4
// 006e83a1  52                   push edx
// 006e83a2  ffd0                 call eax
// 006e83a4  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accParent@XAccessible@CXTPAccessible@@UAGJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
