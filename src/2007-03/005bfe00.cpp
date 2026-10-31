// roc 2007-03 005bfe00  unit: seg_005b0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bfe00
//
// 005bfe00  0fb65149             movzx edx, byte ptr [ecx + 0x49]
// 005bfe04  3bc2                 cmp eax, edx
// 005bfe06  57                   push edi
// 005bfe07  7d1a                 jge 0x5bfe23
// 005bfe09  8bca                 mov ecx, edx
// 005bfe0b  2bc8                 sub ecx, eax
// 005bfe0d  03c1                 add eax, ecx
// 005bfe0f  90                   nop 
// 005bfe10  8b7e08               mov edi, dword ptr [esi + 8]
// 005bfe13  c7470800000000       mov dword ptr [edi + 8], 0
// 005bfe1a  83460810             add dword ptr [esi + 8], 0x10
// 005bfe1e  83e901               sub ecx, 1
// 005bfe21  75ed                 jne 0x5bfe10
// 005bfe23  8b7e08               mov edi, dword ptr [esi + 8]
// 005bfe26  c1e004               shl eax, 4
// 005bfe29  8bcf                 mov ecx, edi
// 005bfe2b  2bc8                 sub ecx, eax
// 005bfe2d  85d2                 test edx, edx
// 005bfe2f  8bc7                 mov eax, edi
// 005bfe31  7e35                 jle 0x5bfe68
// 005bfe33  53                   push ebx
// 005bfe34  83c108               add ecx, 8
// 005bfe37  8bda                 mov ebx, edx
// 005bfe39  8da42400000000       lea esp, [esp]
// 005bfe40  8b5608               mov edx, dword ptr [esi + 8]
// 005bfe43  8d7a10               lea edi, [edx + 0x10]
// 005bfe46  897e08               mov dword ptr [esi + 8], edi
// 005bfe49  8b79f8               mov edi, dword ptr [ecx - 8]
// 005bfe4c  893a                 mov dword ptr [edx], edi
// 005bfe4e  8b79fc               mov edi, dword ptr [ecx - 4]
// 005bfe51  897a04               mov dword ptr [edx + 4], edi
// 005bfe54  8b39                 mov edi, dword ptr [ecx]
// 005bfe56  897a08               mov dword ptr [edx + 8], edi
// 005bfe59  c70100000000         mov dword ptr [ecx], 0
// 005bfe5f  83c110               add ecx, 0x10
// 005bfe62  83eb01               sub ebx, 1
// 005bfe65  75d9                 jne 0x5bfe40
// 005bfe67  5b                   pop ebx
// 005bfe68  5f                   pop edi
// 005bfe69  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?adjust_varargs@@YAPAUlua_TValue@@PAUlua_State@@PAUProto@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
