// from server: 100% by auto
// roc 2009-06 00582380  unit: seg_00580000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00582380
//
// 00582380  56                   push esi
// 00582381  8b742408             mov esi, dword ptr [esp + 8]
// 00582385  817e14cd000000       cmp dword ptr [esi + 0x14], 0xcd
// 0058238c  741b                 je 0x5823a9
// 0058238e  8b06                 mov eax, dword ptr [esi]
// 00582390  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00582397  8b0e                 mov ecx, dword ptr [esi]
// 00582399  8b5614               mov edx, dword ptr [esi + 0x14]
// 0058239c  895118               mov dword ptr [ecx + 0x18], edx
// 0058239f  8b06                 mov eax, dword ptr [esi]
// 005823a1  8b08                 mov ecx, dword ptr [eax]
// 005823a3  56                   push esi
// 005823a4  ffd1                 call ecx
// 005823a6  83c404               add esp, 4
// 005823a9  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 005823ac  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 005823af  721a                 jb 0x5823cb
// 005823b1  8b16                 mov edx, dword ptr [esi]
// 005823b3  c742147b000000       mov dword ptr [edx + 0x14], 0x7b
// 005823ba  8b06                 mov eax, dword ptr [esi]
// 005823bc  8b4804               mov ecx, dword ptr [eax + 4]
// 005823bf  6aff                 push -1
// 005823c1  56                   push esi
// 005823c2  ffd1                 call ecx
// 005823c4  83c408               add esp, 8
// 005823c7  33c0                 xor eax, eax
// 005823c9  5e                   pop esi
// 005823ca  c3                   ret 
// 005823cb  8b4608               mov eax, dword ptr [esi + 8]
// 005823ce  85c0                 test eax, eax
// 005823d0  7417                 je 0x5823e9
// 005823d2  894804               mov dword ptr [eax + 4], ecx
// 005823d5  8b5608               mov edx, dword ptr [esi + 8]
// 005823d8  8b4660               mov eax, dword ptr [esi + 0x60]
// 005823db  894208               mov dword ptr [edx + 8], eax
// 005823de  8b4e08               mov ecx, dword ptr [esi + 8]
// 005823e1  8b11                 mov edx, dword ptr [ecx]
// 005823e3  56                   push esi
// 005823e4  ffd2                 call edx
// 005823e6  83c404               add esp, 4
// 005823e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005823ed  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 005823f3  51                   push ecx
// 005823f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005823f8  8d54240c             lea edx, [esp + 0xc]
// 005823fc  52                   push edx
// 005823fd  51                   push ecx
// 005823fe  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00582406  8b5004               mov edx, dword ptr [eax + 4]
// 00582409  56                   push esi
// 0058240a  ffd2                 call edx
// 0058240c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00582410  014678               add dword ptr [esi + 0x78], eax
// 00582413  83c410               add esp, 0x10
// 00582416  5e                   pop esi
// 00582417  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_read_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
