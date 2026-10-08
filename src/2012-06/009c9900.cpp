// from server: 100% by auto
// roc 2012-06 009c9900  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9900
//
// 009c9900  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9904  8b41fc               mov eax, dword ptr [ecx - 4]
// 009c9907  8b542408             mov edx, dword ptr [esp + 8]
// 009c990b  8b4008               mov eax, dword ptr [eax + 8]
// 009c990e  83c1fc               add ecx, -4
// 009c9911  52                   push edx
// 009c9912  ffd0                 call eax
// 009c9914  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accChildCount@XAccessible@CXTPAccessible@@UAGJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
