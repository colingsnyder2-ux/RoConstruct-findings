// roc 2010-06 0078f860  unit: RBX::GroupDragTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f860
//
// 0078f860  8b542408             mov edx, dword ptr [esp + 8]
// 0078f864  8b02                 mov eax, dword ptr [edx]
// 0078f866  83f80d               cmp eax, 0xd
// 0078f869  7523                 jne 0x78f88e
// 0078f86b  8b4208               mov eax, dword ptr [edx + 8]
// 0078f86e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078f872  8b11                 mov edx, dword ptr [ecx]
// 0078f874  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0078f877  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078f87b  42                   inc edx
// 0078f87c  c1e20e               shl edx, 0xe
// 0078f87f  331481               xor edx, dword ptr [ecx + eax*4]
// 0078f882  8d0481               lea eax, [ecx + eax*4]
// 0078f885  81e200c07f00         and edx, 0x7fc000
// 0078f88b  3110                 xor dword ptr [eax], edx
// 0078f88d  c3                   ret 
// 0078f88e  83f80e               cmp eax, 0xe
// 0078f891  754d                 jne 0x78f8e0
// 0078f893  8b4a08               mov ecx, dword ptr [edx + 8]
// 0078f896  8b442404             mov eax, dword ptr [esp + 4]
// 0078f89a  56                   push esi
// 0078f89b  8b30                 mov esi, dword ptr [eax]
// 0078f89d  8b760c               mov esi, dword ptr [esi + 0xc]
// 0078f8a0  8d0c8e               lea ecx, [esi + ecx*4]
// 0078f8a3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0078f8a7  57                   push edi
// 0078f8a8  8b39                 mov edi, dword ptr [ecx]
// 0078f8aa  46                   inc esi
// 0078f8ab  c1e617               shl esi, 0x17
// 0078f8ae  81e7ffff7f00         and edi, 0x7fffff
// 0078f8b4  33f7                 xor esi, edi
// 0078f8b6  8931                 mov dword ptr [ecx], esi
// 0078f8b8  8b5208               mov edx, dword ptr [edx + 8]
// 0078f8bb  8b08                 mov ecx, dword ptr [eax]
// 0078f8bd  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0078f8c0  8d0c91               lea ecx, [ecx + edx*4]
// 0078f8c3  8b5024               mov edx, dword ptr [eax + 0x24]
// 0078f8c6  c1e206               shl edx, 6
// 0078f8c9  3311                 xor edx, dword ptr [ecx]
// 0078f8cb  6a01                 push 1
// 0078f8cd  81e2c03f0000         and edx, 0x3fc0
// 0078f8d3  3111                 xor dword ptr [ecx], edx
// 0078f8d5  50                   push eax
// 0078f8d6  e8e5fdffff           call 0x78f6c0
// 0078f8db  83c408               add esp, 8
// 0078f8de  5f                   pop edi
// 0078f8df  5e                   pop esi
// 0078f8e0  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setreturns)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
