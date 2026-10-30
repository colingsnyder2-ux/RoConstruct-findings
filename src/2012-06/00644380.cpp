// from server: 100% by auto
// roc 2012-06 00644380  unit: seg_00640000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644380
//
// 00644380  56                   push esi
// 00644381  8b742408             mov esi, dword ptr [esp + 8]
// 00644385  817e14cd000000       cmp dword ptr [esi + 0x14], 0xcd
// 0064438c  741b                 je 0x6443a9
// 0064438e  8b06                 mov eax, dword ptr [esi]
// 00644390  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00644397  8b0e                 mov ecx, dword ptr [esi]
// 00644399  8b5614               mov edx, dword ptr [esi + 0x14]
// 0064439c  895118               mov dword ptr [ecx + 0x18], edx
// 0064439f  8b06                 mov eax, dword ptr [esi]
// 006443a1  8b08                 mov ecx, dword ptr [eax]
// 006443a3  56                   push esi
// 006443a4  ffd1                 call ecx
// 006443a6  83c404               add esp, 4
// 006443a9  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 006443ac  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 006443af  721a                 jb 0x6443cb
// 006443b1  8b16                 mov edx, dword ptr [esi]
// 006443b3  c742147b000000       mov dword ptr [edx + 0x14], 0x7b
// 006443ba  8b06                 mov eax, dword ptr [esi]
// 006443bc  8b4804               mov ecx, dword ptr [eax + 4]
// 006443bf  6aff                 push -1
// 006443c1  56                   push esi
// 006443c2  ffd1                 call ecx
// 006443c4  83c408               add esp, 8
// 006443c7  33c0                 xor eax, eax
// 006443c9  5e                   pop esi
// 006443ca  c3                   ret 
// 006443cb  8b4608               mov eax, dword ptr [esi + 8]
// 006443ce  85c0                 test eax, eax
// 006443d0  7417                 je 0x6443e9
// 006443d2  894804               mov dword ptr [eax + 4], ecx
// 006443d5  8b5608               mov edx, dword ptr [esi + 8]
// 006443d8  8b4660               mov eax, dword ptr [esi + 0x60]
// 006443db  894208               mov dword ptr [edx + 8], eax
// 006443de  8b4e08               mov ecx, dword ptr [esi + 8]
// 006443e1  8b11                 mov edx, dword ptr [ecx]
// 006443e3  56                   push esi
// 006443e4  ffd2                 call edx
// 006443e6  83c404               add esp, 4
// 006443e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006443ed  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 006443f3  51                   push ecx
// 006443f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006443f8  8d54240c             lea edx, [esp + 0xc]
// 006443fc  52                   push edx
// 006443fd  51                   push ecx
// 006443fe  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00644406  8b5004               mov edx, dword ptr [eax + 4]
// 00644409  56                   push esi
// 0064440a  ffd2                 call edx
// 0064440c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00644410  014678               add dword ptr [esi + 0x78], eax
// 00644413  83c410               add esp, 0x10
// 00644416  5e                   pop esi
// 00644417  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_read_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
