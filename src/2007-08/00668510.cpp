// from server: 100% by auto
// roc 2007-08 00668510  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668510
//
// 00668510  8b442404             mov eax, dword ptr [esp + 4]
// 00668514  8b500c               mov edx, dword ptr [eax + 0xc]
// 00668517  83faff               cmp edx, -1
// 0066851a  7503                 jne 0x66851f
// 0066851c  8b5008               mov edx, dword ptr [eax + 8]
// 0066851f  895108               mov dword ptr [ecx + 8], edx
// 00668522  8b5018               mov edx, dword ptr [eax + 0x18]
// 00668525  83faff               cmp edx, -1
// 00668528  7503                 jne 0x66852d
// 0066852a  8b5014               mov edx, dword ptr [eax + 0x14]
// 0066852d  895114               mov dword ptr [ecx + 0x14], edx
// 00668530  d9401c               fld dword ptr [eax + 0x1c]
// 00668533  d9591c               fstp dword ptr [ecx + 0x1c]
// 00668536  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?SetStandardValue@CXTPPaintManagerColorGradient@@QAEXAAV1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
