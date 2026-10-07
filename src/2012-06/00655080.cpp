// roc 2012-06 00655080  unit: seg_00650000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655080
//
// 00655080  56                   push esi
// 00655081  8b742408             mov esi, dword ptr [esp + 8]
// 00655085  8b4604               mov eax, dword ptr [esi + 4]
// 00655088  8b08                 mov ecx, dword ptr [eax]
// 0065508a  6a1c                 push 0x1c
// 0065508c  6a01                 push 1
// 0065508e  56                   push esi
// 0065508f  ffd1                 call ecx
// 00655091  898680010000         mov dword ptr [esi + 0x180], eax
// 00655097  83c40c               add esp, 0xc
// 0065509a  c700f04e6500         mov dword ptr [eax], 0x654ef0
// 006550a0  c7400450506500       mov dword ptr [eax + 4], 0x655050
// 006550a7  c6400800             mov byte ptr [eax + 8], 0
// 006550ab  e870fcffff           call 0x654d20
// 006550b0  5e                   pop esi
// 006550b1  c3                   ret 
// library jpeg-6b/jdmaster.c (function _jinit_master_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
