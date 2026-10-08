// from server: 100% by auto
// roc 2007-08 006689f0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006689f0
//
// 006689f0  0fb6442404           movzx eax, byte ptr [esp + 4]
// 006689f5  89442404             mov dword ptr [esp + 4], eax
// 006689f9  db442404             fild dword ptr [esp + 4]
// 006689fd  dc0df0a67c00         fmul qword ptr [0x7ca6f0]
// 00668a03  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?GetRDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
