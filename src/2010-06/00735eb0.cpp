// from server: 100% by auto
// roc 2010-06 00735eb0  unit: seg_00730000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735eb0
//
// 00735eb0  8b460c               mov eax, dword ptr [esi + 0xc]
// 00735eb3  83e801               sub eax, 1
// 00735eb6  57                   push edi
// 00735eb7  7814                 js 0x735ecd
// 00735eb9  8d4cc614             lea ecx, [esi + eax*8 + 0x14]
// 00735ebd  8d4900               lea ecx, [ecx]
// 00735ec0  8339ff               cmp dword ptr [ecx], -1
// 00735ec3  7419                 je 0x735ede
// 00735ec5  48                   dec eax
// 00735ec6  83e908               sub ecx, 8
// 00735ec9  85c0                 test eax, eax
// 00735ecb  7df3                 jge 0x735ec0
// 00735ecd  8b4608               mov eax, dword ptr [esi + 8]
// 00735ed0  6820e3a400           push 0xa4e320
// 00735ed5  50                   push eax
// 00735ed6  e8c5c5feff           call 0x7224a0
// 00735edb  83c408               add esp, 8
// 00735ede  8b542408             mov edx, dword ptr [esp + 8]
// 00735ee2  8bf8                 mov edi, eax
// 00735ee4  52                   push edx
// 00735ee5  8bcb                 mov ecx, ebx
// 00735ee7  2b4cfe10             sub ecx, dword ptr [esi + edi*8 + 0x10]
// 00735eeb  53                   push ebx
// 00735eec  56                   push esi
// 00735eed  894cfe14             mov dword ptr [esi + edi*8 + 0x14], ecx
// 00735ef1  e8aa000000           call 0x735fa0
// 00735ef6  83c40c               add esp, 0xc
// 00735ef9  85c0                 test eax, eax
// 00735efb  7508                 jne 0x735f05
// 00735efd  c744fe14ffffffff     mov dword ptr [esi + edi*8 + 0x14], 0xffffffff
// 00735f05  5f                   pop edi
// 00735f06  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _end_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
