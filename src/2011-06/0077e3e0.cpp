// roc 2011-06 0077e3e0  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e3e0
//
// 0077e3e0  0fb65149             movzx edx, byte ptr [ecx + 0x49]
// 0077e3e4  3bc2                 cmp eax, edx
// 0077e3e6  57                   push edi
// 0077e3e7  7d1a                 jge 0x77e403
// 0077e3e9  8bca                 mov ecx, edx
// 0077e3eb  2bc8                 sub ecx, eax
// 0077e3ed  03c1                 add eax, ecx
// 0077e3ef  90                   nop 
// 0077e3f0  8b7e08               mov edi, dword ptr [esi + 8]
// 0077e3f3  c7470800000000       mov dword ptr [edi + 8], 0
// 0077e3fa  83460810             add dword ptr [esi + 8], 0x10
// 0077e3fe  83e901               sub ecx, 1
// 0077e401  75ed                 jne 0x77e3f0
// 0077e403  8b7e08               mov edi, dword ptr [esi + 8]
// 0077e406  c1e004               shl eax, 4
// 0077e409  8bcf                 mov ecx, edi
// 0077e40b  2bc8                 sub ecx, eax
// 0077e40d  8bc7                 mov eax, edi
// 0077e40f  85d2                 test edx, edx
// 0077e411  7e35                 jle 0x77e448
// 0077e413  53                   push ebx
// 0077e414  83c108               add ecx, 8
// 0077e417  8bda                 mov ebx, edx
// 0077e419  8da42400000000       lea esp, [esp]
// 0077e420  8b5608               mov edx, dword ptr [esi + 8]
// 0077e423  8d7a10               lea edi, [edx + 0x10]
// 0077e426  897e08               mov dword ptr [esi + 8], edi
// 0077e429  8b79f8               mov edi, dword ptr [ecx - 8]
// 0077e42c  893a                 mov dword ptr [edx], edi
// 0077e42e  8b79fc               mov edi, dword ptr [ecx - 4]
// 0077e431  897a04               mov dword ptr [edx + 4], edi
// 0077e434  8b39                 mov edi, dword ptr [ecx]
// 0077e436  897a08               mov dword ptr [edx + 8], edi
// 0077e439  c70100000000         mov dword ptr [ecx], 0
// 0077e43f  83c110               add ecx, 0x10
// 0077e442  83eb01               sub ebx, 1
// 0077e445  75d9                 jne 0x77e420
// 0077e447  5b                   pop ebx
// 0077e448  5f                   pop edi
// 0077e449  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?adjust_varargs@@YAPAUlua_TValue@@PAUlua_State@@PAUProto@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
