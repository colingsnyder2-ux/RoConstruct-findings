// from server: 100% by auto
// roc 2010-06 00585590  unit: seg_00580000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585590
//
// 00585590  8b442404             mov eax, dword ptr [esp + 4]
// 00585594  56                   push esi
// 00585595  8bb048010000         mov esi, dword ptr [eax + 0x148]
// 0058559b  c7460800000000       mov dword ptr [esi + 8], 0
// 005855a2  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 005855a8  ba01000000           mov edx, 1
// 005855ad  3990e4000000         cmp dword ptr [eax + 0xe4], edx
// 005855b3  7e05                 jle 0x5855ba
// 005855b5  895114               mov dword ptr [ecx + 0x14], edx
// 005855b8  eb20                 jmp 0x5855da
// 005855ba  53                   push ebx
// 005855bb  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 005855c1  2bda                 sub ebx, edx
// 005855c3  395908               cmp dword ptr [ecx + 8], ebx
// 005855c6  8b98e8000000         mov ebx, dword ptr [eax + 0xe8]
// 005855cc  7305                 jae 0x5855d3
// 005855ce  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 005855d1  eb03                 jmp 0x5855d6
// 005855d3  8b5b48               mov ebx, dword ptr [ebx + 0x48]
// 005855d6  895914               mov dword ptr [ecx + 0x14], ebx
// 005855d9  5b                   pop ebx
// 005855da  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 005855e1  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 005855e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005855ec  83e900               sub ecx, 0
// 005855ef  7462                 je 0x585653
// 005855f1  83e902               sub ecx, 2
// 005855f4  743b                 je 0x585631
// 005855f6  2bca                 sub ecx, edx
// 005855f8  7415                 je 0x58560f
// 005855fa  8b08                 mov ecx, dword ptr [eax]
// 005855fc  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00585603  8b10                 mov edx, dword ptr [eax]
// 00585605  50                   push eax
// 00585606  8b02                 mov eax, dword ptr [edx]
// 00585608  ffd0                 call eax
// 0058560a  83c404               add esp, 4
// 0058560d  5e                   pop esi
// 0058560e  c3                   ret 
// 0058560f  837e4000             cmp dword ptr [esi + 0x40], 0
// 00585613  7513                 jne 0x585628
// 00585615  8b08                 mov ecx, dword ptr [eax]
// 00585617  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0058561e  8b10                 mov edx, dword ptr [eax]
// 00585620  50                   push eax
// 00585621  8b02                 mov eax, dword ptr [edx]
// 00585623  ffd0                 call eax
// 00585625  83c404               add esp, 4
// 00585628  c7460480535800       mov dword ptr [esi + 4], 0x585380
// 0058562f  5e                   pop esi
// 00585630  c3                   ret 
// 00585631  837e4000             cmp dword ptr [esi + 0x40], 0
// 00585635  7513                 jne 0x58564a
// 00585637  8b08                 mov ecx, dword ptr [eax]
// 00585639  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00585640  8b10                 mov edx, dword ptr [eax]
// 00585642  50                   push eax
// 00585643  8b02                 mov eax, dword ptr [edx]
// 00585645  ffd0                 call eax
// 00585647  83c404               add esp, 4
// 0058564a  c7460490515800       mov dword ptr [esi + 4], 0x585190
// 00585651  5e                   pop esi
// 00585652  c3                   ret 
// 00585653  837e4000             cmp dword ptr [esi + 0x40], 0
// 00585657  7413                 je 0x58566c
// 00585659  8b08                 mov ecx, dword ptr [eax]
// 0058565b  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00585662  8b10                 mov edx, dword ptr [eax]
// 00585664  50                   push eax
// 00585665  8b02                 mov eax, dword ptr [edx]
// 00585667  ffd0                 call eax
// 00585669  83c404               add esp, 4
// 0058566c  c74604004f5800       mov dword ptr [esi + 4], 0x584f00
// 00585673  5e                   pop esi
// 00585674  c3                   ret 
// library jpeg-6b/jccoefct.c (function _start_pass_coef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
