// from server: 100% by auto
// roc 2012-06 009c1510  unit: CRobloxTreeCtrl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1510
//
// 009c1510  56                   push esi
// 009c1511  57                   push edi
// 009c1512  8bf1                 mov esi, ecx
// 009c1514  33ff                 xor edi, edi
// 009c1516  e8d5eeffff           call 0x9c03f0
// 009c151b  85c0                 test eax, eax
// 009c151d  740e                 je 0x9c152d
// 009c151f  90                   nop 
// 009c1520  50                   push eax
// 009c1521  8bce                 mov ecx, esi
// 009c1523  47                   inc edi
// 009c1524  e817efffff           call 0x9c0440
// 009c1529  85c0                 test eax, eax
// 009c152b  75f3                 jne 0x9c1520
// 009c152d  8bc7                 mov eax, edi
// 009c152f  5f                   pop edi
// 009c1530  5e                   pop esi
// 009c1531  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetSelectedCount@CXTPTreeBase@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
