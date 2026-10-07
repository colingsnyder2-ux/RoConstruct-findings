// roc 2012-06 009ed830  unit: CXTPToolTipContextToolTip  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ed830
//
// 009ed830  56                   push esi
// 009ed831  8bf1                 mov esi, ecx
// 009ed833  e858bdfdff           call 0x9c9590
// 009ed838  8bc8                 mov ecx, eax
// 009ed83a  e811cdfdff           call 0x9ca550
// 009ed83f  898650010000         mov dword ptr [esi + 0x150], eax
// 009ed845  5e                   pop esi
// 009ed846  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTGlobal.cpp (function ?GetComCtlVersion@CXTAuxData@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTGlobal.cpp
