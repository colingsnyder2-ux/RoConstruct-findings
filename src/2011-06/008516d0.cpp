// roc 2011-06 008516d0  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008516d0
//
// 008516d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008516d4  8b41fc               mov eax, dword ptr [ecx - 4]
// 008516d7  8b542408             mov edx, dword ptr [esp + 8]
// 008516db  8b4034               mov eax, dword ptr [eax + 0x34]
// 008516de  83c1fc               add ecx, -4
// 008516e1  52                   push edx
// 008516e2  ffd0                 call eax
// 008516e4  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accSelection@XAccessible@CXTPAccessible@@UAGJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
