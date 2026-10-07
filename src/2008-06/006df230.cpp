// roc 2008-06 006df230  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df230
//
// 006df230  8bc1                 mov eax, ecx
// 006df232  83c9ff               or ecx, 0xffffffff
// 006df235  c700fc5d8500         mov dword ptr [eax], 0x855dfc
// 006df23b  894804               mov dword ptr [eax + 4], ecx
// 006df23e  894808               mov dword ptr [eax + 8], ecx
// 006df241  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ??0CXTPPaintManagerColor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
