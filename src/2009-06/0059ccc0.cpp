// from server: 100% by auto
// roc 2009-06 0059ccc0  unit: seg_00590000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ccc0
//
// 0059ccc0  56                   push esi
// 0059ccc1  8b742408             mov esi, dword ptr [esp + 8]
// 0059ccc5  8b4604               mov eax, dword ptr [esi + 4]
// 0059ccc8  8b08                 mov ecx, dword ptr [eax]
// 0059ccca  68ac000000           push 0xac
// 0059cccf  6a01                 push 1
// 0059ccd1  56                   push esi
// 0059ccd2  ffd1                 call ecx
// 0059ccd4  898698010000         mov dword ptr [esi + 0x198], eax
// 0059ccda  33c9                 xor ecx, ecx
// 0059ccdc  c70070cb5900         mov dword ptr [eax], 0x59cb70
// 0059cce2  c7400450c75900       mov dword ptr [eax + 4], 0x59c750
// 0059cce9  83c40c               add esp, 0xc
// 0059ccec  894838               mov dword ptr [eax + 0x38], ecx
// 0059ccef  894828               mov dword ptr [eax + 0x28], ecx
// 0059ccf2  89483c               mov dword ptr [eax + 0x3c], ecx
// 0059ccf5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0059ccf8  894840               mov dword ptr [eax + 0x40], ecx
// 0059ccfb  894830               mov dword ptr [eax + 0x30], ecx
// 0059ccfe  894844               mov dword ptr [eax + 0x44], ecx
// 0059cd01  894834               mov dword ptr [eax + 0x34], ecx
// 0059cd04  5e                   pop esi
// 0059cd05  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jinit_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
