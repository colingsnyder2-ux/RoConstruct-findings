// from server: 100% by auto
// roc 2010-06 00580180  unit: seg_00580000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580180
//
// 00580180  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00580184  53                   push ebx
// 00580185  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00580189  3bc3                 cmp eax, ebx
// 0058018b  57                   push edi
// 0058018c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00580190  7d22                 jge 0x5801b4
// 00580192  53                   push ebx
// 00580193  50                   push eax
// 00580194  8b442418             mov eax, dword ptr [esp + 0x18]
// 00580198  50                   push eax
// 00580199  57                   push edi
// 0058019a  e8c1feffff           call 0x580060
// 0058019f  83c410               add esp, 0x10
// 005801a2  84c0                 test al, al
// 005801a4  7506                 jne 0x5801ac
// 005801a6  5f                   pop edi
// 005801a7  83c8ff               or eax, 0xffffffff
// 005801aa  5b                   pop ebx
// 005801ab  c3                   ret 
// 005801ac  8b5708               mov edx, dword ptr [edi + 8]
// 005801af  8b470c               mov eax, dword ptr [edi + 0xc]
// 005801b2  eb04                 jmp 0x5801b8
// 005801b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005801b8  55                   push ebp
// 005801b9  56                   push esi
// 005801ba  2bc3                 sub eax, ebx
// 005801bc  8bc8                 mov ecx, eax
// 005801be  8bf2                 mov esi, edx
// 005801c0  d3fe                 sar esi, cl
// 005801c2  8bcb                 mov ecx, ebx
// 005801c4  bd01000000           mov ebp, 1
// 005801c9  d3e5                 shl ebp, cl
// 005801cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005801cf  4d                   dec ebp
// 005801d0  23f5                 and esi, ebp
// 005801d2  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 005801d5  7e34                 jle 0x58020b
// 005801d7  03f6                 add esi, esi
// 005801d9  83f801               cmp eax, 1
// 005801dc  7d17                 jge 0x5801f5
// 005801de  6a01                 push 1
// 005801e0  50                   push eax
// 005801e1  52                   push edx
// 005801e2  57                   push edi
// 005801e3  e878feffff           call 0x580060
// 005801e8  83c410               add esp, 0x10
// 005801eb  84c0                 test al, al
// 005801ed  744a                 je 0x580239
// 005801ef  8b5708               mov edx, dword ptr [edi + 8]
// 005801f2  8b470c               mov eax, dword ptr [edi + 0xc]
// 005801f5  48                   dec eax
// 005801f6  8bc8                 mov ecx, eax
// 005801f8  8bea                 mov ebp, edx
// 005801fa  d3fd                 sar ebp, cl
// 005801fc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00580200  43                   inc ebx
// 00580201  83e501               and ebp, 1
// 00580204  0bf5                 or esi, ebp
// 00580206  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00580209  7fcc                 jg 0x5801d7
// 0058020b  83fb10               cmp ebx, 0x10
// 0058020e  895708               mov dword ptr [edi + 8], edx
// 00580211  89470c               mov dword ptr [edi + 0xc], eax
// 00580214  7e2b                 jle 0x580241
// 00580216  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00580219  8b11                 mov edx, dword ptr [ecx]
// 0058021b  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 00580222  8b7f10               mov edi, dword ptr [edi + 0x10]
// 00580225  8b07                 mov eax, dword ptr [edi]
// 00580227  8b4804               mov ecx, dword ptr [eax + 4]
// 0058022a  6aff                 push -1
// 0058022c  57                   push edi
// 0058022d  ffd1                 call ecx
// 0058022f  83c408               add esp, 8
// 00580232  5e                   pop esi
// 00580233  5d                   pop ebp
// 00580234  5f                   pop edi
// 00580235  33c0                 xor eax, eax
// 00580237  5b                   pop ebx
// 00580238  c3                   ret 
// 00580239  5e                   pop esi
// 0058023a  5d                   pop ebp
// 0058023b  5f                   pop edi
// 0058023c  83c8ff               or eax, 0xffffffff
// 0058023f  5b                   pop ebx
// 00580240  c3                   ret 
// 00580241  8b549948             mov edx, dword ptr [ecx + ebx*4 + 0x48]
// 00580245  03918c000000         add edx, dword ptr [ecx + 0x8c]
// 0058024b  0fb6443211           movzx eax, byte ptr [edx + esi + 0x11]
// 00580250  5e                   pop esi
// 00580251  5d                   pop ebp
// 00580252  5f                   pop edi
// 00580253  5b                   pop ebx
// 00580254  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_huff_decode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
