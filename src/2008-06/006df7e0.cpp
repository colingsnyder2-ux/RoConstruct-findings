// from server: 100% by auto
// roc 2008-06 006df7e0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df7e0
//
// 006df7e0  8b442404             mov eax, dword ptr [esp + 4]
// 006df7e4  c1e810               shr eax, 0x10
// 006df7e7  0fb6c8               movzx ecx, al
// 006df7ea  894c2404             mov dword ptr [esp + 4], ecx
// 006df7ee  db442404             fild dword ptr [esp + 4]
// 006df7f2  dc0d805e8500         fmul qword ptr [0x855e80]
// 006df7f8  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?GetBDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
