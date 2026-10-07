// roc 2007-08 00696ed0  unit: CXTPToolTipContext::CRichEditToolTip  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696ed0
//
// 00696ed0  56                   push esi
// 00696ed1  8bf1                 mov esi, ecx
// 00696ed3  e868a2fdff           call 0x671140
// 00696ed8  8bc8                 mov ecx, eax
// 00696eda  e851b2fdff           call 0x672130
// 00696edf  898650010000         mov dword ptr [esi + 0x150], eax
// 00696ee5  5e                   pop esi
// 00696ee6  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTGlobal.cpp (function ?GetComCtlVersion@CXTAuxData@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTGlobal.cpp
