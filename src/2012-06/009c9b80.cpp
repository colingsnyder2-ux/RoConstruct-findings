// roc 2012-06 009c9b80  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9b80
//
// 009c9b80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9b84  8b41fc               mov eax, dword ptr [ecx - 4]
// 009c9b87  8b542408             mov edx, dword ptr [esp + 8]
// 009c9b8b  8b4034               mov eax, dword ptr [eax + 0x34]
// 009c9b8e  83c1fc               add ecx, -4
// 009c9b91  52                   push edx
// 009c9b92  ffd0                 call eax
// 009c9b94  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accSelection@XAccessible@CXTPAccessible@@UAGJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
