// from server: 100% by auto
// roc 2012-06 008502b0  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008502b0
//
// 008502b0  8b4804               mov ecx, dword ptr [eax + 4]
// 008502b3  83790806             cmp dword ptr [ecx + 8], 6
// 008502b7  7528                 jne 0x8502e1
// 008502b9  56                   push esi
// 008502ba  8b31                 mov esi, dword ptr [ecx]
// 008502bc  807e0600             cmp byte ptr [esi + 6], 0
// 008502c0  5e                   pop esi
// 008502c1  751e                 jne 0x8502e1
// 008502c3  3b4214               cmp eax, dword ptr [edx + 0x14]
// 008502c6  7506                 jne 0x8502ce
// 008502c8  8b5218               mov edx, dword ptr [edx + 0x18]
// 008502cb  89500c               mov dword ptr [eax + 0xc], edx
// 008502ce  8b09                 mov ecx, dword ptr [ecx]
// 008502d0  8b400c               mov eax, dword ptr [eax + 0xc]
// 008502d3  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008502d6  2b410c               sub eax, dword ptr [ecx + 0xc]
// 008502d9  c1f802               sar eax, 2
// 008502dc  83e801               sub eax, 1
// 008502df  7904                 jns 0x8502e5
// 008502e1  83c8ff               or eax, 0xffffffff
// 008502e4  c3                   ret 
// 008502e5  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 008502e8  85c9                 test ecx, ecx
// 008502ea  7404                 je 0x8502f0
// 008502ec  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008502ef  c3                   ret 
// 008502f0  33c0                 xor eax, eax
// 008502f2  c3                   ret 
// library lua-5.1.4/ldebug.c (function _currentline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
