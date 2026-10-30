// from server: 100% by auto
// roc 2011-06 008513b0  unit: CXTPAccessible::XAccessible  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008513b0
//
// 008513b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008513b4  8b41fc               mov eax, dword ptr [ecx - 4]
// 008513b7  8b5058               mov edx, dword ptr [eax + 0x58]
// 008513ba  83c1fc               add ecx, -4
// 008513bd  ffd2                 call edx
// 008513bf  8bc8                 mov ecx, eax
// 008513c1  e87e94fbff           call 0x80a844
// 008513c6  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?AddRef@XAccessible@CXTPAccessible@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
