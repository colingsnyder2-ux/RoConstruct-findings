// roc 2010-06 0077aba0  unit: RBX::PartDropTool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077aba0
//
// 0077aba0  55                   push ebp
// 0077aba1  56                   push esi
// 0077aba2  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 0077aba8  8d6f78               lea ebp, [edi + 0x78]
// 0077abab  3bf5                 cmp esi, ebp
// 0077abad  7429                 je 0x77abd8
// 0077abaf  90                   nop 
// 0077abb0  f6460507             test byte ptr [esi + 5], 7
// 0077abb4  751b                 jne 0x77abd1
// 0077abb6  8b4608               mov eax, dword ptr [esi + 8]
// 0077abb9  83780804             cmp dword ptr [eax + 8], 4
// 0077abbd  7c12                 jl 0x77abd1
// 0077abbf  8b00                 mov eax, dword ptr [eax]
// 0077abc1  f6400503             test byte ptr [eax + 5], 3
// 0077abc5  740a                 je 0x77abd1
// 0077abc7  50                   push eax
// 0077abc8  57                   push edi
// 0077abc9  e8d2f4ffff           call 0x77a0a0
// 0077abce  83c408               add esp, 8
// 0077abd1  8b7614               mov esi, dword ptr [esi + 0x14]
// 0077abd4  3bf5                 cmp esi, ebp
// 0077abd6  75d8                 jne 0x77abb0
// 0077abd8  5e                   pop esi
// 0077abd9  5d                   pop ebp
// 0077abda  c3                   ret 
// library lua-5.1.4/lgc.c (function _remarkupvals)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
