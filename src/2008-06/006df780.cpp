// from server: 100% by auto
// roc 2008-06 006df780  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df780
//
// 006df780  8b442408             mov eax, dword ptr [esp + 8]
// 006df784  8b542404             mov edx, dword ptr [esp + 4]
// 006df788  89849168020000       mov dword ptr [ecx + edx*4 + 0x268], eax
// 006df78f  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?SetColor@CXTPColorManager@@QAEXHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
