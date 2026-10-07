// roc 2010-06 00580850  unit: seg_00580000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580850
//
// 00580850  56                   push esi
// 00580851  8b742408             mov esi, dword ptr [esp + 8]
// 00580855  8b4604               mov eax, dword ptr [esi + 4]
// 00580858  8b08                 mov ecx, dword ptr [eax]
// 0058085a  68ac000000           push 0xac
// 0058085f  6a01                 push 1
// 00580861  56                   push esi
// 00580862  ffd1                 call ecx
// 00580864  898698010000         mov dword ptr [esi + 0x198], eax
// 0058086a  33c9                 xor ecx, ecx
// 0058086c  c70000075800         mov dword ptr [eax], 0x580700
// 00580872  c74004e0025800       mov dword ptr [eax + 4], 0x5802e0
// 00580879  83c40c               add esp, 0xc
// 0058087c  894838               mov dword ptr [eax + 0x38], ecx
// 0058087f  894828               mov dword ptr [eax + 0x28], ecx
// 00580882  89483c               mov dword ptr [eax + 0x3c], ecx
// 00580885  89482c               mov dword ptr [eax + 0x2c], ecx
// 00580888  894840               mov dword ptr [eax + 0x40], ecx
// 0058088b  894830               mov dword ptr [eax + 0x30], ecx
// 0058088e  894844               mov dword ptr [eax + 0x44], ecx
// 00580891  894834               mov dword ptr [eax + 0x34], ecx
// 00580894  5e                   pop esi
// 00580895  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jinit_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
