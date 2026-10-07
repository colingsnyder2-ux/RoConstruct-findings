// roc 2008-06 00626c30  unit: seg_00620000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626c30
//
// 00626c30  8b460c               mov eax, dword ptr [esi + 0xc]
// 00626c33  83e801               sub eax, 1
// 00626c36  57                   push edi
// 00626c37  7814                 js 0x626c4d
// 00626c39  8d4cc614             lea ecx, [esi + eax*8 + 0x14]
// 00626c3d  8d4900               lea ecx, [ecx]
// 00626c40  8339ff               cmp dword ptr [ecx], -1
// 00626c43  7419                 je 0x626c5e
// 00626c45  48                   dec eax
// 00626c46  83e908               sub ecx, 8
// 00626c49  85c0                 test eax, eax
// 00626c4b  7df3                 jge 0x626c40
// 00626c4d  8b4608               mov eax, dword ptr [esi + 8]
// 00626c50  6858518400           push 0x845158
// 00626c55  50                   push eax
// 00626c56  e805a0feff           call 0x610c60
// 00626c5b  83c408               add esp, 8
// 00626c5e  8b542408             mov edx, dword ptr [esp + 8]
// 00626c62  8bf8                 mov edi, eax
// 00626c64  52                   push edx
// 00626c65  8bcb                 mov ecx, ebx
// 00626c67  2b4cfe10             sub ecx, dword ptr [esi + edi*8 + 0x10]
// 00626c6b  53                   push ebx
// 00626c6c  56                   push esi
// 00626c6d  894cfe14             mov dword ptr [esi + edi*8 + 0x14], ecx
// 00626c71  e8aa000000           call 0x626d20
// 00626c76  83c40c               add esp, 0xc
// 00626c79  85c0                 test eax, eax
// 00626c7b  7508                 jne 0x626c85
// 00626c7d  c744fe14ffffffff     mov dword ptr [esi + edi*8 + 0x14], 0xffffffff
// 00626c85  5f                   pop edi
// 00626c86  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _end_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
