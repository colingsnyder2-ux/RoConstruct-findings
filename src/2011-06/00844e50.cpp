// from server: 100% by auto
// roc 2011-06 00844e50  unit: CXTPReportSelectedRows  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844e50
//
// 00844e50  8b442404             mov eax, dword ptr [esp + 4]
// 00844e54  c1e808               shr eax, 8
// 00844e57  0fb6c8               movzx ecx, al
// 00844e5a  894c2404             mov dword ptr [esp + 4], ecx
// 00844e5e  db442404             fild dword ptr [esp + 4]
// 00844e62  dc0d4063ac00         fmul qword ptr [0xac6340]
// 00844e68  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetGDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
