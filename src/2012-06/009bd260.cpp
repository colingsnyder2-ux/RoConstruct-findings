// from server: 100% by auto
// roc 2012-06 009bd260  unit: CXTPReportSelectedRows  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bd260
//
// 009bd260  0fb6442404           movzx eax, byte ptr [esp + 4]
// 009bd265  89442404             mov dword ptr [esp + 4], eax
// 009bd269  db442404             fild dword ptr [esp + 4]
// 009bd26d  dc0d201ac100         fmul qword ptr [0xc11a20]
// 009bd273  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetRDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
