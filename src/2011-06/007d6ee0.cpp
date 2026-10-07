// roc 2011-06 007d6ee0  unit: RBX::EquationDisplay  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6ee0
//
// 007d6ee0  55                   push ebp
// 007d6ee1  56                   push esi
// 007d6ee2  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 007d6ee8  8d6f78               lea ebp, [edi + 0x78]
// 007d6eeb  3bf5                 cmp esi, ebp
// 007d6eed  7429                 je 0x7d6f18
// 007d6eef  90                   nop 
// 007d6ef0  f6460507             test byte ptr [esi + 5], 7
// 007d6ef4  751b                 jne 0x7d6f11
// 007d6ef6  8b4608               mov eax, dword ptr [esi + 8]
// 007d6ef9  83780804             cmp dword ptr [eax + 8], 4
// 007d6efd  7c12                 jl 0x7d6f11
// 007d6eff  8b00                 mov eax, dword ptr [eax]
// 007d6f01  f6400503             test byte ptr [eax + 5], 3
// 007d6f05  740a                 je 0x7d6f11
// 007d6f07  50                   push eax
// 007d6f08  57                   push edi
// 007d6f09  e8c2f4ffff           call 0x7d63d0
// 007d6f0e  83c408               add esp, 8
// 007d6f11  8b7614               mov esi, dword ptr [esi + 0x14]
// 007d6f14  3bf5                 cmp esi, ebp
// 007d6f16  75d8                 jne 0x7d6ef0
// 007d6f18  5e                   pop esi
// 007d6f19  5d                   pop ebp
// 007d6f1a  c3                   ret 
// library lua-5.1.4/lgc.c (function _remarkupvals)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
