// roc 2007-08 0060fb40  unit: RBX::Ball  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fb40
//
// 0060fb40  55                   push ebp
// 0060fb41  56                   push esi
// 0060fb42  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 0060fb48  8d6f78               lea ebp, [edi + 0x78]
// 0060fb4b  3bf5                 cmp esi, ebp
// 0060fb4d  7429                 je 0x60fb78
// 0060fb4f  90                   nop 
// 0060fb50  f6460507             test byte ptr [esi + 5], 7
// 0060fb54  751b                 jne 0x60fb71
// 0060fb56  8b4608               mov eax, dword ptr [esi + 8]
// 0060fb59  83780804             cmp dword ptr [eax + 8], 4
// 0060fb5d  7c12                 jl 0x60fb71
// 0060fb5f  8b00                 mov eax, dword ptr [eax]
// 0060fb61  f6400503             test byte ptr [eax + 5], 3
// 0060fb65  740a                 je 0x60fb71
// 0060fb67  50                   push eax
// 0060fb68  57                   push edi
// 0060fb69  e8a2f4ffff           call 0x60f010
// 0060fb6e  83c408               add esp, 8
// 0060fb71  8b7614               mov esi, dword ptr [esi + 0x14]
// 0060fb74  3bf5                 cmp esi, ebp
// 0060fb76  75d8                 jne 0x60fb50
// 0060fb78  5e                   pop esi
// 0060fb79  5d                   pop ebp
// 0060fb7a  c3                   ret 
// library lua-5.1.4/lgc.c (function _remarkupvals)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
