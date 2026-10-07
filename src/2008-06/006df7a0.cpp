// roc 2008-06 006df7a0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df7a0
//
// 006df7a0  0fb6442404           movzx eax, byte ptr [esp + 4]
// 006df7a5  89442404             mov dword ptr [esp + 4], eax
// 006df7a9  db442404             fild dword ptr [esp + 4]
// 006df7ad  dc0d705e8500         fmul qword ptr [0x855e70]
// 006df7b3  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?GetRDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
