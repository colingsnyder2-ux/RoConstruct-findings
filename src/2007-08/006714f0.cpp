// roc 2007-08 006714f0  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006714f0
//
// 006714f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006714f4  8b41fc               mov eax, dword ptr [ecx - 4]
// 006714f7  8b542408             mov edx, dword ptr [esp + 8]
// 006714fb  8b4008               mov eax, dword ptr [eax + 8]
// 006714fe  83c1fc               add ecx, -4
// 00671501  52                   push edx
// 00671502  ffd0                 call eax
// 00671504  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accChildCount@XAccessible@CXTPAccessible@@UAGJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
