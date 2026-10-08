// from server: 100% by auto
// roc 2008-06 0066aa80  unit: RBX::GroupDragTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066aa80
//
// 0066aa80  8b13                 mov edx, dword ptr [ebx]
// 0066aa82  8b520c               mov edx, dword ptr [edx + 0xc]
// 0066aa85  2bc1                 sub eax, ecx
// 0066aa87  48                   dec eax
// 0066aa88  56                   push esi
// 0066aa89  8bf0                 mov esi, eax
// 0066aa8b  57                   push edi
// 0066aa8c  8d3c8a               lea edi, [edx + ecx*4]
// 0066aa8f  99                   cdq 
// 0066aa90  33c2                 xor eax, edx
// 0066aa92  2bc2                 sub eax, edx
// 0066aa94  3dffff0100           cmp eax, 0x1ffff
// 0066aa99  7e11                 jle 0x66aaac
// 0066aa9b  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0066aa9e  686cd08400           push 0x84d06c
// 0066aaa3  50                   push eax
// 0066aaa4  e86797ffff           call 0x664210
// 0066aaa9  83c408               add esp, 8
// 0066aaac  8b0f                 mov ecx, dword ptr [edi]
// 0066aaae  81c6ffff0100         add esi, 0x1ffff
// 0066aab4  c1e60e               shl esi, 0xe
// 0066aab7  81e1ff3f0000         and ecx, 0x3fff
// 0066aabd  33f1                 xor esi, ecx
// 0066aabf  8937                 mov dword ptr [edi], esi
// 0066aac1  5f                   pop edi
// 0066aac2  5e                   pop esi
// 0066aac3  c3                   ret 
// library lua-5.1.4/lcode.c (function _fixjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
