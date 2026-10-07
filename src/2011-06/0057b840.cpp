// roc 2011-06 0057b840  unit: seg_00570000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057b840
//
// 0057b840  8b442404             mov eax, dword ptr [esp + 4]
// 0057b844  56                   push esi
// 0057b845  8bb048010000         mov esi, dword ptr [eax + 0x148]
// 0057b84b  c7460800000000       mov dword ptr [esi + 8], 0
// 0057b852  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 0057b858  ba01000000           mov edx, 1
// 0057b85d  3990e4000000         cmp dword ptr [eax + 0xe4], edx
// 0057b863  7e05                 jle 0x57b86a
// 0057b865  895114               mov dword ptr [ecx + 0x14], edx
// 0057b868  eb20                 jmp 0x57b88a
// 0057b86a  53                   push ebx
// 0057b86b  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 0057b871  2bda                 sub ebx, edx
// 0057b873  395908               cmp dword ptr [ecx + 8], ebx
// 0057b876  8b98e8000000         mov ebx, dword ptr [eax + 0xe8]
// 0057b87c  7305                 jae 0x57b883
// 0057b87e  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 0057b881  eb03                 jmp 0x57b886
// 0057b883  8b5b48               mov ebx, dword ptr [ebx + 0x48]
// 0057b886  895914               mov dword ptr [ecx + 0x14], ebx
// 0057b889  5b                   pop ebx
// 0057b88a  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 0057b891  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 0057b898  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057b89c  83e900               sub ecx, 0
// 0057b89f  7462                 je 0x57b903
// 0057b8a1  83e902               sub ecx, 2
// 0057b8a4  743b                 je 0x57b8e1
// 0057b8a6  2bca                 sub ecx, edx
// 0057b8a8  7415                 je 0x57b8bf
// 0057b8aa  8b08                 mov ecx, dword ptr [eax]
// 0057b8ac  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0057b8b3  8b10                 mov edx, dword ptr [eax]
// 0057b8b5  50                   push eax
// 0057b8b6  8b02                 mov eax, dword ptr [edx]
// 0057b8b8  ffd0                 call eax
// 0057b8ba  83c404               add esp, 4
// 0057b8bd  5e                   pop esi
// 0057b8be  c3                   ret 
// 0057b8bf  837e4000             cmp dword ptr [esi + 0x40], 0
// 0057b8c3  7513                 jne 0x57b8d8
// 0057b8c5  8b08                 mov ecx, dword ptr [eax]
// 0057b8c7  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0057b8ce  8b10                 mov edx, dword ptr [eax]
// 0057b8d0  50                   push eax
// 0057b8d1  8b02                 mov eax, dword ptr [edx]
// 0057b8d3  ffd0                 call eax
// 0057b8d5  83c404               add esp, 4
// 0057b8d8  c7460430b65700       mov dword ptr [esi + 4], 0x57b630
// 0057b8df  5e                   pop esi
// 0057b8e0  c3                   ret 
// 0057b8e1  837e4000             cmp dword ptr [esi + 0x40], 0
// 0057b8e5  7513                 jne 0x57b8fa
// 0057b8e7  8b08                 mov ecx, dword ptr [eax]
// 0057b8e9  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0057b8f0  8b10                 mov edx, dword ptr [eax]
// 0057b8f2  50                   push eax
// 0057b8f3  8b02                 mov eax, dword ptr [edx]
// 0057b8f5  ffd0                 call eax
// 0057b8f7  83c404               add esp, 4
// 0057b8fa  c7460440b45700       mov dword ptr [esi + 4], 0x57b440
// 0057b901  5e                   pop esi
// 0057b902  c3                   ret 
// 0057b903  837e4000             cmp dword ptr [esi + 0x40], 0
// 0057b907  7413                 je 0x57b91c
// 0057b909  8b08                 mov ecx, dword ptr [eax]
// 0057b90b  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0057b912  8b10                 mov edx, dword ptr [eax]
// 0057b914  50                   push eax
// 0057b915  8b02                 mov eax, dword ptr [edx]
// 0057b917  ffd0                 call eax
// 0057b919  83c404               add esp, 4
// 0057b91c  c74604b0b15700       mov dword ptr [esi + 4], 0x57b1b0
// 0057b923  5e                   pop esi
// 0057b924  c3                   ret 
// library jpeg-6b/jccoefct.c (function _start_pass_coef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
