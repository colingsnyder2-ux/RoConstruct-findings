// from server: 100% by auto
// roc 2007-08 006684f0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006684f0
//
// 006684f0  8b442404             mov eax, dword ptr [esp + 4]
// 006684f4  d944240c             fld dword ptr [esp + 0xc]
// 006684f8  8b542408             mov edx, dword ptr [esp + 8]
// 006684fc  d9591c               fstp dword ptr [ecx + 0x1c]
// 006684ff  894108               mov dword ptr [ecx + 8], eax
// 00668502  895114               mov dword ptr [ecx + 0x14], edx
// 00668505  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?SetStandardValue@CXTPPaintManagerColorGradient@@QAEXKKM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
