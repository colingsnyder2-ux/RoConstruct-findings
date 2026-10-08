// from server: 100% by auto
// roc 2007-08 00517550  unit: seg_00510000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00517550
//
// 00517550  53                   push ebx
// 00517551  56                   push esi
// 00517552  8b742410             mov esi, dword ptr [esp + 0x10]
// 00517556  85f6                 test esi, esi
// 00517558  57                   push edi
// 00517559  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051755d  745b                 je 0x5175ba
// 0051755f  85ff                 test edi, edi
// 00517561  742c                 je 0x51758f
// 00517563  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00517567  85db                 test ebx, ebx
// 00517569  767b                 jbe 0x5175e6
// 0051756b  55                   push ebp
// 0051756c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00517570  8b0f                 mov ecx, dword ptr [edi]
// 00517572  8b06                 mov eax, dword ptr [esi]
// 00517574  51                   push ecx
// 00517575  50                   push eax
// 00517576  55                   push ebp
// 00517577  83c604               add esi, 4
// 0051757a  83c704               add edi, 4
// 0051757d  e8cefaffff           call 0x517050
// 00517582  83c40c               add esp, 0xc
// 00517585  83eb01               sub ebx, 1
// 00517588  75e6                 jne 0x517570
// 0051758a  5d                   pop ebp
// 0051758b  5f                   pop edi
// 0051758c  5e                   pop esi
// 0051758d  5b                   pop ebx
// 0051758e  c3                   ret 
// 0051758f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00517593  85ff                 test edi, edi
// 00517595  764f                 jbe 0x5175e6
// 00517597  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051759b  eb03                 jmp 0x5175a0
// 0051759d  8d4900               lea ecx, [ecx]
// 005175a0  8b06                 mov eax, dword ptr [esi]
// 005175a2  6a00                 push 0
// 005175a4  50                   push eax
// 005175a5  53                   push ebx
// 005175a6  e8a5faffff           call 0x517050
// 005175ab  83c40c               add esp, 0xc
// 005175ae  83c604               add esi, 4
// 005175b1  83ef01               sub edi, 1
// 005175b4  75ea                 jne 0x5175a0
// 005175b6  5f                   pop edi
// 005175b7  5e                   pop esi
// 005175b8  5b                   pop ebx
// 005175b9  c3                   ret 
// 005175ba  85ff                 test edi, edi
// 005175bc  7428                 je 0x5175e6
// 005175be  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005175c2  85f6                 test esi, esi
// 005175c4  7620                 jbe 0x5175e6
// 005175c6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005175ca  8d9b00000000         lea ebx, [ebx]
// 005175d0  8b0f                 mov ecx, dword ptr [edi]
// 005175d2  51                   push ecx
// 005175d3  6a00                 push 0
// 005175d5  53                   push ebx
// 005175d6  e875faffff           call 0x517050
// 005175db  83c40c               add esp, 0xc
// 005175de  83c704               add edi, 4
// 005175e1  83ee01               sub esi, 1
// 005175e4  75ea                 jne 0x5175d0
// 005175e6  5f                   pop edi
// 005175e7  5e                   pop esi
// 005175e8  5b                   pop ebx
// 005175e9  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_read_rows)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
