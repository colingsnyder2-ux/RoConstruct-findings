// from server: 100% by auto
// roc 2007-08 006132a0  unit: seg_00610000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006132a0
//
// 006132a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006132a4  8b5138               mov edx, dword ptr [ecx + 0x38]
// 006132a7  53                   push ebx
// 006132a8  56                   push esi
// 006132a9  33c0                 xor eax, eax
// 006132ab  85d2                 test edx, edx
// 006132ad  57                   push edi
// 006132ae  7e28                 jle 0x6132d8
// 006132b0  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 006132b3  8b742418             mov esi, dword ptr [esp + 0x18]
// 006132b7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006132bb  8d4b08               lea ecx, [ebx + 8]
// 006132be  8bff                 mov edi, edi
// 006132c0  3971fc               cmp dword ptr [ecx - 4], esi
// 006132c3  7f13                 jg 0x6132d8
// 006132c5  3b31                 cmp esi, dword ptr [ecx]
// 006132c7  7d05                 jge 0x6132ce
// 006132c9  83ef01               sub edi, 1
// 006132cc  7410                 je 0x6132de
// 006132ce  83c001               add eax, 1
// 006132d1  83c10c               add ecx, 0xc
// 006132d4  3bc2                 cmp eax, edx
// 006132d6  7ce8                 jl 0x6132c0
// 006132d8  5f                   pop edi
// 006132d9  5e                   pop esi
// 006132da  33c0                 xor eax, eax
// 006132dc  5b                   pop ebx
// 006132dd  c3                   ret 
// 006132de  8d0440               lea eax, [eax + eax*2]
// 006132e1  8b0483               mov eax, dword ptr [ebx + eax*4]
// 006132e4  5f                   pop edi
// 006132e5  5e                   pop esi
// 006132e6  83c010               add eax, 0x10
// 006132e9  5b                   pop ebx
// 006132ea  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_getlocalname)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
