// roc 2008-06 00524e50  unit: seg_00520000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524e50
//
// 00524e50  56                   push esi
// 00524e51  8b742408             mov esi, dword ptr [esp + 8]
// 00524e55  837e1465             cmp dword ptr [esi + 0x14], 0x65
// 00524e59  741b                 je 0x524e76
// 00524e5b  8b06                 mov eax, dword ptr [esi]
// 00524e5d  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00524e64  8b0e                 mov ecx, dword ptr [esi]
// 00524e66  8b5614               mov edx, dword ptr [esi + 0x14]
// 00524e69  895118               mov dword ptr [ecx + 0x18], edx
// 00524e6c  8b06                 mov eax, dword ptr [esi]
// 00524e6e  8b08                 mov ecx, dword ptr [eax]
// 00524e70  56                   push esi
// 00524e71  ffd1                 call ecx
// 00524e73  83c404               add esp, 4
// 00524e76  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00524e7c  3b5620               cmp edx, dword ptr [esi + 0x20]
// 00524e7f  7216                 jb 0x524e97
// 00524e81  8b06                 mov eax, dword ptr [esi]
// 00524e83  c740147b000000       mov dword ptr [eax + 0x14], 0x7b
// 00524e8a  8b0e                 mov ecx, dword ptr [esi]
// 00524e8c  8b5104               mov edx, dword ptr [ecx + 4]
// 00524e8f  6aff                 push -1
// 00524e91  56                   push esi
// 00524e92  ffd2                 call edx
// 00524e94  83c408               add esp, 8
// 00524e97  8b4608               mov eax, dword ptr [esi + 8]
// 00524e9a  85c0                 test eax, eax
// 00524e9c  741d                 je 0x524ebb
// 00524e9e  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00524ea4  894804               mov dword ptr [eax + 4], ecx
// 00524ea7  8b5608               mov edx, dword ptr [esi + 8]
// 00524eaa  8b4620               mov eax, dword ptr [esi + 0x20]
// 00524ead  894208               mov dword ptr [edx + 8], eax
// 00524eb0  8b4e08               mov ecx, dword ptr [esi + 8]
// 00524eb3  8b11                 mov edx, dword ptr [ecx]
// 00524eb5  56                   push esi
// 00524eb6  ffd2                 call edx
// 00524eb8  83c404               add esp, 4
// 00524ebb  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00524ec1  80780c00             cmp byte ptr [eax + 0xc], 0
// 00524ec5  7409                 je 0x524ed0
// 00524ec7  8b4004               mov eax, dword ptr [eax + 4]
// 00524eca  56                   push esi
// 00524ecb  ffd0                 call eax
// 00524ecd  83c404               add esp, 4
// 00524ed0  8b4620               mov eax, dword ptr [esi + 0x20]
// 00524ed3  2b86d0000000         sub eax, dword ptr [esi + 0xd0]
// 00524ed9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00524edd  3bc8                 cmp ecx, eax
// 00524edf  7602                 jbe 0x524ee3
// 00524ee1  8bc8                 mov ecx, eax
// 00524ee3  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 00524ee9  51                   push ecx
// 00524eea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00524eee  8d44240c             lea eax, [esp + 0xc]
// 00524ef2  50                   push eax
// 00524ef3  51                   push ecx
// 00524ef4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00524efc  8b5204               mov edx, dword ptr [edx + 4]
// 00524eff  56                   push esi
// 00524f00  ffd2                 call edx
// 00524f02  8b442418             mov eax, dword ptr [esp + 0x18]
// 00524f06  0186d0000000         add dword ptr [esi + 0xd0], eax
// 00524f0c  83c410               add esp, 0x10
// 00524f0f  5e                   pop esi
// 00524f10  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_write_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
