// from server: 100% by auto
// roc 2011-06 00844930  unit: CXTPReportSelectedRows  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844930
//
// 00844930  8b442404             mov eax, dword ptr [esp + 4]
// 00844934  8b500c               mov edx, dword ptr [eax + 0xc]
// 00844937  83faff               cmp edx, -1
// 0084493a  7503                 jne 0x84493f
// 0084493c  8b5008               mov edx, dword ptr [eax + 8]
// 0084493f  895108               mov dword ptr [ecx + 8], edx
// 00844942  8b5018               mov edx, dword ptr [eax + 0x18]
// 00844945  83faff               cmp edx, -1
// 00844948  7503                 jne 0x84494d
// 0084494a  8b5014               mov edx, dword ptr [eax + 0x14]
// 0084494d  895114               mov dword ptr [ecx + 0x14], edx
// 00844950  d9401c               fld dword ptr [eax + 0x1c]
// 00844953  d9591c               fstp dword ptr [ecx + 0x1c]
// 00844956  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?SetStandardValue@CXTPPaintManagerColorGradient@@QAEXAAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
