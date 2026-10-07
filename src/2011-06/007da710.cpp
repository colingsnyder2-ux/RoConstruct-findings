// roc 2011-06 007da710  unit: seg_007d0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da710
//
// 007da710  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007da714  8b5138               mov edx, dword ptr [ecx + 0x38]
// 007da717  53                   push ebx
// 007da718  56                   push esi
// 007da719  33c0                 xor eax, eax
// 007da71b  57                   push edi
// 007da71c  85d2                 test edx, edx
// 007da71e  7e26                 jle 0x7da746
// 007da720  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 007da723  8b742418             mov esi, dword ptr [esp + 0x18]
// 007da727  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007da72b  8d4b08               lea ecx, [ebx + 8]
// 007da72e  8bff                 mov edi, edi
// 007da730  3971fc               cmp dword ptr [ecx - 4], esi
// 007da733  7f11                 jg 0x7da746
// 007da735  3b31                 cmp esi, dword ptr [ecx]
// 007da737  7d05                 jge 0x7da73e
// 007da739  83ef01               sub edi, 1
// 007da73c  740e                 je 0x7da74c
// 007da73e  40                   inc eax
// 007da73f  83c10c               add ecx, 0xc
// 007da742  3bc2                 cmp eax, edx
// 007da744  7cea                 jl 0x7da730
// 007da746  5f                   pop edi
// 007da747  5e                   pop esi
// 007da748  33c0                 xor eax, eax
// 007da74a  5b                   pop ebx
// 007da74b  c3                   ret 
// 007da74c  8d0440               lea eax, [eax + eax*2]
// 007da74f  8b0483               mov eax, dword ptr [ebx + eax*4]
// 007da752  5f                   pop edi
// 007da753  5e                   pop esi
// 007da754  83c010               add eax, 0x10
// 007da757  5b                   pop ebx
// 007da758  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_getlocalname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
