// from server: 100% by auto
// roc 2012-06 00662210  unit: seg_00660000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00662210
//
// 00662210  56                   push esi
// 00662211  8b742408             mov esi, dword ptr [esp + 8]
// 00662215  8b4604               mov eax, dword ptr [esi + 4]
// 00662218  8b08                 mov ecx, dword ptr [eax]
// 0066221a  68ac000000           push 0xac
// 0066221f  6a01                 push 1
// 00662221  56                   push esi
// 00662222  ffd1                 call ecx
// 00662224  898698010000         mov dword ptr [esi + 0x198], eax
// 0066222a  33c9                 xor ecx, ecx
// 0066222c  c700c0206600         mov dword ptr [eax], 0x6620c0
// 00662232  c74004a01c6600       mov dword ptr [eax + 4], 0x661ca0
// 00662239  83c40c               add esp, 0xc
// 0066223c  894838               mov dword ptr [eax + 0x38], ecx
// 0066223f  894828               mov dword ptr [eax + 0x28], ecx
// 00662242  89483c               mov dword ptr [eax + 0x3c], ecx
// 00662245  89482c               mov dword ptr [eax + 0x2c], ecx
// 00662248  894840               mov dword ptr [eax + 0x40], ecx
// 0066224b  894830               mov dword ptr [eax + 0x30], ecx
// 0066224e  894844               mov dword ptr [eax + 0x44], ecx
// 00662251  894834               mov dword ptr [eax + 0x34], ecx
// 00662254  5e                   pop esi
// 00662255  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jinit_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
