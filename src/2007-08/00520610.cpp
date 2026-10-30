// from server: 100% by auto
// roc 2007-08 00520610  unit: seg_00520000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00520610
//
// 00520610  56                   push esi
// 00520611  8b742408             mov esi, dword ptr [esp + 8]
// 00520615  8b4604               mov eax, dword ptr [esi + 4]
// 00520618  8b08                 mov ecx, dword ptr [eax]
// 0052061a  6a1c                 push 0x1c
// 0052061c  6a01                 push 1
// 0052061e  56                   push esi
// 0052061f  ffd1                 call ecx
// 00520621  898680010000         mov dword ptr [esi + 0x180], eax
// 00520627  83c40c               add esp, 0xc
// 0052062a  c70080045200         mov dword ptr [eax], 0x520480
// 00520630  c74004e0055200       mov dword ptr [eax + 4], 0x5205e0
// 00520637  c6400800             mov byte ptr [eax + 8], 0
// 0052063b  e870fcffff           call 0x5202b0
// 00520640  5e                   pop esi
// 00520641  c3                   ret 
// library jpeg-6b/jdmaster.c (function _jinit_master_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
