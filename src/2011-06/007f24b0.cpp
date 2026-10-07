// roc 2011-06 007f24b0  unit: RBX::AdvLuaDragTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f24b0
//
// 007f24b0  8b542408             mov edx, dword ptr [esp + 8]
// 007f24b4  8b02                 mov eax, dword ptr [edx]
// 007f24b6  83f80d               cmp eax, 0xd
// 007f24b9  7523                 jne 0x7f24de
// 007f24bb  8b4208               mov eax, dword ptr [edx + 8]
// 007f24be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f24c2  8b11                 mov edx, dword ptr [ecx]
// 007f24c4  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 007f24c7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f24cb  42                   inc edx
// 007f24cc  c1e20e               shl edx, 0xe
// 007f24cf  331481               xor edx, dword ptr [ecx + eax*4]
// 007f24d2  8d0481               lea eax, [ecx + eax*4]
// 007f24d5  81e200c07f00         and edx, 0x7fc000
// 007f24db  3110                 xor dword ptr [eax], edx
// 007f24dd  c3                   ret 
// 007f24de  83f80e               cmp eax, 0xe
// 007f24e1  754d                 jne 0x7f2530
// 007f24e3  8b4a08               mov ecx, dword ptr [edx + 8]
// 007f24e6  8b442404             mov eax, dword ptr [esp + 4]
// 007f24ea  56                   push esi
// 007f24eb  8b30                 mov esi, dword ptr [eax]
// 007f24ed  8b760c               mov esi, dword ptr [esi + 0xc]
// 007f24f0  8d0c8e               lea ecx, [esi + ecx*4]
// 007f24f3  8b742410             mov esi, dword ptr [esp + 0x10]
// 007f24f7  57                   push edi
// 007f24f8  8b39                 mov edi, dword ptr [ecx]
// 007f24fa  46                   inc esi
// 007f24fb  c1e617               shl esi, 0x17
// 007f24fe  81e7ffff7f00         and edi, 0x7fffff
// 007f2504  33f7                 xor esi, edi
// 007f2506  8931                 mov dword ptr [ecx], esi
// 007f2508  8b5208               mov edx, dword ptr [edx + 8]
// 007f250b  8b08                 mov ecx, dword ptr [eax]
// 007f250d  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007f2510  8d0c91               lea ecx, [ecx + edx*4]
// 007f2513  8b5024               mov edx, dword ptr [eax + 0x24]
// 007f2516  c1e206               shl edx, 6
// 007f2519  3311                 xor edx, dword ptr [ecx]
// 007f251b  6a01                 push 1
// 007f251d  81e2c03f0000         and edx, 0x3fc0
// 007f2523  3111                 xor dword ptr [ecx], edx
// 007f2525  50                   push eax
// 007f2526  e8b5fdffff           call 0x7f22e0
// 007f252b  83c408               add esp, 8
// 007f252e  5f                   pop edi
// 007f252f  5e                   pop esi
// 007f2530  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setreturns)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
