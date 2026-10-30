// from server: 100% by auto
// roc 2012-06 00666f50  unit: seg_00660000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666f50
//
// 00666f50  8b442404             mov eax, dword ptr [esp + 4]
// 00666f54  56                   push esi
// 00666f55  8bb048010000         mov esi, dword ptr [eax + 0x148]
// 00666f5b  c7460800000000       mov dword ptr [esi + 8], 0
// 00666f62  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 00666f68  ba01000000           mov edx, 1
// 00666f6d  3990e4000000         cmp dword ptr [eax + 0xe4], edx
// 00666f73  7e05                 jle 0x666f7a
// 00666f75  895114               mov dword ptr [ecx + 0x14], edx
// 00666f78  eb20                 jmp 0x666f9a
// 00666f7a  53                   push ebx
// 00666f7b  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 00666f81  2bda                 sub ebx, edx
// 00666f83  395908               cmp dword ptr [ecx + 8], ebx
// 00666f86  8b98e8000000         mov ebx, dword ptr [eax + 0xe8]
// 00666f8c  7305                 jae 0x666f93
// 00666f8e  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 00666f91  eb03                 jmp 0x666f96
// 00666f93  8b5b48               mov ebx, dword ptr [ebx + 0x48]
// 00666f96  895914               mov dword ptr [ecx + 0x14], ebx
// 00666f99  5b                   pop ebx
// 00666f9a  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 00666fa1  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 00666fa8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00666fac  83e900               sub ecx, 0
// 00666faf  7462                 je 0x667013
// 00666fb1  83e902               sub ecx, 2
// 00666fb4  743b                 je 0x666ff1
// 00666fb6  2bca                 sub ecx, edx
// 00666fb8  7415                 je 0x666fcf
// 00666fba  8b08                 mov ecx, dword ptr [eax]
// 00666fbc  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00666fc3  8b10                 mov edx, dword ptr [eax]
// 00666fc5  50                   push eax
// 00666fc6  8b02                 mov eax, dword ptr [edx]
// 00666fc8  ffd0                 call eax
// 00666fca  83c404               add esp, 4
// 00666fcd  5e                   pop esi
// 00666fce  c3                   ret 
// 00666fcf  837e4000             cmp dword ptr [esi + 0x40], 0
// 00666fd3  7513                 jne 0x666fe8
// 00666fd5  8b08                 mov ecx, dword ptr [eax]
// 00666fd7  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00666fde  8b10                 mov edx, dword ptr [eax]
// 00666fe0  50                   push eax
// 00666fe1  8b02                 mov eax, dword ptr [edx]
// 00666fe3  ffd0                 call eax
// 00666fe5  83c404               add esp, 4
// 00666fe8  c74604406d6600       mov dword ptr [esi + 4], 0x666d40
// 00666fef  5e                   pop esi
// 00666ff0  c3                   ret 
// 00666ff1  837e4000             cmp dword ptr [esi + 0x40], 0
// 00666ff5  7513                 jne 0x66700a
// 00666ff7  8b08                 mov ecx, dword ptr [eax]
// 00666ff9  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00667000  8b10                 mov edx, dword ptr [eax]
// 00667002  50                   push eax
// 00667003  8b02                 mov eax, dword ptr [edx]
// 00667005  ffd0                 call eax
// 00667007  83c404               add esp, 4
// 0066700a  c74604506b6600       mov dword ptr [esi + 4], 0x666b50
// 00667011  5e                   pop esi
// 00667012  c3                   ret 
// 00667013  837e4000             cmp dword ptr [esi + 0x40], 0
// 00667017  7413                 je 0x66702c
// 00667019  8b08                 mov ecx, dword ptr [eax]
// 0066701b  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00667022  8b10                 mov edx, dword ptr [eax]
// 00667024  50                   push eax
// 00667025  8b02                 mov eax, dword ptr [edx]
// 00667027  ffd0                 call eax
// 00667029  83c404               add esp, 4
// 0066702c  c74604c0686600       mov dword ptr [esi + 4], 0x6668c0
// 00667033  5e                   pop esi
// 00667034  c3                   ret 
// library jpeg-6b/jccoefct.c (function _start_pass_coef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
