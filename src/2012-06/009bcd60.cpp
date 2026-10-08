// from server: 100% by auto
// roc 2012-06 009bcd60  unit: CXTPReportSelectedRows  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bcd60
//
// 009bcd60  8b442404             mov eax, dword ptr [esp + 4]
// 009bcd64  8b500c               mov edx, dword ptr [eax + 0xc]
// 009bcd67  83faff               cmp edx, -1
// 009bcd6a  7503                 jne 0x9bcd6f
// 009bcd6c  8b5008               mov edx, dword ptr [eax + 8]
// 009bcd6f  895108               mov dword ptr [ecx + 8], edx
// 009bcd72  8b5018               mov edx, dword ptr [eax + 0x18]
// 009bcd75  83faff               cmp edx, -1
// 009bcd78  7503                 jne 0x9bcd7d
// 009bcd7a  8b5014               mov edx, dword ptr [eax + 0x14]
// 009bcd7d  895114               mov dword ptr [ecx + 0x14], edx
// 009bcd80  d9401c               fld dword ptr [eax + 0x1c]
// 009bcd83  d9591c               fstp dword ptr [ecx + 0x1c]
// 009bcd86  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?SetStandardValue@CXTPPaintManagerColorGradient@@QAEXAAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
