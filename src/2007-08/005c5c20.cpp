// roc 2007-08 005c5c20  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5c20
//
// 005c5c20  0fb65149             movzx edx, byte ptr [ecx + 0x49]
// 005c5c24  3bc2                 cmp eax, edx
// 005c5c26  57                   push edi
// 005c5c27  7d1a                 jge 0x5c5c43
// 005c5c29  8bca                 mov ecx, edx
// 005c5c2b  2bc8                 sub ecx, eax
// 005c5c2d  03c1                 add eax, ecx
// 005c5c2f  90                   nop 
// 005c5c30  8b7e08               mov edi, dword ptr [esi + 8]
// 005c5c33  c7470800000000       mov dword ptr [edi + 8], 0
// 005c5c3a  83460810             add dword ptr [esi + 8], 0x10
// 005c5c3e  83e901               sub ecx, 1
// 005c5c41  75ed                 jne 0x5c5c30
// 005c5c43  8b7e08               mov edi, dword ptr [esi + 8]
// 005c5c46  c1e004               shl eax, 4
// 005c5c49  8bcf                 mov ecx, edi
// 005c5c4b  2bc8                 sub ecx, eax
// 005c5c4d  85d2                 test edx, edx
// 005c5c4f  8bc7                 mov eax, edi
// 005c5c51  7e35                 jle 0x5c5c88
// 005c5c53  53                   push ebx
// 005c5c54  83c108               add ecx, 8
// 005c5c57  8bda                 mov ebx, edx
// 005c5c59  8da42400000000       lea esp, [esp]
// 005c5c60  8b5608               mov edx, dword ptr [esi + 8]
// 005c5c63  8d7a10               lea edi, [edx + 0x10]
// 005c5c66  897e08               mov dword ptr [esi + 8], edi
// 005c5c69  8b79f8               mov edi, dword ptr [ecx - 8]
// 005c5c6c  893a                 mov dword ptr [edx], edi
// 005c5c6e  8b79fc               mov edi, dword ptr [ecx - 4]
// 005c5c71  897a04               mov dword ptr [edx + 4], edi
// 005c5c74  8b39                 mov edi, dword ptr [ecx]
// 005c5c76  897a08               mov dword ptr [edx + 8], edi
// 005c5c79  c70100000000         mov dword ptr [ecx], 0
// 005c5c7f  83c110               add ecx, 0x10
// 005c5c82  83eb01               sub ebx, 1
// 005c5c85  75d9                 jne 0x5c5c60
// 005c5c87  5b                   pop ebx
// 005c5c88  5f                   pop edi
// 005c5c89  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?adjust_varargs@@YAPAUlua_TValue@@PAUlua_State@@PAUProto@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
