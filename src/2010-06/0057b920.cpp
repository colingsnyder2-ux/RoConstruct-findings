// roc 2010-06 0057b920  unit: seg_00570000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b920
//
// 0057b920  56                   push esi
// 0057b921  8b742408             mov esi, dword ptr [esp + 8]
// 0057b925  57                   push edi
// 0057b926  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0057b92c  68d8000000           push 0xd8
// 0057b931  e8aaf4ffff           call 0x57ade0
// 0057b936  83c404               add esp, 4
// 0057b939  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 0057b940  80bec400000000       cmp byte ptr [esi + 0xc4], 0
// 0057b947  7407                 je 0x57b950
// 0057b949  8bc6                 mov eax, esi
// 0057b94b  e8f0fbffff           call 0x57b540
// 0057b950  80becc00000000       cmp byte ptr [esi + 0xcc], 0
// 0057b957  5f                   pop edi
// 0057b958  7408                 je 0x57b962
// 0057b95a  8bc6                 mov eax, esi
// 0057b95c  5e                   pop esi
// 0057b95d  e9defdffff           jmp 0x57b740
// 0057b962  5e                   pop esi
// 0057b963  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
