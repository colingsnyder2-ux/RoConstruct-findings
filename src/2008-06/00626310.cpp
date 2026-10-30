// from server: 100% by auto
// roc 2008-06 00626310  unit: seg_00620000  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626310
//
// 00626310  51                   push ecx
// 00626311  55                   push ebp
// 00626312  56                   push esi
// 00626313  57                   push edi
// 00626314  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00626318  8d44240c             lea eax, [esp + 0xc]
// 0062631c  50                   push eax
// 0062631d  6a01                 push 1
// 0062631f  57                   push edi
// 00626320  e89bb3feff           call 0x6116c0
// 00626325  8b742418             mov esi, dword ptr [esp + 0x18]
// 00626329  6a02                 push 2
// 0062632b  57                   push edi
// 0062632c  8be8                 mov ebp, eax
// 0062632e  e8cdb4feff           call 0x611800
// 00626333  83c414               add esp, 0x14
// 00626336  85c0                 test eax, eax
// 00626338  7c04                 jl 0x62633e
// 0062633a  8bf0                 mov esi, eax
// 0062633c  eb04                 jmp 0x626342
// 0062633e  8d743001             lea esi, [eax + esi + 1]
// 00626342  53                   push ebx
// 00626343  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00626347  6aff                 push -1
// 00626349  6a03                 push 3
// 0062634b  57                   push edi
// 0062634c  e81fb5feff           call 0x611870
// 00626351  83c40c               add esp, 0xc
// 00626354  85c0                 test eax, eax
// 00626356  7d04                 jge 0x62635c
// 00626358  8d441801             lea eax, [eax + ebx + 1]
// 0062635c  83fe01               cmp esi, 1
// 0062635f  5b                   pop ebx
// 00626360  7d05                 jge 0x626367
// 00626362  be01000000           mov esi, 1
// 00626367  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062636b  3bc1                 cmp eax, ecx
// 0062636d  7e02                 jle 0x626371
// 0062636f  8bc1                 mov eax, ecx
// 00626371  3bf0                 cmp esi, eax
// 00626373  7f1c                 jg 0x626391
// 00626375  2bc6                 sub eax, esi
// 00626377  40                   inc eax
// 00626378  50                   push eax
// 00626379  8d4c2eff             lea ecx, [esi + ebp - 1]
// 0062637d  51                   push ecx
// 0062637e  57                   push edi
// 0062637f  e8bcbefeff           call 0x612240
// 00626384  83c40c               add esp, 0xc
// 00626387  5f                   pop edi
// 00626388  5e                   pop esi
// 00626389  b801000000           mov eax, 1
// 0062638e  5d                   pop ebp
// 0062638f  59                   pop ecx
// 00626390  c3                   ret 
// 00626391  6a00                 push 0
// 00626393  6816b78000           push 0x80b716
// 00626398  57                   push edi
// 00626399  e8a2befeff           call 0x612240
// 0062639e  83c40c               add esp, 0xc
// 006263a1  5f                   pop edi
// 006263a2  5e                   pop esi
// 006263a3  b801000000           mov eax, 1
// 006263a8  5d                   pop ebp
// 006263a9  59                   pop ecx
// 006263aa  c3                   ret 
// library lua-5.1.3/lstrlib.c (function _str_sub)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lstrlib.c
