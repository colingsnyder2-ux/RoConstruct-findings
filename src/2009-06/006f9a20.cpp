// from server: 100% by auto
// roc 2009-06 006f9a20  unit: RBX::GroupDragTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9a20
//
// 006f9a20  8b13                 mov edx, dword ptr [ebx]
// 006f9a22  8b520c               mov edx, dword ptr [edx + 0xc]
// 006f9a25  2bc1                 sub eax, ecx
// 006f9a27  48                   dec eax
// 006f9a28  56                   push esi
// 006f9a29  8bf0                 mov esi, eax
// 006f9a2b  57                   push edi
// 006f9a2c  8d3c8a               lea edi, [edx + ecx*4]
// 006f9a2f  99                   cdq 
// 006f9a30  33c2                 xor eax, edx
// 006f9a32  2bc2                 sub eax, edx
// 006f9a34  3dffff0100           cmp eax, 0x1ffff
// 006f9a39  7e11                 jle 0x6f9a4c
// 006f9a3b  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006f9a3e  6820ea8e00           push 0x8eea20
// 006f9a43  50                   push eax
// 006f9a44  e8a778ffff           call 0x6f12f0
// 006f9a49  83c408               add esp, 8
// 006f9a4c  8b0f                 mov ecx, dword ptr [edi]
// 006f9a4e  81c6ffff0100         add esi, 0x1ffff
// 006f9a54  c1e60e               shl esi, 0xe
// 006f9a57  81e1ff3f0000         and ecx, 0x3fff
// 006f9a5d  33f1                 xor esi, ecx
// 006f9a5f  8937                 mov dword ptr [edi], esi
// 006f9a61  5f                   pop edi
// 006f9a62  5e                   pop esi
// 006f9a63  c3                   ret 
// library lua-5.1.4/lcode.c (function _fixjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
