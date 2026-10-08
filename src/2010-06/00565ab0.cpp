// from server: 100% by auto
// roc 2010-06 00565ab0  unit: seg_00560000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00565ab0
//
// 00565ab0  56                   push esi
// 00565ab1  8b742408             mov esi, dword ptr [esp + 8]
// 00565ab5  817e14cd000000       cmp dword ptr [esi + 0x14], 0xcd
// 00565abc  741b                 je 0x565ad9
// 00565abe  8b06                 mov eax, dword ptr [esi]
// 00565ac0  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00565ac7  8b0e                 mov ecx, dword ptr [esi]
// 00565ac9  8b5614               mov edx, dword ptr [esi + 0x14]
// 00565acc  895118               mov dword ptr [ecx + 0x18], edx
// 00565acf  8b06                 mov eax, dword ptr [esi]
// 00565ad1  8b08                 mov ecx, dword ptr [eax]
// 00565ad3  56                   push esi
// 00565ad4  ffd1                 call ecx
// 00565ad6  83c404               add esp, 4
// 00565ad9  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00565adc  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 00565adf  721a                 jb 0x565afb
// 00565ae1  8b16                 mov edx, dword ptr [esi]
// 00565ae3  c742147b000000       mov dword ptr [edx + 0x14], 0x7b
// 00565aea  8b06                 mov eax, dword ptr [esi]
// 00565aec  8b4804               mov ecx, dword ptr [eax + 4]
// 00565aef  6aff                 push -1
// 00565af1  56                   push esi
// 00565af2  ffd1                 call ecx
// 00565af4  83c408               add esp, 8
// 00565af7  33c0                 xor eax, eax
// 00565af9  5e                   pop esi
// 00565afa  c3                   ret 
// 00565afb  8b4608               mov eax, dword ptr [esi + 8]
// 00565afe  85c0                 test eax, eax
// 00565b00  7417                 je 0x565b19
// 00565b02  894804               mov dword ptr [eax + 4], ecx
// 00565b05  8b5608               mov edx, dword ptr [esi + 8]
// 00565b08  8b4660               mov eax, dword ptr [esi + 0x60]
// 00565b0b  894208               mov dword ptr [edx + 8], eax
// 00565b0e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00565b11  8b11                 mov edx, dword ptr [ecx]
// 00565b13  56                   push esi
// 00565b14  ffd2                 call edx
// 00565b16  83c404               add esp, 4
// 00565b19  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00565b1d  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00565b23  51                   push ecx
// 00565b24  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00565b28  8d54240c             lea edx, [esp + 0xc]
// 00565b2c  52                   push edx
// 00565b2d  51                   push ecx
// 00565b2e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00565b36  8b5004               mov edx, dword ptr [eax + 4]
// 00565b39  56                   push esi
// 00565b3a  ffd2                 call edx
// 00565b3c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00565b40  014678               add dword ptr [esi + 0x78], eax
// 00565b43  83c410               add esp, 0x10
// 00565b46  5e                   pop esi
// 00565b47  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_read_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
