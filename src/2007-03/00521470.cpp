// roc 2007-03 00521470  unit: seg_00520000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00521470
//
// 00521470  56                   push esi
// 00521471  8b742408             mov esi, dword ptr [esp + 8]
// 00521475  8b4604               mov eax, dword ptr [esi + 4]
// 00521478  8b08                 mov ecx, dword ptr [eax]
// 0052147a  68ac000000           push 0xac
// 0052147f  6a01                 push 1
// 00521481  56                   push esi
// 00521482  ffd1                 call ecx
// 00521484  898698010000         mov dword ptr [esi + 0x198], eax
// 0052148a  33c9                 xor ecx, ecx
// 0052148c  c70020135200         mov dword ptr [eax], 0x521320
// 00521492  c74004000f5200       mov dword ptr [eax + 4], 0x520f00
// 00521499  83c40c               add esp, 0xc
// 0052149c  894838               mov dword ptr [eax + 0x38], ecx
// 0052149f  894828               mov dword ptr [eax + 0x28], ecx
// 005214a2  89483c               mov dword ptr [eax + 0x3c], ecx
// 005214a5  89482c               mov dword ptr [eax + 0x2c], ecx
// 005214a8  894840               mov dword ptr [eax + 0x40], ecx
// 005214ab  894830               mov dword ptr [eax + 0x30], ecx
// 005214ae  894844               mov dword ptr [eax + 0x44], ecx
// 005214b1  894834               mov dword ptr [eax + 0x34], ecx
// 005214b4  5e                   pop esi
// 005214b5  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jinit_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
