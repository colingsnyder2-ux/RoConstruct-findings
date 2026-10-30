// from server: 100% by auto
// roc 2012-06 00932ff0  unit: RBX::BallCellContact  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00932ff0
//
// 00932ff0  55                   push ebp
// 00932ff1  56                   push esi
// 00932ff2  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 00932ff8  8d6f78               lea ebp, [edi + 0x78]
// 00932ffb  3bf5                 cmp esi, ebp
// 00932ffd  7429                 je 0x933028
// 00932fff  90                   nop 
// 00933000  f6460507             test byte ptr [esi + 5], 7
// 00933004  751b                 jne 0x933021
// 00933006  8b4608               mov eax, dword ptr [esi + 8]
// 00933009  83780804             cmp dword ptr [eax + 8], 4
// 0093300d  7c12                 jl 0x933021
// 0093300f  8b00                 mov eax, dword ptr [eax]
// 00933011  f6400503             test byte ptr [eax + 5], 3
// 00933015  740a                 je 0x933021
// 00933017  50                   push eax
// 00933018  57                   push edi
// 00933019  e8b2f4ffff           call 0x9324d0
// 0093301e  83c408               add esp, 8
// 00933021  8b7614               mov esi, dword ptr [esi + 0x14]
// 00933024  3bf5                 cmp esi, ebp
// 00933026  75d8                 jne 0x933000
// 00933028  5e                   pop esi
// 00933029  5d                   pop ebp
// 0093302a  c3                   ret 
// library lua-5.1.4/lgc.c (function _remarkupvals)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
