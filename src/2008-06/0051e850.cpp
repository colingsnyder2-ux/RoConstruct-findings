// from server: 100% by auto
// roc 2008-06 0051e850  unit: seg_00510000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e850
//
// 0051e850  56                   push esi
// 0051e851  8b742408             mov esi, dword ptr [esp + 8]
// 0051e855  817e14cd000000       cmp dword ptr [esi + 0x14], 0xcd
// 0051e85c  741b                 je 0x51e879
// 0051e85e  8b06                 mov eax, dword ptr [esi]
// 0051e860  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0051e867  8b0e                 mov ecx, dword ptr [esi]
// 0051e869  8b5614               mov edx, dword ptr [esi + 0x14]
// 0051e86c  895118               mov dword ptr [ecx + 0x18], edx
// 0051e86f  8b06                 mov eax, dword ptr [esi]
// 0051e871  8b08                 mov ecx, dword ptr [eax]
// 0051e873  56                   push esi
// 0051e874  ffd1                 call ecx
// 0051e876  83c404               add esp, 4
// 0051e879  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0051e87c  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 0051e87f  721a                 jb 0x51e89b
// 0051e881  8b16                 mov edx, dword ptr [esi]
// 0051e883  c742147b000000       mov dword ptr [edx + 0x14], 0x7b
// 0051e88a  8b06                 mov eax, dword ptr [esi]
// 0051e88c  8b4804               mov ecx, dword ptr [eax + 4]
// 0051e88f  6aff                 push -1
// 0051e891  56                   push esi
// 0051e892  ffd1                 call ecx
// 0051e894  83c408               add esp, 8
// 0051e897  33c0                 xor eax, eax
// 0051e899  5e                   pop esi
// 0051e89a  c3                   ret 
// 0051e89b  8b4608               mov eax, dword ptr [esi + 8]
// 0051e89e  85c0                 test eax, eax
// 0051e8a0  7417                 je 0x51e8b9
// 0051e8a2  894804               mov dword ptr [eax + 4], ecx
// 0051e8a5  8b5608               mov edx, dword ptr [esi + 8]
// 0051e8a8  8b4660               mov eax, dword ptr [esi + 0x60]
// 0051e8ab  894208               mov dword ptr [edx + 8], eax
// 0051e8ae  8b4e08               mov ecx, dword ptr [esi + 8]
// 0051e8b1  8b11                 mov edx, dword ptr [ecx]
// 0051e8b3  56                   push esi
// 0051e8b4  ffd2                 call edx
// 0051e8b6  83c404               add esp, 4
// 0051e8b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051e8bd  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0051e8c3  51                   push ecx
// 0051e8c4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051e8c8  8d54240c             lea edx, [esp + 0xc]
// 0051e8cc  52                   push edx
// 0051e8cd  51                   push ecx
// 0051e8ce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0051e8d6  8b5004               mov edx, dword ptr [eax + 4]
// 0051e8d9  56                   push esi
// 0051e8da  ffd2                 call edx
// 0051e8dc  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051e8e0  014678               add dword ptr [esi + 0x78], eax
// 0051e8e3  83c410               add esp, 0x10
// 0051e8e6  5e                   pop esi
// 0051e8e7  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_read_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
