// from server: 100% by auto
// roc 2008-06 006df7c0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df7c0
//
// 006df7c0  8b442404             mov eax, dword ptr [esp + 4]
// 006df7c4  c1e808               shr eax, 8
// 006df7c7  0fb6c8               movzx ecx, al
// 006df7ca  894c2404             mov dword ptr [esp + 4], ecx
// 006df7ce  db442404             fild dword ptr [esp + 4]
// 006df7d2  dc0d785e8500         fmul qword ptr [0x855e78]
// 006df7d8  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?GetGDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
