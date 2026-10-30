// from server: 100% by auto
// roc 2008-06 006e8630  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8630
//
// 006e8630  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8634  8b41fc               mov eax, dword ptr [ecx - 4]
// 006e8637  8b542408             mov edx, dword ptr [esp + 8]
// 006e863b  8b4034               mov eax, dword ptr [eax + 0x34]
// 006e863e  83c1fc               add ecx, -4
// 006e8641  52                   push edx
// 006e8642  ffd0                 call eax
// 006e8644  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accSelection@XAccessible@CXTPAccessible@@UAGJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
