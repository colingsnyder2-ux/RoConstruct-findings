// roc 2007-08 00515aa0  unit: seg_00510000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515aa0
//
// 00515aa0  56                   push esi
// 00515aa1  8b742408             mov esi, dword ptr [esp + 8]
// 00515aa5  817e14cd000000       cmp dword ptr [esi + 0x14], 0xcd
// 00515aac  741b                 je 0x515ac9
// 00515aae  8b06                 mov eax, dword ptr [esi]
// 00515ab0  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00515ab7  8b0e                 mov ecx, dword ptr [esi]
// 00515ab9  8b5614               mov edx, dword ptr [esi + 0x14]
// 00515abc  895118               mov dword ptr [ecx + 0x18], edx
// 00515abf  8b06                 mov eax, dword ptr [esi]
// 00515ac1  8b08                 mov ecx, dword ptr [eax]
// 00515ac3  56                   push esi
// 00515ac4  ffd1                 call ecx
// 00515ac6  83c404               add esp, 4
// 00515ac9  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00515acc  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 00515acf  721a                 jb 0x515aeb
// 00515ad1  8b16                 mov edx, dword ptr [esi]
// 00515ad3  c742147b000000       mov dword ptr [edx + 0x14], 0x7b
// 00515ada  8b06                 mov eax, dword ptr [esi]
// 00515adc  8b4804               mov ecx, dword ptr [eax + 4]
// 00515adf  6aff                 push -1
// 00515ae1  56                   push esi
// 00515ae2  ffd1                 call ecx
// 00515ae4  83c408               add esp, 8
// 00515ae7  33c0                 xor eax, eax
// 00515ae9  5e                   pop esi
// 00515aea  c3                   ret 
// 00515aeb  8b4608               mov eax, dword ptr [esi + 8]
// 00515aee  85c0                 test eax, eax
// 00515af0  7417                 je 0x515b09
// 00515af2  894804               mov dword ptr [eax + 4], ecx
// 00515af5  8b5608               mov edx, dword ptr [esi + 8]
// 00515af8  8b4660               mov eax, dword ptr [esi + 0x60]
// 00515afb  894208               mov dword ptr [edx + 8], eax
// 00515afe  8b4e08               mov ecx, dword ptr [esi + 8]
// 00515b01  8b11                 mov edx, dword ptr [ecx]
// 00515b03  56                   push esi
// 00515b04  ffd2                 call edx
// 00515b06  83c404               add esp, 4
// 00515b09  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00515b0d  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00515b13  51                   push ecx
// 00515b14  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00515b18  8d54240c             lea edx, [esp + 0xc]
// 00515b1c  52                   push edx
// 00515b1d  51                   push ecx
// 00515b1e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00515b26  8b5004               mov edx, dword ptr [eax + 4]
// 00515b29  56                   push esi
// 00515b2a  ffd2                 call edx
// 00515b2c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00515b30  014678               add dword ptr [esi + 0x78], eax
// 00515b33  83c410               add esp, 0x10
// 00515b36  5e                   pop esi
// 00515b37  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_read_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
