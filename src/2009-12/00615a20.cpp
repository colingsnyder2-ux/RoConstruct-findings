// roc 2009-12 00615a20  unit: seg_00610000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615a20
//
// 00615a20  56                   push esi
// 00615a21  8b742408             mov esi, dword ptr [esp + 8]
// 00615a25  8b4604               mov eax, dword ptr [esi + 4]
// 00615a28  8b08                 mov ecx, dword ptr [eax]
// 00615a2a  6a1c                 push 0x1c
// 00615a2c  6a01                 push 1
// 00615a2e  56                   push esi
// 00615a2f  ffd1                 call ecx
// 00615a31  898680010000         mov dword ptr [esi + 0x180], eax
// 00615a37  83c40c               add esp, 0xc
// 00615a3a  c70090586100         mov dword ptr [eax], 0x615890
// 00615a40  c74004f0596100       mov dword ptr [eax + 4], 0x6159f0
// 00615a47  c6400800             mov byte ptr [eax + 8], 0
// 00615a4b  e870fcffff           call 0x6156c0
// 00615a50  5e                   pop esi
// 00615a51  c3                   ret 
// library jpeg-6b/jdmaster.c (function _jinit_master_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
