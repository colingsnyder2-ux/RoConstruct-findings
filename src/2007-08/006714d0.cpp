// from server: 100% by auto
// roc 2007-08 006714d0  unit: CXTPAccessible::XAccessible  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006714d0
//
// 006714d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006714d4  8b41fc               mov eax, dword ptr [ecx - 4]
// 006714d7  8b542408             mov edx, dword ptr [esp + 8]
// 006714db  8b4004               mov eax, dword ptr [eax + 4]
// 006714de  83c1fc               add ecx, -4
// 006714e1  52                   push edx
// 006714e2  ffd0                 call eax
// 006714e4  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accParent@XAccessible@CXTPAccessible@@UAGJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
