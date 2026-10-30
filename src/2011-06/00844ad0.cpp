// from server: 100% by auto
// roc 2011-06 00844ad0  unit: CXTPReportSelectedRows  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844ad0
//
// 00844ad0  b8dc000000           mov eax, 0xdc
// 00844ad5  39442404             cmp dword ptr [esp + 4], eax
// 00844ad9  7e04                 jle 0x844adf
// 00844adb  89442404             mov dword ptr [esp + 4], eax
// 00844adf  db442404             fild dword ptr [esp + 4]
// 00844ae3  dc353063ac00         fdiv qword ptr [0xac6330]
// 00844ae9  dc2d2810a700         fsubr qword ptr [0xa71028]
// 00844aef  da4c2408             fimul dword ptr [esp + 8]
// 00844af3  d95c2404             fstp dword ptr [esp + 4]
// 00844af7  d9442404             fld dword ptr [esp + 4]
// 00844afb  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?ColorWidth@CXTPColorManager@@AAEMHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
