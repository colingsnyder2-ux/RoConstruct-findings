// from server: 100% by auto
// roc 2007-08 00671440  unit: CXTPAccessible::XAccessible  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671440
//
// 00671440  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671444  8b41fc               mov eax, dword ptr [ecx - 4]
// 00671447  8b5058               mov edx, dword ptr [eax + 0x58]
// 0067144a  83c1fc               add ecx, -4
// 0067144d  ffd2                 call edx
// 0067144f  8bc8                 mov ecx, eax
// 00671451  e886720c00           call 0x7386dc
// 00671456  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?AddRef@XAccessible@CXTPAccessible@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
