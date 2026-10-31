// roc 2009-12 00797440  unit: lua_exception  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00797440
//
// 00797440  0fb65149             movzx edx, byte ptr [ecx + 0x49]
// 00797444  3bc2                 cmp eax, edx
// 00797446  57                   push edi
// 00797447  7d1a                 jge 0x797463
// 00797449  8bca                 mov ecx, edx
// 0079744b  2bc8                 sub ecx, eax
// 0079744d  03c1                 add eax, ecx
// 0079744f  90                   nop 
// 00797450  8b7e08               mov edi, dword ptr [esi + 8]
// 00797453  c7470800000000       mov dword ptr [edi + 8], 0
// 0079745a  83460810             add dword ptr [esi + 8], 0x10
// 0079745e  83e901               sub ecx, 1
// 00797461  75ed                 jne 0x797450
// 00797463  8b7e08               mov edi, dword ptr [esi + 8]
// 00797466  c1e004               shl eax, 4
// 00797469  8bcf                 mov ecx, edi
// 0079746b  2bc8                 sub ecx, eax
// 0079746d  8bc7                 mov eax, edi
// 0079746f  85d2                 test edx, edx
// 00797471  7e35                 jle 0x7974a8
// 00797473  53                   push ebx
// 00797474  83c108               add ecx, 8
// 00797477  8bda                 mov ebx, edx
// 00797479  8da42400000000       lea esp, [esp]
// 00797480  8b5608               mov edx, dword ptr [esi + 8]
// 00797483  8d7a10               lea edi, [edx + 0x10]
// 00797486  897e08               mov dword ptr [esi + 8], edi
// 00797489  8b79f8               mov edi, dword ptr [ecx - 8]
// 0079748c  893a                 mov dword ptr [edx], edi
// 0079748e  8b79fc               mov edi, dword ptr [ecx - 4]
// 00797491  897a04               mov dword ptr [edx + 4], edi
// 00797494  8b39                 mov edi, dword ptr [ecx]
// 00797496  897a08               mov dword ptr [edx + 8], edi
// 00797499  c70100000000         mov dword ptr [ecx], 0
// 0079749f  83c110               add ecx, 0x10
// 007974a2  83eb01               sub ebx, 1
// 007974a5  75d9                 jne 0x797480
// 007974a7  5b                   pop ebx
// 007974a8  5f                   pop edi
// 007974a9  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?adjust_varargs@@YAPAUlua_TValue@@PAUlua_State@@PAUProto@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
