// roc 2010-06 0078f3a0  unit: RBX::GroupDragTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f3a0
//
// 0078f3a0  8b13                 mov edx, dword ptr [ebx]
// 0078f3a2  8b520c               mov edx, dword ptr [edx + 0xc]
// 0078f3a5  2bc1                 sub eax, ecx
// 0078f3a7  48                   dec eax
// 0078f3a8  56                   push esi
// 0078f3a9  8bf0                 mov esi, eax
// 0078f3ab  57                   push edi
// 0078f3ac  8d3c8a               lea edi, [edx + ecx*4]
// 0078f3af  99                   cdq 
// 0078f3b0  33c2                 xor eax, edx
// 0078f3b2  2bc2                 sub eax, edx
// 0078f3b4  3dffff0100           cmp eax, 0x1ffff
// 0078f3b9  7e11                 jle 0x78f3cc
// 0078f3bb  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0078f3be  68f83da500           push 0xa53df8
// 0078f3c3  50                   push eax
// 0078f3c4  e8c731ffff           call 0x782590
// 0078f3c9  83c408               add esp, 8
// 0078f3cc  8b0f                 mov ecx, dword ptr [edi]
// 0078f3ce  81c6ffff0100         add esi, 0x1ffff
// 0078f3d4  c1e60e               shl esi, 0xe
// 0078f3d7  81e1ff3f0000         and ecx, 0x3fff
// 0078f3dd  33f1                 xor esi, ecx
// 0078f3df  8937                 mov dword ptr [edi], esi
// 0078f3e1  5f                   pop edi
// 0078f3e2  5e                   pop esi
// 0078f3e3  c3                   ret 
// library lua-5.1.4/lcode.c (function _fixjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
