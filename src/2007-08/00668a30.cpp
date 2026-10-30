// from server: 100% by auto
// roc 2007-08 00668a30  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668a30
//
// 00668a30  8b442404             mov eax, dword ptr [esp + 4]
// 00668a34  c1e810               shr eax, 0x10
// 00668a37  0fb6c8               movzx ecx, al
// 00668a3a  894c2404             mov dword ptr [esp + 4], ecx
// 00668a3e  db442404             fild dword ptr [esp + 4]
// 00668a42  dc0d00a77c00         fmul qword ptr [0x7ca700]
// 00668a48  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?GetBDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
