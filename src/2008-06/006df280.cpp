// roc 2008-06 006df280  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df280
//
// 006df280  8b442404             mov eax, dword ptr [esp + 4]
// 006df284  d944240c             fld dword ptr [esp + 0xc]
// 006df288  8b542408             mov edx, dword ptr [esp + 8]
// 006df28c  d9591c               fstp dword ptr [ecx + 0x1c]
// 006df28f  894108               mov dword ptr [ecx + 8], eax
// 006df292  895114               mov dword ptr [ecx + 0x14], edx
// 006df295  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?SetStandardValue@CXTPPaintManagerColorGradient@@QAEXKKM@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
