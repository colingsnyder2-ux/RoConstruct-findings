// roc 2009-06 00593a10  unit: seg_00590000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593a10
//
// 00593a10  56                   push esi
// 00593a11  8b742408             mov esi, dword ptr [esp + 8]
// 00593a15  8b4604               mov eax, dword ptr [esi + 4]
// 00593a18  8b08                 mov ecx, dword ptr [eax]
// 00593a1a  6a1c                 push 0x1c
// 00593a1c  6a01                 push 1
// 00593a1e  56                   push esi
// 00593a1f  ffd1                 call ecx
// 00593a21  898680010000         mov dword ptr [esi + 0x180], eax
// 00593a27  83c40c               add esp, 0xc
// 00593a2a  c70080385900         mov dword ptr [eax], 0x593880
// 00593a30  c74004e0395900       mov dword ptr [eax + 4], 0x5939e0
// 00593a37  c6400800             mov byte ptr [eax + 8], 0
// 00593a3b  e870fcffff           call 0x5936b0
// 00593a40  5e                   pop esi
// 00593a41  c3                   ret 
// library jpeg-6b/jdmaster.c (function _jinit_master_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
