// roc 2008-06 0052be30  unit: seg_00520000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052be30
//
// 0052be30  56                   push esi
// 0052be31  8b742408             mov esi, dword ptr [esp + 8]
// 0052be35  8b4604               mov eax, dword ptr [esi + 4]
// 0052be38  8b08                 mov ecx, dword ptr [eax]
// 0052be3a  6a1c                 push 0x1c
// 0052be3c  6a01                 push 1
// 0052be3e  56                   push esi
// 0052be3f  ffd1                 call ecx
// 0052be41  898680010000         mov dword ptr [esi + 0x180], eax
// 0052be47  83c40c               add esp, 0xc
// 0052be4a  c700a0bc5200         mov dword ptr [eax], 0x52bca0
// 0052be50  c7400400be5200       mov dword ptr [eax + 4], 0x52be00
// 0052be57  c6400800             mov byte ptr [eax + 8], 0
// 0052be5b  e870fcffff           call 0x52bad0
// 0052be60  5e                   pop esi
// 0052be61  c3                   ret 
// library jpeg-6b/jdmaster.c (function _jinit_master_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
