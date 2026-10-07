// roc 2007-08 005267a0  unit: G3D::Line  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005267a0
//
// 005267a0  56                   push esi
// 005267a1  8b742408             mov esi, dword ptr [esp + 8]
// 005267a5  8b4604               mov eax, dword ptr [esi + 4]
// 005267a8  8b08                 mov ecx, dword ptr [eax]
// 005267aa  68ac000000           push 0xac
// 005267af  6a01                 push 1
// 005267b1  56                   push esi
// 005267b2  ffd1                 call ecx
// 005267b4  898698010000         mov dword ptr [esi + 0x198], eax
// 005267ba  33c9                 xor ecx, ecx
// 005267bc  c70050665200         mov dword ptr [eax], 0x526650
// 005267c2  c7400430625200       mov dword ptr [eax + 4], 0x526230
// 005267c9  83c40c               add esp, 0xc
// 005267cc  894838               mov dword ptr [eax + 0x38], ecx
// 005267cf  894828               mov dword ptr [eax + 0x28], ecx
// 005267d2  89483c               mov dword ptr [eax + 0x3c], ecx
// 005267d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 005267d8  894840               mov dword ptr [eax + 0x40], ecx
// 005267db  894830               mov dword ptr [eax + 0x30], ecx
// 005267de  894844               mov dword ptr [eax + 0x44], ecx
// 005267e1  894834               mov dword ptr [eax + 0x34], ecx
// 005267e4  5e                   pop esi
// 005267e5  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jinit_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
