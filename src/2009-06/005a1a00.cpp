// from server: 100% by auto
// roc 2009-06 005a1a00  unit: seg_005a0000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1a00
//
// 005a1a00  8b442404             mov eax, dword ptr [esp + 4]
// 005a1a04  56                   push esi
// 005a1a05  8bb048010000         mov esi, dword ptr [eax + 0x148]
// 005a1a0b  c7460800000000       mov dword ptr [esi + 8], 0
// 005a1a12  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 005a1a18  ba01000000           mov edx, 1
// 005a1a1d  3990e4000000         cmp dword ptr [eax + 0xe4], edx
// 005a1a23  7e05                 jle 0x5a1a2a
// 005a1a25  895114               mov dword ptr [ecx + 0x14], edx
// 005a1a28  eb20                 jmp 0x5a1a4a
// 005a1a2a  53                   push ebx
// 005a1a2b  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 005a1a31  2bda                 sub ebx, edx
// 005a1a33  395908               cmp dword ptr [ecx + 8], ebx
// 005a1a36  8b98e8000000         mov ebx, dword ptr [eax + 0xe8]
// 005a1a3c  7305                 jae 0x5a1a43
// 005a1a3e  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 005a1a41  eb03                 jmp 0x5a1a46
// 005a1a43  8b5b48               mov ebx, dword ptr [ebx + 0x48]
// 005a1a46  895914               mov dword ptr [ecx + 0x14], ebx
// 005a1a49  5b                   pop ebx
// 005a1a4a  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 005a1a51  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 005a1a58  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a1a5c  83e900               sub ecx, 0
// 005a1a5f  7462                 je 0x5a1ac3
// 005a1a61  83e902               sub ecx, 2
// 005a1a64  743b                 je 0x5a1aa1
// 005a1a66  2bca                 sub ecx, edx
// 005a1a68  7415                 je 0x5a1a7f
// 005a1a6a  8b08                 mov ecx, dword ptr [eax]
// 005a1a6c  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 005a1a73  8b10                 mov edx, dword ptr [eax]
// 005a1a75  50                   push eax
// 005a1a76  8b02                 mov eax, dword ptr [edx]
// 005a1a78  ffd0                 call eax
// 005a1a7a  83c404               add esp, 4
// 005a1a7d  5e                   pop esi
// 005a1a7e  c3                   ret 
// 005a1a7f  837e4000             cmp dword ptr [esi + 0x40], 0
// 005a1a83  7513                 jne 0x5a1a98
// 005a1a85  8b08                 mov ecx, dword ptr [eax]
// 005a1a87  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 005a1a8e  8b10                 mov edx, dword ptr [eax]
// 005a1a90  50                   push eax
// 005a1a91  8b02                 mov eax, dword ptr [edx]
// 005a1a93  ffd0                 call eax
// 005a1a95  83c404               add esp, 4
// 005a1a98  c74604f0175a00       mov dword ptr [esi + 4], 0x5a17f0
// 005a1a9f  5e                   pop esi
// 005a1aa0  c3                   ret 
// 005a1aa1  837e4000             cmp dword ptr [esi + 0x40], 0
// 005a1aa5  7513                 jne 0x5a1aba
// 005a1aa7  8b08                 mov ecx, dword ptr [eax]
// 005a1aa9  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 005a1ab0  8b10                 mov edx, dword ptr [eax]
// 005a1ab2  50                   push eax
// 005a1ab3  8b02                 mov eax, dword ptr [edx]
// 005a1ab5  ffd0                 call eax
// 005a1ab7  83c404               add esp, 4
// 005a1aba  c7460400165a00       mov dword ptr [esi + 4], 0x5a1600
// 005a1ac1  5e                   pop esi
// 005a1ac2  c3                   ret 
// 005a1ac3  837e4000             cmp dword ptr [esi + 0x40], 0
// 005a1ac7  7413                 je 0x5a1adc
// 005a1ac9  8b08                 mov ecx, dword ptr [eax]
// 005a1acb  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 005a1ad2  8b10                 mov edx, dword ptr [eax]
// 005a1ad4  50                   push eax
// 005a1ad5  8b02                 mov eax, dword ptr [edx]
// 005a1ad7  ffd0                 call eax
// 005a1ad9  83c404               add esp, 4
// 005a1adc  c7460470135a00       mov dword ptr [esi + 4], 0x5a1370
// 005a1ae3  5e                   pop esi
// 005a1ae4  c3                   ret 
// library jpeg-6b/jccoefct.c (function _start_pass_coef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
