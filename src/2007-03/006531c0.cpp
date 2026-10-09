// roc 2007-03 006531c0  unit: seg_00650000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006531c0
//
// 006531c0  56                   push esi
// 006531c1  57                   push edi
// 006531c2  8bf1                 mov esi, ecx
// 006531c4  33ff                 xor edi, edi
// 006531c6  e8e5eeffff           call 0x6520b0
// 006531cb  85c0                 test eax, eax
// 006531cd  7410                 je 0x6531df
// 006531cf  90                   nop 
// 006531d0  50                   push eax
// 006531d1  8bce                 mov ecx, esi
// 006531d3  83c701               add edi, 1
// 006531d6  e825efffff           call 0x652100
// 006531db  85c0                 test eax, eax
// 006531dd  75f1                 jne 0x6531d0
// 006531df  8bc7                 mov eax, edi
// 006531e1  5f                   pop edi
// 006531e2  5e                   pop esi
// 006531e3  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetSelectedCount@CXTTreeBase@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
