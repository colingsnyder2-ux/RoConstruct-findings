// roc 2012-06 009bd280  unit: CXTPReportSelectedRows  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bd280
//
// 009bd280  8b442404             mov eax, dword ptr [esp + 4]
// 009bd284  c1e808               shr eax, 8
// 009bd287  0fb6c8               movzx ecx, al
// 009bd28a  894c2404             mov dword ptr [esp + 4], ecx
// 009bd28e  db442404             fild dword ptr [esp + 4]
// 009bd292  dc0d281ac100         fmul qword ptr [0xc11a28]
// 009bd298  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetGDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
