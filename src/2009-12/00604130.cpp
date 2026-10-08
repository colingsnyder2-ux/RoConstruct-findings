// roc 2009-12 00604130  unit: seg_00600000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00604130
//
// 00604130  56                   push esi
// 00604131  8b742408             mov esi, dword ptr [esp + 8]
// 00604135  817e14cd000000       cmp dword ptr [esi + 0x14], 0xcd
// 0060413c  741b                 je 0x604159
// 0060413e  8b06                 mov eax, dword ptr [esi]
// 00604140  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00604147  8b0e                 mov ecx, dword ptr [esi]
// 00604149  8b5614               mov edx, dword ptr [esi + 0x14]
// 0060414c  895118               mov dword ptr [ecx + 0x18], edx
// 0060414f  8b06                 mov eax, dword ptr [esi]
// 00604151  8b08                 mov ecx, dword ptr [eax]
// 00604153  56                   push esi
// 00604154  ffd1                 call ecx
// 00604156  83c404               add esp, 4
// 00604159  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0060415c  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 0060415f  721a                 jb 0x60417b
// 00604161  8b16                 mov edx, dword ptr [esi]
// 00604163  c742147b000000       mov dword ptr [edx + 0x14], 0x7b
// 0060416a  8b06                 mov eax, dword ptr [esi]
// 0060416c  8b4804               mov ecx, dword ptr [eax + 4]
// 0060416f  6aff                 push -1
// 00604171  56                   push esi
// 00604172  ffd1                 call ecx
// 00604174  83c408               add esp, 8
// 00604177  33c0                 xor eax, eax
// 00604179  5e                   pop esi
// 0060417a  c3                   ret 
// 0060417b  8b4608               mov eax, dword ptr [esi + 8]
// 0060417e  85c0                 test eax, eax
// 00604180  7417                 je 0x604199
// 00604182  894804               mov dword ptr [eax + 4], ecx
// 00604185  8b5608               mov edx, dword ptr [esi + 8]
// 00604188  8b4660               mov eax, dword ptr [esi + 0x60]
// 0060418b  894208               mov dword ptr [edx + 8], eax
// 0060418e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00604191  8b11                 mov edx, dword ptr [ecx]
// 00604193  56                   push esi
// 00604194  ffd2                 call edx
// 00604196  83c404               add esp, 4
// 00604199  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060419d  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 006041a3  51                   push ecx
// 006041a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006041a8  8d54240c             lea edx, [esp + 0xc]
// 006041ac  52                   push edx
// 006041ad  51                   push ecx
// 006041ae  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006041b6  8b5004               mov edx, dword ptr [eax + 4]
// 006041b9  56                   push esi
// 006041ba  ffd2                 call edx
// 006041bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 006041c0  014678               add dword ptr [esi + 0x78], eax
// 006041c3  83c410               add esp, 0x10
// 006041c6  5e                   pop esi
// 006041c7  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_read_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
