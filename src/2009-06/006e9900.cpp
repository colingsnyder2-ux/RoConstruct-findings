// from server: 100% by auto
// roc 2009-06 006e9900  unit: RBX::PartDropTool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9900
//
// 006e9900  55                   push ebp
// 006e9901  56                   push esi
// 006e9902  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 006e9908  8d6f78               lea ebp, [edi + 0x78]
// 006e990b  3bf5                 cmp esi, ebp
// 006e990d  7429                 je 0x6e9938
// 006e990f  90                   nop 
// 006e9910  f6460507             test byte ptr [esi + 5], 7
// 006e9914  751b                 jne 0x6e9931
// 006e9916  8b4608               mov eax, dword ptr [esi + 8]
// 006e9919  83780804             cmp dword ptr [eax + 8], 4
// 006e991d  7c12                 jl 0x6e9931
// 006e991f  8b00                 mov eax, dword ptr [eax]
// 006e9921  f6400503             test byte ptr [eax + 5], 3
// 006e9925  740a                 je 0x6e9931
// 006e9927  50                   push eax
// 006e9928  57                   push edi
// 006e9929  e8d2f4ffff           call 0x6e8e00
// 006e992e  83c408               add esp, 8
// 006e9931  8b7614               mov esi, dword ptr [esi + 0x14]
// 006e9934  3bf5                 cmp esi, ebp
// 006e9936  75d8                 jne 0x6e9910
// 006e9938  5e                   pop esi
// 006e9939  5d                   pop ebp
// 006e993a  c3                   ret 
// library lua-5.1.4/lgc.c (function _remarkupvals)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
