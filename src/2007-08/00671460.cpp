// from server: 100% by auto
// roc 2007-08 00671460  unit: CXTPAccessible::XAccessible  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671460
//
// 00671460  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671464  8b41fc               mov eax, dword ptr [ecx - 4]
// 00671467  8b5058               mov edx, dword ptr [eax + 0x58]
// 0067146a  83c1fc               add ecx, -4
// 0067146d  ffd2                 call edx
// 0067146f  8bc8                 mov ecx, eax
// 00671471  e86c720c00           call 0x7386e2
// 00671476  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?AddRef@XAccessible@CXTPAccessible@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
