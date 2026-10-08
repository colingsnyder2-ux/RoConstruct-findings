// roc 2009-12 0061ecf0  unit: seg_00610000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061ecf0
//
// 0061ecf0  56                   push esi
// 0061ecf1  8b742408             mov esi, dword ptr [esp + 8]
// 0061ecf5  8b4604               mov eax, dword ptr [esi + 4]
// 0061ecf8  8b08                 mov ecx, dword ptr [eax]
// 0061ecfa  68ac000000           push 0xac
// 0061ecff  6a01                 push 1
// 0061ed01  56                   push esi
// 0061ed02  ffd1                 call ecx
// 0061ed04  898698010000         mov dword ptr [esi + 0x198], eax
// 0061ed0a  33c9                 xor ecx, ecx
// 0061ed0c  c700a0eb6100         mov dword ptr [eax], 0x61eba0
// 0061ed12  c7400480e76100       mov dword ptr [eax + 4], 0x61e780
// 0061ed19  83c40c               add esp, 0xc
// 0061ed1c  894838               mov dword ptr [eax + 0x38], ecx
// 0061ed1f  894828               mov dword ptr [eax + 0x28], ecx
// 0061ed22  89483c               mov dword ptr [eax + 0x3c], ecx
// 0061ed25  89482c               mov dword ptr [eax + 0x2c], ecx
// 0061ed28  894840               mov dword ptr [eax + 0x40], ecx
// 0061ed2b  894830               mov dword ptr [eax + 0x30], ecx
// 0061ed2e  894844               mov dword ptr [eax + 0x44], ecx
// 0061ed31  894834               mov dword ptr [eax + 0x34], ecx
// 0061ed34  5e                   pop esi
// 0061ed35  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jinit_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
