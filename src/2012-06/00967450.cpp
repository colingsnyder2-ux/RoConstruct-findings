// roc 2012-06 00967450  unit: RBX::CellContact  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967450
//
// 00967450  8b542408             mov edx, dword ptr [esp + 8]
// 00967454  8b02                 mov eax, dword ptr [edx]
// 00967456  83f80d               cmp eax, 0xd
// 00967459  7523                 jne 0x96747e
// 0096745b  8b4208               mov eax, dword ptr [edx + 8]
// 0096745e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00967462  8b11                 mov edx, dword ptr [ecx]
// 00967464  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00967467  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0096746b  42                   inc edx
// 0096746c  c1e20e               shl edx, 0xe
// 0096746f  331481               xor edx, dword ptr [ecx + eax*4]
// 00967472  8d0481               lea eax, [ecx + eax*4]
// 00967475  81e200c07f00         and edx, 0x7fc000
// 0096747b  3110                 xor dword ptr [eax], edx
// 0096747d  c3                   ret 
// 0096747e  83f80e               cmp eax, 0xe
// 00967481  754d                 jne 0x9674d0
// 00967483  8b4a08               mov ecx, dword ptr [edx + 8]
// 00967486  8b442404             mov eax, dword ptr [esp + 4]
// 0096748a  56                   push esi
// 0096748b  8b30                 mov esi, dword ptr [eax]
// 0096748d  8b760c               mov esi, dword ptr [esi + 0xc]
// 00967490  8d0c8e               lea ecx, [esi + ecx*4]
// 00967493  8b742410             mov esi, dword ptr [esp + 0x10]
// 00967497  57                   push edi
// 00967498  8b39                 mov edi, dword ptr [ecx]
// 0096749a  46                   inc esi
// 0096749b  c1e617               shl esi, 0x17
// 0096749e  81e7ffff7f00         and edi, 0x7fffff
// 009674a4  33f7                 xor esi, edi
// 009674a6  8931                 mov dword ptr [ecx], esi
// 009674a8  8b5208               mov edx, dword ptr [edx + 8]
// 009674ab  8b08                 mov ecx, dword ptr [eax]
// 009674ad  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 009674b0  8d0c91               lea ecx, [ecx + edx*4]
// 009674b3  8b5024               mov edx, dword ptr [eax + 0x24]
// 009674b6  c1e206               shl edx, 6
// 009674b9  3311                 xor edx, dword ptr [ecx]
// 009674bb  6a01                 push 1
// 009674bd  81e2c03f0000         and edx, 0x3fc0
// 009674c3  3111                 xor dword ptr [ecx], edx
// 009674c5  50                   push eax
// 009674c6  e8b5fdffff           call 0x967280
// 009674cb  83c408               add esp, 8
// 009674ce  5f                   pop edi
// 009674cf  5e                   pop esi
// 009674d0  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setreturns)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
