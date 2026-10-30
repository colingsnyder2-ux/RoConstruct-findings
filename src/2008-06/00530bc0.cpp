// from server: 100% by auto
// roc 2008-06 00530bc0  unit: seg_00530000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530bc0
//
// 00530bc0  51                   push ecx
// 00530bc1  53                   push ebx
// 00530bc2  55                   push ebp
// 00530bc3  56                   push esi
// 00530bc4  8b742414             mov esi, dword ptr [esp + 0x14]
// 00530bc8  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00530bce  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00530bd4  33ed                 xor ebp, ebp
// 00530bd6  396e24               cmp dword ptr [esi + 0x24], ebp
// 00530bd9  8944240c             mov dword ptr [esp + 0xc], eax
// 00530bdd  7e73                 jle 0x530c52
// 00530bdf  57                   push edi
// 00530be0  83c30c               add ebx, 0xc
// 00530be3  eb02                 jmp 0x530be7
// 00530be5  8bf1                 mov esi, ecx
// 00530be7  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00530bea  0faf0b               imul ecx, dword ptr [ebx]
// 00530bed  8bc1                 mov eax, ecx
// 00530bef  99                   cdq 
// 00530bf0  f7be18010000         idiv dword ptr [esi + 0x118]
// 00530bf6  33d2                 xor edx, edx
// 00530bf8  8bf8                 mov edi, eax
// 00530bfa  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00530bfd  f7f1                 div ecx
// 00530bff  8bf2                 mov esi, edx
// 00530c01  85f6                 test esi, esi
// 00530c03  7502                 jne 0x530c07
// 00530c05  8bf1                 mov esi, ecx
// 00530c07  85ed                 test ebp, ebp
// 00530c09  7512                 jne 0x530c1d
// 00530c0b  8d46ff               lea eax, [esi - 1]
// 00530c0e  99                   cdq 
// 00530c0f  f7ff                 idiv edi
// 00530c11  8bc8                 mov ecx, eax
// 00530c13  8b442410             mov eax, dword ptr [esp + 0x10]
// 00530c17  41                   inc ecx
// 00530c18  894848               mov dword ptr [eax + 0x48], ecx
// 00530c1b  eb04                 jmp 0x530c21
// 00530c1d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00530c21  8b5040               mov edx, dword ptr [eax + 0x40]
// 00530c24  8b449038             mov eax, dword ptr [eax + edx*4 + 0x38]
// 00530c28  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 00530c2b  8d143f               lea edx, [edi + edi]
// 00530c2e  85d2                 test edx, edx
// 00530c30  7e12                 jle 0x530c44
// 00530c32  8d0cb0               lea ecx, [eax + esi*4]
// 00530c35  8bc1                 mov eax, ecx
// 00530c37  8b71fc               mov esi, dword ptr [ecx - 4]
// 00530c3a  8930                 mov dword ptr [eax], esi
// 00530c3c  83c004               add eax, 4
// 00530c3f  83ea01               sub edx, 1
// 00530c42  75f3                 jne 0x530c37
// 00530c44  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00530c48  45                   inc ebp
// 00530c49  83c354               add ebx, 0x54
// 00530c4c  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 00530c4f  7c94                 jl 0x530be5
// 00530c51  5f                   pop edi
// 00530c52  5e                   pop esi
// 00530c53  5d                   pop ebp
// 00530c54  5b                   pop ebx
// 00530c55  59                   pop ecx
// 00530c56  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_bottom_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
