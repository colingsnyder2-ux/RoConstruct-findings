// from server: 100% by auto
// roc 2009-06 006ed030  unit: seg_006e0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed030
//
// 006ed030  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ed034  8b5138               mov edx, dword ptr [ecx + 0x38]
// 006ed037  53                   push ebx
// 006ed038  56                   push esi
// 006ed039  33c0                 xor eax, eax
// 006ed03b  57                   push edi
// 006ed03c  85d2                 test edx, edx
// 006ed03e  7e26                 jle 0x6ed066
// 006ed040  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 006ed043  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ed047  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006ed04b  8d4b08               lea ecx, [ebx + 8]
// 006ed04e  8bff                 mov edi, edi
// 006ed050  3971fc               cmp dword ptr [ecx - 4], esi
// 006ed053  7f11                 jg 0x6ed066
// 006ed055  3b31                 cmp esi, dword ptr [ecx]
// 006ed057  7d05                 jge 0x6ed05e
// 006ed059  83ef01               sub edi, 1
// 006ed05c  740e                 je 0x6ed06c
// 006ed05e  40                   inc eax
// 006ed05f  83c10c               add ecx, 0xc
// 006ed062  3bc2                 cmp eax, edx
// 006ed064  7cea                 jl 0x6ed050
// 006ed066  5f                   pop edi
// 006ed067  5e                   pop esi
// 006ed068  33c0                 xor eax, eax
// 006ed06a  5b                   pop ebx
// 006ed06b  c3                   ret 
// 006ed06c  8d0440               lea eax, [eax + eax*2]
// 006ed06f  8b0483               mov eax, dword ptr [ebx + eax*4]
// 006ed072  5f                   pop edi
// 006ed073  5e                   pop esi
// 006ed074  83c010               add eax, 0x10
// 006ed077  5b                   pop ebx
// 006ed078  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_getlocalname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
