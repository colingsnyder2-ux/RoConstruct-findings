// roc 2011-06 00844e70  unit: CXTPReportSelectedRows  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844e70
//
// 00844e70  8b442404             mov eax, dword ptr [esp + 4]
// 00844e74  c1e810               shr eax, 0x10
// 00844e77  0fb6c8               movzx ecx, al
// 00844e7a  894c2404             mov dword ptr [esp + 4], ecx
// 00844e7e  db442404             fild dword ptr [esp + 4]
// 00844e82  dc0d4863ac00         fmul qword ptr [0xac6348]
// 00844e88  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetBDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
