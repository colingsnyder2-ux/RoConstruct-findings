// from server: 100% by auto
// roc 2008-06 0065c0d0  unit: RBX::BallBallContact  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c0d0
//
// 0065c0d0  55                   push ebp
// 0065c0d1  56                   push esi
// 0065c0d2  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 0065c0d8  8d6f78               lea ebp, [edi + 0x78]
// 0065c0db  3bf5                 cmp esi, ebp
// 0065c0dd  7429                 je 0x65c108
// 0065c0df  90                   nop 
// 0065c0e0  f6460507             test byte ptr [esi + 5], 7
// 0065c0e4  751b                 jne 0x65c101
// 0065c0e6  8b4608               mov eax, dword ptr [esi + 8]
// 0065c0e9  83780804             cmp dword ptr [eax + 8], 4
// 0065c0ed  7c12                 jl 0x65c101
// 0065c0ef  8b00                 mov eax, dword ptr [eax]
// 0065c0f1  f6400503             test byte ptr [eax + 5], 3
// 0065c0f5  740a                 je 0x65c101
// 0065c0f7  50                   push eax
// 0065c0f8  57                   push edi
// 0065c0f9  e8d2f4ffff           call 0x65b5d0
// 0065c0fe  83c408               add esp, 8
// 0065c101  8b7614               mov esi, dword ptr [esi + 0x14]
// 0065c104  3bf5                 cmp esi, ebp
// 0065c106  75d8                 jne 0x65c0e0
// 0065c108  5e                   pop esi
// 0065c109  5d                   pop ebp
// 0065c10a  c3                   ret 
// library lua-5.1.4/lgc.c (function _remarkupvals)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
