// roc 2012-06 00936830  unit: seg_00930000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936830
//
// 00936830  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00936834  8b5138               mov edx, dword ptr [ecx + 0x38]
// 00936837  53                   push ebx
// 00936838  56                   push esi
// 00936839  33c0                 xor eax, eax
// 0093683b  57                   push edi
// 0093683c  85d2                 test edx, edx
// 0093683e  7e26                 jle 0x936866
// 00936840  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 00936843  8b742418             mov esi, dword ptr [esp + 0x18]
// 00936847  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0093684b  8d4b08               lea ecx, [ebx + 8]
// 0093684e  8bff                 mov edi, edi
// 00936850  3971fc               cmp dword ptr [ecx - 4], esi
// 00936853  7f11                 jg 0x936866
// 00936855  3b31                 cmp esi, dword ptr [ecx]
// 00936857  7d05                 jge 0x93685e
// 00936859  83ef01               sub edi, 1
// 0093685c  740e                 je 0x93686c
// 0093685e  40                   inc eax
// 0093685f  83c10c               add ecx, 0xc
// 00936862  3bc2                 cmp eax, edx
// 00936864  7cea                 jl 0x936850
// 00936866  5f                   pop edi
// 00936867  5e                   pop esi
// 00936868  33c0                 xor eax, eax
// 0093686a  5b                   pop ebx
// 0093686b  c3                   ret 
// 0093686c  8d0440               lea eax, [eax + eax*2]
// 0093686f  8b0483               mov eax, dword ptr [ebx + eax*4]
// 00936872  5f                   pop edi
// 00936873  5e                   pop esi
// 00936874  83c010               add eax, 0x10
// 00936877  5b                   pop ebx
// 00936878  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_getlocalname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
