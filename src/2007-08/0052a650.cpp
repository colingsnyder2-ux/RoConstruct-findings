// roc 2007-08 0052a650  unit: seg_00520000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a650
//
// 0052a650  53                   push ebx
// 0052a651  55                   push ebp
// 0052a652  56                   push esi
// 0052a653  57                   push edi
// 0052a654  6800040000           push 0x400
// 0052a659  8bf1                 mov esi, ecx
// 0052a65b  8b4804               mov ecx, dword ptr [eax + 4]
// 0052a65e  8b11                 mov edx, dword ptr [ecx]
// 0052a660  6a01                 push 1
// 0052a662  50                   push eax
// 0052a663  ffd2                 call edx
// 0052a665  c1e609               shl esi, 9
// 0052a668  83c40c               add esp, 0xc
// 0052a66b  81ee00020000         sub esi, 0x200
// 0052a671  8be8                 mov ebp, eax
// 0052a673  8bde                 mov ebx, esi
// 0052a675  bf68467a00           mov edi, 0x7a4668
// 0052a67a  8bf5                 mov esi, ebp
// 0052a67c  8d642400             lea esp, [esp]
// 0052a680  33c9                 xor ecx, ecx
// 0052a682  eb0c                 jmp 0x52a690
// 0052a684  8da42400000000       lea esp, [esp]
// 0052a68b  eb03                 jmp 0x52a690
// 0052a68d  8d4900               lea ecx, [ecx]
// 0052a690  0fb6140f             movzx edx, byte ptr [edi + ecx]
// 0052a694  69d2fe010000         imul edx, edx, 0x1fe
// 0052a69a  b801fe0000           mov eax, 0xfe01
// 0052a69f  2bc2                 sub eax, edx
// 0052a6a1  99                   cdq 
// 0052a6a2  f7fb                 idiv ebx
// 0052a6a4  83c101               add ecx, 1
// 0052a6a7  83c604               add esi, 4
// 0052a6aa  83f910               cmp ecx, 0x10
// 0052a6ad  8946fc               mov dword ptr [esi - 4], eax
// 0052a6b0  7cde                 jl 0x52a690
// 0052a6b2  83c710               add edi, 0x10
// 0052a6b5  81ff68477a00         cmp edi, 0x7a4768
// 0052a6bb  7cc3                 jl 0x52a680
// 0052a6bd  5f                   pop edi
// 0052a6be  5e                   pop esi
// 0052a6bf  8bc5                 mov eax, ebp
// 0052a6c1  5d                   pop ebp
// 0052a6c2  5b                   pop ebx
// 0052a6c3  c3                   ret 
// library jpeg-6b/jquant1.c (function _make_odither_array)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
