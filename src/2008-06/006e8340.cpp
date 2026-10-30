// from server: 100% by auto
// roc 2008-06 006e8340  unit: CXTPAccessible::XAccessible  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8340
//
// 006e8340  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8344  8b41fc               mov eax, dword ptr [ecx - 4]
// 006e8347  8b5058               mov edx, dword ptr [eax + 0x58]
// 006e834a  83c1fc               add ecx, -4
// 006e834d  ffd2                 call edx
// 006e834f  8bc8                 mov ecx, eax
// 006e8351  e856400d00           call 0x7bc3ac
// 006e8356  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AddRef@XAccessible@CXTPAccessible@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
