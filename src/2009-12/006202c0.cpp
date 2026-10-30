// roc 2009-12 006202c0  unit: seg_00620000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006202c0
//
// 006202c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006202c4  53                   push ebx
// 006202c5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006202c9  55                   push ebp
// 006202ca  33ed                 xor ebp, ebp
// 006202cc  39ab14010000         cmp dword ptr [ebx + 0x114], ebp
// 006202d2  57                   push edi
// 006202d3  8b38                 mov edi, dword ptr [eax]
// 006202d5  7e37                 jle 0x62030e
// 006202d7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006202db  2bd7                 sub edx, edi
// 006202dd  8954241c             mov dword ptr [esp + 0x1c], edx
// 006202e1  56                   push esi
// 006202e2  8b07                 mov eax, dword ptr [edi]
// 006202e4  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 006202e7  8b343a               mov esi, dword ptr [edx + edi]
// 006202ea  03c8                 add ecx, eax
// 006202ec  3bc1                 cmp eax, ecx
// 006202ee  7311                 jae 0x620301
// 006202f0  8a16                 mov dl, byte ptr [esi]
// 006202f2  8810                 mov byte ptr [eax], dl
// 006202f4  40                   inc eax
// 006202f5  8810                 mov byte ptr [eax], dl
// 006202f7  40                   inc eax
// 006202f8  46                   inc esi
// 006202f9  3bc1                 cmp eax, ecx
// 006202fb  72f3                 jb 0x6202f0
// 006202fd  8b542420             mov edx, dword ptr [esp + 0x20]
// 00620301  45                   inc ebp
// 00620302  83c704               add edi, 4
// 00620305  3bab14010000         cmp ebp, dword ptr [ebx + 0x114]
// 0062030b  7cd5                 jl 0x6202e2
// 0062030d  5e                   pop esi
// 0062030e  5f                   pop edi
// 0062030f  5d                   pop ebp
// 00620310  5b                   pop ebx
// 00620311  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
