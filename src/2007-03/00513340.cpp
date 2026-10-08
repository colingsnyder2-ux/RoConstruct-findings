// roc 2007-03 00513340  unit: seg_00510000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513340
//
// 00513340  56                   push esi
// 00513341  8b742408             mov esi, dword ptr [esp + 8]
// 00513345  837e1465             cmp dword ptr [esi + 0x14], 0x65
// 00513349  741b                 je 0x513366
// 0051334b  8b06                 mov eax, dword ptr [esi]
// 0051334d  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00513354  8b0e                 mov ecx, dword ptr [esi]
// 00513356  8b5614               mov edx, dword ptr [esi + 0x14]
// 00513359  895118               mov dword ptr [ecx + 0x18], edx
// 0051335c  8b06                 mov eax, dword ptr [esi]
// 0051335e  8b08                 mov ecx, dword ptr [eax]
// 00513360  56                   push esi
// 00513361  ffd1                 call ecx
// 00513363  83c404               add esp, 4
// 00513366  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 0051336c  3b5620               cmp edx, dword ptr [esi + 0x20]
// 0051336f  7216                 jb 0x513387
// 00513371  8b06                 mov eax, dword ptr [esi]
// 00513373  c740147b000000       mov dword ptr [eax + 0x14], 0x7b
// 0051337a  8b0e                 mov ecx, dword ptr [esi]
// 0051337c  8b5104               mov edx, dword ptr [ecx + 4]
// 0051337f  6aff                 push -1
// 00513381  56                   push esi
// 00513382  ffd2                 call edx
// 00513384  83c408               add esp, 8
// 00513387  8b4608               mov eax, dword ptr [esi + 8]
// 0051338a  85c0                 test eax, eax
// 0051338c  741d                 je 0x5133ab
// 0051338e  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00513394  894804               mov dword ptr [eax + 4], ecx
// 00513397  8b5608               mov edx, dword ptr [esi + 8]
// 0051339a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0051339d  894208               mov dword ptr [edx + 8], eax
// 005133a0  8b4e08               mov ecx, dword ptr [esi + 8]
// 005133a3  8b11                 mov edx, dword ptr [ecx]
// 005133a5  56                   push esi
// 005133a6  ffd2                 call edx
// 005133a8  83c404               add esp, 4
// 005133ab  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005133b1  80780c00             cmp byte ptr [eax + 0xc], 0
// 005133b5  7409                 je 0x5133c0
// 005133b7  8b4004               mov eax, dword ptr [eax + 4]
// 005133ba  56                   push esi
// 005133bb  ffd0                 call eax
// 005133bd  83c404               add esp, 4
// 005133c0  8b4620               mov eax, dword ptr [esi + 0x20]
// 005133c3  2b86d0000000         sub eax, dword ptr [esi + 0xd0]
// 005133c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005133cd  3bc8                 cmp ecx, eax
// 005133cf  7602                 jbe 0x5133d3
// 005133d1  8bc8                 mov ecx, eax
// 005133d3  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 005133d9  51                   push ecx
// 005133da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005133de  8d44240c             lea eax, [esp + 0xc]
// 005133e2  50                   push eax
// 005133e3  51                   push ecx
// 005133e4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005133ec  8b5204               mov edx, dword ptr [edx + 4]
// 005133ef  56                   push esi
// 005133f0  ffd2                 call edx
// 005133f2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005133f6  0186d0000000         add dword ptr [esi + 0xd0], eax
// 005133fc  83c410               add esp, 0x10
// 005133ff  5e                   pop esi
// 00513400  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_write_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
