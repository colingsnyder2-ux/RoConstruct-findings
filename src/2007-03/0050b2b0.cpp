// roc 2007-03 0050b2b0  unit: seg_00500000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050b2b0
//
// 0050b2b0  56                   push esi
// 0050b2b1  8b742408             mov esi, dword ptr [esp + 8]
// 0050b2b5  817e14cd000000       cmp dword ptr [esi + 0x14], 0xcd
// 0050b2bc  741b                 je 0x50b2d9
// 0050b2be  8b06                 mov eax, dword ptr [esi]
// 0050b2c0  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0050b2c7  8b0e                 mov ecx, dword ptr [esi]
// 0050b2c9  8b5614               mov edx, dword ptr [esi + 0x14]
// 0050b2cc  895118               mov dword ptr [ecx + 0x18], edx
// 0050b2cf  8b06                 mov eax, dword ptr [esi]
// 0050b2d1  8b08                 mov ecx, dword ptr [eax]
// 0050b2d3  56                   push esi
// 0050b2d4  ffd1                 call ecx
// 0050b2d6  83c404               add esp, 4
// 0050b2d9  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0050b2dc  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 0050b2df  721a                 jb 0x50b2fb
// 0050b2e1  8b16                 mov edx, dword ptr [esi]
// 0050b2e3  c742147b000000       mov dword ptr [edx + 0x14], 0x7b
// 0050b2ea  8b06                 mov eax, dword ptr [esi]
// 0050b2ec  8b4804               mov ecx, dword ptr [eax + 4]
// 0050b2ef  6aff                 push -1
// 0050b2f1  56                   push esi
// 0050b2f2  ffd1                 call ecx
// 0050b2f4  83c408               add esp, 8
// 0050b2f7  33c0                 xor eax, eax
// 0050b2f9  5e                   pop esi
// 0050b2fa  c3                   ret 
// 0050b2fb  8b4608               mov eax, dword ptr [esi + 8]
// 0050b2fe  85c0                 test eax, eax
// 0050b300  7417                 je 0x50b319
// 0050b302  894804               mov dword ptr [eax + 4], ecx
// 0050b305  8b5608               mov edx, dword ptr [esi + 8]
// 0050b308  8b4660               mov eax, dword ptr [esi + 0x60]
// 0050b30b  894208               mov dword ptr [edx + 8], eax
// 0050b30e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050b311  8b11                 mov edx, dword ptr [ecx]
// 0050b313  56                   push esi
// 0050b314  ffd2                 call edx
// 0050b316  83c404               add esp, 4
// 0050b319  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050b31d  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0050b323  51                   push ecx
// 0050b324  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050b328  8d54240c             lea edx, [esp + 0xc]
// 0050b32c  52                   push edx
// 0050b32d  51                   push ecx
// 0050b32e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050b336  8b5004               mov edx, dword ptr [eax + 4]
// 0050b339  56                   push esi
// 0050b33a  ffd2                 call edx
// 0050b33c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050b340  014678               add dword ptr [esi + 0x78], eax
// 0050b343  83c410               add esp, 0x10
// 0050b346  5e                   pop esi
// 0050b347  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_read_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
