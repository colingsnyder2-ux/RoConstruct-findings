// from server: 100% by auto
// roc 2012-06 009bccf0  unit: CXTPReportSelectedRows  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bccf0
//
// 009bccf0  8bc1                 mov eax, ecx
// 009bccf2  83c9ff               or ecx, 0xffffffff
// 009bccf5  c700a819c100         mov dword ptr [eax], 0xc119a8
// 009bccfb  894804               mov dword ptr [eax + 4], ecx
// 009bccfe  894808               mov dword ptr [eax + 8], ecx
// 009bcd01  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ??0CXTPPaintManagerColor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
