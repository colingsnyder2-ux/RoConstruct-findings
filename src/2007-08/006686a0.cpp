// roc 2007-08 006686a0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006686a0
//
// 006686a0  b8dc000000           mov eax, 0xdc
// 006686a5  39442404             cmp dword ptr [esp + 4], eax
// 006686a9  7e04                 jle 0x6686af
// 006686ab  89442404             mov dword ptr [esp + 4], eax
// 006686af  db442404             fild dword ptr [esp + 4]
// 006686b3  dc35e8a67c00         fdiv qword ptr [0x7ca6e8]
// 006686b9  dc2d085c7900         fsubr qword ptr [0x795c08]
// 006686bf  da4c2408             fimul dword ptr [esp + 8]
// 006686c3  d95c2404             fstp dword ptr [esp + 4]
// 006686c7  d9442404             fld dword ptr [esp + 4]
// 006686cb  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?ColorWidth@CXTPColorManager@@AAEMHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
