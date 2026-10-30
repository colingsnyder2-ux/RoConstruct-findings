// from server: 100% by auto
// roc 2008-06 006df2a0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df2a0
//
// 006df2a0  8b442404             mov eax, dword ptr [esp + 4]
// 006df2a4  8b500c               mov edx, dword ptr [eax + 0xc]
// 006df2a7  83faff               cmp edx, -1
// 006df2aa  7503                 jne 0x6df2af
// 006df2ac  8b5008               mov edx, dword ptr [eax + 8]
// 006df2af  895108               mov dword ptr [ecx + 8], edx
// 006df2b2  8b5018               mov edx, dword ptr [eax + 0x18]
// 006df2b5  83faff               cmp edx, -1
// 006df2b8  7503                 jne 0x6df2bd
// 006df2ba  8b5014               mov edx, dword ptr [eax + 0x14]
// 006df2bd  895114               mov dword ptr [ecx + 0x14], edx
// 006df2c0  d9401c               fld dword ptr [eax + 0x1c]
// 006df2c3  d9591c               fstp dword ptr [ecx + 0x1c]
// 006df2c6  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?SetStandardValue@CXTPPaintManagerColorGradient@@QAEXAAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
