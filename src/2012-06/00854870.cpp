// roc 2012-06 00854870  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854870
//
// 00854870  0fb65149             movzx edx, byte ptr [ecx + 0x49]
// 00854874  3bc2                 cmp eax, edx
// 00854876  57                   push edi
// 00854877  7d1a                 jge 0x854893
// 00854879  8bca                 mov ecx, edx
// 0085487b  2bc8                 sub ecx, eax
// 0085487d  03c1                 add eax, ecx
// 0085487f  90                   nop 
// 00854880  8b7e08               mov edi, dword ptr [esi + 8]
// 00854883  c7470800000000       mov dword ptr [edi + 8], 0
// 0085488a  83460810             add dword ptr [esi + 8], 0x10
// 0085488e  83e901               sub ecx, 1
// 00854891  75ed                 jne 0x854880
// 00854893  8b7e08               mov edi, dword ptr [esi + 8]
// 00854896  c1e004               shl eax, 4
// 00854899  8bcf                 mov ecx, edi
// 0085489b  2bc8                 sub ecx, eax
// 0085489d  8bc7                 mov eax, edi
// 0085489f  85d2                 test edx, edx
// 008548a1  7e35                 jle 0x8548d8
// 008548a3  53                   push ebx
// 008548a4  83c108               add ecx, 8
// 008548a7  8bda                 mov ebx, edx
// 008548a9  8da42400000000       lea esp, [esp]
// 008548b0  8b5608               mov edx, dword ptr [esi + 8]
// 008548b3  8d7a10               lea edi, [edx + 0x10]
// 008548b6  897e08               mov dword ptr [esi + 8], edi
// 008548b9  8b79f8               mov edi, dword ptr [ecx - 8]
// 008548bc  893a                 mov dword ptr [edx], edi
// 008548be  8b79fc               mov edi, dword ptr [ecx - 4]
// 008548c1  897a04               mov dword ptr [edx + 4], edi
// 008548c4  8b39                 mov edi, dword ptr [ecx]
// 008548c6  897a08               mov dword ptr [edx + 8], edi
// 008548c9  c70100000000         mov dword ptr [ecx], 0
// 008548cf  83c110               add ecx, 0x10
// 008548d2  83eb01               sub ebx, 1
// 008548d5  75d9                 jne 0x8548b0
// 008548d7  5b                   pop ebx
// 008548d8  5f                   pop edi
// 008548d9  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?adjust_varargs@@YAPAUlua_TValue@@PAUlua_State@@PAUProto@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
