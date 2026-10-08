// from server: 100% by auto
// roc 2008-06 0065f7e0  unit: seg_00650000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f7e0
//
// 0065f7e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065f7e4  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0065f7e7  53                   push ebx
// 0065f7e8  56                   push esi
// 0065f7e9  33c0                 xor eax, eax
// 0065f7eb  57                   push edi
// 0065f7ec  85d2                 test edx, edx
// 0065f7ee  7e26                 jle 0x65f816
// 0065f7f0  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 0065f7f3  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065f7f7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0065f7fb  8d4b08               lea ecx, [ebx + 8]
// 0065f7fe  8bff                 mov edi, edi
// 0065f800  3971fc               cmp dword ptr [ecx - 4], esi
// 0065f803  7f11                 jg 0x65f816
// 0065f805  3b31                 cmp esi, dword ptr [ecx]
// 0065f807  7d05                 jge 0x65f80e
// 0065f809  83ef01               sub edi, 1
// 0065f80c  740e                 je 0x65f81c
// 0065f80e  40                   inc eax
// 0065f80f  83c10c               add ecx, 0xc
// 0065f812  3bc2                 cmp eax, edx
// 0065f814  7cea                 jl 0x65f800
// 0065f816  5f                   pop edi
// 0065f817  5e                   pop esi
// 0065f818  33c0                 xor eax, eax
// 0065f81a  5b                   pop ebx
// 0065f81b  c3                   ret 
// 0065f81c  8d0440               lea eax, [eax + eax*2]
// 0065f81f  8b0483               mov eax, dword ptr [ebx + eax*4]
// 0065f822  5f                   pop edi
// 0065f823  5e                   pop esi
// 0065f824  83c010               add eax, 0x10
// 0065f827  5b                   pop ebx
// 0065f828  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_getlocalname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
