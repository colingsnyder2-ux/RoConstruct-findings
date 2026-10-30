// from server: 100% by auto
// roc 2007-08 006684a0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006684a0
//
// 006684a0  8bc1                 mov eax, ecx
// 006684a2  83c9ff               or ecx, 0xffffffff
// 006684a5  c7007ca67c00         mov dword ptr [eax], 0x7ca67c
// 006684ab  894804               mov dword ptr [eax + 4], ecx
// 006684ae  894808               mov dword ptr [eax + 8], ecx
// 006684b1  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ??0CXTPPaintManagerColor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
