// from server: 100% by auto
// roc 2009-06 006f9ee0  unit: RBX::GroupDragTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9ee0
//
// 006f9ee0  8b542408             mov edx, dword ptr [esp + 8]
// 006f9ee4  8b02                 mov eax, dword ptr [edx]
// 006f9ee6  83f80d               cmp eax, 0xd
// 006f9ee9  7523                 jne 0x6f9f0e
// 006f9eeb  8b4208               mov eax, dword ptr [edx + 8]
// 006f9eee  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f9ef2  8b11                 mov edx, dword ptr [ecx]
// 006f9ef4  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 006f9ef7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006f9efb  42                   inc edx
// 006f9efc  c1e20e               shl edx, 0xe
// 006f9eff  331481               xor edx, dword ptr [ecx + eax*4]
// 006f9f02  8d0481               lea eax, [ecx + eax*4]
// 006f9f05  81e200c07f00         and edx, 0x7fc000
// 006f9f0b  3110                 xor dword ptr [eax], edx
// 006f9f0d  c3                   ret 
// 006f9f0e  83f80e               cmp eax, 0xe
// 006f9f11  754d                 jne 0x6f9f60
// 006f9f13  8b4a08               mov ecx, dword ptr [edx + 8]
// 006f9f16  8b442404             mov eax, dword ptr [esp + 4]
// 006f9f1a  56                   push esi
// 006f9f1b  8b30                 mov esi, dword ptr [eax]
// 006f9f1d  8b760c               mov esi, dword ptr [esi + 0xc]
// 006f9f20  8d0c8e               lea ecx, [esi + ecx*4]
// 006f9f23  8b742410             mov esi, dword ptr [esp + 0x10]
// 006f9f27  57                   push edi
// 006f9f28  8b39                 mov edi, dword ptr [ecx]
// 006f9f2a  46                   inc esi
// 006f9f2b  c1e617               shl esi, 0x17
// 006f9f2e  81e7ffff7f00         and edi, 0x7fffff
// 006f9f34  33f7                 xor esi, edi
// 006f9f36  8931                 mov dword ptr [ecx], esi
// 006f9f38  8b5208               mov edx, dword ptr [edx + 8]
// 006f9f3b  8b08                 mov ecx, dword ptr [eax]
// 006f9f3d  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006f9f40  8d0c91               lea ecx, [ecx + edx*4]
// 006f9f43  8b5024               mov edx, dword ptr [eax + 0x24]
// 006f9f46  c1e206               shl edx, 6
// 006f9f49  3311                 xor edx, dword ptr [ecx]
// 006f9f4b  6a01                 push 1
// 006f9f4d  81e2c03f0000         and edx, 0x3fc0
// 006f9f53  3111                 xor dword ptr [ecx], edx
// 006f9f55  50                   push eax
// 006f9f56  e8e5fdffff           call 0x6f9d40
// 006f9f5b  83c408               add esp, 8
// 006f9f5e  5f                   pop edi
// 006f9f5f  5e                   pop esi
// 006f9f60  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setreturns)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
