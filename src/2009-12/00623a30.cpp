// roc 2009-12 00623a30  unit: seg_00620000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623a30
//
// 00623a30  8b442404             mov eax, dword ptr [esp + 4]
// 00623a34  56                   push esi
// 00623a35  8bb048010000         mov esi, dword ptr [eax + 0x148]
// 00623a3b  c7460800000000       mov dword ptr [esi + 8], 0
// 00623a42  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 00623a48  ba01000000           mov edx, 1
// 00623a4d  3990e4000000         cmp dword ptr [eax + 0xe4], edx
// 00623a53  7e05                 jle 0x623a5a
// 00623a55  895114               mov dword ptr [ecx + 0x14], edx
// 00623a58  eb20                 jmp 0x623a7a
// 00623a5a  53                   push ebx
// 00623a5b  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 00623a61  2bda                 sub ebx, edx
// 00623a63  395908               cmp dword ptr [ecx + 8], ebx
// 00623a66  8b98e8000000         mov ebx, dword ptr [eax + 0xe8]
// 00623a6c  7305                 jae 0x623a73
// 00623a6e  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 00623a71  eb03                 jmp 0x623a76
// 00623a73  8b5b48               mov ebx, dword ptr [ebx + 0x48]
// 00623a76  895914               mov dword ptr [ecx + 0x14], ebx
// 00623a79  5b                   pop ebx
// 00623a7a  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 00623a81  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 00623a88  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00623a8c  83e900               sub ecx, 0
// 00623a8f  7462                 je 0x623af3
// 00623a91  83e902               sub ecx, 2
// 00623a94  743b                 je 0x623ad1
// 00623a96  2bca                 sub ecx, edx
// 00623a98  7415                 je 0x623aaf
// 00623a9a  8b08                 mov ecx, dword ptr [eax]
// 00623a9c  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00623aa3  8b10                 mov edx, dword ptr [eax]
// 00623aa5  50                   push eax
// 00623aa6  8b02                 mov eax, dword ptr [edx]
// 00623aa8  ffd0                 call eax
// 00623aaa  83c404               add esp, 4
// 00623aad  5e                   pop esi
// 00623aae  c3                   ret 
// 00623aaf  837e4000             cmp dword ptr [esi + 0x40], 0
// 00623ab3  7513                 jne 0x623ac8
// 00623ab5  8b08                 mov ecx, dword ptr [eax]
// 00623ab7  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00623abe  8b10                 mov edx, dword ptr [eax]
// 00623ac0  50                   push eax
// 00623ac1  8b02                 mov eax, dword ptr [edx]
// 00623ac3  ffd0                 call eax
// 00623ac5  83c404               add esp, 4
// 00623ac8  c7460420386200       mov dword ptr [esi + 4], 0x623820
// 00623acf  5e                   pop esi
// 00623ad0  c3                   ret 
// 00623ad1  837e4000             cmp dword ptr [esi + 0x40], 0
// 00623ad5  7513                 jne 0x623aea
// 00623ad7  8b08                 mov ecx, dword ptr [eax]
// 00623ad9  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00623ae0  8b10                 mov edx, dword ptr [eax]
// 00623ae2  50                   push eax
// 00623ae3  8b02                 mov eax, dword ptr [edx]
// 00623ae5  ffd0                 call eax
// 00623ae7  83c404               add esp, 4
// 00623aea  c7460430366200       mov dword ptr [esi + 4], 0x623630
// 00623af1  5e                   pop esi
// 00623af2  c3                   ret 
// 00623af3  837e4000             cmp dword ptr [esi + 0x40], 0
// 00623af7  7413                 je 0x623b0c
// 00623af9  8b08                 mov ecx, dword ptr [eax]
// 00623afb  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00623b02  8b10                 mov edx, dword ptr [eax]
// 00623b04  50                   push eax
// 00623b05  8b02                 mov eax, dword ptr [edx]
// 00623b07  ffd0                 call eax
// 00623b09  83c404               add esp, 4
// 00623b0c  c74604a0336200       mov dword ptr [esi + 4], 0x6233a0
// 00623b13  5e                   pop esi
// 00623b14  c3                   ret 
// library jpeg-6b/jccoefct.c (function _start_pass_coef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
