// from server: 100% by auto
// roc 2011-06 00849090  unit: CRobloxTreeCtrl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849090
//
// 00849090  56                   push esi
// 00849091  57                   push edi
// 00849092  8bf1                 mov esi, ecx
// 00849094  33ff                 xor edi, edi
// 00849096  e8d5eeffff           call 0x847f70
// 0084909b  85c0                 test eax, eax
// 0084909d  740e                 je 0x8490ad
// 0084909f  90                   nop 
// 008490a0  50                   push eax
// 008490a1  8bce                 mov ecx, esi
// 008490a3  47                   inc edi
// 008490a4  e817efffff           call 0x847fc0
// 008490a9  85c0                 test eax, eax
// 008490ab  75f3                 jne 0x8490a0
// 008490ad  8bc7                 mov eax, edi
// 008490af  5f                   pop edi
// 008490b0  5e                   pop esi
// 008490b1  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetSelectedCount@CXTPTreeBase@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
