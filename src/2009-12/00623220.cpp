// roc 2009-12 00623220  unit: seg_00620000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623220
//
// 00623220  56                   push esi
// 00623221  57                   push edi
// 00623222  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00623226  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 0062322c  8b4608               mov eax, dword ptr [esi + 8]
// 0062322f  3b87e0000000         cmp eax, dword ptr [edi + 0xe0]
// 00623235  0f8381000000         jae 0x6232bc
// 0062323b  53                   push ebx
// 0062323c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00623240  55                   push ebp
// 00623241  8d6e0c               lea ebp, [esi + 0xc]
// 00623244  837d0008             cmp dword ptr [ebp], 8
// 00623248  7325                 jae 0x62326f
// 0062324a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062324e  8b8f44010000         mov ecx, dword ptr [edi + 0x144]
// 00623254  6a08                 push 8
// 00623256  55                   push ebp
// 00623257  8d5618               lea edx, [esi + 0x18]
// 0062325a  52                   push edx
// 0062325b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062325f  50                   push eax
// 00623260  8b4104               mov eax, dword ptr [ecx + 4]
// 00623263  53                   push ebx
// 00623264  52                   push edx
// 00623265  57                   push edi
// 00623266  ffd0                 call eax
// 00623268  83c41c               add esp, 0x1c
// 0062326b  837d0008             cmp dword ptr [ebp], 8
// 0062326f  7549                 jne 0x6232ba
// 00623271  8b8f48010000         mov ecx, dword ptr [edi + 0x148]
// 00623277  8b4104               mov eax, dword ptr [ecx + 4]
// 0062327a  8d5618               lea edx, [esi + 0x18]
// 0062327d  52                   push edx
// 0062327e  57                   push edi
// 0062327f  ffd0                 call eax
// 00623281  83c408               add esp, 8
// 00623284  84c0                 test al, al
// 00623286  7426                 je 0x6232ae
// 00623288  807e1000             cmp byte ptr [esi + 0x10], 0
// 0062328c  7406                 je 0x623294
// 0062328e  ff03                 inc dword ptr [ebx]
// 00623290  c6461000             mov byte ptr [esi + 0x10], 0
// 00623294  ff4608               inc dword ptr [esi + 8]
// 00623297  c7450000000000       mov dword ptr [ebp], 0
// 0062329e  8b4e08               mov ecx, dword ptr [esi + 8]
// 006232a1  3b8fe0000000         cmp ecx, dword ptr [edi + 0xe0]
// 006232a7  729b                 jb 0x623244
// 006232a9  5d                   pop ebp
// 006232aa  5b                   pop ebx
// 006232ab  5f                   pop edi
// 006232ac  5e                   pop esi
// 006232ad  c3                   ret 
// 006232ae  807e1000             cmp byte ptr [esi + 0x10], 0
// 006232b2  7506                 jne 0x6232ba
// 006232b4  ff0b                 dec dword ptr [ebx]
// 006232b6  c6461001             mov byte ptr [esi + 0x10], 1
// 006232ba  5d                   pop ebp
// 006232bb  5b                   pop ebx
// 006232bc  5f                   pop edi
// 006232bd  5e                   pop esi
// 006232be  c3                   ret 
// library jpeg-6b/jcmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
