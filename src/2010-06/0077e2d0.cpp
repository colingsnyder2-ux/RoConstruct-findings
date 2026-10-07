// roc 2010-06 0077e2d0  unit: seg_00770000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e2d0
//
// 0077e2d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077e2d4  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0077e2d7  53                   push ebx
// 0077e2d8  56                   push esi
// 0077e2d9  33c0                 xor eax, eax
// 0077e2db  57                   push edi
// 0077e2dc  85d2                 test edx, edx
// 0077e2de  7e26                 jle 0x77e306
// 0077e2e0  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 0077e2e3  8b742418             mov esi, dword ptr [esp + 0x18]
// 0077e2e7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0077e2eb  8d4b08               lea ecx, [ebx + 8]
// 0077e2ee  8bff                 mov edi, edi
// 0077e2f0  3971fc               cmp dword ptr [ecx - 4], esi
// 0077e2f3  7f11                 jg 0x77e306
// 0077e2f5  3b31                 cmp esi, dword ptr [ecx]
// 0077e2f7  7d05                 jge 0x77e2fe
// 0077e2f9  83ef01               sub edi, 1
// 0077e2fc  740e                 je 0x77e30c
// 0077e2fe  40                   inc eax
// 0077e2ff  83c10c               add ecx, 0xc
// 0077e302  3bc2                 cmp eax, edx
// 0077e304  7cea                 jl 0x77e2f0
// 0077e306  5f                   pop edi
// 0077e307  5e                   pop esi
// 0077e308  33c0                 xor eax, eax
// 0077e30a  5b                   pop ebx
// 0077e30b  c3                   ret 
// 0077e30c  8d0440               lea eax, [eax + eax*2]
// 0077e30f  8b0483               mov eax, dword ptr [ebx + eax*4]
// 0077e312  5f                   pop edi
// 0077e313  5e                   pop esi
// 0077e314  83c010               add eax, 0x10
// 0077e317  5b                   pop ebx
// 0077e318  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_getlocalname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
