// roc 2010-06 00565960  unit: seg_00560000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00565960
//
// 00565960  56                   push esi
// 00565961  8b742408             mov esi, dword ptr [esp + 8]
// 00565965  8b4614               mov eax, dword ptr [esi + 0x14]
// 00565968  3dc8000000           cmp eax, 0xc8
// 0056596d  7422                 je 0x565991
// 0056596f  3dc9000000           cmp eax, 0xc9
// 00565974  741b                 je 0x565991
// 00565976  8b06                 mov eax, dword ptr [esi]
// 00565978  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0056597f  8b0e                 mov ecx, dword ptr [esi]
// 00565981  8b5614               mov edx, dword ptr [esi + 0x14]
// 00565984  895118               mov dword ptr [ecx + 0x18], edx
// 00565987  8b06                 mov eax, dword ptr [esi]
// 00565989  8b08                 mov ecx, dword ptr [eax]
// 0056598b  56                   push esi
// 0056598c  ffd1                 call ecx
// 0056598e  83c404               add esp, 4
// 00565991  56                   push esi
// 00565992  e829feffff           call 0x5657c0
// 00565997  8bc8                 mov ecx, eax
// 00565999  83c404               add esp, 4
// 0056599c  83e901               sub ecx, 1
// 0056599f  742e                 je 0x5659cf
// 005659a1  83e901               sub ecx, 1
// 005659a4  752e                 jne 0x5659d4
// 005659a6  384c240c             cmp byte ptr [esp + 0xc], cl
// 005659aa  7413                 je 0x5659bf
// 005659ac  8b16                 mov edx, dword ptr [esi]
// 005659ae  c7421433000000       mov dword ptr [edx + 0x14], 0x33
// 005659b5  8b06                 mov eax, dword ptr [esi]
// 005659b7  8b08                 mov ecx, dword ptr [eax]
// 005659b9  56                   push esi
// 005659ba  ffd1                 call ecx
// 005659bc  83c404               add esp, 4
// 005659bf  56                   push esi
// 005659c0  e89bcdffff           call 0x562760
// 005659c5  83c404               add esp, 4
// 005659c8  b802000000           mov eax, 2
// 005659cd  5e                   pop esi
// 005659ce  c3                   ret 
// 005659cf  b801000000           mov eax, 1
// 005659d4  5e                   pop esi
// 005659d5  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_read_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
