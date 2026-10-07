// roc 2011-06 00851430  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851430
//
// 00851430  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851434  8b41fc               mov eax, dword ptr [ecx - 4]
// 00851437  8b542408             mov edx, dword ptr [esp + 8]
// 0085143b  8b4004               mov eax, dword ptr [eax + 4]
// 0085143e  83c1fc               add ecx, -4
// 00851441  52                   push edx
// 00851442  ffd0                 call eax
// 00851444  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accParent@XAccessible@CXTPAccessible@@UAGJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
