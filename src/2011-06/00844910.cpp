// roc 2011-06 00844910  unit: CXTPReportSelectedRows  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844910
//
// 00844910  8b442404             mov eax, dword ptr [esp + 4]
// 00844914  d944240c             fld dword ptr [esp + 0xc]
// 00844918  8b542408             mov edx, dword ptr [esp + 8]
// 0084491c  d9591c               fstp dword ptr [ecx + 0x1c]
// 0084491f  894108               mov dword ptr [ecx + 8], eax
// 00844922  895114               mov dword ptr [ecx + 0x14], edx
// 00844925  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?SetStandardValue@CXTPPaintManagerColorGradient@@QAEXKKM@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
