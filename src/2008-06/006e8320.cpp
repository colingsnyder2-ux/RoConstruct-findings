// roc 2008-06 006e8320  unit: CXTPAccessible::XAccessible  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8320
//
// 006e8320  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8324  8b41fc               mov eax, dword ptr [ecx - 4]
// 006e8327  8b5058               mov edx, dword ptr [eax + 0x58]
// 006e832a  83c1fc               add ecx, -4
// 006e832d  ffd2                 call edx
// 006e832f  8bc8                 mov ecx, eax
// 006e8331  e870400d00           call 0x7bc3a6
// 006e8336  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AddRef@XAccessible@CXTPAccessible@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
