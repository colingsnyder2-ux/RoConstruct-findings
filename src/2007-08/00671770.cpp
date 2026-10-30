// from server: 100% by auto
// roc 2007-08 00671770  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671770
//
// 00671770  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671774  8b41fc               mov eax, dword ptr [ecx - 4]
// 00671777  8b542408             mov edx, dword ptr [esp + 8]
// 0067177b  8b4034               mov eax, dword ptr [eax + 0x34]
// 0067177e  83c1fc               add ecx, -4
// 00671781  52                   push edx
// 00671782  ffd0                 call eax
// 00671784  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accSelection@XAccessible@CXTPAccessible@@UAGJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
