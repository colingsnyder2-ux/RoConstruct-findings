// from server: 100% by auto
// roc 2007-08 00668a10  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668a10
//
// 00668a10  0fb6442405           movzx eax, byte ptr [esp + 5]
// 00668a15  89442404             mov dword ptr [esp + 4], eax
// 00668a19  db442404             fild dword ptr [esp + 4]
// 00668a1d  dc0df8a67c00         fmul qword ptr [0x7ca6f8]
// 00668a23  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?GetGDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
