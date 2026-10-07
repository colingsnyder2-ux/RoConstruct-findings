// roc 2011-06 00851450  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851450
//
// 00851450  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851454  8b41fc               mov eax, dword ptr [ecx - 4]
// 00851457  8b542408             mov edx, dword ptr [esp + 8]
// 0085145b  8b4008               mov eax, dword ptr [eax + 8]
// 0085145e  83c1fc               add ecx, -4
// 00851461  52                   push edx
// 00851462  ffd0                 call eax
// 00851464  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accChildCount@XAccessible@CXTPAccessible@@UAGJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
