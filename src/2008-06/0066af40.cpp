// roc 2008-06 0066af40  unit: RBX::GroupDragTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066af40
//
// 0066af40  8b542408             mov edx, dword ptr [esp + 8]
// 0066af44  8b02                 mov eax, dword ptr [edx]
// 0066af46  83f80d               cmp eax, 0xd
// 0066af49  7523                 jne 0x66af6e
// 0066af4b  8b4208               mov eax, dword ptr [edx + 8]
// 0066af4e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066af52  8b11                 mov edx, dword ptr [ecx]
// 0066af54  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0066af57  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066af5b  42                   inc edx
// 0066af5c  c1e20e               shl edx, 0xe
// 0066af5f  331481               xor edx, dword ptr [ecx + eax*4]
// 0066af62  8d0481               lea eax, [ecx + eax*4]
// 0066af65  81e200c07f00         and edx, 0x7fc000
// 0066af6b  3110                 xor dword ptr [eax], edx
// 0066af6d  c3                   ret 
// 0066af6e  83f80e               cmp eax, 0xe
// 0066af71  754d                 jne 0x66afc0
// 0066af73  8b4a08               mov ecx, dword ptr [edx + 8]
// 0066af76  8b442404             mov eax, dword ptr [esp + 4]
// 0066af7a  56                   push esi
// 0066af7b  8b30                 mov esi, dword ptr [eax]
// 0066af7d  8b760c               mov esi, dword ptr [esi + 0xc]
// 0066af80  8d0c8e               lea ecx, [esi + ecx*4]
// 0066af83  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066af87  57                   push edi
// 0066af88  8b39                 mov edi, dword ptr [ecx]
// 0066af8a  46                   inc esi
// 0066af8b  c1e617               shl esi, 0x17
// 0066af8e  81e7ffff7f00         and edi, 0x7fffff
// 0066af94  33f7                 xor esi, edi
// 0066af96  8931                 mov dword ptr [ecx], esi
// 0066af98  8b5208               mov edx, dword ptr [edx + 8]
// 0066af9b  8b08                 mov ecx, dword ptr [eax]
// 0066af9d  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0066afa0  8d0c91               lea ecx, [ecx + edx*4]
// 0066afa3  8b5024               mov edx, dword ptr [eax + 0x24]
// 0066afa6  c1e206               shl edx, 6
// 0066afa9  3311                 xor edx, dword ptr [ecx]
// 0066afab  6a01                 push 1
// 0066afad  81e2c03f0000         and edx, 0x3fc0
// 0066afb3  3111                 xor dword ptr [ecx], edx
// 0066afb5  50                   push eax
// 0066afb6  e8e5fdffff           call 0x66ada0
// 0066afbb  83c408               add esp, 8
// 0066afbe  5f                   pop edi
// 0066afbf  5e                   pop esi
// 0066afc0  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setreturns)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
