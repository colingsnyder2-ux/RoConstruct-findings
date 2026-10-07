// roc 2011-06 00844e30  unit: CXTPReportSelectedRows  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844e30
//
// 00844e30  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00844e35  89442404             mov dword ptr [esp + 4], eax
// 00844e39  db442404             fild dword ptr [esp + 4]
// 00844e3d  dc0d3863ac00         fmul qword ptr [0xac6338]
// 00844e43  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetRDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
