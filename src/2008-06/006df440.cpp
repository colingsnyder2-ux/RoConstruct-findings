// from server: 100% by auto
// roc 2008-06 006df440  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df440
//
// 006df440  b8dc000000           mov eax, 0xdc
// 006df445  39442404             cmp dword ptr [esp + 4], eax
// 006df449  7e04                 jle 0x6df44f
// 006df44b  89442404             mov dword ptr [esp + 4], eax
// 006df44f  db442404             fild dword ptr [esp + 4]
// 006df453  dc35685e8500         fdiv qword ptr [0x855e68]
// 006df459  dc2dd06f8200         fsubr qword ptr [0x826fd0]
// 006df45f  da4c2408             fimul dword ptr [esp + 8]
// 006df463  d95c2404             fstp dword ptr [esp + 4]
// 006df467  d9442404             fld dword ptr [esp + 4]
// 006df46b  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?ColorWidth@CXTPColorManager@@AAEMHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
