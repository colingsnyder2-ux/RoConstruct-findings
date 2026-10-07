// roc 2011-06 00569970  unit: seg_00560000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569970
//
// 00569970  56                   push esi
// 00569971  8b742408             mov esi, dword ptr [esp + 8]
// 00569975  8b4604               mov eax, dword ptr [esi + 4]
// 00569978  8b08                 mov ecx, dword ptr [eax]
// 0056997a  6a1c                 push 0x1c
// 0056997c  6a01                 push 1
// 0056997e  56                   push esi
// 0056997f  ffd1                 call ecx
// 00569981  898680010000         mov dword ptr [esi + 0x180], eax
// 00569987  83c40c               add esp, 0xc
// 0056998a  c700e0975600         mov dword ptr [eax], 0x5697e0
// 00569990  c7400440995600       mov dword ptr [eax + 4], 0x569940
// 00569997  c6400800             mov byte ptr [eax + 8], 0
// 0056999b  e870fcffff           call 0x569610
// 005699a0  5e                   pop esi
// 005699a1  c3                   ret 
// library jpeg-6b/jdmaster.c (function _jinit_master_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
