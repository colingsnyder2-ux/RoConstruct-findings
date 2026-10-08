// from server: 100% by auto
// roc 2011-06 00576b00  unit: seg_00570000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576b00
//
// 00576b00  56                   push esi
// 00576b01  8b742408             mov esi, dword ptr [esp + 8]
// 00576b05  8b4604               mov eax, dword ptr [esi + 4]
// 00576b08  8b08                 mov ecx, dword ptr [eax]
// 00576b0a  68ac000000           push 0xac
// 00576b0f  6a01                 push 1
// 00576b11  56                   push esi
// 00576b12  ffd1                 call ecx
// 00576b14  898698010000         mov dword ptr [esi + 0x198], eax
// 00576b1a  33c9                 xor ecx, ecx
// 00576b1c  c700b0695700         mov dword ptr [eax], 0x5769b0
// 00576b22  c7400490655700       mov dword ptr [eax + 4], 0x576590
// 00576b29  83c40c               add esp, 0xc
// 00576b2c  894838               mov dword ptr [eax + 0x38], ecx
// 00576b2f  894828               mov dword ptr [eax + 0x28], ecx
// 00576b32  89483c               mov dword ptr [eax + 0x3c], ecx
// 00576b35  89482c               mov dword ptr [eax + 0x2c], ecx
// 00576b38  894840               mov dword ptr [eax + 0x40], ecx
// 00576b3b  894830               mov dword ptr [eax + 0x30], ecx
// 00576b3e  894844               mov dword ptr [eax + 0x44], ecx
// 00576b41  894834               mov dword ptr [eax + 0x34], ecx
// 00576b44  5e                   pop esi
// 00576b45  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jinit_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
