// roc 2012-06 009bcd40  unit: CXTPReportSelectedRows  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bcd40
//
// 009bcd40  8b442404             mov eax, dword ptr [esp + 4]
// 009bcd44  d944240c             fld dword ptr [esp + 0xc]
// 009bcd48  8b542408             mov edx, dword ptr [esp + 8]
// 009bcd4c  d9591c               fstp dword ptr [ecx + 0x1c]
// 009bcd4f  894108               mov dword ptr [ecx + 8], eax
// 009bcd52  895114               mov dword ptr [ecx + 0x14], edx
// 009bcd55  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?SetStandardValue@CXTPPaintManagerColorGradient@@QAEXKKM@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
