// roc 2012-06 009bcf00  unit: CXTPReportSelectedRows  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bcf00
//
// 009bcf00  b8dc000000           mov eax, 0xdc
// 009bcf05  39442404             cmp dword ptr [esp + 4], eax
// 009bcf09  7e04                 jle 0x9bcf0f
// 009bcf0b  89442404             mov dword ptr [esp + 4], eax
// 009bcf0f  db442404             fild dword ptr [esp + 4]
// 009bcf13  dc35181ac100         fdiv qword ptr [0xc11a18]
// 009bcf19  dc2d78cdb500         fsubr qword ptr [0xb5cd78]
// 009bcf1f  da4c2408             fimul dword ptr [esp + 8]
// 009bcf23  d95c2404             fstp dword ptr [esp + 4]
// 009bcf27  d9442404             fld dword ptr [esp + 4]
// 009bcf2b  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?ColorWidth@CXTPColorManager@@AAEMHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
