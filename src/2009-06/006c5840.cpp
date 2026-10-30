// from server: 100% by auto
// roc 2009-06 006c5840  unit: lua_exception  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5840
//
// 006c5840  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c5843  83e801               sub eax, 1
// 006c5846  57                   push edi
// 006c5847  7814                 js 0x6c585d
// 006c5849  8d4cc614             lea ecx, [esi + eax*8 + 0x14]
// 006c584d  8d4900               lea ecx, [ecx]
// 006c5850  8339ff               cmp dword ptr [ecx], -1
// 006c5853  7419                 je 0x6c586e
// 006c5855  48                   dec eax
// 006c5856  83e908               sub ecx, 8
// 006c5859  85c0                 test eax, eax
// 006c585b  7df3                 jge 0x6c5850
// 006c585d  8b4608               mov eax, dword ptr [esi + 8]
// 006c5860  68a0bb8e00           push 0x8ebba0
// 006c5865  50                   push eax
// 006c5866  e8d549ffff           call 0x6ba240
// 006c586b  83c408               add esp, 8
// 006c586e  8b542408             mov edx, dword ptr [esp + 8]
// 006c5872  8bf8                 mov edi, eax
// 006c5874  52                   push edx
// 006c5875  8bcb                 mov ecx, ebx
// 006c5877  2b4cfe10             sub ecx, dword ptr [esi + edi*8 + 0x10]
// 006c587b  53                   push ebx
// 006c587c  56                   push esi
// 006c587d  894cfe14             mov dword ptr [esi + edi*8 + 0x14], ecx
// 006c5881  e8aa000000           call 0x6c5930
// 006c5886  83c40c               add esp, 0xc
// 006c5889  85c0                 test eax, eax
// 006c588b  7508                 jne 0x6c5895
// 006c588d  c744fe14ffffffff     mov dword ptr [esi + edi*8 + 0x14], 0xffffffff
// 006c5895  5f                   pop edi
// 006c5896  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _end_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
