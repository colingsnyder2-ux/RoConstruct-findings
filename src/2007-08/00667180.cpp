// from server: 100% by auto
// roc 2007-08 00667180  unit: CRobloxTreeCtrl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00667180
//
// 00667180  56                   push esi
// 00667181  57                   push edi
// 00667182  8bf1                 mov esi, ecx
// 00667184  33ff                 xor edi, edi
// 00667186  e8e5eeffff           call 0x666070
// 0066718b  85c0                 test eax, eax
// 0066718d  7410                 je 0x66719f
// 0066718f  90                   nop 
// 00667190  50                   push eax
// 00667191  8bce                 mov ecx, esi
// 00667193  83c701               add edi, 1
// 00667196  e825efffff           call 0x6660c0
// 0066719b  85c0                 test eax, eax
// 0066719d  75f1                 jne 0x667190
// 0066719f  8bc7                 mov eax, edi
// 006671a1  5f                   pop edi
// 006671a2  5e                   pop esi
// 006671a3  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetSelectedCount@CXTTreeBase@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
