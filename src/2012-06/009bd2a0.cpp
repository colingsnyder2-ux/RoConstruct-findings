// from server: 100% by auto
// roc 2012-06 009bd2a0  unit: CXTPReportSelectedRows  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bd2a0
//
// 009bd2a0  8b442404             mov eax, dword ptr [esp + 4]
// 009bd2a4  c1e810               shr eax, 0x10
// 009bd2a7  0fb6c8               movzx ecx, al
// 009bd2aa  894c2404             mov dword ptr [esp + 4], ecx
// 009bd2ae  db442404             fild dword ptr [esp + 4]
// 009bd2b2  dc0d301ac100         fmul qword ptr [0xc11a30]
// 009bd2b8  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetBDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
