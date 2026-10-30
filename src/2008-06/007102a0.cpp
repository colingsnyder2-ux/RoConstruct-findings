// from server: 100% by auto
// roc 2008-06 007102a0  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007102a0
//
// 007102a0  56                   push esi
// 007102a1  8bf1                 mov esi, ecx
// 007102a3  e8887dfdff           call 0x6e8030
// 007102a8  8bc8                 mov ecx, eax
// 007102aa  e8518dfdff           call 0x6e9000
// 007102af  898650010000         mov dword ptr [esi + 0x150], eax
// 007102b5  5e                   pop esi
// 007102b6  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?GetComCtlVersion@CXTAuxData@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
