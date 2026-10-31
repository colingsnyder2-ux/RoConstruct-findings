// roc 2010-06 0072fca0  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fca0
//
// 0072fca0  0fb65149             movzx edx, byte ptr [ecx + 0x49]
// 0072fca4  3bc2                 cmp eax, edx
// 0072fca6  57                   push edi
// 0072fca7  7d1a                 jge 0x72fcc3
// 0072fca9  8bca                 mov ecx, edx
// 0072fcab  2bc8                 sub ecx, eax
// 0072fcad  03c1                 add eax, ecx
// 0072fcaf  90                   nop 
// 0072fcb0  8b7e08               mov edi, dword ptr [esi + 8]
// 0072fcb3  c7470800000000       mov dword ptr [edi + 8], 0
// 0072fcba  83460810             add dword ptr [esi + 8], 0x10
// 0072fcbe  83e901               sub ecx, 1
// 0072fcc1  75ed                 jne 0x72fcb0
// 0072fcc3  8b7e08               mov edi, dword ptr [esi + 8]
// 0072fcc6  c1e004               shl eax, 4
// 0072fcc9  8bcf                 mov ecx, edi
// 0072fccb  2bc8                 sub ecx, eax
// 0072fccd  8bc7                 mov eax, edi
// 0072fccf  85d2                 test edx, edx
// 0072fcd1  7e35                 jle 0x72fd08
// 0072fcd3  53                   push ebx
// 0072fcd4  83c108               add ecx, 8
// 0072fcd7  8bda                 mov ebx, edx
// 0072fcd9  8da42400000000       lea esp, [esp]
// 0072fce0  8b5608               mov edx, dword ptr [esi + 8]
// 0072fce3  8d7a10               lea edi, [edx + 0x10]
// 0072fce6  897e08               mov dword ptr [esi + 8], edi
// 0072fce9  8b79f8               mov edi, dword ptr [ecx - 8]
// 0072fcec  893a                 mov dword ptr [edx], edi
// 0072fcee  8b79fc               mov edi, dword ptr [ecx - 4]
// 0072fcf1  897a04               mov dword ptr [edx + 4], edi
// 0072fcf4  8b39                 mov edi, dword ptr [ecx]
// 0072fcf6  897a08               mov dword ptr [edx + 8], edi
// 0072fcf9  c70100000000         mov dword ptr [ecx], 0
// 0072fcff  83c110               add ecx, 0x10
// 0072fd02  83eb01               sub ebx, 1
// 0072fd05  75d9                 jne 0x72fce0
// 0072fd07  5b                   pop ebx
// 0072fd08  5f                   pop edi
// 0072fd09  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?adjust_varargs@@YAPAUlua_TValue@@PAUlua_State@@PAUProto@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
