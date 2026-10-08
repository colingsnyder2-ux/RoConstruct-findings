// from server: 100% by auto
// roc 2010-06 00577340  unit: seg_00570000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00577340
//
// 00577340  56                   push esi
// 00577341  8b742408             mov esi, dword ptr [esp + 8]
// 00577345  8b4604               mov eax, dword ptr [esi + 4]
// 00577348  8b08                 mov ecx, dword ptr [eax]
// 0057734a  6a1c                 push 0x1c
// 0057734c  6a01                 push 1
// 0057734e  56                   push esi
// 0057734f  ffd1                 call ecx
// 00577351  898680010000         mov dword ptr [esi + 0x180], eax
// 00577357  83c40c               add esp, 0xc
// 0057735a  c700b0715700         mov dword ptr [eax], 0x5771b0
// 00577360  c7400410735700       mov dword ptr [eax + 4], 0x577310
// 00577367  c6400800             mov byte ptr [eax + 8], 0
// 0057736b  e870fcffff           call 0x576fe0
// 00577370  5e                   pop esi
// 00577371  c3                   ret 
// library jpeg-6b/jdmaster.c (function _jinit_master_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
