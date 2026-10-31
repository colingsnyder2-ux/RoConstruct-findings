// roc 2009-06 006c2ed0  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2ed0
//
// 006c2ed0  0fb65149             movzx edx, byte ptr [ecx + 0x49]
// 006c2ed4  3bc2                 cmp eax, edx
// 006c2ed6  57                   push edi
// 006c2ed7  7d1a                 jge 0x6c2ef3
// 006c2ed9  8bca                 mov ecx, edx
// 006c2edb  2bc8                 sub ecx, eax
// 006c2edd  03c1                 add eax, ecx
// 006c2edf  90                   nop 
// 006c2ee0  8b7e08               mov edi, dword ptr [esi + 8]
// 006c2ee3  c7470800000000       mov dword ptr [edi + 8], 0
// 006c2eea  83460810             add dword ptr [esi + 8], 0x10
// 006c2eee  83e901               sub ecx, 1
// 006c2ef1  75ed                 jne 0x6c2ee0
// 006c2ef3  8b7e08               mov edi, dword ptr [esi + 8]
// 006c2ef6  c1e004               shl eax, 4
// 006c2ef9  8bcf                 mov ecx, edi
// 006c2efb  2bc8                 sub ecx, eax
// 006c2efd  8bc7                 mov eax, edi
// 006c2eff  85d2                 test edx, edx
// 006c2f01  7e35                 jle 0x6c2f38
// 006c2f03  53                   push ebx
// 006c2f04  83c108               add ecx, 8
// 006c2f07  8bda                 mov ebx, edx
// 006c2f09  8da42400000000       lea esp, [esp]
// 006c2f10  8b5608               mov edx, dword ptr [esi + 8]
// 006c2f13  8d7a10               lea edi, [edx + 0x10]
// 006c2f16  897e08               mov dword ptr [esi + 8], edi
// 006c2f19  8b79f8               mov edi, dword ptr [ecx - 8]
// 006c2f1c  893a                 mov dword ptr [edx], edi
// 006c2f1e  8b79fc               mov edi, dword ptr [ecx - 4]
// 006c2f21  897a04               mov dword ptr [edx + 4], edi
// 006c2f24  8b39                 mov edi, dword ptr [ecx]
// 006c2f26  897a08               mov dword ptr [edx + 8], edi
// 006c2f29  c70100000000         mov dword ptr [ecx], 0
// 006c2f2f  83c110               add ecx, 0x10
// 006c2f32  83eb01               sub ebx, 1
// 006c2f35  75d9                 jne 0x6c2f10
// 006c2f37  5b                   pop ebx
// 006c2f38  5f                   pop edi
// 006c2f39  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?adjust_varargs@@YAPAUlua_TValue@@PAUlua_State@@PAUProto@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
